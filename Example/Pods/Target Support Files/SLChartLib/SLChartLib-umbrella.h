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

#import "SLCurveChartLib.h"
#import "UIColor+SLExtension.h"
#import "SLAccelerator.h"
#import "BaseCurveView.h"
#import "ChartAxisBase.h"
#import "ChartBaseLine.h"
#import "ChartComponentBase.h"
#import "ChartHighlight.h"
#import "SLChartBaseDataSet.h"
#import "SLLineChartData.h"
#import "SLLineChartDataSet.h"
#import "ChartDataEntry.h"
#import "ChartDataEntryBase.h"
#import "SLChartAxisValueFormatterPotocol.h"
#import "SLChartDataProtocol.h"
#import "SLChartFormatterProtocol.h"
#import "SLGCDTimerTool.h"

FOUNDATION_EXPORT double SLChartLibVersionNumber;
FOUNDATION_EXPORT const unsigned char SLChartLibVersionString[];

