/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OADProperties.h>

@class PDTransitionOptions;

// Not exported
@interface PDTransition : OADProperties
{
    _Bool mHasType;
    int mType;
    _Bool mHasSpeed;
    int mSpeed;
    _Bool mHasAdvanceOnClick;
    _Bool mIsAdvanceOnClick;
    _Bool mHasAdvanceAfterTime;
    int mAdvanceAfterTime;
    PDTransitionOptions *mOptions;
}

- (void)setOptions:(id)arg1;
- (id)options;
- (_Bool)hasTransitionOptions;
- (void)setAdvanceAfterTime:(int)arg1;
- (int)advanceAfterTime;
- (_Bool)hasAdvanceAfterTime;
- (void)setSpeed:(int)arg1;
- (int)speed;
- (_Bool)hasSpeed;
- (void)setIsAdvanceOnClick:(_Bool)arg1;
- (_Bool)isAdvanceOnClick;
- (_Bool)hasIsAdvanceOnClick;
- (void)setType:(int)arg1;
- (int)type;
- (_Bool)hasType;
- (void)dealloc;
- (id)init;

@end

