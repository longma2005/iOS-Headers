/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol TSWPTextSource <NSObject>
- (unsigned long long)storageLength;
- (_Bool)adjustRangesByDelta:(long long)arg1;
- (unsigned long long)charIndexRemappedFromStorage:(unsigned long long)arg1;
- (id)objectAtLocationPriorToMappedCharIndex:(unsigned long long)arg1 forAttributeKind:(int)arg2 effectiveRange:(struct _NSRange *)arg3;
- (struct _NSRange)charRangeMappedFromStorage:(struct _NSRange)arg1;
- (struct _NSRange)charRangeMappedToStorage:(struct _NSRange)arg1;
- (unsigned long long)charIndexMappedFromStorage:(unsigned long long)arg1;
- (unsigned long long)charIndexMappedToStorage:(unsigned long long)arg1;
- (long long)hyphenationLocationBeforeIndex:(long long)arg1 inRange:(struct _NSRange)arg2 locale:(struct __CFLocale *)arg3 hyphenChar:(unsigned int *)arg4;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (struct _NSRange)wordAtCharIndex:(unsigned long long)arg1 includePreviousWord:(_Bool)arg2;
- (id)characterStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (_Bool)isWritingDirectionRightToLeftForParagraphAtCharIndex:(unsigned long long)arg1;
- (id)paragraphStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)attachmentOrFootnoteAtCharIndex:(unsigned long long)arg1;
- (id)attachmentAtCharIndex:(unsigned long long)arg1;
- (id)footnoteReferenceAtCharIndex:(unsigned long long)arg1;
- (id)smartFieldsWithAttributeKind:(int)arg1 intersectingRange:(struct _NSRange)arg2;
- (id)smartFieldAtCharIndex:(unsigned long long)arg1 attributeKind:(int)arg2 effectiveRange:(struct _NSRange *)arg3;
- (void)attributesAtCharIndex:(unsigned long long)arg1 attributesOfInterest:(_Bool [19])arg2 attributesTable:(id [19])arg3 effectiveRange:(struct _NSRange *)arg4;
- (_Bool)hasColumnStyleForParagraphBreakAtCharIndex:(unsigned long long)arg1;
- (_Bool)hasColumnBreakAtCharIndex:(unsigned long long)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (id)string;
- (unsigned long long)length;

@optional
- (_Bool)hasSmartFieldsInRange:(struct _NSRange)arg1;
- (void)enumerateWithAttributeKind:(int)arg1 inRange:(struct _NSRange)arg2 usingBlock:(id)arg3;
- (void)enumerateSmartFieldsWithAttributeKind:(int)arg1 inRange:(struct _NSRange)arg2 usingBlock:(id)arg3;
- (id)substringWithRange:(struct _NSRange)arg1;
@end

