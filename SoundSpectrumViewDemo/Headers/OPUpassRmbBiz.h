//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UpassRmbBizProtocol-Protocol.h"

@class NSHashTable, NSString;

@interface OPUpassRmbBiz : NSObject <UpassRmbBizProtocol>
{
    NSHashTable *_observers;
}

+ (id)defaultBiz;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
- (void).cxx_destruct;
- (void)didReceivedRmbPushId:(id)arg1 withMessage:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)serviceId;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

