//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface OPRQueryRoomResultCardItemData : NSObject
{
    NSString *_userId;
    NSString *_avatar;
    NSString *_nickname;
    NSNumber *_userTag;
    long long _turn;
    long long _cardType;
    double _useDate;
}

@property(nonatomic) double useDate; // @synthesize useDate=_useDate;
@property(nonatomic) long long cardType; // @synthesize cardType=_cardType;
@property(nonatomic) long long turn; // @synthesize turn=_turn;
@property(retain, nonatomic) NSNumber *userTag; // @synthesize userTag=_userTag;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end

