//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPRadioGatewayQueueFeeder.h"

@class MusicRadioPlaybackContext;

@interface MusicRadioGatewayQueueFeeder : MPRadioGatewayQueueFeeder
{
    MusicRadioPlaybackContext *_radioPlaybackContext;
}

@property(retain, nonatomic) MusicRadioPlaybackContext *radioPlaybackContext; // @synthesize radioPlaybackContext=_radioPlaybackContext;
- (void).cxx_destruct;
- (BOOL)_reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(BOOL)arg2 startPlayback:(BOOL)arg3;
- (BOOL)reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(BOOL)arg2 startPlayback:(BOOL)arg3;
- (BOOL)reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(BOOL)arg2;

@end

