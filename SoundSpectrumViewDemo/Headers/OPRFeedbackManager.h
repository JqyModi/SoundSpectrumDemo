//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OPRFeedbackManager : NSObject
{
}

+ (void)onApplicationWillEnterForegroundNotification:(id)arg1;
+ (long long)unreadFeedbackMessageCount;
+ (void)readFeedbackMessages;
+ (void)fetchUnreadStatus;
+ (void)startFetchUnreadStatus;
+ (void)cscenterFeedback:(id)arg1;
+ (void)aoneFeedback:(id)arg1;

@end

