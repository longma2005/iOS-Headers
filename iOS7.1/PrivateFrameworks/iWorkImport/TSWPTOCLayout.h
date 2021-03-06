//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSWPShapeLayout.h>

@class TSWPTOCLayoutHint;

__attribute__((visibility("hidden")))
@interface TSWPTOCLayout : TSWPShapeLayout
{
    TSWPTOCLayoutHint *_hint;
    unsigned int _initialCharIndex;
    struct CGSize _maxSize;
}

@property(readonly, nonatomic) unsigned int initialCharIndex; // @synthesize initialCharIndex=_initialCharIndex;
@property(nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
- (id).cxx_construct;
- (BOOL)shrinkTextToFit;
- (BOOL)alwaysStartsNewTarget;
- (float)positionForColumnIndex:(unsigned int)arg1 bodyWidth:(float)arg2 outWidth:(float *)arg3 outGap:(float *)arg4;
- (float)gapForColumnIndex:(unsigned int)arg1 bodyWidth:(float)arg2;
- (float)widthForColumnIndex:(unsigned int)arg1 bodyWidth:(float)arg2;
- (unsigned int)columnCount;
- (id)layoutMargins;
- (struct CGSize)adjustedInsets;
- (id)childSearchTargets;
- (void)layoutSearchForString:(id)arg1 options:(unsigned int)arg2 hitBlock:(CDUnknownBlockType)arg3;
- (float)maxAutoGrowHeightForTextLayout:(id)arg1;
- (Class)repClassForTextLayout:(id)arg1;
- (struct CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(struct CGSize)arg2;
- (struct CGRect)nonAutosizedFrameForTextLayout:(id)arg1;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
- (int)verticalAlignmentForTextLayout:(id)arg1;
- (unsigned int)autosizeFlagsForTextLayout:(id)arg1;
- (struct CGRect)boundsForStandardKnobs;
- (id)computeLayoutGeometry;
@property(readonly, nonatomic, getter=isLastLayoutInTOC) BOOL lastLayoutInTOC;
- (void)dealloc;
@property(readonly, nonatomic) TSWPTOCLayoutHint *hint;
- (id)initWithInfo:(id)arg1 initialCharIndex:(unsigned int)arg2 maxSize:(struct CGSize)arg3;
- (id)initWithInfo:(id)arg1;

@end

