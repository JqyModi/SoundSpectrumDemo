//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OPUserProfileExtendProtocol-Protocol.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface OPCUserProfileExtend : NSObject <OPUserProfileExtendProtocol>
{
    _Bool _isRegister;
    _Bool _needUpdateInfo;
    _Bool _isNeedUploadAvatar;
    long long _userStatus;
    long long _followStatus;
    NSString *_age;
    NSString *_backgroundUrl;
    long long _publishCount;
    long long _followCount;
    long long _followerCount;
    long long _likeCount;
    long long _beLikedCount;
    NSArray *_medals;
    NSNumber *_totalLikeCount;
    NSNumber *_totalUgcCount;
    NSNumber *_todayVistorCount;
    NSArray *_gloryList;
    NSArray *_auths;
    NSMutableDictionary *_mutableOthers;
}

@property(retain, nonatomic) NSMutableDictionary *mutableOthers; // @synthesize mutableOthers=_mutableOthers;
@property(copy, nonatomic) NSArray *auths; // @synthesize auths=_auths;
@property(copy, nonatomic) NSArray *gloryList; // @synthesize gloryList=_gloryList;
@property(retain, nonatomic) NSNumber *todayVistorCount; // @synthesize todayVistorCount=_todayVistorCount;
@property(retain, nonatomic) NSNumber *totalUgcCount; // @synthesize totalUgcCount=_totalUgcCount;
@property(retain, nonatomic) NSNumber *totalLikeCount; // @synthesize totalLikeCount=_totalLikeCount;
@property(retain, nonatomic) NSArray *medals; // @synthesize medals=_medals;
@property(nonatomic) long long beLikedCount; // @synthesize beLikedCount=_beLikedCount;
@property(nonatomic) long long likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) long long followerCount; // @synthesize followerCount=_followerCount;
@property(nonatomic) long long followCount; // @synthesize followCount=_followCount;
@property(nonatomic) long long publishCount; // @synthesize publishCount=_publishCount;
@property(copy, nonatomic) NSString *backgroundUrl; // @synthesize backgroundUrl=_backgroundUrl;
@property(copy, nonatomic) NSString *age; // @synthesize age=_age;
@property(nonatomic) long long followStatus; // @synthesize followStatus=_followStatus;
@property(nonatomic) _Bool isNeedUploadAvatar; // @synthesize isNeedUploadAvatar=_isNeedUploadAvatar;
@property(nonatomic) _Bool needUpdateInfo; // @synthesize needUpdateInfo=_needUpdateInfo;
@property(nonatomic) _Bool isRegister; // @synthesize isRegister=_isRegister;
@property(nonatomic) long long userStatus; // @synthesize userStatus=_userStatus;
- (void).cxx_destruct;
- (void)updateOthersObject:(id)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) _Bool isFollowed;
@property(readonly, nonatomic) NSDictionary *others;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

