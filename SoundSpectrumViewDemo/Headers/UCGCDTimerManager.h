//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface UCGCDTimerManager : NSObject
{
    NSMutableDictionary *_timerContainer;
    NSMutableDictionary *_actionBlockCache;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *actionBlockCache; // @synthesize actionBlockCache=_actionBlockCache;
@property(retain, nonatomic) NSMutableDictionary *timerContainer; // @synthesize timerContainer=_timerContainer;
- (void).cxx_destruct;
- (void)removeActionCacheForTimer:(id)arg1;
- (void)cacheAction:(CDUnknownBlockType)arg1 forTimer:(id)arg2;
- (void)cancelAllTimers;
- (void)cancelTimerWithName:(id)arg1;
- (void)scheduledDispatchTimerOnMainQueueWithName:(id)arg1 timeInterval:(double)arg2 repeats:(_Bool)arg3 actionOption:(long long)arg4 action:(CDUnknownBlockType)arg5;
- (void)scheduledDispatchTimerWithName:(id)arg1 timeInterval:(double)arg2 queue:(id)arg3 repeats:(_Bool)arg4 actionOption:(long long)arg5 action:(CDUnknownBlockType)arg6;

@end

