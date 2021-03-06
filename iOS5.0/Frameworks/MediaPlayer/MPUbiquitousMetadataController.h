/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MPUbiquitousLRUDictionaryObserver-Protocol.h"

@class NSArray;

@interface MPUbiquitousMetadataController : NSObject <MPUbiquitousLRUDictionaryObserver>
{
    struct dispatch_queue_s *_updateQueue;
    NSArray *_entriesForUbiquitousUpdates;
    BOOL _updateUbiquitousValuesScheduled;
}

+ (id)ubiquitousEnabledMediaPropertiesForMediaProperties:(id)arg1;
+ (void)insertDAAPValueIntoDictionary:(id)arg1 mediaItem:(id)arg2 mediaProperty:(id)arg3;
+ (id)sharedUbiquitousMetadataController;
- (void)ubiquitousLRUStorageDidChangeExternally:(id)arg1 changedEntries:(id)arg2;
- (void)ubiquitousLRUStorageDidCommitLocalChanges:(id)arg1;
- (void)ubiquitousLRUStorageWillCommitLocalChanges:(id)arg1;
- (void)_onQueue_scheduleApplyUbiquitousLRUStorageValuesForEntries:(id)arg1;
- (void)_onQueue_applyUbiquitousLRUStorageValuesForEntries:(id)arg1;
- (void)_onQueue_applyUbiquitousValues:(id)arg1 toMediaItem:(id)arg2;
- (BOOL)_shouldApplyUbiquitousEntry:(id)arg1;
- (void)_ubiquitousPushMediaProperties:(id)arg1 mediaItem:(id)arg2;
- (id)_ubiquitousMetadataStorage;
- (BOOL)_sagaPushMediaProperties:(id)arg1 mediaItem:(id)arg2;
- (BOOL)_useSagaForMediaItem:(id)arg1;
- (void)_releaseAssertion:(id)arg1;
- (void)_takeAssertion:(id)arg1;
- (void)pushBookmarkingPropertiesForMediaItem:(id)arg1;
- (void)_pushProperties:(id)arg1 mediaItem:(id)arg2;
- (void)dealloc;
- (id)init;

@end

