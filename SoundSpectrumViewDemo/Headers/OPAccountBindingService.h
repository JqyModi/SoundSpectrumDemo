//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OPAccountBindingService : NSObject
{
}

+ (void)unbindThirdAccount:(id)arg1 userInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)bindThirdAccountWithOpenId:(id)arg1 token:(id)arg2 loginPlugin:(id)arg3 userInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)setBindingInterface:(id)arg1;
+ (id)interface;

@end

