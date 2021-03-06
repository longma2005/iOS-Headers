//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString;

@interface ACUILinkButton : UIButton
{
    NSString *_acui_titleString;
}

@property(retain) NSString *acui_titleString; // @synthesize acui_titleString=_acui_titleString;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (id)_normalStringAttributes;
- (id)_highlightedStringAttributes;
- (id)initWithText:(id)arg1 target:(id)arg2 action:(SEL)arg3;

@end

