//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBBBSectionInfo.h"

@class SBBulletinListSection, SBItemInfoLayoutCache;

@interface SBNotificationCenterSectionInfo : SBBBSectionInfo
{
    SBItemInfoLayoutCache *_layoutCache;
    CDUnknownBlockType _clearPossibleAction;
    CDUnknownBlockType _clearAction;
}

@property(copy, nonatomic) CDUnknownBlockType clearAction; // @synthesize clearAction=_clearAction;
@property(copy, nonatomic) CDUnknownBlockType clearPossibleAction; // @synthesize clearPossibleAction=_clearPossibleAction;
- (void)populateReusableView:(id)arg1;
- (_Bool)shouldSuppressBulletinMessageForPrivacy:(id)arg1;
- (double)heightForReusableViewForBulletinViewController:(id)arg1 layoutMode:(long long)arg2 bulletinLocation:(long long)arg3;
- (void)invalidateCachedLayoutData;
- (Class)reusableViewClass;
- (id)identifier;
@property(readonly, nonatomic) SBBulletinListSection *representedListSection;
- (void)dealloc;

@end

