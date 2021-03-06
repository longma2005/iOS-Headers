//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface FMFDevice : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isActiveDevice;
    BOOL _isThisDevice;
    NSString *_deviceId;
    NSString *_deviceName;
}

+ (BOOL)supportsSecureCoding;
+ (id)deviceWithId:(id)arg1 name:(id)arg2 isActive:(BOOL)arg3 isThisDevice:(BOOL)arg4;
@property(nonatomic) BOOL isThisDevice; // @synthesize isThisDevice=_isThisDevice;
@property(nonatomic) BOOL isActiveDevice; // @synthesize isActiveDevice=_isActiveDevice;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)updateIsActive:(BOOL)arg1 isThisDevice:(BOOL)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

