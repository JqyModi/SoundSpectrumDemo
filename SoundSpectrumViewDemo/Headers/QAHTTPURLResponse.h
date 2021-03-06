//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL;

@interface QAHTTPURLResponse : NSObject
{
    long long _statusCode;
    NSDictionary *_allHeaderFields;
    NSURL *_URL;
}

@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSDictionary *allHeaderFields; // @synthesize allHeaderFields=_allHeaderFields;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
- (id)toNS;
- (void)dealloc;
- (id)initWithURL:(id)arg1 statusCode:(long long)arg2 headerFields:(id)arg3;
- (id)initWithNS:(id)arg1;

@end

