//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface ClearDataItem : NSObject <NSCoding>
{
    int _category;
    NSString *_path;
}

+ (id)itemWithPath:(id)arg1 withCategory:(int)arg2;
@property(nonatomic) int category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
