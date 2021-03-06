//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSThread;

@interface ThreadConnectionMaker : NSObject
{
    NSThread *m_thread;
    struct list<ThreadConnection *, std::__1::allocator<ThreadConnection *>> m_connectionList;
    NSLock *m_listLock;
    _Bool m_isSetCancelThread;
}

+ (id)defaultMaker;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)run;
- (unsigned int)connectionObjectCount;
- (id)allocConnectionObject;
- (void)removeConnectionObjectFromList:(id)arg1;
- (void)freeAllConnection;
- (id)makerThread;
- (void)cancelThread;
- (void)dealloc;
- (id)init;

@end

