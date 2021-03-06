//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDelegate-Protocol.h"
#import "_TtP8SocketIO16SocketEngineSpec_-Protocol.h"

@class NSArray, NSDictionary, NSString, NSURL, OS_dispatch_queue, _TtC8SocketIO9WebSocket;
@protocol _TtP8SocketIO18SocketEngineClient_;

@interface _TtC8SocketIO12SocketEngine : NSObject <NSURLSessionDelegate, _TtP8SocketIO16SocketEngineSpec_>
{
    // Error parsing type: , name: engineQueue
    // Error parsing type: , name: needLockWhenCleanup
    // Error parsing type: , name: needRetainWebSocket
    // Error parsing type: , name: connectParams
    // Error parsing type: , name: postWait
    // Error parsing type: , name: waitingForPoll
    // Error parsing type: , name: waitingForPost
    // Error parsing type: , name: closed
    // Error parsing type: , name: connected
    // Error parsing type: , name: cookies
    // Error parsing type: , name: doubleEncodeUTF8
    // Error parsing type: , name: extraHeaders
    // Error parsing type: , name: fastUpgrade
    // Error parsing type: , name: forcePolling
    // Error parsing type: , name: forceWebsockets
    // Error parsing type: , name: invalidated
    // Error parsing type: , name: polling
    // Error parsing type: , name: probing
    // Error parsing type: , name: session
    // Error parsing type: , name: sid
    // Error parsing type: , name: socketPath
    // Error parsing type: , name: urlPolling
    // Error parsing type: , name: urlWebSocket
    // Error parsing type: , name: websocket
    // Error parsing type: , name: ws
    // Error parsing type: , name: client
    // Error parsing type: , name: sessionDelegate
    // Error parsing type: , name: logType
    // Error parsing type: , name: url
    // Error parsing type: , name: pingInterval
    // Error parsing type: , name: pingTimeout
    // Error parsing type: , name: pongsMissed
    // Error parsing type: , name: pongsMissedMax
    // Error parsing type: , name: probeWait
    // Error parsing type: , name: secure
    // Error parsing type: , name: security
    // Error parsing type: , name: selfSigned
    // Error parsing type: , name: voipEnabled
}

- (void).cxx_destruct;
- (id)init;
- (void)write:(id)arg1 withType:(long long)arg2 withData:(id)arg3;
- (void)parseEngineMessage:(id)arg1 fromPolling:(_Bool)arg2;
- (void)parseEngineData:(id)arg1;
- (void)flushWaitingForPostToWebSocket;
- (void)doFastUpgrade;
- (void)disconnectWithReason:(id)arg1;
- (void)didErrorWithReason:(id)arg1;
- (void)connect;
- (void)dealloc;
- (id)initWithClient:(id)arg1 url:(id)arg2 options:(id)arg3;
@property(nonatomic) __weak id <_TtP8SocketIO18SocketEngineClient_> client; // @synthesize client;
@property(nonatomic, retain) _TtC8SocketIO9WebSocket *ws; // @synthesize ws;
@property(nonatomic) _Bool websocket; // @synthesize websocket;
@property(nonatomic, copy) NSURL *urlWebSocket;
@property(nonatomic, copy) NSURL *urlPolling;
@property(nonatomic, copy) NSString *socketPath;
@property(nonatomic, copy) NSString *sid;
@property(nonatomic) _Bool probing; // @synthesize probing;
@property(nonatomic) _Bool polling; // @synthesize polling;
@property(nonatomic) _Bool forceWebsockets; // @synthesize forceWebsockets;
@property(nonatomic) _Bool forcePolling; // @synthesize forcePolling;
@property(nonatomic) _Bool fastUpgrade; // @synthesize fastUpgrade;
@property(nonatomic, copy) NSDictionary *extraHeaders;
@property(nonatomic) _Bool doubleEncodeUTF8; // @synthesize doubleEncodeUTF8;
@property(nonatomic, copy) NSArray *cookies;
@property(nonatomic) _Bool connected; // @synthesize connected;
@property(nonatomic) _Bool closed; // @synthesize closed;
@property(nonatomic, copy) NSDictionary *connectParams;
@property(nonatomic, readonly) OS_dispatch_queue *engineQueue; // @synthesize engineQueue;

@end

