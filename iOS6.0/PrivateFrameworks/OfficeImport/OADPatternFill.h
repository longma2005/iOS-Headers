/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OADFill.h>

@class OADColor, OADPattern;

@interface OADPatternFill : OADFill
{
    OADColor *mFgColor;
    BOOL mIsFgColorOverridden;
    OADColor *mBgColor;
    BOOL mIsBgColorOverridden;
    OADPattern *mPattern;
    BOOL mIsPatternOverridden;
}

+ (id)defaultProperties;
- (id)namedImageDataWithBlipCollection:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)setStyleColor:(id)arg1;
- (void)setColor:(id)arg1;
- (BOOL)isPatternOverridden;
- (void)setPattern:(id)arg1;
- (id)pattern;
- (BOOL)isBgColorOverridden;
- (void)setBgColor:(id)arg1;
- (id)bgColor;
- (BOOL)isFgColorOverridden;
- (void)setFgColor:(id)arg1;
- (id)fgColor;
- (void)setParent:(id)arg1;
- (id)initWithDefaults;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

