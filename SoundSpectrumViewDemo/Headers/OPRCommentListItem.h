//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString, OPRCommentReplyInfoItem, OPUserProfile;

@interface OPRCommentListItem : NSObject
{
    NSString *_comment_id;
    NSString *_message;
    NSString *_displayMessage;
    NSNumber *_pos;
    NSDictionary *_extra;
    NSString *_virtual_id;
    NSNumber *_create_time;
    NSNumber *_already_like;
    NSNumber *_like_count;
    NSArray *_replies;
    OPRCommentReplyInfoItem *_reply_info;
    NSString *_reply_id;
    NSNumber *_reply_count;
    OPUserProfile *_user;
    NSNumber *_is_author;
    NSString *_item_id;
    NSString *_item_user_id;
}

@property(copy, nonatomic) NSString *item_user_id; // @synthesize item_user_id=_item_user_id;
@property(copy, nonatomic) NSString *item_id; // @synthesize item_id=_item_id;
@property(copy, nonatomic) NSNumber *is_author; // @synthesize is_author=_is_author;
@property(retain, nonatomic) OPUserProfile *user; // @synthesize user=_user;
@property(copy, nonatomic) NSNumber *reply_count; // @synthesize reply_count=_reply_count;
@property(copy, nonatomic) NSString *reply_id; // @synthesize reply_id=_reply_id;
@property(retain, nonatomic) OPRCommentReplyInfoItem *reply_info; // @synthesize reply_info=_reply_info;
@property(copy, nonatomic) NSArray *replies; // @synthesize replies=_replies;
@property(copy, nonatomic) NSNumber *like_count; // @synthesize like_count=_like_count;
@property(copy, nonatomic) NSNumber *already_like; // @synthesize already_like=_already_like;
@property(copy, nonatomic) NSNumber *create_time; // @synthesize create_time=_create_time;
@property(copy, nonatomic) NSString *virtual_id; // @synthesize virtual_id=_virtual_id;
@property(copy, nonatomic) NSDictionary *extra; // @synthesize extra=_extra;
@property(retain, nonatomic) NSNumber *pos; // @synthesize pos=_pos;
@property(copy, nonatomic) NSString *displayMessage; // @synthesize displayMessage=_displayMessage;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *comment_id; // @synthesize comment_id=_comment_id;
- (void).cxx_destruct;
- (id)user_image;
- (id)user_name;
- (id)user_id;

@end

