/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ProtocolBuffer/PBDataWriter.h>

@class NSOutputStream;

@interface PBStreamWriter : PBDataWriter
{
    NSOutputStream *_stream;
}

+ (id)writeProtoBuffers:(id)arg1 toFile:(id)arg2;
@property(retain) NSOutputStream *stream; // @synthesize stream=_stream;
- (int)write:(const char *)arg1 maxLength:(unsigned int)arg2;
- (void)dealloc;
- (id)initWithOutputStream:(id)arg1;

@end
