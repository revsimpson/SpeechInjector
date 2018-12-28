#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "MaterialButtons.h"
#import "MDCButton.h"
#import "MDCFlatButton.h"
#import "MDCFloatingButton+Animation.h"
#import "MDCFloatingButton.h"
#import "MDCRaisedButton.h"
#import "MaterialInk.h"
#import "MDCInkGestureRecognizer.h"
#import "MDCInkTouchController.h"
#import "MDCInkView.h"
#import "MaterialShadowElevations.h"
#import "MDCShadowElevations.h"
#import "MaterialShadowLayer.h"
#import "MDCShadowLayer.h"
#import "MaterialTypography.h"
#import "MDCFontTextStyle.h"
#import "MDCTypography.h"
#import "UIFont+MaterialSimpleEquality.h"
#import "UIFont+MaterialTypography.h"
#import "UIFontDescriptor+MaterialTypography.h"
#import "MaterialApplication.h"
#import "UIApplication+AppExtensions.h"
#import "MaterialMath.h"
#import "MDCMath.h"
#import "MaterialShapes.h"
#import "MDCCornerTreatment.h"
#import "MDCEdgeTreatment.h"
#import "MDCPathGenerator.h"
#import "MDCRectangleShapeGenerator.h"
#import "MDCShapedShadowLayer.h"
#import "MDCShapedView.h"
#import "MDCShapeGenerating.h"

FOUNDATION_EXPORT double MaterialComponentsVersionNumber;
FOUNDATION_EXPORT const unsigned char MaterialComponentsVersionString[];

