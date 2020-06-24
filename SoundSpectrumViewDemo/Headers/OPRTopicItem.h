//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, OPRTopicDisplayButtonConfig;

@interface OPRTopicItem : NSObject
{
    _Bool _isOffline;
    _Bool _isShowDateRank;
    NSString *_topicId;
    unsigned long long _topicType;
    NSString *_title;
    NSString *_desc;
    long long _totalAudio;
    NSString *_backgroundUrl;
    NSString *_cursor;
    long long _recommendAudioCount;
    NSString *_teachForwardUrl;
    OPRTopicDisplayButtonConfig *_displayButtonConfig;
}

+ (id)itemWithData:(id)arg1;
@property(nonatomic) _Bool isShowDateRank; // @synthesize isShowDateRank=_isShowDateRank;
@property(retain, nonatomic) OPRTopicDisplayButtonConfig *displayButtonConfig; // @synthesize displayButtonConfig=_displayButtonConfig;
@property(copy, nonatomic) NSString *teachForwardUrl; // @synthesize teachForwardUrl=_teachForwardUrl;
@property(nonatomic) long long recommendAudioCount; // @synthesize recommendAudioCount=_recommendAudioCount;
@property(copy, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
@property(nonatomic) _Bool isOffline; // @synthesize isOffline=_isOffline;
@property(copy, nonatomic) NSString *backgroundUrl; // @synthesize backgroundUrl=_backgroundUrl;
@property(nonatomic) long long totalAudio; // @synthesize totalAudio=_totalAudio;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long topicType; // @synthesize topicType=_topicType;
@property(copy, nonatomic) NSString *topicId; // @synthesize topicId=_topicId;
- (void).cxx_destruct;
- (id)deleteEmptyLineDesc;

@end
