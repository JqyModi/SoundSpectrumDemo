//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CTTelephonyNetworkInfo, NSString;

@interface OrangeReachabilityManager : NSObject
{
    int _currentORGNetworkStatus;
    int _preORGNetworkStatus;
    struct __SCNetworkReachability *_reachabilityRef;
    NSString *ssid;
    CTTelephonyNetworkInfo *netInfo;
}

+ (_Bool)configureProxies;
+ (id)shareInstance;
- (void).cxx_destruct;
- (void)dealloc;
- (int)_ORGNetworkStatusForReachabilityFlags:(unsigned int)arg1;
- (int)currentORGNetworkStatusForiOS7:(int)arg1;
- (_Bool)checkInternetConnection;
- (int)_reachabilityStatus;
- (id)getWifiSSID;
- (id)currentORGNetworkStatusString;
- (int)preORGNetworkStatus;
- (int)currentORGNetworkStatus;
- (_Bool)_startNotifier;
- (id)init;

@end

