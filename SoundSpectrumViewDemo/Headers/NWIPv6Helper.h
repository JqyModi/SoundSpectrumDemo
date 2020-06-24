//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NWTimer;
@protocol OS_dispatch_queue;

@interface NWIPv6Helper : NSObject
{
    int _ipStackType;
    NSString *_ipv4onlyArpa;
    NSObject<OS_dispatch_queue> *_ipStackDetectingQueue;
    NWTimer *_timer;
    unsigned long long _detectedTimes;
}

+ (_Bool)isIPv6address:(id)arg1;
+ (_Bool)isIPv4address:(id)arg1;
+ (_Bool)deviceSystemIsLargeIOS9;
+ (id)sharedInstance;
@property unsigned long long detectedTimes; // @synthesize detectedTimes=_detectedTimes;
@property(retain, nonatomic) NWTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) int ipStackType; // @synthesize ipStackType=_ipStackType;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ipStackDetectingQueue; // @synthesize ipStackDetectingQueue=_ipStackDetectingQueue;
@property(retain) NSString *ipv4onlyArpa; // @synthesize ipv4onlyArpa=_ipv4onlyArpa;
- (void).cxx_destruct;
- (void)reset;
- (id)convertIPv4toIPv6:(id)arg1;
- (_Bool)isIPv6only;
- (int)currentDnsIPStackType;
- (int)detectIpStack;
- (void)redetect;
- (int)currentIpStackType;
- (id)init;

@end

