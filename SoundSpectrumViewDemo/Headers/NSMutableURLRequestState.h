//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSMutableURLRequestState : NSObject
{
    _Bool _HTTPShouldHandleCookies;
    _Bool _HTTPShouldUsePipelining;
    unsigned long long _cachePolicy;
    double _timeoutInterval;
    unsigned long long _networkServiceType;
}

@property(nonatomic) _Bool HTTPShouldUsePipelining; // @synthesize HTTPShouldUsePipelining=_HTTPShouldUsePipelining;
@property(nonatomic) _Bool HTTPShouldHandleCookies; // @synthesize HTTPShouldHandleCookies=_HTTPShouldHandleCookies;
@property(nonatomic) unsigned long long networkServiceType; // @synthesize networkServiceType=_networkServiceType;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(nonatomic) unsigned long long cachePolicy; // @synthesize cachePolicy=_cachePolicy;

@end

