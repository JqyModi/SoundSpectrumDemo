//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NWStatisticPoint.h"

@class NWStatisticDimension, NWStatisticMeasure;

@interface NWPointStartup : NWStatisticPoint
{
    NWStatisticDimension *_dmNetType;
    NWStatisticDimension *_dmLoadType;
    NWStatisticDimension *_dmStMtop;
    NWStatisticDimension *_dmStCdn;
    NWStatisticDimension *_dmStDel;
    NWStatisticMeasure *_msFilesize;
    NWStatisticMeasure *_msHostCount;
    NWStatisticMeasure *_msLastSaveInterval;
    NWStatisticMeasure *_msLoadingTime;
}

+ (void)commit2appmonitor:(id)arg1;
+ (void)registerPointWithArg1:(id)arg1 withArg2:(id)arg2 withArg3:(id)arg3;
@property(retain, nonatomic) NWStatisticMeasure *msLoadingTime; // @synthesize msLoadingTime=_msLoadingTime;
@property(retain, nonatomic) NWStatisticMeasure *msLastSaveInterval; // @synthesize msLastSaveInterval=_msLastSaveInterval;
@property(retain, nonatomic) NWStatisticMeasure *msHostCount; // @synthesize msHostCount=_msHostCount;
@property(retain, nonatomic) NWStatisticMeasure *msFilesize; // @synthesize msFilesize=_msFilesize;
@property(retain, nonatomic) NWStatisticDimension *dmStDel; // @synthesize dmStDel=_dmStDel;
@property(retain, nonatomic) NWStatisticDimension *dmStCdn; // @synthesize dmStCdn=_dmStCdn;
@property(retain, nonatomic) NWStatisticDimension *dmStMtop; // @synthesize dmStMtop=_dmStMtop;
@property(retain, nonatomic) NWStatisticDimension *dmLoadType; // @synthesize dmLoadType=_dmLoadType;
@property(retain, nonatomic) NWStatisticDimension *dmNetType; // @synthesize dmNetType=_dmNetType;
- (void).cxx_destruct;
- (id)init;

@end

