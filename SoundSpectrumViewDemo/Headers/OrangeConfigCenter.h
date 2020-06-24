//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSRecursiveLock, NSString, NSTimer, OrangeConfigObj;

@interface OrangeConfigCenter : NSObject
{
    _Bool _isNeedReport;
    _Bool _isDowngradeIdle;
    _Bool _isUSECustomHosts;
    unsigned long long _env;
    NSString *_cdnMaxRetry;
    double _localTimeStamp;
    double _timeOffet;
    long long _updateMode;
    NSArray *_dataCenterVIP;
    NSArray *_ackReportVIP;
    NSArray *_accsAilse;
    NSArray *_domainList;
    unsigned long long _delayInterval;
    NSRecursiveLock *_lock;
    OrangeConfigObj *_configObj;
    NSTimer *_timer;
}

+ (id)sharedInstanceWithMode:(long long)arg1 customConfig:(id)arg2;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) OrangeConfigObj *configObj; // @synthesize configObj=_configObj;
@property(nonatomic) _Bool isUSECustomHosts; // @synthesize isUSECustomHosts=_isUSECustomHosts;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property unsigned long long delayInterval; // @synthesize delayInterval=_delayInterval;
@property _Bool isDowngradeIdle; // @synthesize isDowngradeIdle=_isDowngradeIdle;
@property _Bool isNeedReport; // @synthesize isNeedReport=_isNeedReport;
@property(retain) NSArray *domainList; // @synthesize domainList=_domainList;
@property(retain) NSArray *accsAilse; // @synthesize accsAilse=_accsAilse;
@property(retain) NSArray *ackReportVIP; // @synthesize ackReportVIP=_ackReportVIP;
@property(retain) NSArray *dataCenterVIP; // @synthesize dataCenterVIP=_dataCenterVIP;
@property(readonly) long long updateMode; // @synthesize updateMode=_updateMode;
@property double timeOffet; // @synthesize timeOffet=_timeOffet;
@property(nonatomic) double localTimeStamp; // @synthesize localTimeStamp=_localTimeStamp;
@property(readonly) NSString *cdnMaxRetry; // @synthesize cdnMaxRetry=_cdnMaxRetry;
@property(nonatomic) unsigned long long env; // @synthesize env=_env;
- (void).cxx_destruct;
- (id)toArrayOrNSDictionary:(id)arg1;
- (id)getAccsHost;
@property(readonly, copy, nonatomic) NSString *deviceID;
@property(readonly, copy, nonatomic) NSString *appVersion;
@property(readonly, copy, nonatomic) NSString *appkey;
- (id)getApiServerDomain:(unsigned long long)arg1;
- (void)resolveConfigList:(id)arg1;
- (void)updateConfig:(id)arg1;
- (void)initWhiteList;
- (void)timerAction;
- (void)initIdleTask:(double)arg1;
- (id)initWithMode:(long long)arg1 customConfig:(id)arg2;

@end
