//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSCrashReportFilter-Protocol.h"

@class NSDateFormatter, NSString, NSURL;

@interface WPKCrashReportSinkUp4 : NSObject <KSCrashReportFilter>
{
    NSURL *_uploadURL;
    NSDateFormatter *_dateFormatter;
}

+ (id)sink;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) NSURL *uploadURL; // @synthesize uploadURL=_uploadURL;
- (void).cxx_destruct;
- (id)aesCBCEncryptData:(id)arg1 key:(id)arg2;
- (void)uploadToUp4:(id)arg1 data:(id)arg2 filePath:(id)arg3 isAppExt:(_Bool)arg4;
- (id)getCrashFileName:(id)arg1 isAppExt:(_Bool)arg2;
- (void)filterReports:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (id)defaultCrashReportFilterSet;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

