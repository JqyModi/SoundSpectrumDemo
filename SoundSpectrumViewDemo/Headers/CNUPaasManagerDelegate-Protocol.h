//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol CNUPaasManagerDelegate <NSObject>

@optional
- (void)onUpaasStatisticsAction:(NSString *)arg1 params:(NSDictionary *)arg2;
- (void)UPaasManagerStateDidChanged:(int)arg1;
- (void)UPaasManagerDidGetServerUrl:(NSString *)arg1;
- (void)UPaasManagerDidFetchVid:(NSString *)arg1;
- (void)UPaasManagerDidLoginCompleted;
@end
