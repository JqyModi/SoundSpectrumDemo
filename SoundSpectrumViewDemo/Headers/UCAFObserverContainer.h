//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface UCAFObserverContainer : NSObject
{
    _Bool _allowsUsingInThread;
    int _iterativeRef;
    NSMutableArray *_normalList;
    NSMutableArray *_increaseList;
    NSMutableArray *_decreaseList;
}

@property(retain, nonatomic) NSMutableArray *decreaseList; // @synthesize decreaseList=_decreaseList;
@property(retain, nonatomic) NSMutableArray *increaseList; // @synthesize increaseList=_increaseList;
@property(readonly, nonatomic) NSMutableArray *normalList; // @synthesize normalList=_normalList;
@property(nonatomic) _Bool allowsUsingInThread; // @synthesize allowsUsingInThread=_allowsUsingInThread;
@property(nonatomic) int iterativeRef; // @synthesize iterativeRef=_iterativeRef;
- (void).cxx_destruct;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)sortUsingComparator:(CDUnknownBlockType)arg1;
- (int)observerCount;
- (id)observerAtIndex:(int)arg1;
- (_Bool)isObserver:(id)arg1 inArray:(id)arg2;
- (void)recoverNormalList;
- (_Bool)removeObserver:(id)arg1 fromArray:(id)arg2;
- (void)addObserver:(id)arg1 toArray:(id)arg2;
- (_Bool)isObserverExist:(id)arg1;
- (void)removeAllObservers;
- (_Bool)removeObserver:(id)arg1;
- (_Bool)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithThreadFlag:(_Bool)arg1;
- (id)init;

@end

