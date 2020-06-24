//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, TikTokOpenPlatformServiceCenter;
@protocol TikTokOpenPlatformLogDelegate;

@interface TiktokOpenPlatformApplicationDelegate : NSObject
{
    id <TikTokOpenPlatformLogDelegate> _logDelegate;
    TikTokOpenPlatformServiceCenter *_serviceCenter;
    NSDictionary *_apptype2appId;
    NSDictionary *_openPlatformInfo;
}

+ (_Bool)p_checkOpenUrls:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *openPlatformInfo; // @synthesize openPlatformInfo=_openPlatformInfo;
@property(copy, nonatomic) NSDictionary *apptype2appId; // @synthesize apptype2appId=_apptype2appId;
@property(retain, nonatomic) TikTokOpenPlatformServiceCenter *serviceCenter; // @synthesize serviceCenter=_serviceCenter;
@property(nonatomic) __weak id <TikTokOpenPlatformLogDelegate> logDelegate; // @synthesize logDelegate=_logDelegate;
- (void).cxx_destruct;
- (void)onLog:(long long)arg1 Info:(id)arg2;
- (_Bool)sendAuthRequest:(id)arg1 webFirst:(_Bool)arg2 viewController:(id)arg3 completeBlock:(CDUnknownBlockType)arg4;
- (_Bool)sendRequest:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (_Bool)isSupportModule:(long long)arg1 appType:(long long)arg2;
- (_Bool)isAppInstalledWithAppType:(long long)arg1;
@property(readonly, copy, nonatomic) NSString *currentVersion;
- (void)p_setupSDKInfo;
- (_Bool)registerAppId:(id)arg1 appType:(long long)arg2;
- (id)appIdWithAppType:(long long)arg1;
- (id)iTunesUrlWithAppType:(long long)arg1;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (id)init;

@end
