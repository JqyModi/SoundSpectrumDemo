//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSThread;

@interface DeallocOnThisThread : NSObject
{
    id m_target;
    NSThread *_thread;
}

@property(readonly, nonatomic) NSThread *thread; // @synthesize thread=_thread;
- (void)dealloc;
- (void)customDealloc;
- (id)initWithTarget:(id)arg1 thread:(id)arg2 withMode:(id)arg3;

@end

