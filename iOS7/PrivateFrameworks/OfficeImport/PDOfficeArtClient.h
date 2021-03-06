/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "OADClient-Protocol.h"
#import "OADImageRecolorInfoClient-Protocol.h"

@class OADImageRecolorInfo, PDAnimationInfo, PDPlaceholder;

// Not exported
@interface PDOfficeArtClient : NSObject <OADClient, OADImageRecolorInfoClient>
{
    OADImageRecolorInfo *mImageRecolorInfo;
    PDPlaceholder *mPlaceholder;
    _Bool mIsComment;
    PDAnimationInfo *mAnimationInfo;
    _Bool mHasOleChart;
    int mInheritedTextStylePlaceholderType;
}

@property(nonatomic) int inheritedTextStylePlaceholderType; // @synthesize inheritedTextStylePlaceholderType=mInheritedTextStylePlaceholderType;
- (void)setHasOleChart:(_Bool)arg1;
- (_Bool)hasOleChart;
- (id)animationInfo;
- (void)setAnimationInfo:(id)arg1;
- (_Bool)hasAnimationInfo;
- (void)setIsComment:(_Bool)arg1;
- (_Bool)isComment;
- (void)setPlaceholder:(id)arg1;
- (id)placeholder;
- (_Bool)hasPlaceholder;
- (void)setImageRecolorInfo:(id)arg1;
- (id)imageRecolorInfo;
- (struct CGRect)bounds;
- (_Bool)hasBounds;
- (void)dealloc;
- (id)init;

@end

