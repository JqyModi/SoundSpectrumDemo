//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, OPRRoomBannerNotificationManager, OPRRoomBannerService;

@interface OPRRoomBannerManager : NSObject
{
    NSMutableArray *_list;
    OPRRoomBannerService *_bannerListService;
    OPRRoomBannerService *_bannerService;
    OPRRoomBannerNotificationManager *_notificationManager;
}

+ (id)defaultManager;
@property(retain, nonatomic) OPRRoomBannerNotificationManager *notificationManager; // @synthesize notificationManager=_notificationManager;
@property(retain, nonatomic) OPRRoomBannerService *bannerService; // @synthesize bannerService=_bannerService;
@property(retain, nonatomic) OPRRoomBannerService *bannerListService; // @synthesize bannerListService=_bannerListService;
@property(copy, nonatomic) NSMutableArray *list; // @synthesize list=_list;
- (void).cxx_destruct;
- (void)onApplicationWillEnterForegroundNotification:(id)arg1;
- (void)handlerBanner:(id)arg1 withVC:(id)arg2;
- (void)onReceiveRecommendListData:(id)arg1 result:(long long)arg2;
- (void)getBanner:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (void)refreshBannerList:(CDUnknownBlockType)arg1;
- (void)refreshBannerList;
@property(readonly, nonatomic) _Bool isRefreshing;
@property(readonly, nonatomic) NSArray *dataList;
@property(readonly, nonatomic) _Bool isActivity;
- (id)init;

@end
