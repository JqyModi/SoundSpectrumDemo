//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface NWAtsHelper : NSObject
{
    NSURL *_proxyResponseURL;
    int _processType;
    int _proxyReturnType;
}

+ (void)disableCfNetwork;
+ (_Bool)isCfNetworkDisabled;
+ (_Bool)isLowTLSVersionHost:(id)arg1;
+ (_Bool)isAtsProxyHost:(id)arg1;
+ (void)addAtsProxyHeadForRequest:(id)arg1;
+ (_Bool)isExceptionDomain:(id)arg1;
+ (_Bool)isInfoPlistAllowedHttp:(id)arg1;
+ (_Bool)isWebviewRequest:(id)arg1;
+ (int)valueForKey:(id)arg1 withDictionary:(id)arg2;
+ (_Bool)isIngoreRequest:(id)arg1;
+ (void)commitUTHttpsProxyRequest:(id)arg1 withReturnType:(int)arg2;
+ (void)commitUTHttpRequest:(id)arg1;
+ (void)setLowTLSVersionHosts:(id)arg1;
+ (void)setIgnoreHosts:(id)arg1;
+ (void)initialize;
@property(nonatomic) int proxyReturnType; // @synthesize proxyReturnType=_proxyReturnType;
@property(nonatomic) int processType; // @synthesize processType=_processType;
- (void).cxx_destruct;
- (void)setProxyResponseURL:(id)arg1 isForce:(_Bool)arg2;
- (id)convertProxyResponseURL:(id)arg1;
- (void)onReceiveProxyResponse:(id)arg1;
- (void)detectProcessType:(id)arg1;
- (void)commitUT:(id)arg1;
- (void)initUtArgs:(id)arg1;
- (id)init;
- (_Bool)isHttpsWhitelistHost:(id)arg1;
- (void)updateHttpsWhitelist:(id)arg1;
- (_Bool)isAtsProxyBlocked;

@end
