//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OPRRoomComment : NSObject
{
    NSString *_commentID;
    NSString *_userID;
    NSString *_name;
    NSString *_avatar;
    NSString *_content;
    long long _tag;
}

@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSString *commentID; // @synthesize commentID=_commentID;
- (void).cxx_destruct;
- (id)init;

@end
