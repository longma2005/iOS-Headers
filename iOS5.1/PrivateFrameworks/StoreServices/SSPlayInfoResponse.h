/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "SSCoding-Protocol.h"

@class NSData, NSError;

@interface SSPlayInfoResponse : NSObject <SSCoding, NSCopying>
{
    NSError *_error;
    NSData *_playInfoData;
}

@property(readonly, nonatomic) NSData *playInfoData; // @synthesize playInfoData=_playInfoData;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (id)initWithPlayInfoData:(id)arg1 error:(id)arg2;
- (id)description;
- (id)initWithXPCEncoding:(void *)arg1;
- (id)initWithPropertyListEncoding:(id)arg1;
- (void *)copyXPCEncoding;
- (id)copyPropertyListEncoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

