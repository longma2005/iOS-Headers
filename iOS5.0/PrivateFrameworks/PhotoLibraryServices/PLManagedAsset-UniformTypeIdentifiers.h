/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLManagedAsset.h>

@class NSString;

@interface PLManagedAsset (UniformTypeIdentifiers)
+ (id)keyPathsForValuesAffectingIsJPEG;
+ (id)keyPathsForValuesAffectingMimeType;
+ (id)keyPathsForValuesAffectingUtiType;
- (void)updateAssetKindFromUniformTypeIdentifier;
- (void)setUniformTypeIdentifierFromPathExtension:(id)arg1 assetKind:(int)arg2;
- (void)setUniformTypeIdentifierFromPathExtension:(id)arg1;
@property(readonly, nonatomic) BOOL isJPEG;
@property(readonly, nonatomic) NSString *mimeType;
@property(copy, nonatomic) NSString *utiType;
@end

