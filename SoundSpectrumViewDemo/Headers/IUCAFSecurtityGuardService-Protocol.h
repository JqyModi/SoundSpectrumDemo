//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol IUCAFSecurtityGuardService <NSObject>
@property(retain, nonatomic) NSString *authCode;
@property(retain, nonatomic) NSString *seqNo;
- (NSString *)securitySign:(NSString *)arg1;
- (NSData *)decNSData:(NSData *)arg1;
- (NSString *)decNSStringBase64:(NSString *)arg1;
- (NSData *)encNSString:(NSString *)arg1;
- (NSString *)encStringBase64:(NSString *)arg1;
- (NSData *)encNSData:(NSData *)arg1;
@end

