//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, OPAccountProfileEditItem, OPUserProfile;

@protocol OPAccountProfileInterface <NSObject>
- (id)editAccountProfile:(NSString *)arg1 item:(OPAccountProfileEditItem *)arg2 completedHandler:(void (^)(OPUserProfile *, NSError *))arg3;
- (OPUserProfile *)updateAccountProfile:(NSString *)arg1 withItem:(OPAccountProfileEditItem *)arg2;
- (id)updateAccountProfile:(NSString *)arg1 completedHandler:(void (^)(OPUserProfile *, NSError *))arg2;
@end

