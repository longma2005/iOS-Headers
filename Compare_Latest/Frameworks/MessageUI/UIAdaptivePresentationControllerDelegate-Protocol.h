//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIPresentationController, UIViewController;

@protocol UIAdaptivePresentationControllerDelegate <NSObject>

@optional
- (UIViewController *)presentationController:(UIPresentationController *)arg1 viewControllerForAdaptivePresentationStyle:(int)arg2;
- (int)adaptivePresentationStyleForPresentationController:(UIPresentationController *)arg1;
@end

