//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UIViewServiceDeputy_UIViewServiceInterface.h"
#import "_UIViewServiceUIBehaviorInterface.h"

@class NSArray, NSString, NSValue, UIColor, XPCMachSendRight;

@protocol _UIViewServiceViewControllerOperator_RemoteViewControllerInterface <_UIViewServiceDeputy_UIViewServiceInterface, _UIViewServiceUIBehaviorInterface>
- (void)__restoreStateForSession:(NSString *)arg1 restorationAnchor:(NSString *)arg2;
- (void)__saveStateForSession:(NSString *)arg1 restorationAnchor:(NSString *)arg2 completionHandler:(void (^)(BOOL, NSError *))arg3;
- (void)__dimmingViewWasTapped;
- (void)__textServiceDidDismiss;
- (void)__setHostTintColor:(UIColor *)arg1 tintAdjustmentMode:(int)arg2;
- (void)__hostDidUpdateAppearanceWithSerializedRepresentations:(NSArray *)arg1 originalSource:(id)arg2 legacyAppearance:(BOOL)arg3;
- (void)__scrollToTopFromTouchAtViewLocation:(NSValue *)arg1 resultHandler:(void (^)(id, NSError *))arg2;
- (void)__hostedActionSheetDidDismissWithClickedButtonIndex:(int)arg1;
- (void)__hostedActionSheetClickedButtonAtIndex:(int)arg1;
- (void)__hostedActionSheetDidPresent;
- (void)__hostDidPromoteFirstResponder;
- (void)__hostDidRotateFromInterfaceOrientation:(int)arg1 skipSelf:(BOOL)arg2;
- (void)__hostWillAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 skipSelf:(BOOL)arg3;
- (void)__hostWillRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 skipSelf:(BOOL)arg3;
- (void)__hostDidChangeStatusBarHeight:(float)arg1;
- (void)__hostDidChangeStatusBarOrientationToInterfaceOrientation:(int)arg1;
- (void)__hostDidEnterBackground;
- (void)__hostWillEnterForeground;
- (void)__setContentSize:(NSValue *)arg1;
- (void)__setServiceInPopover:(BOOL)arg1;
- (void)__hostViewDidMoveToScreenWithIntegerDisplayID:(unsigned int)arg1 newHostingHandleReplyHandler:(void (^)(_UIHostedWindowHostingHandle *))arg2;
- (void)__hostViewDidDisappear:(BOOL)arg1;
- (void)__hostViewWillDisappear:(BOOL)arg1;
- (void)__hostViewDidAppear:(BOOL)arg1;
- (void)__hostViewWillAppear:(BOOL)arg1 inInterfaceOrientation:(int)arg2 statusBarHeight:(float)arg3 completionHandler:(void (^)(id, NSError *))arg4;
- (void)__hostReadyToReceiveMessagesFromServiceViewController;
- (void)__createViewController:(NSString *)arg1 withAppearanceSerializedRepresentations:(NSArray *)arg2 legacyAppearance:(BOOL)arg3 hostAccessibilityServerPort:(XPCMachSendRight *)arg4 canShowTextServices:(BOOL)arg5 replyHandler:(void (^)(id, NSError *))arg6;
@end

