//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NWStatisticPoint.h"

@class NWStatisticDimension, NWStatisticMeasure;

@interface NWPointError : NWStatisticPoint
{
    NWStatisticDimension *_dmNetType;
    NWStatisticDimension *_dmHost;
    NWStatisticDimension *_dmIp;
    NWStatisticDimension *_dmPort;
    NWStatisticDimension *_dmProtocolType;
    NWStatisticDimension *_dmIsProxy;
    NWStatisticDimension *_dmIsIpv6;
    NWStatisticDimension *_dmRetryTimes;
    NWStatisticDimension *_dmErrorCode;
    NWStatisticDimension *_dmErrorMsg;
    NWStatisticDimension *_dmErrorType;
    NWStatisticMeasure *_msTotalTime;
}

+ (void)commit2appmonitor:(id)arg1;
+ (void)registerPointWithArg1:(id)arg1 withArg2:(id)arg2 withArg3:(id)arg3;
@property(retain, nonatomic) NWStatisticMeasure *msTotalTime; // @synthesize msTotalTime=_msTotalTime;
@property(retain, nonatomic) NWStatisticDimension *dmErrorType; // @synthesize dmErrorType=_dmErrorType;
@property(retain, nonatomic) NWStatisticDimension *dmErrorMsg; // @synthesize dmErrorMsg=_dmErrorMsg;
@property(retain, nonatomic) NWStatisticDimension *dmErrorCode; // @synthesize dmErrorCode=_dmErrorCode;
@property(retain, nonatomic) NWStatisticDimension *dmRetryTimes; // @synthesize dmRetryTimes=_dmRetryTimes;
@property(retain, nonatomic) NWStatisticDimension *dmIsIpv6; // @synthesize dmIsIpv6=_dmIsIpv6;
@property(retain, nonatomic) NWStatisticDimension *dmIsProxy; // @synthesize dmIsProxy=_dmIsProxy;
@property(retain, nonatomic) NWStatisticDimension *dmProtocolType; // @synthesize dmProtocolType=_dmProtocolType;
@property(retain, nonatomic) NWStatisticDimension *dmPort; // @synthesize dmPort=_dmPort;
@property(retain, nonatomic) NWStatisticDimension *dmIp; // @synthesize dmIp=_dmIp;
@property(retain, nonatomic) NWStatisticDimension *dmHost; // @synthesize dmHost=_dmHost;
@property(retain, nonatomic) NWStatisticDimension *dmNetType; // @synthesize dmNetType=_dmNetType;
- (void).cxx_destruct;
- (id)init;

@end

