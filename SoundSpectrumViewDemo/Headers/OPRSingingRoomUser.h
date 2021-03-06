//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OPUserProfileProtocol-Protocol.h"

@class NSDate, NSString, OPRSingingRoomUserContext;
@protocol OPUserProfileExtendProtocol;

@interface OPRSingingRoomUser : NSObject <OPUserProfileProtocol>
{
    _Bool _completeData;
    NSString *uid;
    NSString *avatar;
    NSString *name;
    unsigned long long gender;
    id <OPUserProfileExtendProtocol> extend;
    unsigned long long _role;
    unsigned long long _state;
    OPRSingingRoomUserContext *_context;
    unsigned long long _userTag;
    unsigned long long _like;
}

@property(nonatomic) _Bool completeData; // @synthesize completeData=_completeData;
@property(nonatomic) unsigned long long like; // @synthesize like=_like;
@property(nonatomic) unsigned long long userTag; // @synthesize userTag=_userTag;
@property(retain, nonatomic) OPRSingingRoomUserContext *context; // @synthesize context=_context;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) unsigned long long role; // @synthesize role=_role;
@property(retain, nonatomic) id <OPUserProfileExtendProtocol> extend; // @synthesize extend;
@property(nonatomic) unsigned long long gender; // @synthesize gender;
@property(copy, nonatomic) NSString *name; // @synthesize name;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar;
@property(copy, nonatomic) NSString *uid; // @synthesize uid;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)isMySelf;
- (void)setUserPropertyFromProfile:(id)arg1;
- (id)initWithLoginUser;
- (id)init;

// Remaining properties
@property(copy, nonatomic) NSString *about;
@property(retain, nonatomic) NSDate *birthday;
@property(copy, nonatomic) NSString *cityBirth;
@property(copy, nonatomic) NSString *cityLiving;
@property(copy, nonatomic) NSString *country;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *phone;
@property(readonly) Class superclass;

@end

