//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OPRDeleteCommentBodyData : NSObject
{
    NSString *_user_id;
    NSString *_item_id;
    NSString *_comment_id;
    NSString *_reply_id;
}

@property(copy, nonatomic) NSString *reply_id; // @synthesize reply_id=_reply_id;
@property(copy, nonatomic) NSString *comment_id; // @synthesize comment_id=_comment_id;
@property(copy, nonatomic) NSString *item_id; // @synthesize item_id=_item_id;
@property(copy, nonatomic) NSString *user_id; // @synthesize user_id=_user_id;
- (void).cxx_destruct;

@end

