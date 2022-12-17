// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
#include "DPGPluginPrivatePCH.h"
#include "Animation/AnimInstanceProxy.h"
#include "AnimNode_WRandomPlayerEditor.h"
#ifdef WITH_EDITOR
#include "EditorCategoryUtils.h"
#endif


#define LOCTEXT_NAMESPACE "AnimGraphNode_RandomPlayerNoLoop"

FLinearColor UAnimGraphNode_WRandomPlayer::GetNodeTitleColor() const
{
	return FLinearColor(0.10f, 0.60f, 0.12f);
}

FText UAnimGraphNode_WRandomPlayer::GetTooltipText() const
{
	return LOCTEXT("NodeToolTip", "Plays sequences picked from a provided list in random orders without looping");
}

FText UAnimGraphNode_WRandomPlayer::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return LOCTEXT("NodeTitle", "Random Sequence Player no Loop");
}

FText UAnimGraphNode_WRandomPlayer::GetMenuCategory() const
{
	return FEditorCategoryUtils::GetCommonCategory(FCommonEditorCategory::Animation);
}

#undef LOCTEXT_NAMESPACE
