/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface NSURLHostNameAddressInfo : NSObject
{
    double timestamp;
    struct addrinfo *addressInfo;
}

+ (void)asyncResolveWithCallbackClient:(id)arg1;
+ (id)addressInfoForHost:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (double)_timestamp;
- (struct addrinfo *)addrinfo;
- (id)_initWithAddressInfo:(struct addrinfo *)arg1;

@end

