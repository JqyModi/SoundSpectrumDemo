//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OPRRoomCommandParticipantData : NSObject
{
    NSString *_userId;
    NSString *_avatar;
    NSString *_name;
    unsigned long long _userState;
    unsigned long long _tag;
    unsigned long long _like;
}

@property(nonatomic) unsigned long long like; // @synthesize like=_like;
@property(nonatomic) unsigned long long tag; // @synthesize tag=_tag;
@property(nonatomic) unsigned long long userState; // @synthesize userState=_userState;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end

