//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AgoraLastmileProbeOneWayResult;

@interface AgoraLastmileProbeResult : NSObject
{
    unsigned long long _state;
    unsigned long long _rtt;
    AgoraLastmileProbeOneWayResult *_uplinkReport;
    AgoraLastmileProbeOneWayResult *_downlinkReport;
}

@property(retain, nonatomic) AgoraLastmileProbeOneWayResult *downlinkReport; // @synthesize downlinkReport=_downlinkReport;
@property(retain, nonatomic) AgoraLastmileProbeOneWayResult *uplinkReport; // @synthesize uplinkReport=_uplinkReport;
@property(nonatomic) unsigned long long rtt; // @synthesize rtt=_rtt;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;

@end
