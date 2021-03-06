//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NWConnectionOption : NSObject
{
    _Bool _isForceLocalDNS;
    _Bool _isAutoRetry;
    int _connectionType;
    int _httpFrameworkType;
    id _userInfo;
    long long _requestPriority;
}

@property(nonatomic) long long requestPriority; // @synthesize requestPriority=_requestPriority;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) _Bool isAutoRetry; // @synthesize isAutoRetry=_isAutoRetry;
@property(nonatomic) _Bool isForceLocalDNS; // @synthesize isForceLocalDNS=_isForceLocalDNS;
@property(nonatomic) int httpFrameworkType; // @synthesize httpFrameworkType=_httpFrameworkType;
@property(nonatomic) int connectionType; // @synthesize connectionType=_connectionType;
- (void).cxx_destruct;
- (id)init;

@end

