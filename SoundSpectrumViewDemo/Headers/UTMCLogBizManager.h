//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UTMCConfigInterfaceUpdate-Protocol.h"

@class NSString, UTMCRealTimeGarreryDispatcher;
@protocol OS_dispatch_queue, UTMCDispatcher;

@interface UTMCLogBizManager : NSObject <UTMCConfigInterfaceUpdate>
{
    long long uploadInterval;
    NSObject<OS_dispatch_queue> *storeQueue;
    NSObject<UTMCDispatcher> *_dispatcher;
    UTMCRealTimeGarreryDispatcher *_realTimeGalleryDispatcher;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedUTMCLogBizManager;
@property(retain, nonatomic) UTMCRealTimeGarreryDispatcher *realTimeGalleryDispatcher; // @synthesize realTimeGalleryDispatcher=_realTimeGalleryDispatcher;
@property(retain, nonatomic) NSObject<UTMCDispatcher> *dispatcher; // @synthesize dispatcher=_dispatcher;
- (void).cxx_destruct;
- (void)flushLogToDB;
- (void)updateSysConfigValue:(id)arg1 sysKey:(id)arg2;
- (void)setUploadInterval:(long long)arg1;
- (void)cleanDebuger;
- (_Bool)addDebugerWithURL:(id)arg1;
- (void)addLog:(id)arg1;
- (void)syncAddLog:(id)arg1;
- (void)asyncAddLog:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

