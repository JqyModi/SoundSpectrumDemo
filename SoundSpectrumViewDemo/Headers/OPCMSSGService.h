//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IUCAFSecurtityGuardService-Protocol.h"

@class NSString;

@interface OPCMSSGService : NSObject <IUCAFSecurtityGuardService>
{
    NSString *seqNo;
    NSString *authCode;
}

@property(retain, nonatomic) NSString *authCode; // @synthesize authCode;
@property(retain, nonatomic) NSString *seqNo; // @synthesize seqNo;
- (void).cxx_destruct;
- (id)securitySign:(id)arg1;
- (id)decNSStringBase64:(id)arg1;
- (id)decNSData:(id)arg1;
- (id)encStringBase64:(id)arg1;
- (id)encNSString:(id)arg1;
- (id)encNSData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

