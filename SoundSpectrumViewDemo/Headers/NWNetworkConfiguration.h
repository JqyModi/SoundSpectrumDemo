//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSString;
@protocol NWLocationQueryProtocol, NWPolicyDelegate, NWRequestCostProtocol, NWRequestFlowProtocol, NWUserLogDelegate, NWUserTraceDelegate;

@interface NWNetworkConfiguration : NSObject
{
    NSMutableDictionary *_sessionConfigrations;
    NSMutableDictionary *_amdcExtParams;
    NSMutableDictionary *_publickeyDict;
    NSRecursiveLock *_appkeyLock;
    NSRecursiveLock *_pubkeyLock;
    NSRecursiveLock *_uidLock;
    NSRecursiveLock *_scLock;
    NSRecursiveLock *_referLock;
    NSRecursiveLock *_utdidLock;
    NSMutableSet *_loadingReferSet;
    NSString *_uid;
    _Bool _isUseSecurityGuard;
    _Bool _isEnableAMDC;
    _Bool _loadingAllRequest;
    int _netEnvironment;
    int _customAppkeyIndex;
    id <NWUserTraceDelegate> _utDelegate;
    id <NWUserLogDelegate> _logDelegate;
    id <NWPolicyDelegate> _policyDelegate;
    id <NWRequestCostProtocol> _traceProtocol;
    id <NWRequestFlowProtocol> _flowProtocol;
    id <NWLocationQueryProtocol> _locationProtocol;
    NSString *_appkey;
    NSString *_appSecret;
    NSString *_authCode;
    NSString *_clusterPublickey;
    NSString *_utdid;
    NSString *_longitude;
    NSString *_latitude;
}

+ (id)getClientIp;
+ (void)setEnvironment:(int)arg1;
+ (void)setHotDomains:(id)arg1;
+ (void)setPrebuiltConnections:(id)arg1;
+ (void)setAmdcIPs:(id)arg1 debugIps:(id)arg2 dailyIps:(id)arg3;
+ (void)setAmdcHosts:(id)arg1 debugHost:(id)arg2 dailyHost:(id)arg3;
+ (void)setAcsCenterIPs:(id)arg1 debugIps:(id)arg2 dailyIps:(id)arg3;
+ (void)setAcsCenterHosts:(id)arg1 debugHost:(id)arg2 dailyHost:(id)arg3;
+ (id)shareInstance;
@property(nonatomic) int customAppkeyIndex; // @synthesize customAppkeyIndex=_customAppkeyIndex;
@property(nonatomic) _Bool loadingAllRequest; // @synthesize loadingAllRequest=_loadingAllRequest;
@property(nonatomic) _Bool isEnableAMDC; // @synthesize isEnableAMDC=_isEnableAMDC;
@property(nonatomic) _Bool isUseSecurityGuard; // @synthesize isUseSecurityGuard=_isUseSecurityGuard;
@property(nonatomic) int netEnvironment; // @synthesize netEnvironment=_netEnvironment;
@property(retain, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSString *utdid; // @synthesize utdid=_utdid;
@property(retain, nonatomic) NSString *clusterPublickey; // @synthesize clusterPublickey=_clusterPublickey;
@property(retain, nonatomic) NSString *authCode; // @synthesize authCode=_authCode;
@property(retain, nonatomic) NSString *appSecret; // @synthesize appSecret=_appSecret;
@property(retain, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
@property(nonatomic) __weak id <NWLocationQueryProtocol> locationProtocol; // @synthesize locationProtocol=_locationProtocol;
@property(nonatomic) __weak id <NWRequestFlowProtocol> flowProtocol; // @synthesize flowProtocol=_flowProtocol;
@property(nonatomic) __weak id <NWRequestCostProtocol> traceProtocol; // @synthesize traceProtocol=_traceProtocol;
@property(nonatomic) __weak id <NWPolicyDelegate> policyDelegate; // @synthesize policyDelegate=_policyDelegate;
@property(nonatomic) __weak id <NWUserLogDelegate> logDelegate; // @synthesize logDelegate=_logDelegate;
@property(nonatomic) __weak id <NWUserTraceDelegate> utDelegate; // @synthesize utDelegate=_utDelegate;
- (void).cxx_destruct;
- (id)getNetworkSDKVer;
- (id)sessionConfiguration:(id)arg1;
- (void)setSessionConfiguration:(id)arg1;
- (_Bool)acceptRequestWithRefer:(id)arg1;
- (void)registerLoadingRefer:(id)arg1;
- (id)currentAmdcExternParams;
- (void)putAmdcExternParamKey:(id)arg1 value:(id)arg2;
- (id)uid;
- (void)setuid:(id)arg1;
- (void)setUid:(id)arg1;
- (int)slightSslPubkeySeqWithHost:(id)arg1;
- (void)setHost:(id)arg1 withSlightSslPubkeySeq:(int)arg2;
- (id)getAuthUtdid;
- (id)init;

@end

