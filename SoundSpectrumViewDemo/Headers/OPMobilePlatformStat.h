//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IUCAFStatService-Protocol.h"

@class NSString;

@interface OPMobilePlatformStat : NSObject <IUCAFStatService>
{
}

- (void)statWithEventId:(id)arg1 pageName:(id)arg2 spmA:(id)arg3 spmB:(id)arg4 spmC:(id)arg5 spmD:(id)arg6 controlName:(id)arg7 properties:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
