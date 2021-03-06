//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TKStateMachine;
@protocol OPRSingRoomStateManagerDelegate;

@interface OPRSingRoomStateManager : NSObject
{
    id <OPRSingRoomStateManagerDelegate> _delegate;
    TKStateMachine *_stateMachine;
}

@property(retain, nonatomic) TKStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(nonatomic) id <OPRSingRoomStateManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)createStateWithName:(id)arg1 delegateSelector:(SEL)arg2;
- (void)initStateAndEvent;
- (id)init;

@end

