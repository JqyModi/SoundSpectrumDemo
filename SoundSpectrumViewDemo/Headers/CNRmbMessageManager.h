//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CNRmbMessageManager : NSObject
{
    void *IsOnSyncRMBQueueKey;
    NSString *_upaasAppKey;
    NSString *_dsType;
    NSString *_ds;
    NSString *_syncServerUrl;
    NSString *_rmbAckInfoFilePath;
    long long _rmbMessagePushIdCacheLimited;
    NSLock *_lockRmbCache;
    NSMutableArray *_rmbMessagePushIds;
    NSMutableDictionary *_rmbChannelInfos;
    NSObject<OS_dispatch_queue> *_syncRmbMessageQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncRmbMessageQueue; // @synthesize syncRmbMessageQueue=_syncRmbMessageQueue;
@property(retain, nonatomic) NSMutableDictionary *rmbChannelInfos; // @synthesize rmbChannelInfos=_rmbChannelInfos;
@property(retain, nonatomic) NSMutableArray *rmbMessagePushIds; // @synthesize rmbMessagePushIds=_rmbMessagePushIds;
@property(retain, nonatomic) NSLock *lockRmbCache; // @synthesize lockRmbCache=_lockRmbCache;
@property(nonatomic) long long rmbMessagePushIdCacheLimited; // @synthesize rmbMessagePushIdCacheLimited=_rmbMessagePushIdCacheLimited;
@property(copy, nonatomic) NSString *rmbAckInfoFilePath; // @synthesize rmbAckInfoFilePath=_rmbAckInfoFilePath;
@property(copy, nonatomic) NSString *syncServerUrl; // @synthesize syncServerUrl=_syncServerUrl;
@property(copy, nonatomic) NSString *ds; // @synthesize ds=_ds;
@property(copy, nonatomic) NSString *dsType; // @synthesize dsType=_dsType;
@property(copy, nonatomic) NSString *upaasAppKey; // @synthesize upaasAppKey=_upaasAppKey;
- (id)readAckInfoFromFile;
- (void)writeRmbAckInfoToFile:(id)arg1;
- (id)initRmbAckInfoFilePath;
- (void)readRmbBizInfoFromFile:(id)arg1;
- (void)saveRmbBizInfoToFile:(id)arg1;
- (void)statisticRmbReceiptAck:(id)arg1;
- (void)sendRmbReceiptAck:(id)arg1;
- (void)handleRmbReceiptAck:(id)arg1;
- (_Bool)checkPushIdExistInCache:(id)arg1;
- (id)getMessageValueForKey:(id)arg1 onMessageDict:(id)arg2;
- (void)_syncRmbJobWithServiceId:(id)arg1 targetQueueId:(id)arg2;
- (void)syncRmbSortedMessageWithServiceId:(id)arg1 queueId:(id)arg2;
- (void)rmbPullAllOnlineBizMessage;
- (id)getAllRmbBizInfos;
- (void)addRmbBizInfo:(id)arg1 forServiceId:(id)arg2;
- (_Bool)updateRmbBizInfo:(id)arg1 serviceId:(id)arg2 userId:(id)arg3 disableSync:(_Bool)arg4;
- (id)removeRmbBizInfoForServiceId:(id)arg1;
- (id)getRmbBizInfoForServiceId:(id)arg1;
- (void)rmbSyncServicesOnlineStatus;
- (_Bool)isRmbBizOnlineWithBizId:(id)arg1 servicesId:(id)arg2 userId:(id)arg3;
- (void)rmbOnlineBizId:(id)arg1 servicesId:(id)arg2 userId:(id)arg3 disableSync:(_Bool)arg4;
- (void)handleSortedMessage:(id)arg1 shouldSendAck:(_Bool)arg2 shouldStatisticAck:(_Bool)arg3;
- (void)didReceivedRmbMessageData:(id)arg1;
@property(readonly, nonatomic) _Bool isOnSyncRmbMessageQueue;
- (void)dealloc;
- (id)init;

@end

