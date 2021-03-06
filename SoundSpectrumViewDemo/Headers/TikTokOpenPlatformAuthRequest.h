//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TikTokOpenPlatformBaseRequest.h"

@class NSOrderedSet, NSString;

@interface TikTokOpenPlatformAuthRequest : TikTokOpenPlatformBaseRequest
{
    long long _appType;
    NSOrderedSet *_permissions;
    NSOrderedSet *_additionalPermissions;
    NSString *_state;
}

@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(retain, nonatomic) NSOrderedSet *additionalPermissions; // @synthesize additionalPermissions=_additionalPermissions;
@property(retain, nonatomic) NSOrderedSet *permissions; // @synthesize permissions=_permissions;
@property(nonatomic) long long appType; // @synthesize appType=_appType;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isVaild;
- (_Bool)sendAuthRequestWithWepInViewController:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (_Bool)sendAuthRequestViewController:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (id)initWithAppType:(long long)arg1;
- (id)init;

@end

