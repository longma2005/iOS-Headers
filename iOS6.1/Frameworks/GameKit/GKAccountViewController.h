/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKServerWebViewController.h>

@class NSString, NSURL;

@interface GKAccountViewController : GKServerWebViewController
{
    NSURL *_url;
    NSString *_accountName;
    NSString *_alias;
    int _mode;
    BOOL _lockedToPortrait;
    NSString *_firstName;
    NSString *_lastName;
}

@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(retain, nonatomic) NSString *alias; // @synthesize alias=_alias;
@property(retain, nonatomic) NSString *accountName; // @synthesize accountName=_accountName;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)processGameKitURLComponents:(id)arg1;
- (void)linkAccounts:(id)arg1 parameters:(id)arg2 complete:(id)arg3;
- (void)availableAccountTypes:(id)arg1 parameters:(id)arg2 complete:(id)arg3;
- (void)finish;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;

@end

