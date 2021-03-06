/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface TNPrintProperties : NSObject
{
    struct CGSize mUnscaledPageSize;
    struct CGRect mUnscaledContentRect;
}

+ (double)viewScaleFudgeFactor;
+ (double)pageGutter;
+ (id)legacyExportPrintProperties;
+ (id)letterSizeLandscapeFormPrintProperties;
+ (id)letterSizePortraitFormPrintProperties;
+ (id)a4SizePrintProperties;
+ (id)letterSizePrintProperties;
@property struct CGRect unscaledContentRect; // @synthesize unscaledContentRect=mUnscaledContentRect;
@property struct CGSize unscaledPageSize; // @synthesize unscaledPageSize=mUnscaledPageSize;
- (struct CGAffineTransform)p_transformForContentScale:(double)arg1 portraitOrientation:(_Bool)arg2;
- (struct CGRect)unscaledPageRectForDisplayForPortraitOrientation:(_Bool)arg1 atPageCoordinate:(CDStruct_0441cfb5)arg2;
- (struct CGSize)pageSizeWithGutterForContentScale:(double)arg1 portraitOrientation:(_Bool)arg2;
- (struct CGSize)pageSizeForContentScale:(double)arg1 portraitOrientation:(_Bool)arg2;
- (struct CGRect)pageNumberRectForPortraitOrientation:(_Bool)arg1;
- (struct CGRect)pageNumberRectForContentScale:(double)arg1 portraitOrientation:(_Bool)arg2;
- (struct CGRect)contentRectForContentScale:(double)arg1 portraitOrientation:(_Bool)arg2;
- (double)contentScaleForIntegralWidthWithContentScale:(double)arg1 portraitOrientation:(_Bool)arg2;
@property(readonly) double pageHeight;
@property(readonly) double pageWidth;
@property(readonly) struct UIEdgeInsets printMargins;
@property(readonly) double bottomMargin;
@property(readonly) double topMargin;
@property(readonly) double rightMargin;
@property(readonly) double leftMargin;
- (id)initWithPageSize:(struct CGSize)arg1 edgeInsets:(struct UIEdgeInsets)arg2;
- (id)initWithPageSize:(struct CGSize)arg1 contentRect:(struct CGRect)arg2;

@end

