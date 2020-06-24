//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UCSGKeyProtocol-Protocol.h"

@class NSString;

@interface UCPrincipalSGKey : NSObject <UCSGKeyProtocol>
{
}

+ (id)getInstance;
- (id)sHAACNTCTERReleaseSeqNoHexString;
- (id)sHAACNTCTERReleaseKey;
- (char *)cipherACNTCTERReleaseSeqNoArr;
- (id)cipherACNTCTERReleaseKey;
- (id)sHAReleaseSeqNoHexString;
- (id)sHADebugSeqNoHexString;
- (char *)sHAReleaseSeqNoArr;
- (char *)cipherReleaseSeqNoArr;
- (char *)cipherSHADebugSeqNoArr;
- (id)sHAReleaseKey;
- (id)cipherReleaseKey;
- (id)cipherSHADebugKey;
- (void)setAuthCode:(id)arg1;
- (id)authCode;
- (long long)sGKeyInfoCount;
- (struct SGKeyInfoStruct *)sgKeyInfoList;
- (struct SGKeyInfoStruct)sgKeyInfoWithIndexType:(unsigned long long)arg1 withInternalNum:(unsigned long long)arg2 withExternalNum:(unsigned long long)arg3;
- (void)setSGKeyInfoList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
