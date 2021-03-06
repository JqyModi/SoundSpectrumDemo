//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OPAccountManagerObserver-Protocol.h"
#import "OPSRuntimeDataProvider-Protocol.h"

@class NSString, UCEncryptStore;

@interface OPSStartUpRuntimeFetcher : NSObject <OPSRuntimeDataProvider, OPAccountManagerObserver>
{
    NSString *_package;
    NSString *_sessionId;
    NSString *_nation;
    NSString *_ss;
    NSString *_pix;
    NSString *_os;
    NSString *_oem;
    NSString *_idfa;
    UCEncryptStore *_store;
    NSString *_entry;
    NSString *_ch;
    NSString *_cp;
}

+ (void)updateCp:(id)arg1;
+ (void)updateCh:(id)arg1;
+ (void)updateEntry:(id)arg1;
+ (id)defaultFetcher;
+ (void)start;
@property(copy, nonatomic) NSString *cp; // @synthesize cp=_cp;
@property(copy, nonatomic) NSString *ch; // @synthesize ch=_ch;
@property(copy, nonatomic) NSString *entry; // @synthesize entry=_entry;
@property(retain, nonatomic) UCEncryptStore *store; // @synthesize store=_store;
@property(copy, nonatomic) NSString *idfa; // @synthesize idfa=_idfa;
@property(copy, nonatomic) NSString *oem; // @synthesize oem=_oem;
@property(copy, nonatomic) NSString *os; // @synthesize os=_os;
@property(copy, nonatomic) NSString *pix; // @synthesize pix=_pix;
@property(copy, nonatomic) NSString *ss; // @synthesize ss=_ss;
@property(copy, nonatomic) NSString *nation; // @synthesize nation=_nation;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(copy, nonatomic) NSString *package; // @synthesize package=_package;
- (void).cxx_destruct;
- (id)oslang;
- (id)btype;
- (id)bmode;
- (id)bid;
- (id)dataId;
- (id)testId;
- (id)language;
- (id)loginST;
- (id)userName;
- (id)userId;
- (id)utdid;
- (id)pfid;
- (id)prd;
- (id)bseq;
- (id)subver;
- (id)ver;
- (id)platform;
- (id)app;
- (void)accountManager:(id)arg1 profileStatusChanged:(unsigned long long)arg2;
- (void)accountManager:(id)arg1 logerStatusChanged:(unsigned long long)arg2;
- (void)onCmsResourceUpdated;
- (void)dataChangedWithSelectorNames:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

