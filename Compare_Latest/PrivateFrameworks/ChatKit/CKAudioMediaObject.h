//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKAVMediaObject.h>

@class NSArray;

@interface CKAudioMediaObject : CKAVMediaObject
{
}

+ (id)_cachedPowerLevelsForKey:(id)arg1;
+ (void)_cachePowerLevels:(id)arg1 forKey:(id)arg2;
+ (id)attachmentSummary:(unsigned int)arg1;
+ (id)fallbackFilenamePrefix;
+ (id)UTITypes;
+ (Class)__ck_attachmentItemClass;
- (id)generatePlaceholderThumbnailForWidth:(float)arg1;
- (id)previewItemTitle;
- (id)generateThumbnailForWidth:(float)arg1 orientation:(BOOL)arg2;
- (id)savedPreviewFromURL:(id)arg1 forOrientation:(BOOL)arg2;
- (void)savePreview:(id)arg1 toURL:(id)arg2 forOrientation:(BOOL)arg3;
- (id)generatePreviewFromThumbnail:(id)arg1 width:(float)arg2 orientation:(BOOL)arg3;
- (id)composeWaveformForWidth:(float)arg1 orientation:(BOOL)arg2;
- (id)waveformForWidth:(float)arg1 orientation:(BOOL)arg2;
- (void)export:(id)arg1;
- (BOOL)canExport;
- (Class)coloredBalloonViewClass;
@property(retain, nonatomic) NSArray *powerLevels; // @dynamic powerLevels;
- (int)mediaType;

@end

