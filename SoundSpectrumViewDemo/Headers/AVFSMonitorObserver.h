//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSThread;

@interface AVFSMonitorObserver : NSObject
{
    _Bool _stopRunning;
    NSThread *_backendThread;
    CDUnknownBlockType _fileLogBlock;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedObserver;
@property(copy, nonatomic) CDUnknownBlockType fileLogBlock; // @synthesize fileLogBlock=_fileLogBlock;
@property(retain, nonatomic) NSThread *backendThread; // @synthesize backendThread=_backendThread;
- (void).cxx_destruct;
- (void)removeItem:(id)arg1 cache:(id)arg2;
- (void)syncPrivate:(id)arg1 operate:(unsigned long long)arg2 attrs:(id)arg3;
- (void)calculateModule:(id)arg1 operate:(unsigned long long)arg2 attrs:(id)arg3;
- (void)exchangeThread:(CDUnknownBlockType)arg1;
- (void)threadRunLoop;
- (id)init;
- (void)notifyModule:(id)arg1 operate:(unsigned long long)arg2 attrs:(id)arg3;
- (void)registerFileLogBlock;

@end

