//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OPRAggregationSegmentLeaderInfoFeedbackData : NSObject
{
    NSString *_userId;
    NSString *_acapellaId;
    NSString *_avatar;
    NSString *_name;
    NSString *_audioId;
    NSString *_ossId;
}

@property(copy, nonatomic) NSString *ossId; // @synthesize ossId=_ossId;
@property(copy, nonatomic) NSString *audioId; // @synthesize audioId=_audioId;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(copy, nonatomic) NSString *acapellaId; // @synthesize acapellaId=_acapellaId;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end

