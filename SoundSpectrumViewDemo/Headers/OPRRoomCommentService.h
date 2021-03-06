//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AgoraRtmChannelDelegate-Protocol.h"
#import "AgoraRtmDelegate-Protocol.h"

@class AgoraRtmChannel, AgoraRtmKit, NSString, OPRRoomGetAgoraSignalingTokenService;
@protocol OPRRoomCommentServiceDelegate;

@interface OPRRoomCommentService : NSObject <AgoraRtmDelegate, AgoraRtmChannelDelegate>
{
    _Bool _isOnline;
    id <OPRRoomCommentServiceDelegate> _delegate;
    AgoraRtmKit *_rtmKit;
    AgoraRtmChannel *_rtmChannel;
    NSString *_roomID;
    NSString *_uid;
    OPRRoomGetAgoraSignalingTokenService *_service;
}

+ (void)getTokenWithUid:(id)arg1 force:(_Bool)arg2 completed:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) OPRRoomGetAgoraSignalingTokenService *service; // @synthesize service=_service;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString *roomID; // @synthesize roomID=_roomID;
@property(retain, nonatomic) AgoraRtmChannel *rtmChannel; // @synthesize rtmChannel=_rtmChannel;
@property(retain, nonatomic) AgoraRtmKit *rtmKit; // @synthesize rtmKit=_rtmKit;
@property(nonatomic) _Bool isOnline; // @synthesize isOnline=_isOnline;
@property(nonatomic) __weak id <OPRRoomCommentServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)channel:(id)arg1 messageReceived:(id)arg2 fromMember:(id)arg3;
- (void)channel:(id)arg1 memberJoined:(id)arg2;
- (void)channel:(id)arg1 memberLeft:(id)arg2;
- (void)rtmKit:(id)arg1 connectionStateChanged:(long long)arg2 reason:(long long)arg3;
- (void)rtmKitTokenDidExpire:(id)arg1;
- (void)sendMessage:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)leaveRoom;
- (void)joinRoom:(id)arg1 uid:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)initAgoraSingalingKit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

