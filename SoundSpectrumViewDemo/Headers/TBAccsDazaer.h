//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary;

@interface TBAccsDazaer : NSObject
{
    NSMutableDictionary *_bindappFailedActions;
    NSLock *_lock;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (void)bindapp:(id)arg1;
- (void)applicationWillEnterBackground;
- (void)applicationWillEnterForeground;
- (void)handle:(id)arg1 response:(id)arg2 error:(id)arg3 parameters:(id)arg4;
- (id)init;

@end

