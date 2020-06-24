//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface UTIGlobalVar : NSObject
{
    NSObject<OS_dispatch_queue> *mMethodQueue;
    NSMutableDictionary *mGlobalReserves;
    _Bool mIsH5MethodCalled;
    _Bool mTurnOffCrashHandler;
    NSString *mCurrentPageName;
    NSString *mH5PrePageName;
    NSString *mH5Url;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)getInstance;
@property _Bool mTurnOffCrashHandler; // @synthesize mTurnOffCrashHandler;
@property(retain) NSString *mH5Url; // @synthesize mH5Url;
@property _Bool mIsH5MethodCalled; // @synthesize mIsH5MethodCalled;
@property(retain) NSString *mH5PrePageName; // @synthesize mH5PrePageName;
@property(retain) NSString *mCurrentPageName; // @synthesize mCurrentPageName;
- (void).cxx_destruct;
- (void)clearGlobalReserves;
- (id)getGlobalReserves;
- (void)addGlobalReserves:(id)arg1;
- (id)methodDispatchSerialQueue;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

