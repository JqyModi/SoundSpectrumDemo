//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OPAccountManagerObserver-Protocol.h"

@class NSHashTable, NSMutableDictionary, NSString;

@interface OPCInteractSubscriptionManager : NSObject <OPAccountManagerObserver>
{
    NSHashTable *_observerTable;
    NSMutableDictionary *_userSubscriptionStatusCacheDict;
}

+ (id)defaultSubscriptionManager;
@property(retain, nonatomic) NSMutableDictionary *userSubscriptionStatusCacheDict; // @synthesize userSubscriptionStatusCacheDict=_userSubscriptionStatusCacheDict;
@property(retain, nonatomic) NSHashTable *observerTable; // @synthesize observerTable=_observerTable;
- (void).cxx_destruct;
- (void)accountManager:(id)arg1 logOutEndWithResult:(unsigned long long)arg2;
- (void)raiseSubscriptionFailed:(id)arg1 userId:(id)arg2 followStatus:(long long)arg3;
- (void)raiseSubscriptionStatusChanged:(unsigned long long)arg1 userId:(id)arg2 followStatus:(long long)arg3;
- (void)updateSubscriptionStatusUpdate:(unsigned long long)arg1 userId:(id)arg2;
- (_Bool)isSubscriptionStatusUpdate:(unsigned long long)arg1 userId:(id)arg2;
- (void)syncFollowStatus:(long long)arg1 userId:(id)arg2;
- (unsigned long long)statusWithUserId:(id)arg1;
- (_Bool)unsubscribeWithUserId:(id)arg1 followStatus:(long long)arg2 withSource:(id)arg3 withInfo:(id)arg4;
- (_Bool)subscribeWithUserId:(id)arg1 followStatus:(long long)arg2 withSource:(id)arg3 withInfo:(id)arg4;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (unsigned long long)subscriptionStatuswithFollowStatus:(long long)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

