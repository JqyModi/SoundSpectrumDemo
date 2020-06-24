//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CNNetworkEventWatcher : NSObject
{
    _Bool _isCurrentWifiReachable;
    _Bool _isCurrentWWANReachable;
    int _currentCarrierType;
    int _currentNetworkType;
    int _currentCarrierProxyType;
    int _currentNetworkStack;
    NSString *_currentSsid;
}

+ (void)startWatch;
+ (id)defaultWatcher;
@property int currentNetworkStack; // @synthesize currentNetworkStack=_currentNetworkStack;
@property(retain) NSString *currentSsid; // @synthesize currentSsid=_currentSsid;
@property _Bool isCurrentWWANReachable; // @synthesize isCurrentWWANReachable=_isCurrentWWANReachable;
@property _Bool isCurrentWifiReachable; // @synthesize isCurrentWifiReachable=_isCurrentWifiReachable;
@property int currentCarrierProxyType; // @synthesize currentCarrierProxyType=_currentCarrierProxyType;
@property int currentNetworkType; // @synthesize currentNetworkType=_currentNetworkType;
@property int currentCarrierType; // @synthesize currentCarrierType=_currentCarrierType;
- (int)carrierProxyType;
- (int)carrierType;
- (int)networkType;
- (id)ssid;
- (_Bool)isNetworkReachable;
- (_Bool)isWWANReachable;
- (_Bool)isWifiReachable;
- (void)onU3ProxyOn:(_Bool)arg1;
- (int)networkStack;
- (void)onNetWorkStackChange:(int)arg1;
- (void)onU3ProxySwithURL:(const char *)arg1;
- (void)onNetWorkChangeWithNetworkType:(int)arg1 carrierType:(int)arg2 isWifiReachable:(_Bool)arg3 isWWANReachable:(_Bool)arg4 ssid:(id)arg5 carrierProxyType:(int)arg6;
- (basic_string_7c0a1c0b)stringFromCarrierType:(int)arg1;
- (void)onAppWillExit;
- (void)onAppSwitchToForeground;
- (void)onAppSwitchToBackground;
- (void)dealloc;

@end
