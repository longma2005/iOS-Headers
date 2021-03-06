//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

@class PKPaymentAuthorizationServiceViewController;

@interface PKPaymentAuthorizationServiceNavigationController : UINavigationController
{
    PKPaymentAuthorizationServiceViewController *_authorizationViewController;
    id <UIViewControllerTransitioningDelegate> _paymentTransitioningDelegate;
}

@property(retain, nonatomic) id <UIViewControllerTransitioningDelegate> paymentTransitioningDelegate; // @synthesize paymentTransitioningDelegate=_paymentTransitioningDelegate;
@property(retain, nonatomic) PKPaymentAuthorizationServiceViewController *authorizationViewController; // @synthesize authorizationViewController=_authorizationViewController;
- (void)_setPreferredContentSizeFromChildContentContainer:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

