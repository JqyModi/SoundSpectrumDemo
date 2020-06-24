//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"
#import "SPDYRequestDataDelegate-Protocol.h"
#import "SPDYSessionDelegate-Protocol.h"

@class NSArray, NSObject, NSString, NWPointRaceStat;
@protocol OS_dispatch_semaphore;

@interface NWPolicyRaceOperation : NSOperation <NSURLSessionDelegate, NSURLSessionDataDelegate, SPDYSessionDelegate, SPDYRequestDataDelegate>
{
    NSString *_host;
    NSArray *_policyList;
    long long _state;
    NSObject<OS_dispatch_semaphore> *_waitSemaphore;
    NWPointRaceStat *_longRaceStat;
    double _longConnStartTime;
    double _longReqStartTime;
}

@property(nonatomic) double longReqStartTime; // @synthesize longReqStartTime=_longReqStartTime;
@property(nonatomic) double longConnStartTime; // @synthesize longConnStartTime=_longConnStartTime;
@property(retain, nonatomic) NWPointRaceStat *longRaceStat; // @synthesize longRaceStat=_longRaceStat;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *waitSemaphore; // @synthesize waitSemaphore=_waitSemaphore;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSArray *policyList; // @synthesize policyList=_policyList;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)didLoadFinishWithMetrics:(struct NAL_request_count_t *)arg1;
- (void)didLoadData:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)didReceiveResponse:(id)arg1;
- (id)willSendRequest:(id)arg1 redirectResponse:(id)arg2;
- (void)close:(id)arg1 error:(id)arg2;
- (void)onConnFail:(id)arg1 error:(id)arg2;
- (void)onConnect:(id)arg1;
- (id)getPointStatByPolicy:(id)arg1;
- (id)convertRacePolicyToPolicyResult:(id)arg1;
- (id)generateRaceURLRequest:(id)arg1 isLong:(_Bool)arg2;
- (void)runPing6:(id)arg1;
- (void)runTCPRace:(id)arg1;
- (void)runLongRace:(id)arg1;
- (void)runShortRace:(id)arg1;
- (void)dispatchRacePolicy:(id)arg1;
- (_Bool)isPolicyValid:(id)arg1;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isReady;
- (_Bool)isAsynchronous;
- (void)start;
- (id)initWithHost:(id)arg1 policyList:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
