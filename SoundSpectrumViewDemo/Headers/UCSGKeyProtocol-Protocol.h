//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol UCSGKeyProtocol;

@protocol UCSGKeyProtocol <NSObject>
+ (id <UCSGKeyProtocol>)getInstance;
- (NSString *)sHAACNTCTERReleaseSeqNoHexString;
- (NSString *)sHAACNTCTERReleaseKey;
- (char *)cipherACNTCTERReleaseSeqNoArr;
- (NSString *)cipherACNTCTERReleaseKey;
- (NSString *)sHAReleaseSeqNoHexString;
- (NSString *)sHADebugSeqNoHexString;
- (char *)sHAReleaseSeqNoArr;
- (char *)cipherReleaseSeqNoArr;
- (char *)cipherSHADebugSeqNoArr;
- (NSString *)sHAReleaseKey;
- (NSString *)cipherReleaseKey;
- (NSString *)cipherSHADebugKey;
- (NSString *)authCode;
- (long long)sGKeyInfoCount;
- (struct SGKeyInfoStruct *)sgKeyInfoList;
@end

