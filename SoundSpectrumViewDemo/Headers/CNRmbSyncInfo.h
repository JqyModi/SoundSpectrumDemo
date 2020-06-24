//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface CNRmbSyncInfo : NSObject
{
    _Bool _hasMore;
    NSString *_channelId;
    NSString *_queueId;
    long long _seq;
    NSMutableArray *_messagesAry;
}

@property(retain, nonatomic) NSMutableArray *messagesAry; // @synthesize messagesAry=_messagesAry;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) long long seq; // @synthesize seq=_seq;
@property(copy, nonatomic) NSString *queueId; // @synthesize queueId=_queueId;
@property(copy, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
- (void)addSyncMessageContent:(id)arg1 seq:(long long)arg2;
- (id)init;
- (void)dealloc;

@end
