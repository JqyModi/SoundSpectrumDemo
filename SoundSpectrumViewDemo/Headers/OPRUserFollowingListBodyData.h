//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface OPRUserFollowingListBodyData : NSObject
{
    NSString *_userId;
    NSString *_cursor;
    NSString *_method;
    NSNumber *_size;
}

@property(copy, nonatomic) NSNumber *size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *method; // @synthesize method=_method;
@property(copy, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (id)initWithUserId:(id)arg1 size:(long long)arg2 cursor:(id)arg3 method:(_Bool)arg4;

@end

