//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NWStatisticPoint.h"

@class NWStatisticDimension;

@interface NWPointQueryPolicy : NWStatisticPoint
{
    NWStatisticDimension *_dmHost;
    NWStatisticDimension *_dmIp;
    NWStatisticDimension *_dmFrom;
}

+ (void)commit2appmonitor:(id)arg1;
+ (void)registerPointWithArg1:(id)arg1 withArg2:(id)arg2 withArg3:(id)arg3;
@property(retain, nonatomic) NWStatisticDimension *dmFrom; // @synthesize dmFrom=_dmFrom;
@property(retain, nonatomic) NWStatisticDimension *dmIp; // @synthesize dmIp=_dmIp;
@property(retain, nonatomic) NWStatisticDimension *dmHost; // @synthesize dmHost=_dmHost;
- (void).cxx_destruct;
- (id)init;

@end

