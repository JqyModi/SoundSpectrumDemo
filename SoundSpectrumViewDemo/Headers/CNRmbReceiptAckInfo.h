//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CNRmbReceiptAckInfo : NSObject
{
    _Bool _shouldSendAck;
    _Bool _shouldStatisticAck;
    int _status;
    int _ackType;
    NSString *_appId;
    NSString *_ds;
    NSString *_dsType;
    NSString *_pushId;
    NSString *_cbInfoStr;
    NSString *_channelId;
    NSString *_queueId;
    NSString *_userId;
    long long _seq;
}

+ (id)rmbAckInfoWithPushId:(id)arg1 statusCode:(int)arg2 ackType:(int)arg3 cbInfoStr:(id)arg4 channelId:(id)arg5 queueId:(id)arg6 userId:(id)arg7 seq:(long long)arg8;
+ (id)rmbAckInfoWithPushId:(id)arg1 statusCode:(int)arg2 ackType:(int)arg3 cbInfoStr:(id)arg4 channelId:(id)arg5;
@property(nonatomic) _Bool shouldStatisticAck; // @synthesize shouldStatisticAck=_shouldStatisticAck;
@property(nonatomic) _Bool shouldSendAck; // @synthesize shouldSendAck=_shouldSendAck;
@property(nonatomic) long long seq; // @synthesize seq=_seq;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *queueId; // @synthesize queueId=_queueId;
@property(retain, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
@property(retain, nonatomic) NSString *cbInfoStr; // @synthesize cbInfoStr=_cbInfoStr;
@property(retain, nonatomic) NSString *pushId; // @synthesize pushId=_pushId;
@property(retain, nonatomic) NSString *dsType; // @synthesize dsType=_dsType;
@property(retain, nonatomic) NSString *ds; // @synthesize ds=_ds;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) int ackType; // @synthesize ackType=_ackType;
@property(nonatomic) int status; // @synthesize status=_status;
- (id)description;
- (id)getJsonData;
- (id)getJsonDictionary;
- (void)setAppID:(id)arg1 ds:(id)arg2 dsType:(id)arg3;
- (void)dealloc;

@end

