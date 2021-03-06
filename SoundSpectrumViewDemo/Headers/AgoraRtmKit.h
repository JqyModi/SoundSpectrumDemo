//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AgoraRtmCallKit, NSMutableArray, NSMutableDictionary;
@protocol AgoraRtmDelegate;

@interface AgoraRtmKit : NSObject
{
    _Bool _destroying;
    _Bool _isDispatchedMainQueue;
    id <AgoraRtmDelegate> _agoraRtmDelegate;
    NSMutableDictionary *_channels;
    AgoraRtmCallKit *_rtmCallKit;
    struct IRtmService *_rtmService;
    struct RtmServiceEventHandlerIosImpl *_handler;
    CDUnknownBlockType _loginBlock;
    CDUnknownBlockType _logoutBlock;
    CDUnknownBlockType _renewTokenBlock;
    NSMutableArray *_sendMessageBlocks;
    NSMutableArray *_queryOnlineBlocks;
    NSMutableArray *_memberCountBlocks;
    NSMutableArray *_setLocalUserAttributesBlocks;
    NSMutableArray *_addOrUpdateLocalUserAttributesBlocks;
    NSMutableArray *_deleteLocalUserAttributesBlocks;
    NSMutableArray *_clearLocalUserAttributesBlocks;
    NSMutableArray *_getUserAttributesBlocks;
    NSMutableArray *_getUserAttributesByKeysBlocks;
    NSMutableArray *_setChannelAttributesBlocks;
    NSMutableArray *_addOrUpdateChannelAttributesBlocks;
    NSMutableArray *_deleteChannelAttributesBlocks;
    NSMutableArray *_clearChannelAttributesBlocks;
    NSMutableArray *_getChannelAttributesBlocks;
    NSMutableArray *_getChannelAttributesByKeysBlocks;
}

+ (id)getSDKVersion;
@property(retain, nonatomic) NSMutableArray *getChannelAttributesByKeysBlocks; // @synthesize getChannelAttributesByKeysBlocks=_getChannelAttributesByKeysBlocks;
@property(retain, nonatomic) NSMutableArray *getChannelAttributesBlocks; // @synthesize getChannelAttributesBlocks=_getChannelAttributesBlocks;
@property(retain, nonatomic) NSMutableArray *clearChannelAttributesBlocks; // @synthesize clearChannelAttributesBlocks=_clearChannelAttributesBlocks;
@property(retain, nonatomic) NSMutableArray *deleteChannelAttributesBlocks; // @synthesize deleteChannelAttributesBlocks=_deleteChannelAttributesBlocks;
@property(retain, nonatomic) NSMutableArray *addOrUpdateChannelAttributesBlocks; // @synthesize addOrUpdateChannelAttributesBlocks=_addOrUpdateChannelAttributesBlocks;
@property(retain, nonatomic) NSMutableArray *setChannelAttributesBlocks; // @synthesize setChannelAttributesBlocks=_setChannelAttributesBlocks;
@property(retain, nonatomic) NSMutableArray *getUserAttributesByKeysBlocks; // @synthesize getUserAttributesByKeysBlocks=_getUserAttributesByKeysBlocks;
@property(retain, nonatomic) NSMutableArray *getUserAttributesBlocks; // @synthesize getUserAttributesBlocks=_getUserAttributesBlocks;
@property(retain, nonatomic) NSMutableArray *clearLocalUserAttributesBlocks; // @synthesize clearLocalUserAttributesBlocks=_clearLocalUserAttributesBlocks;
@property(retain, nonatomic) NSMutableArray *deleteLocalUserAttributesBlocks; // @synthesize deleteLocalUserAttributesBlocks=_deleteLocalUserAttributesBlocks;
@property(retain, nonatomic) NSMutableArray *addOrUpdateLocalUserAttributesBlocks; // @synthesize addOrUpdateLocalUserAttributesBlocks=_addOrUpdateLocalUserAttributesBlocks;
@property(retain, nonatomic) NSMutableArray *setLocalUserAttributesBlocks; // @synthesize setLocalUserAttributesBlocks=_setLocalUserAttributesBlocks;
@property(retain, nonatomic) NSMutableArray *memberCountBlocks; // @synthesize memberCountBlocks=_memberCountBlocks;
@property(retain, nonatomic) NSMutableArray *queryOnlineBlocks; // @synthesize queryOnlineBlocks=_queryOnlineBlocks;
@property(retain, nonatomic) NSMutableArray *sendMessageBlocks; // @synthesize sendMessageBlocks=_sendMessageBlocks;
@property(copy, nonatomic) CDUnknownBlockType renewTokenBlock; // @synthesize renewTokenBlock=_renewTokenBlock;
@property(copy, nonatomic) CDUnknownBlockType logoutBlock; // @synthesize logoutBlock=_logoutBlock;
@property(copy, nonatomic) CDUnknownBlockType loginBlock; // @synthesize loginBlock=_loginBlock;
@property _Bool isDispatchedMainQueue; // @synthesize isDispatchedMainQueue=_isDispatchedMainQueue;
@property _Bool destroying; // @synthesize destroying=_destroying;
@property(nonatomic) struct RtmServiceEventHandlerIosImpl *handler; // @synthesize handler=_handler;
@property(nonatomic) struct IRtmService *rtmService; // @synthesize rtmService=_rtmService;
@property(retain) AgoraRtmCallKit *rtmCallKit; // @synthesize rtmCallKit=_rtmCallKit;
@property(retain) NSMutableDictionary *channels; // @synthesize channels=_channels;
@property __weak id <AgoraRtmDelegate> agoraRtmDelegate; // @synthesize agoraRtmDelegate=_agoraRtmDelegate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getRtmCallKit;
- (_Bool)destroyChannelWithId:(id)arg1;
- (id)createChannelWithId:(id)arg1 delegate:(id)arg2;
- (void)getUserAttributes:(id)arg1 ByKeys:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getUserAllAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearLocalUserAttributesWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteLocalUserAttributesByKeys:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addOrUpdateLocalUserAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setLocalUserAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (int)setLogFilters:(long long)arg1;
- (int)setLogFileSize:(int)arg1;
- (int)setLogFile:(id)arg1;
- (int)setParameters:(id)arg1;
- (void)getChannelAttributes:(id)arg1 ByKeys:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getChannelAllAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearChannel:(id)arg1 Options:(id)arg2 AttributesWithCompletion:(CDUnknownBlockType)arg3;
- (void)deleteChannel:(id)arg1 AttributesByKeys:(id)arg2 Options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addOrUpdateChannel:(id)arg1 Attributes:(id)arg2 Options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setChannel:(id)arg1 Attributes:(id)arg2 Options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getChannelMemberCount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)queryPeersOnlineStatus:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendMessage:(id)arg1 toPeer:(id)arg2 sendMessageOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)sendMessage:(id)arg1 toPeer:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)logoutWithCompletion:(CDUnknownBlockType)arg1;
- (void)renewToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loginByToken:(id)arg1 user:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)clearChannelMemberCountObject:(long long)arg1;
- (void)clearGetChannelAttributesObject:(long long)arg1;
- (void)clearClearChannelAttributesObject:(long long)arg1;
- (void)clearDeleteChannelAttributesObject:(long long)arg1;
- (void)clearAddOrUpdateChannelAttributesObject:(long long)arg1;
- (void)clearSetChannelAttributesObject:(long long)arg1;
- (void)clearGetUserAttributesObject:(long long)arg1;
- (void)clearClearLocalUserAttributesObject:(long long)arg1;
- (void)clearDeleteLocalUserAttributesObject:(long long)arg1;
- (void)clearAddOrUpdateLocalUserAttributesObject:(long long)arg1;
- (void)clearSetLocalUserAttributesObject:(long long)arg1;
- (void)clearQueryOnlineResultObject:(long long)arg1;
- (void)clearSendMessageResultObject:(long long)arg1;
- (void)executeDelegateBlock:(CDUnknownBlockType)arg1;
- (id)initWithAppId:(id)arg1 delegate:(id)arg2;

@end

