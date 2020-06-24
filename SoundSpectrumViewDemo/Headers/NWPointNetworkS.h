//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NWStatisticPoint.h"

@class NWStatisticDimension, NWStatisticMeasure;

@interface NWPointNetworkS : NWStatisticPoint
{
    NWStatisticDimension *_dmNetType;
    NWStatisticDimension *_dmIp;
    NWStatisticDimension *_dmPort;
    NWStatisticDimension *_dmIpRefer;
    NWStatisticDimension *_dmIpType;
    NWStatisticDimension *_dmProtocolType;
    NWStatisticDimension *_dmHost;
    NWStatisticDimension *_dmContentEncoding;
    NWStatisticDimension *_dmContentType;
    NWStatisticDimension *_dmErrorTrace;
    NWStatisticDimension *_dmErrorCode;
    NWStatisticDimension *_dmErrorMsg;
    NWStatisticDimension *_dmBizId;
    NWStatisticDimension *_dmFrefer;
    NWStatisticDimension *_dmDegraded;
    NWStatisticDimension *_dmLatitude;
    NWStatisticDimension *_dmLongitude;
    NWStatisticDimension *_dmAccuracy;
    NWStatisticDimension *_dmRoaming;
    NWStatisticDimension *_dmIsProxy;
    NWStatisticDimension *_dmRetryTimes;
    NWStatisticDimension *_dmBSSID;
    NWStatisticDimension *_dmURL;
    NWStatisticDimension *_dmUnit;
    NWStatisticDimension *_dmMnc;
    NWStatisticDimension *_dmRet;
    NWStatisticDimension *_dmExtra;
    NWStatisticDimension *_dmIsCallbackOnMain;
    NWStatisticDimension *_dmStartType;
    NWStatisticDimension *_dmPriority;
    NWStatisticDimension *_dmSinceInitTime;
    NWStatisticDimension *_dmSinceLastLaunchTime;
    NWStatisticMeasure *_msReqHeadDeflateSize;
    NWStatisticMeasure *_msReqBodyDeflateSize;
    NWStatisticMeasure *_msReqHeadInflateSize;
    NWStatisticMeasure *_msReqBodyInflateSize;
    NWStatisticMeasure *_msRspHeadDeflateSize;
    NWStatisticMeasure *_msRspBodyDeflateSize;
    NWStatisticMeasure *_msRspHeadInflateSize;
    NWStatisticMeasure *_msRspBodyInflateSize;
    NWStatisticMeasure *_msSendDataSize;
    NWStatisticMeasure *_msRecvDataSize;
    NWStatisticMeasure *_msOneWayTime;
    NWStatisticMeasure *_msConnWaitTime;
    NWStatisticMeasure *_msCacheTime;
    NWStatisticMeasure *_msSendBeforeTime;
    NWStatisticMeasure *_msSendDataTime;
    NWStatisticMeasure *_msFirstDataTime;
    NWStatisticMeasure *_msRecvDataTime;
    NWStatisticMeasure *_msServerRunTime;
    NWStatisticMeasure *_msProcessTime;
    NWStatisticMeasure *_msLastProcessTime;
    NWStatisticMeasure *_msRetryCostTime;
    NWStatisticMeasure *_msCallbackTime;
}

+ (void)commit2appmonitor:(id)arg1;
+ (void)registerPointWithArg1:(id)arg1 withArg2:(id)arg2 withArg3:(id)arg3;
@property(retain, nonatomic) NWStatisticMeasure *msCallbackTime; // @synthesize msCallbackTime=_msCallbackTime;
@property(retain, nonatomic) NWStatisticMeasure *msRetryCostTime; // @synthesize msRetryCostTime=_msRetryCostTime;
@property(retain, nonatomic) NWStatisticMeasure *msLastProcessTime; // @synthesize msLastProcessTime=_msLastProcessTime;
@property(retain, nonatomic) NWStatisticMeasure *msProcessTime; // @synthesize msProcessTime=_msProcessTime;
@property(retain, nonatomic) NWStatisticMeasure *msServerRunTime; // @synthesize msServerRunTime=_msServerRunTime;
@property(retain, nonatomic) NWStatisticMeasure *msRecvDataTime; // @synthesize msRecvDataTime=_msRecvDataTime;
@property(retain, nonatomic) NWStatisticMeasure *msFirstDataTime; // @synthesize msFirstDataTime=_msFirstDataTime;
@property(retain, nonatomic) NWStatisticMeasure *msSendDataTime; // @synthesize msSendDataTime=_msSendDataTime;
@property(retain, nonatomic) NWStatisticMeasure *msSendBeforeTime; // @synthesize msSendBeforeTime=_msSendBeforeTime;
@property(retain, nonatomic) NWStatisticMeasure *msCacheTime; // @synthesize msCacheTime=_msCacheTime;
@property(retain, nonatomic) NWStatisticMeasure *msConnWaitTime; // @synthesize msConnWaitTime=_msConnWaitTime;
@property(retain, nonatomic) NWStatisticMeasure *msOneWayTime; // @synthesize msOneWayTime=_msOneWayTime;
@property(retain, nonatomic) NWStatisticMeasure *msRecvDataSize; // @synthesize msRecvDataSize=_msRecvDataSize;
@property(retain, nonatomic) NWStatisticMeasure *msSendDataSize; // @synthesize msSendDataSize=_msSendDataSize;
@property(retain, nonatomic) NWStatisticMeasure *msRspBodyInflateSize; // @synthesize msRspBodyInflateSize=_msRspBodyInflateSize;
@property(retain, nonatomic) NWStatisticMeasure *msRspHeadInflateSize; // @synthesize msRspHeadInflateSize=_msRspHeadInflateSize;
@property(retain, nonatomic) NWStatisticMeasure *msRspBodyDeflateSize; // @synthesize msRspBodyDeflateSize=_msRspBodyDeflateSize;
@property(retain, nonatomic) NWStatisticMeasure *msRspHeadDeflateSize; // @synthesize msRspHeadDeflateSize=_msRspHeadDeflateSize;
@property(retain, nonatomic) NWStatisticMeasure *msReqBodyInflateSize; // @synthesize msReqBodyInflateSize=_msReqBodyInflateSize;
@property(retain, nonatomic) NWStatisticMeasure *msReqHeadInflateSize; // @synthesize msReqHeadInflateSize=_msReqHeadInflateSize;
@property(retain, nonatomic) NWStatisticMeasure *msReqBodyDeflateSize; // @synthesize msReqBodyDeflateSize=_msReqBodyDeflateSize;
@property(retain, nonatomic) NWStatisticMeasure *msReqHeadDeflateSize; // @synthesize msReqHeadDeflateSize=_msReqHeadDeflateSize;
@property(retain, nonatomic) NWStatisticDimension *dmSinceLastLaunchTime; // @synthesize dmSinceLastLaunchTime=_dmSinceLastLaunchTime;
@property(retain, nonatomic) NWStatisticDimension *dmSinceInitTime; // @synthesize dmSinceInitTime=_dmSinceInitTime;
@property(retain, nonatomic) NWStatisticDimension *dmPriority; // @synthesize dmPriority=_dmPriority;
@property(retain, nonatomic) NWStatisticDimension *dmStartType; // @synthesize dmStartType=_dmStartType;
@property(retain, nonatomic) NWStatisticDimension *dmIsCallbackOnMain; // @synthesize dmIsCallbackOnMain=_dmIsCallbackOnMain;
@property(retain, nonatomic) NWStatisticDimension *dmExtra; // @synthesize dmExtra=_dmExtra;
@property(retain, nonatomic) NWStatisticDimension *dmRet; // @synthesize dmRet=_dmRet;
@property(retain, nonatomic) NWStatisticDimension *dmMnc; // @synthesize dmMnc=_dmMnc;
@property(retain, nonatomic) NWStatisticDimension *dmUnit; // @synthesize dmUnit=_dmUnit;
@property(retain, nonatomic) NWStatisticDimension *dmURL; // @synthesize dmURL=_dmURL;
@property(retain, nonatomic) NWStatisticDimension *dmBSSID; // @synthesize dmBSSID=_dmBSSID;
@property(retain, nonatomic) NWStatisticDimension *dmRetryTimes; // @synthesize dmRetryTimes=_dmRetryTimes;
@property(retain, nonatomic) NWStatisticDimension *dmIsProxy; // @synthesize dmIsProxy=_dmIsProxy;
@property(retain, nonatomic) NWStatisticDimension *dmRoaming; // @synthesize dmRoaming=_dmRoaming;
@property(retain, nonatomic) NWStatisticDimension *dmAccuracy; // @synthesize dmAccuracy=_dmAccuracy;
@property(retain, nonatomic) NWStatisticDimension *dmLongitude; // @synthesize dmLongitude=_dmLongitude;
@property(retain, nonatomic) NWStatisticDimension *dmLatitude; // @synthesize dmLatitude=_dmLatitude;
@property(retain, nonatomic) NWStatisticDimension *dmDegraded; // @synthesize dmDegraded=_dmDegraded;
@property(retain, nonatomic) NWStatisticDimension *dmFrefer; // @synthesize dmFrefer=_dmFrefer;
@property(retain, nonatomic) NWStatisticDimension *dmBizId; // @synthesize dmBizId=_dmBizId;
@property(retain, nonatomic) NWStatisticDimension *dmErrorMsg; // @synthesize dmErrorMsg=_dmErrorMsg;
@property(retain, nonatomic) NWStatisticDimension *dmErrorCode; // @synthesize dmErrorCode=_dmErrorCode;
@property(retain, nonatomic) NWStatisticDimension *dmErrorTrace; // @synthesize dmErrorTrace=_dmErrorTrace;
@property(retain, nonatomic) NWStatisticDimension *dmContentType; // @synthesize dmContentType=_dmContentType;
@property(retain, nonatomic) NWStatisticDimension *dmContentEncoding; // @synthesize dmContentEncoding=_dmContentEncoding;
@property(retain, nonatomic) NWStatisticDimension *dmHost; // @synthesize dmHost=_dmHost;
@property(retain, nonatomic) NWStatisticDimension *dmProtocolType; // @synthesize dmProtocolType=_dmProtocolType;
@property(retain, nonatomic) NWStatisticDimension *dmIpType; // @synthesize dmIpType=_dmIpType;
@property(retain, nonatomic) NWStatisticDimension *dmIpRefer; // @synthesize dmIpRefer=_dmIpRefer;
@property(retain, nonatomic) NWStatisticDimension *dmPort; // @synthesize dmPort=_dmPort;
@property(retain, nonatomic) NWStatisticDimension *dmIp; // @synthesize dmIp=_dmIp;
@property(retain, nonatomic) NWStatisticDimension *dmNetType; // @synthesize dmNetType=_dmNetType;
- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1;
- (id)initWithPointNetwork:(id)arg1;

@end

