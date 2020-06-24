//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSThread, NSURLSessionDataTask;
@protocol NSURLSessionDataDelegate;

@interface NWHttpSessionDemuxTask : NSObject
{
    NSURLSessionDataTask *_task;
    id <NSURLSessionDataDelegate> _delegate;
    NSThread *_thread;
}

@property(readonly, nonatomic) NSThread *thread; // @synthesize thread=_thread;
@property(readonly, nonatomic) id <NSURLSessionDataDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSURLSessionDataTask *task; // @synthesize task=_task;
- (void).cxx_destruct;
- (void)invalidate;
- (void)performBlockOnClientThread:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (id)initWithTask:(id)arg1 delegate:(id)arg2;

@end

