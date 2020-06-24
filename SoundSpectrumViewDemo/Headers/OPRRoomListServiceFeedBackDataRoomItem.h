//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface OPRRoomListServiceFeedBackDataRoomItem : NSObject
{
    _Bool _hasCoupon;
    NSString *_roomID;
    NSString *_name;
    NSArray *_albums;
    NSNumber *_state;
    NSString *_ownerID;
    NSString *_ownerName;
    NSString *_ownerAvatar;
    NSNumber *_participantCount;
    NSArray *_myFollows;
    NSString *_displayState;
}

@property(retain, nonatomic) NSString *displayState; // @synthesize displayState=_displayState;
@property(retain, nonatomic) NSArray *myFollows; // @synthesize myFollows=_myFollows;
@property(retain, nonatomic) NSNumber *participantCount; // @synthesize participantCount=_participantCount;
@property(nonatomic) _Bool hasCoupon; // @synthesize hasCoupon=_hasCoupon;
@property(retain, nonatomic) NSString *ownerAvatar; // @synthesize ownerAvatar=_ownerAvatar;
@property(retain, nonatomic) NSString *ownerName; // @synthesize ownerName=_ownerName;
@property(retain, nonatomic) NSString *ownerID; // @synthesize ownerID=_ownerID;
@property(retain, nonatomic) NSNumber *state; // @synthesize state=_state;
@property(retain, nonatomic) NSArray *albums; // @synthesize albums=_albums;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *roomID; // @synthesize roomID=_roomID;
- (void).cxx_destruct;

@end

