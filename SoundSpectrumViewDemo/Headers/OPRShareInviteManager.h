//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface OPRShareInviteManager : NSObject
{
    NSMutableDictionary *_resultCache;
    NSMutableArray *_shareInviteText;
}

+ (id)defaultManager;
@property(retain, nonatomic) NSMutableArray *shareInviteText; // @synthesize shareInviteText=_shareInviteText;
@property(retain, nonatomic) NSMutableDictionary *resultCache; // @synthesize resultCache=_resultCache;
- (void).cxx_destruct;
- (id)copyToClipboard:(id)arg1;
- (void)checkFromClipboard:(CDUnknownBlockType)arg1;
- (id)parseFromInviteText:(id)arg1;
- (id)generalInviteText:(id)arg1;
- (id)textFromRegexResultText:(id)arg1 withParseText:(id)arg2;
- (id)regexFromParseText:(id)arg1;
- (id)textForParseToGetFuncSender;
- (id)textForParseToGetSender;
- (id)textForParseToGetRoomId;
- (id)regexForCheckInviteText;
- (id)regexForCheckInviteFuncText;
- (id)inviteFuncTextTemplate;
- (id)inviteTextTemplate:(_Bool)arg1;
- (id)init;

@end
