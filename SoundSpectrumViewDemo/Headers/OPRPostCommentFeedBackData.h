//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface OPRPostCommentFeedBackData : NSObject
{
    NSNumber *_status;
    NSString *_created_at;
    NSString *_virtual_id;
}

@property(copy, nonatomic) NSString *virtual_id; // @synthesize virtual_id=_virtual_id;
@property(copy, nonatomic) NSString *created_at; // @synthesize created_at=_created_at;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
- (void).cxx_destruct;

@end
