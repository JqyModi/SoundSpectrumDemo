//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSThread, NSURLConnection, ThreadConnectionMaker;
@protocol ThreadConnectionDelegate;

@interface ThreadConnection : NSObject
{
    NSURLConnection *m_connection;
    NSThread *m_thread;
    ThreadConnectionMaker *m_maker;
    _Bool m_shouldNotifyCancel;
    id <ThreadConnectionDelegate> m_delegate;
}

- (void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)cancel;
- (void)start;
- (void)startConnectWithRequest:(id)arg1 delegate:(id)arg2;
- (void)threadUnscheduleFromRunLoop:(id)arg1;
- (void)threadScheduleInRunLoop:(id)arg1;
- (_Bool)isCanceled;
- (void)threadCancel;
- (void)threadStart;
- (void)threadStartConnectWithRequest:(id)arg1;
- (void)setMaker:(id)arg1;
- (void)dealloc;
- (id)initWithThread:(id)arg1 andMaker:(id)arg2;

@end

