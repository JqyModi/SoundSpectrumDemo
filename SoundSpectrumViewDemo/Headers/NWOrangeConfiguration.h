//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSRecursiveLock;

@interface NWOrangeConfiguration : NSObject
{
    _Bool _httpsSchemeValue;
    _Bool _cacheEnabledValue;
    _Bool _networkOffValue;
    _Bool _force2httpsValue;
    _Bool _httpsProxyEnabledValue;
    _Bool _cfnetworkHttpSwitch;
    _Bool _enableSniCFNetwork;
    _Bool _forceAmdcOldType;
    _Bool _horseRaceSwitch;
    _Bool _localdnsSwitch;
    _Bool _disableSysDNSSwitch;
    _Bool _ipv6BlackListSwitch;
    _Bool _ipstackUTSwitch;
    _Bool _ipv6Swith;
    _Bool _ipv6DetectSwith;
    _Bool _n2eSwitch;
    _Bool _asyncTnetCallbackSwitch;
    NSArray *_betaCodeSwitch;
    NSArray *_cfnetworkHttpBlacklist;
    NSArray *_useCfnetworkEcodes;
    long long _policyMaxExpireSecondsValue;
    NSMutableDictionary *_defaultValueDict;
    long long _maxHttpSessionConcurrentCount;
    long long _processSpdyErrorType;
    long long _ipv6BlackListTTL;
    NSArray *_requestWhiteList;
    NSArray *_requestBlackList;
    NSArray *_cookieFixList;
    NSArray *_ipv6OnlyMncBlackList;
    NSArray *_monitorList;
    NSRecursiveLock *_updateLock;
    NSArray *_dropTimeList;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *dropTimeList; // @synthesize dropTimeList=_dropTimeList;
@property(retain, nonatomic) NSRecursiveLock *updateLock; // @synthesize updateLock=_updateLock;
@property(retain, nonatomic) NSArray *monitorList; // @synthesize monitorList=_monitorList;
@property(retain, nonatomic) NSArray *ipv6OnlyMncBlackList; // @synthesize ipv6OnlyMncBlackList=_ipv6OnlyMncBlackList;
@property(retain, nonatomic) NSArray *cookieFixList; // @synthesize cookieFixList=_cookieFixList;
@property(retain, nonatomic) NSArray *requestBlackList; // @synthesize requestBlackList=_requestBlackList;
@property(retain, nonatomic) NSArray *requestWhiteList; // @synthesize requestWhiteList=_requestWhiteList;
@property(nonatomic) long long ipv6BlackListTTL; // @synthesize ipv6BlackListTTL=_ipv6BlackListTTL;
@property(nonatomic) long long processSpdyErrorType; // @synthesize processSpdyErrorType=_processSpdyErrorType;
@property(nonatomic) long long maxHttpSessionConcurrentCount; // @synthesize maxHttpSessionConcurrentCount=_maxHttpSessionConcurrentCount;
@property(retain, nonatomic) NSMutableDictionary *defaultValueDict; // @synthesize defaultValueDict=_defaultValueDict;
@property(nonatomic) long long policyMaxExpireSecondsValue; // @synthesize policyMaxExpireSecondsValue=_policyMaxExpireSecondsValue;
@property(retain, nonatomic) NSArray *useCfnetworkEcodes; // @synthesize useCfnetworkEcodes=_useCfnetworkEcodes;
@property(retain, nonatomic) NSArray *cfnetworkHttpBlacklist; // @synthesize cfnetworkHttpBlacklist=_cfnetworkHttpBlacklist;
@property(retain, nonatomic) NSArray *betaCodeSwitch; // @synthesize betaCodeSwitch=_betaCodeSwitch;
@property(nonatomic) _Bool asyncTnetCallbackSwitch; // @synthesize asyncTnetCallbackSwitch=_asyncTnetCallbackSwitch;
@property(nonatomic) _Bool n2eSwitch; // @synthesize n2eSwitch=_n2eSwitch;
@property(nonatomic) _Bool ipv6DetectSwith; // @synthesize ipv6DetectSwith=_ipv6DetectSwith;
@property(nonatomic) _Bool ipv6Swith; // @synthesize ipv6Swith=_ipv6Swith;
@property(nonatomic) _Bool ipstackUTSwitch; // @synthesize ipstackUTSwitch=_ipstackUTSwitch;
@property(nonatomic) _Bool ipv6BlackListSwitch; // @synthesize ipv6BlackListSwitch=_ipv6BlackListSwitch;
@property(nonatomic) _Bool disableSysDNSSwitch; // @synthesize disableSysDNSSwitch=_disableSysDNSSwitch;
@property(nonatomic) _Bool localdnsSwitch; // @synthesize localdnsSwitch=_localdnsSwitch;
@property(nonatomic) _Bool horseRaceSwitch; // @synthesize horseRaceSwitch=_horseRaceSwitch;
@property(nonatomic) _Bool forceAmdcOldType; // @synthesize forceAmdcOldType=_forceAmdcOldType;
@property(nonatomic) _Bool enableSniCFNetwork; // @synthesize enableSniCFNetwork=_enableSniCFNetwork;
@property(nonatomic) _Bool cfnetworkHttpSwitch; // @synthesize cfnetworkHttpSwitch=_cfnetworkHttpSwitch;
@property(nonatomic) _Bool httpsProxyEnabledValue; // @synthesize httpsProxyEnabledValue=_httpsProxyEnabledValue;
@property(nonatomic) _Bool force2httpsValue; // @synthesize force2httpsValue=_force2httpsValue;
@property(nonatomic) _Bool networkOffValue; // @synthesize networkOffValue=_networkOffValue;
@property(nonatomic) _Bool cacheEnabledValue; // @synthesize cacheEnabledValue=_cacheEnabledValue;
@property(nonatomic) _Bool httpsSchemeValue; // @synthesize httpsSchemeValue=_httpsSchemeValue;
- (void).cxx_destruct;
- (_Bool)isIPv6Enable;
- (void)setIPv6Enable:(_Bool)arg1;
- (void)setInitValue;
- (_Bool)isABTestOn;
- (id)parseContent:(id)arg1 withKey:(id)arg2;
- (_Bool)isInIPv6OnlyBlackList:(id)arg1;
- (_Bool)isDropTimeEnabled:(id)arg1;
- (_Bool)isInMonitorList:(id)arg1;
- (_Bool)isInCookieFixList:(id)arg1;
- (_Bool)isInRequestBlackList:(id)arg1;
- (_Bool)isInRequestWhiteList:(id)arg1;
- (_Bool)isBetaCodeEnabled:(id)arg1;
- (long long)maxHttpSessionConcurrentOperationCount;
- (long long)policyMaxExpireSeconds;
- (_Bool)isAsyncTnetCallback;
- (_Bool)isN2EEnabled;
- (_Bool)isIPv6DetectEnabled;
- (_Bool)isIPStackUTEnabed;
- (_Bool)isIPv6BlackListEnabled;
- (_Bool)isLocalDNSEnabled;
- (_Bool)isHorseRaceEnabled;
- (_Bool)isAmdcForceOldType;
- (_Bool)isDispatch2CFNetworkWhenError:(id)arg1;
- (_Bool)isCFNetworkHttpEnabled:(id)arg1;
- (_Bool)isHttpsProxyEnabled;
- (_Bool)isSNICFNetworkEnabled;
- (_Bool)isForce2Https;
- (_Bool)isCacheEnabled;
- (_Bool)isNetworkOff;
- (_Bool)isAutoCompleteSchemeHttps;
- (void)updateNotification:(id)arg1;
- (void)setDefaultValue:(id)arg1 forKey:(id)arg2;
- (long long)orangeIntegerValue:(id)arg1;
- (_Bool)orangeBoolValue:(id)arg1;
- (id)orangeValue:(id)arg1;
- (id)init;

@end

