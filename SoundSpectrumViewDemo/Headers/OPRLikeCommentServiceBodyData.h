//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface OPRLikeCommentServiceBodyData : NSObject
{
    NSString *_user_id;
    NSString *_item_id;
    NSString *_item_user_id;
    NSString *_comment_id;
    NSString *_reply_id;
    NSString *_song_id;
    NSString *_singer_id;
    NSString *_recommend_id;
    NSNumber *_seg_strategy;
    NSDictionary *_logExt;
    NSNumber *_ugc_type;
    NSString *_source;
}

@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSNumber *ugc_type; // @synthesize ugc_type=_ugc_type;
@property(copy, nonatomic) NSDictionary *logExt; // @synthesize logExt=_logExt;
@property(retain, nonatomic) NSNumber *seg_strategy; // @synthesize seg_strategy=_seg_strategy;
@property(copy, nonatomic) NSString *recommend_id; // @synthesize recommend_id=_recommend_id;
@property(copy, nonatomic) NSString *singer_id; // @synthesize singer_id=_singer_id;
@property(copy, nonatomic) NSString *song_id; // @synthesize song_id=_song_id;
@property(copy, nonatomic) NSString *reply_id; // @synthesize reply_id=_reply_id;
@property(copy, nonatomic) NSString *comment_id; // @synthesize comment_id=_comment_id;
@property(copy, nonatomic) NSString *item_user_id; // @synthesize item_user_id=_item_user_id;
@property(copy, nonatomic) NSString *item_id; // @synthesize item_id=_item_id;
@property(copy, nonatomic) NSString *user_id; // @synthesize user_id=_user_id;
- (void).cxx_destruct;

@end
