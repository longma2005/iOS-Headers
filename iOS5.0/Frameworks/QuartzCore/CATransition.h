/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <QuartzCore/CAAnimation.h>

@class NSString;

@interface CATransition : CAAnimation
{
}

- (struct Animation *)_copyRenderAnimationForLayer:(id)arg1;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;
@property(copy) NSString *type;
@property(copy) NSString *subtype;
@property float startProgress;
@property float endProgress;
@property(retain) id filter;

@end

