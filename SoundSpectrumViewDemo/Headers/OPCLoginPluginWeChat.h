//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OPCLoginPlugin-Protocol.h"
#import "WXApiDelegate-Protocol.h"

@class NSDictionary, NSString;

@interface OPCLoginPluginWeChat : NSObject <OPCLoginPlugin, WXApiDelegate>
{
    _Bool _isLogingIn;
    NSDictionary *_userInfo;
    CDUnknownBlockType _successHandler;
    CDUnknownBlockType _failedHandler;
    CDUnknownBlockType _cancelHandler;
}

+ (void)setCurrentPlugin:(id)arg1;
+ (id)currentPlugin;
@property(copy, nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(copy, nonatomic) CDUnknownBlockType failedHandler; // @synthesize failedHandler=_failedHandler;
@property(copy, nonatomic) CDUnknownBlockType successHandler; // @synthesize successHandler=_successHandler;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) _Bool isLogingIn; // @synthesize isLogingIn=_isLogingIn;
- (void).cxx_destruct;
- (void)stat:(id)arg1 failCode:(id)arg2;
- (void)getProfileWithInfo:(id)arg1 withCompleted:(CDUnknownBlockType)arg2;
- (void)onResp:(id)arg1;
- (void)onReq:(id)arg1;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)logout;
- (void)logInFromViewController:(id)arg1 userInfo:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failedHandler:(CDUnknownBlockType)arg4 cancelHandler:(CDUnknownBlockType)arg5;
@property(readonly, copy, nonatomic) NSString *name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
