/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <AirPortAssistant/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface StepByStepUtilities : XXUnknownSuperclass {
}
+ (id)productIDForNetworkOrDevice:(id)networkOrDevice;	// 0x79b0d
+ (id)nameForNetworkOrDevice:(id)networkOrDevice;	// 0x79ab9
+ (void)formatRecommendation:(id)recommendation fromParamDict:(id)paramDict forStep:(int)step restoreString:(id *)string restoreSpecificString:(id *)string5 dontRecommendString:(id *)string6;	// 0x79531
+ (int)autoGuessRecommendationToMatrixTag:(id)matrixTag;	// 0x793c5
+ (int)matrixTagToSelectorChoice:(int)selectorChoice;	// 0x79395
+ (int)selectorChoiceToMatrixTag:(int)matrixTag;	// 0x79361
+ (id)selectorChoiceToReplaceOption:(int)replaceOption;	// 0x79331
+ (id)findSourceConfigByName:(id)name fromParamDict:(id)paramDict;	// 0x79255
+ (id)findSourceNetworkByName:(id)name fromParamDict:(id)paramDict;	// 0x79179
+ (id)findSourceBaseByName:(id)name fromParamDict:(id)paramDict;	// 0x7909d
+ (id)getProductLocalizedStringWithFormat:(id)format fromParamDict:(id)paramDict;	// 0x78fed
@end