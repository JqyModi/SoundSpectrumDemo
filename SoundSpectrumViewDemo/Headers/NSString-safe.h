//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (safe)
+ (id)safeStringWithUTF8String:(const char *)arg1;
- (_Bool)safeHasSuffix:(id)arg1;
- (_Bool)safeHasPrefix:(id)arg1;
- (id)safeStringByTrimmingCharactersInSet:(id)arg1;
- (id)safeStringByAppendingString:(id)arg1;
- (struct _NSRange)safeRangeOfString:(id)arg1;
- (id)safeSubstringWithRange:(struct _NSRange)arg1;
- (id)safeSubstringToIndex:(unsigned long long)arg1;
- (id)safeSubstringFromIndex:(unsigned long long)arg1;
@end
