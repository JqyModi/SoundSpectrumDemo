//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NWBaseConnection.h"

#import "SPDYRequestDataDelegate-Protocol.h"

@class NSLock, NSString, NSThread, NWHostUrl, NWSPDYRequest, NWTnetSession;

@interface NWTnetConnection : NWBaseConnection <SPDYRequestDataDelegate>
{
    _Bool _isSSLError;
    int _retryType;
    NWHostUrl *_hostUrl;
    NWTnetSession *_session;
    NWSPDYRequest *_tnetRequest;
    NSThread *_invokeThread;
    NSLock *_requestLock;
}

+ (void)initialize;
@property(retain, nonatomic) NSLock *requestLock; // @synthesize requestLock=_requestLock;
@property(nonatomic) _Bool isSSLError; // @synthesize isSSLError=_isSSLError;
@property(nonatomic) int retryType; // @synthesize retryType=_retryType;
@property(nonatomic) __weak NSThread *invokeThread; // @synthesize invokeThread=_invokeThread;
@property(retain, nonatomic) NWSPDYRequest *tnetRequest; // @synthesize tnetRequest=_tnetRequest;
@property(retain, nonatomic) NWTnetSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NWHostUrl *hostUrl; // @synthesize hostUrl=_hostUrl;
- (void).cxx_destruct;
- (void)didFailWithError:(id)arg1;
- (void)didLoadFinishWithMetrics:(struct NAL_request_count_t *)arg1;
- (void)didLoadData:(id)arg1;
- (void)didReceiveResponse:(id)arg1;
- (id)willSendRequest:(id)arg1 redirectResponse:(id)arg2;
- (id)currentRequest:(id)arg1;
- (void)setIp:(id)arg1 withPort:(unsigned short)arg2 withProtocol:(id)arg3;
- (void)retry;
- (void)cancelInternal;
- (void)cancel;
- (void)start;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
