//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, TiktokOpenPlatformWebAuthViewController;

@interface TikTokOpenPlatformServiceCenter : NSObject
{
    NSDictionary *_name2Service;
    NSDictionary *_reqCls2Service;
    NSMutableDictionary *_reqID2CallBack;
    TiktokOpenPlatformWebAuthViewController *_wezbAuthView;
}

+ (_Bool)p_checkOpenUrls:(id)arg1;
@property(retain, nonatomic) TiktokOpenPlatformWebAuthViewController *wezbAuthView; // @synthesize wezbAuthView=_wezbAuthView;
@property(retain, nonatomic) NSMutableDictionary *reqID2CallBack; // @synthesize reqID2CallBack=_reqID2CallBack;
@property(copy, nonatomic) NSDictionary *reqCls2Service; // @synthesize reqCls2Service=_reqCls2Service;
@property(copy, nonatomic) NSDictionary *name2Service; // @synthesize name2Service=_name2Service;
- (void).cxx_destruct;
- (void)p_registerServiceClass:(Class)arg1;
- (void)p_setupService;
- (_Bool)sendAuthRequest:(id)arg1 webFirst:(_Bool)arg2 viewController:(id)arg3 completeBlock:(CDUnknownBlockType)arg4;
- (_Bool)isSupportWebAuth:(id)arg1;
- (void)sendWebAuthRequest:(id)arg1 viewController:(id)arg2 completed:(CDUnknownBlockType)arg3;
- (_Bool)sendRequest:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (_Bool)handleOpenURL:(id)arg1;
- (id)init;

@end

