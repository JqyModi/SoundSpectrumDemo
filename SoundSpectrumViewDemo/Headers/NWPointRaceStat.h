//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NWStatisticPoint.h"

@class NWStatisticDimension, NWStatisticMeasure;

@interface NWPointRaceStat : NWStatisticPoint
{
    NWStatisticDimension *_dmHost;
    NWStatisticDimension *_dmNetType;
    NWStatisticDimension *_dmMnc;
    NWStatisticDimension *_dmBssid;
    NWStatisticDimension *_dmIp;
    NWStatisticDimension *_dmPort;
    NWStatisticDimension *_dmProtocol;
    NWStatisticDimension *_dmConnRet;
    NWStatisticDimension *_dmConnErrorCode;
    NWStatisticDimension *_dmPath;
    NWStatisticDimension *_dmReqRet;
    NWStatisticDimension *_dmReqErrorCode;
    NWStatisticDimension *_dmLocalIP;
    NWStatisticDimension *_dmPingSuccessCnt;
    NWStatisticDimension *_dmPingTimeoutCnt;
    NWStatisticMeasure *_msConnTime;
    NWStatisticMeasure *_msReqTime;
}

+ (void)commit2appmonitor:(id)arg1;
+ (void)registerPointWithArg1:(id)arg1 withArg2:(id)arg2 withArg3:(id)arg3;
@property(retain, nonatomic) NWStatisticMeasure *msReqTime; // @synthesize msReqTime=_msReqTime;
@property(retain, nonatomic) NWStatisticMeasure *msConnTime; // @synthesize msConnTime=_msConnTime;
@property(retain, nonatomic) NWStatisticDimension *dmPingTimeoutCnt; // @synthesize dmPingTimeoutCnt=_dmPingTimeoutCnt;
@property(retain, nonatomic) NWStatisticDimension *dmPingSuccessCnt; // @synthesize dmPingSuccessCnt=_dmPingSuccessCnt;
@property(retain, nonatomic) NWStatisticDimension *dmLocalIP; // @synthesize dmLocalIP=_dmLocalIP;
@property(retain, nonatomic) NWStatisticDimension *dmReqErrorCode; // @synthesize dmReqErrorCode=_dmReqErrorCode;
@property(retain, nonatomic) NWStatisticDimension *dmReqRet; // @synthesize dmReqRet=_dmReqRet;
@property(retain, nonatomic) NWStatisticDimension *dmPath; // @synthesize dmPath=_dmPath;
@property(retain, nonatomic) NWStatisticDimension *dmConnErrorCode; // @synthesize dmConnErrorCode=_dmConnErrorCode;
@property(retain, nonatomic) NWStatisticDimension *dmConnRet; // @synthesize dmConnRet=_dmConnRet;
@property(retain, nonatomic) NWStatisticDimension *dmProtocol; // @synthesize dmProtocol=_dmProtocol;
@property(retain, nonatomic) NWStatisticDimension *dmPort; // @synthesize dmPort=_dmPort;
@property(retain, nonatomic) NWStatisticDimension *dmIp; // @synthesize dmIp=_dmIp;
@property(retain, nonatomic) NWStatisticDimension *dmBssid; // @synthesize dmBssid=_dmBssid;
@property(retain, nonatomic) NWStatisticDimension *dmMnc; // @synthesize dmMnc=_dmMnc;
@property(retain, nonatomic) NWStatisticDimension *dmNetType; // @synthesize dmNetType=_dmNetType;
@property(retain, nonatomic) NWStatisticDimension *dmHost; // @synthesize dmHost=_dmHost;
- (void).cxx_destruct;
- (id)init;

@end

