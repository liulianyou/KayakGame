#include "EvaluatorDefinition.h"

DEFINE_LOG_CATEGORY(LogEvaluator);

FEvaluatorGlobalDelegate::FEvaluatorNativeEvent				FEvaluatorGlobalDelegate::EvaluatorNativeEvent;

FEvaluatorNeededDelegate::FreExistCurrentMapNativeEvent		FEvaluatorNeededDelegate::ExitCurrentMapNativeEvent;
FEvaluatorNeededDelegate::FDisconnectNativeEvent			FEvaluatorNeededDelegate::DisconnectNativeEvent;
FEvaluatorNeededDelegate::FGameFailedEvent					FEvaluatorNeededDelegate::GameFailedEvent;