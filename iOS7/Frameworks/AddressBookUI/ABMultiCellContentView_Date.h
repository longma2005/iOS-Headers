/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AddressBookUI/ABMultiCellContentView.h>

#import "ABDateFieldDelegate-Protocol.h"

@class ABDateField, NSDate;

@interface ABMultiCellContentView_Date : ABMultiCellContentView <ABDateFieldDelegate>
{
    ABDateField *_dateField;
}

+ (struct CGSize)layoutSubviewsForView:(id)arg1 usingSize:(struct CGSize)arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(_Bool)arg6;
- (_Bool)dateFieldShouldClear:(id)arg1;
- (_Bool)dateFieldShouldReturn:(id)arg1;
- (void)dateFieldDidBeginEditing:(id)arg1;
- (void)dateFieldDidEndEditing:(id)arg1;
- (_Bool)dateFieldShouldEndEditing:(id)arg1;
- (_Bool)dateFieldShouldBeginEditing:(id)arg1;
- (void)dateFieldDateDidChange:(id)arg1;
- (id)hitTestForTouches:(id)arg1 withEvent:(id)arg2;
- (void)setAbCellStyle:(int)arg1;
- (id)viewForFirstResponder;
- (void)updateSubviewsForNewStateAnimated:(_Bool)arg1;
- (void)reloadFromModel;
- (void)reload;
@property(readonly, nonatomic) NSDate *date;
- (void)setUpdateDelegate:(id)arg1;
- (void)dealloc;

@end

