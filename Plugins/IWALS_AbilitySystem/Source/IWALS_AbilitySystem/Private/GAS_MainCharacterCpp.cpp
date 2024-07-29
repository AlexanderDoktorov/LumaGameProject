


#include "GAS_MainCharacterCpp.h"
#include "GameplayTagsManager.h"

AGAS_MainCharacterCpp::AGAS_MainCharacterCpp(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>("AbilitySystemComp");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);

	Attributes = CreateDefaultSubobject<UIWALS_BaseAttributeSet>("Attributes");
}

// Called when the game starts or when spawned
void AGAS_MainCharacterCpp::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGAS_MainCharacterCpp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

FGameplayTag AGAS_MainCharacterCpp::ConvertLiteralNameToTag(FName TagName)
{
	return FGameplayTag::RequestGameplayTag(TagName);
}

FString AGAS_MainCharacterCpp::GetSubTag(const FGameplayTag& Tag, int32 DesiredDepth)
{
	FString FullTagName = Tag.ToString();
	TArray<FString> SplitTags;
	FullTagName.ParseIntoArray(SplitTags, TEXT("."));

	// Jeњli DesiredDepth przekracza iloњж segmentуw lub jest ujemny, zwrуж pusty string.
	if (DesiredDepth < 0 || DesiredDepth >= SplitTags.Num())
	{
		return FString();
	}

	// Znajdџ odpowiedni№ gікbokoњж od koсca.
	int32 IndexFromEnd = SplitTags.Num() - DesiredDepth - 1;
	if (IndexFromEnd >= 0 && IndexFromEnd < SplitTags.Num())
	{
		return SplitTags[IndexFromEnd];
	}

	return FString();
}

bool AGAS_MainCharacterCpp::IsTagLeaf(const FGameplayTag& Tag)
{
	UGameplayTagsManager& TagsManager = UGameplayTagsManager::Get();
	TSharedPtr<FGameplayTagNode> NodePtr = TagsManager.FindTagNode(Tag);
	const FGameplayTagNode* Node = NodePtr.Get();

	if (Node)
	{
		return Node->GetChildTagNodes().Num() == 0;
	}

	return false;
}

bool AGAS_MainCharacterCpp::SwitchOnOwnedTags(const FGameplayTag& NewState)
{
	if (IsValid(AbilitySystemComponent) == false) return false;

	FGameplayTagContainer OwnedTags;
	AbilitySystemComponent->GetOwnedGameplayTags(OwnedTags);

	const bool LastInGroup = IsTagLeaf(NewState);

	TArray<FGameplayTag> TagArray;
	OwnedTags.GetGameplayTagArray(TagArray);

	TArray<FGameplayTag> TagsToRemove = {};

	for (FGameplayTag& Tag : TagArray)
	{
		int SelectDepth = 0;
		if (LastInGroup == true) SelectDepth = 1;
		const FString a = GetSubTag(Tag, 1);
		const FString b = GetSubTag(NewState, SelectDepth);
		if (a == b)
		{
			TagsToRemove.Add(Tag);
		}
	}
	//Convert To TagContainer
	FGameplayTagContainer TagsContainerToRemove;
	for (const FGameplayTag& Tag : TagsToRemove)
	{
		TagsContainerToRemove.AddTag(Tag);
	}
	//Remove Tags
	AbilitySystemComponent->RemoveLooseGameplayTags(TagsContainerToRemove);
	if (LastInGroup == true)
	{
		AbilitySystemComponent->AddLooseGameplayTag(NewState);
	}
	return true;
}

bool AGAS_MainCharacterCpp::SwitchOnOwnedTagsWithIgnore(const FGameplayTag& NewState, const FGameplayTagContainer& DoNotEdit)
{
	if (IsValid(AbilitySystemComponent) == false) return false;

	FGameplayTagContainer OwnedTags;
	AbilitySystemComponent->GetOwnedGameplayTags(OwnedTags);

	const bool LastInGroup = IsTagLeaf(NewState);

	TArray<FGameplayTag> TagArray;
	OwnedTags.GetGameplayTagArray(TagArray);

	TArray<FGameplayTag> TagsToRemove = {};

	for (FGameplayTag& Tag : TagArray)
	{
		int SelectDepth = 0;
		if (LastInGroup == true) SelectDepth = 1;
		const FString a = GetSubTag(Tag, 1);
		const FString b = GetSubTag(NewState, SelectDepth);
		//Find Match
		FGameplayTagContainer TagAsContainer;
		TagAsContainer.AddTag(Tag);

		if (a == b && TagAsContainer.HasAllExact(DoNotEdit) == false)
		{
			TagsToRemove.Add(Tag);
		}
	}
	//Convert To TagContainer
	FGameplayTagContainer TagsContainerToRemove;
	for (const FGameplayTag& Tag : TagsToRemove)
	{
		TagsContainerToRemove.AddTag(Tag);
	}
	//Remove Tags
	AbilitySystemComponent->RemoveLooseGameplayTags(TagsContainerToRemove);
	if (LastInGroup == true)
	{
		AbilitySystemComponent->AddLooseGameplayTag(NewState);
	}
	return true;
}

// Called to bind functionality to input
void AGAS_MainCharacterCpp::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AGAS_MainCharacterCpp::GiveDefaultAbilities() const
{
	// Add abilities from DefaultAbilitiesArray from character
	Super::GiveDefaultAbilities();
	
	if (AbilitiesData)
		AbilitiesData->GiveAbilities(AbilitySystemComponent, this);
}

void AGAS_MainCharacterCpp::TryCreateInputsGAS()
{
	if (AbilitySystemComponent && InputComponent)
	{
		FTopLevelAssetPath PathToEnum = FTopLevelAssetPath(GetPathNameSafe(UClass::TryFindTypeSlow<UEnum>("EIWALS_AbilityInputBinds")));
		const FGameplayAbilityInputBinds Binds("JumpAction", "AimActionType_2", PathToEnum, static_cast<int32>(EIWALS_AbilityInputBinds::JumpAction), static_cast<int32>(EIWALS_AbilityInputBinds::AimActionType_2));
		AbilitySystemComponent->BindAbilityActivationToInputComponent(InputComponent, Binds);
	}
}

