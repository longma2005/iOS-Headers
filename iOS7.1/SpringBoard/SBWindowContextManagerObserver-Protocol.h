//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBWindowContext, SBWindowContextManager, UIScreen;

@protocol SBWindowContextManagerObserver <NSObject>
- (void)windowContextManager:(SBWindowContextManager *)arg1 didRepositionContext:(SBWindowContext *)arg2 from:(unsigned long long)arg3 to:(unsigned long long)arg4 forScreen:(UIScreen *)arg5;
@end

