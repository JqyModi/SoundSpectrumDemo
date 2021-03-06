//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface OPRPostCommentBodyData : NSObject
{
    NSString *_user_id;
    NSString *_item_id;
    NSString *_to_user_id;
    NSString *_song_id;
    NSString *_singer_id;
    NSString *_recommend_id;
    NSNumber *_seg_strategy;
    NSDictionary *_logExt;
    NSNumber *_ugc_type;
    NSNumber *_comment_type;
    NSString *_comment_id;
    NSString *_source;
    NSString *_message;
    NSString *_message_ext;
    NSArray *_at_user_ids;
    NSString *_extra;
}

@property(copy, nonatomic) NSString *extra; // @synthesize extra=_extra;
@property(copy, nonatomic) NSArray *at_user_ids; // @synthesize at_user_ids=_at_user_ids;
@property(copy, nonatomic) NSString *message_ext; // @synthesize message_ext=_message_ext;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *comment_id; // @synthesize comment_id=_comment_id;
@property(retain, nonatomic) NSNumber *comment_type; // @synthesize comment_type=_comment_type;
@property(retain, nonatomic) NSNumber *ugc_type; // @synthesize ugc_type=_ugc_type;
@property(copy, nonatomic) NSDictionary *logExt; // @synthesize logExt=_logExt;
@property(retain, nonatomic) NSNumber *seg_strategy; // @synthesize seg_strategy=_seg_strategy;
@property(copy, nonatomic) NSString *recommend_id; // @synthesize recommend_id=_recommend_id;
@property(copy, nonatomic) NSString *singer_id; // @synthesize singer_id=_singer_id;
@property(copy, nonatomic) NSString *song_id; // @synthesize song_id=_song_id;
@property(copy, nonatomic) NSString *to_user_id; // @synthesize to_user_id=_to_user_id;
@property(copy, nonatomic) NSString *item_id; // @synthesize item_id=_item_id;
@property(copy, nonatomic) NSString *user_id; // @synthesize user_id=_user_id;
- (void).cxx_destruct;

@end

