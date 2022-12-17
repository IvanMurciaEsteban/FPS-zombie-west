// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Math/RandomStream.h"

#include "Editor/AnimGraph/Classes/AnimGraphNode_Base.h"
#include "src/AnimNode_WRandomPlayer.h"
#include "AnimNode_WRandomPlayerEditor.generated.h"


UCLASS(MinimalAPI)
class UAnimGraphNode_WRandomPlayer : public UAnimGraphNode_Base
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, Category = Settings)
	FAnimNode_WRandomPlayer Node;

	// UEdGraphNode interface
	virtual FLinearColor GetNodeTitleColor() const override;
	virtual FText GetTooltipText() const override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual FText GetMenuCategory() const override;
	// End of UEdGraphNode interface
};
