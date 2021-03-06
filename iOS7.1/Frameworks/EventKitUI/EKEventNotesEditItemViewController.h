//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKEditItemViewController.h>

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CalendarNotesCell, NSString, UITableView;

__attribute__((visibility("hidden")))
@interface EKEventNotesEditItemViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_table;
    CalendarNotesCell *_cell;
    NSString *_text;
}

- (void).cxx_destruct;
- (struct CGSize)preferredContentSize;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)validateAllowingAlert:(BOOL)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
@property(copy) NSString *noteText;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

