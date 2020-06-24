//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface OPRRoomBannerData : NSObject
{
    NSString *_bannerId;
    long long _bannerType;
    NSString *_bgThumbnailUrl;
    NSString *_bgDetailUrl;
    NSString *_title;
    NSString *_url;
    NSDictionary *_extra;
    double _responseTime;
}

@property(nonatomic) double responseTime; // @synthesize responseTime=_responseTime;
@property(retain, nonatomic) NSDictionary *extra; // @synthesize extra=_extra;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *bgDetailUrl; // @synthesize bgDetailUrl=_bgDetailUrl;
@property(copy, nonatomic) NSString *bgThumbnailUrl; // @synthesize bgThumbnailUrl=_bgThumbnailUrl;
@property(nonatomic) long long bannerType; // @synthesize bannerType=_bannerType;
@property(copy, nonatomic) NSString *bannerId; // @synthesize bannerId=_bannerId;
- (void).cxx_destruct;
- (id)safeStringAtIndex:(unsigned long long)arg1 array:(id)arg2;
- (id)initWithDict:(id)arg1;
@property(readonly, nonatomic) double currentRemainingTime;
@property(readonly, nonatomic) double serverRemainingTime;
@property(readonly, nonatomic) double serverStartTime;
@property(readonly, nonatomic) long long starRoomMiniVersion;
@property(readonly, nonatomic) NSArray *roomStrategy;
@property(readonly, copy, nonatomic) NSString *preRoomId;
@property(readonly, nonatomic) long long roomType;
@property(readonly, copy, nonatomic) NSString *roomId;

@end

