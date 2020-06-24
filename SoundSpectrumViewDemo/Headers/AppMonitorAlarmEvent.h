//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AppMonitorEvent.h"

@class NSLock, NSMutableDictionary;

@interface AppMonitorAlarmEvent : AppMonitorEvent
{
    long long _successCount;
    long long _failCount;
    NSMutableDictionary *_errorMsgDict;
    NSMutableDictionary *_errorCodeCountDict;
    NSLock *_lock;
}

@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *errorCodeCountDict; // @synthesize errorCodeCountDict=_errorCodeCountDict;
@property(retain, nonatomic) NSMutableDictionary *errorMsgDict; // @synthesize errorMsgDict=_errorMsgDict;
@property(nonatomic) long long failCount; // @synthesize failCount=_failCount;
@property(nonatomic) long long successCount; // @synthesize successCount=_successCount;
- (void).cxx_destruct;
- (void)addErrorWithErrorCode:(id)arg1 errorMsg:(id)arg2;
- (void)incrFail:(long long)arg1;
- (void)incrSuccess:(long long)arg1;
- (id)jsonDict;
- (id)initWithEventId:(id)arg1 module:(id)arg2 monitorPoint:(id)arg3;

@end

