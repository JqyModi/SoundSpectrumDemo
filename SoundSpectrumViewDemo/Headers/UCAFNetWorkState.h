//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface UCAFNetWorkState : NSObject
{
    _Bool isCurrentWifiReachable;
    _Bool isCurrentWWANReachable;
    _Bool isCurrentNetworkReachable;
    int currentCarrierType;
    int currentNetworkType;
    int currentCarrierProxyType;
    unsigned int _proxyPort;
    int _currentAddrType;
    NSString *m_CurrentSSID;
    NSString *_proxyAddr;
}

@property(nonatomic) int currentAddrType; // @synthesize currentAddrType=_currentAddrType;
@property(nonatomic) unsigned int proxyPort; // @synthesize proxyPort=_proxyPort;
@property(retain, nonatomic) NSString *proxyAddr; // @synthesize proxyAddr=_proxyAddr;
@property(retain, nonatomic) NSString *currentSSID; // @synthesize currentSSID=m_CurrentSSID;
@property(nonatomic) _Bool isCurrentNetworkReachable; // @synthesize isCurrentNetworkReachable;
@property(nonatomic) _Bool isCurrentWWANReachable; // @synthesize isCurrentWWANReachable;
@property(nonatomic) _Bool isCurrentWifiReachable; // @synthesize isCurrentWifiReachable;
@property(nonatomic) int currentCarrierProxyType; // @synthesize currentCarrierProxyType;
@property(nonatomic) int currentNetworkType; // @synthesize currentNetworkType;
@property(nonatomic) int currentCarrierType; // @synthesize currentCarrierType;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualTo:(id)arg1;

@end

