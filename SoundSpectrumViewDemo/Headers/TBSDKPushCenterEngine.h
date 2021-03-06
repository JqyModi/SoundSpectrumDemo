//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TBSDKPushCenterEngine : NSObject
{
    _Bool _retryDeviceTokenCommand;
    _Bool _retryVoipTokenCommand;
    _Bool _retryBindUserCommand;
    _Bool _retryUnBindUserCommand;
}

+ (_Bool)isFromAgoo:(id)arg1;
+ (id)shareInstance;
@property(nonatomic) _Bool retryUnBindUserCommand; // @synthesize retryUnBindUserCommand=_retryUnBindUserCommand;
@property(nonatomic) _Bool retryBindUserCommand; // @synthesize retryBindUserCommand=_retryBindUserCommand;
@property(nonatomic) _Bool retryVoipTokenCommand; // @synthesize retryVoipTokenCommand=_retryVoipTokenCommand;
@property(nonatomic) _Bool retryDeviceTokenCommand; // @synthesize retryDeviceTokenCommand=_retryDeviceTokenCommand;
- (id)getDeviceID;
- (void)unbindUserIntoPushCenterWithPushUserInfo:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)unbindUserIntoPushCenterWithAlias:(id)arg1 userInfo:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)bindUserIntoPushCenterWithAlias:(id)arg1 userInfo:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)upLoaderVoIPToken:(id)arg1 userInfo:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)upLoaderDeviceToken:(id)arg1 userInfo:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)registerDevice;
- (void)start;
- (id)init;
- (void)retransmitAgooIdeitifiers;
- (void)handleApplicationWillEnterForeground:(id)arg1;
- (void)accsDataChannelAvailableHandler;
- (void)pushOrangeChanged:(id)arg1;

@end

