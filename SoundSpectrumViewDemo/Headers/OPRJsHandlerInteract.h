//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OPCInteractUserSubscribedObserver-Protocol.h"
#import "OPRJsHandlerProtocol-Protocol.h"

@class NSArray, NSString;
@protocol OPRJsHandlerPushMessageProtocol;

@interface OPRJsHandlerInteract : NSObject <OPCInteractUserSubscribedObserver, OPRJsHandlerProtocol>
{
    id <OPRJsHandlerPushMessageProtocol> _pushDelegate;
}

@property(nonatomic) __weak id <OPRJsHandlerPushMessageProtocol> pushDelegate; // @synthesize pushDelegate=_pushDelegate;
- (void).cxx_destruct;
- (void)subscriptionFailed:(id)arg1 userId:(id)arg2 followStatus:(long long)arg3;
- (void)subscriptionStatusChanged:(unsigned long long)arg1 userId:(id)arg2 followStatus:(long long)arg3;
- (void)onLikeStatusChangedNotification:(id)arg1;
- (void)handleFollowEvent:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 msgId:(id)arg3;
- (void)handleLikeEvent:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 msgId:(id)arg3;
- (void)execute:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 pushBlock:(CDUnknownBlockType)arg3;
- (_Bool)canExecute:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *methods;
@property(readonly, copy, nonatomic) NSString *module;
- (void)addEventObservers;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
