//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "OPRFollowFeedUnReadMsgManagerObserver-Protocol.h"
#import "OPRMessageManagerObserver-Protocol.h"

@class NSString, OPFeatureCountView;

@interface OPRHomeMessageFlagView : UIView <OPRMessageManagerObserver, OPRFollowFeedUnReadMsgManagerObserver>
{
    OPFeatureCountView *_redPoint;
    double _consumeTime;
    NSString *_didReadFollowFeedItemRelationId;
}

@property(copy, nonatomic) NSString *didReadFollowFeedItemRelationId; // @synthesize didReadFollowFeedItemRelationId=_didReadFollowFeedItemRelationId;
@property(nonatomic) double consumeTime; // @synthesize consumeTime=_consumeTime;
@property(retain, nonatomic) OPFeatureCountView *redPoint; // @synthesize redPoint=_redPoint;
- (void).cxx_destruct;
- (void)followFeedUnReadMsgCountDidChanged;
- (void)followFeedUnReadMsgCountDidRead;
- (void)loadConsumeRedPointTime;
- (void)saveConsumeRedPointTime;
- (void)messageFolderListContentDidRead;
- (void)messageFolderListContentDidRefreshed;
- (void)update;
- (void)clearFlag;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
