//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIWebViewDelegate.h"

@class NSAttributedString, NSString, UITextView;

@interface CKReaderViewController : UIViewController <UIWebViewDelegate>
{
    id <CKReaderViewControllerDelegate> _delegate;
    NSString *_messageGUID;
    UITextView *_textView;
}

@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(copy, nonatomic) NSString *messageGUID; // @synthesize messageGUID=_messageGUID;
@property(nonatomic) id <CKReaderViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct _NSRange visibleRange; // @dynamic visibleRange;
@property(copy, nonatomic) NSAttributedString *text; // @dynamic text;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)loadView;
- (id)init;
- (void)dealloc;
- (BOOL)ckCanDismissWhenSuspending;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

