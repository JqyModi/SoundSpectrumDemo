//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, OPRSingingRoomUser;

@interface OPRRoomUserRankingCellData : NSObject
{
    OPRSingingRoomUser *_user;
    NSNumber *_sort;
    NSNumber *_winCount;
    NSString *_likeCount;
}

@property(copy, nonatomic) NSString *likeCount; // @synthesize likeCount=_likeCount;
@property(retain, nonatomic) NSNumber *winCount; // @synthesize winCount=_winCount;
@property(retain, nonatomic) NSNumber *sort; // @synthesize sort=_sort;
@property(retain, nonatomic) OPRSingingRoomUser *user; // @synthesize user=_user;
- (void).cxx_destruct;

@end

