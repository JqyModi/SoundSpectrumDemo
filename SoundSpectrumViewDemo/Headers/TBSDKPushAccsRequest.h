//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCondition, NSDictionary, NSError, NSString;

@interface TBSDKPushAccsRequest : NSObject
{
    NSCondition *_condition;
    NSString *_serviceId;
    _Bool _isLockExits;
    NSDictionary *_responseData;
    NSError *_responseError;
}

@property(retain, nonatomic) NSError *responseError; // @synthesize responseError=_responseError;
@property(retain, nonatomic) NSDictionary *responseData; // @synthesize responseData=_responseData;
- (void).cxx_destruct;
- (void)wait:(double)arg1;
- (void)notify;
- (_Bool)send:(id)arg1;
- (id)initWithServiceID:(id)arg1;

@end

