//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface OPRSingingRoomEndViewContentHeaderData : NSObject
{
    _Bool _hasRank;
    _Bool _showLike;
    NSString *_userIconUrl;
    NSString *_userName;
    NSString *_likeCount;
    NSNumber *_sort;
}

@property(nonatomic) _Bool showLike; // @synthesize showLike=_showLike;
@property(nonatomic) _Bool hasRank; // @synthesize hasRank=_hasRank;
@property(retain, nonatomic) NSNumber *sort; // @synthesize sort=_sort;
@property(copy, nonatomic) NSString *likeCount; // @synthesize likeCount=_likeCount;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *userIconUrl; // @synthesize userIconUrl=_userIconUrl;
- (void).cxx_destruct;

@end

