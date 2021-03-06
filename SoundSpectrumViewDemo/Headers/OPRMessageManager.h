//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OPAccountManagerObserver-Protocol.h"

@class NSArray, NSHashTable, NSString, OPRMessageService;

@interface OPRMessageManager : NSObject <OPAccountManagerObserver>
{
    NSArray *_folderList;
    NSHashTable *_observerTable;
    OPRMessageService *_service;
}

+ (id)shareManager;
@property(retain, nonatomic) OPRMessageService *service; // @synthesize service=_service;
@property(retain, nonatomic) NSHashTable *observerTable; // @synthesize observerTable=_observerTable;
@property(retain, nonatomic) NSArray *folderList; // @synthesize folderList=_folderList;
- (void).cxx_destruct;
- (void)stat:(id)arg1;
- (void)accountManager:(id)arg1 logerStatusChanged:(unsigned long long)arg2;
- (void)onRefreshResult:(id)arg1 error:(id)arg2;
- (void)refresh;
@property(readonly, nonatomic) _Bool isRefreshing;
- (void)readMessage:(long long)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) long long messageCount;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

