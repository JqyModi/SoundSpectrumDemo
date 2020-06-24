//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, OPFeedbackQueueItem, UIView;

@interface OPFeedbackQueue : NSObject
{
    NSMutableArray *_commonQueue;
    OPFeedbackQueueItem *_workingItem;
    UIView *_currentFeedbackView;
}

+ (id)sharedQueue;
@property(retain, nonatomic) UIView *currentFeedbackView; // @synthesize currentFeedbackView=_currentFeedbackView;
@property(retain, nonatomic) OPFeedbackQueueItem *workingItem; // @synthesize workingItem=_workingItem;
@property(retain, nonatomic) NSMutableArray *commonQueue; // @synthesize commonQueue=_commonQueue;
- (void).cxx_destruct;
- (void)showToastItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)autoShowItemIfNeed;
- (void)cancelAndHideAllFeedback;
- (void)postFeedbackWithString:(id)arg1 parentView:(id)arg2;
- (void)postFeedbackWithString:(id)arg1;

@end
