//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TBAccsUtil : NSObject
{
}

+ (id)getABTestBucketId:(id)arg1;
+ (_Bool)isABTestOn:(id)arg1 key:(id)arg2 defaultValue:(_Bool)arg3;
+ (_Bool)isSpeedEdition;
+ (void)flowAnalysisWithBizid:(id)arg1 upSize:(id)arg2 downSize:(id)arg3;
+ (id)base64EncodedStringFrom:(id)arg1;
+ (id)dataWithBase64EncodedString:(id)arg1;
+ (id)getShortDateString:(id)arg1;
+ (id)dataToString:(id)arg1;
+ (id)getDocPath;
+ (id)appVersion;
+ (id)sdkVersion;
+ (id)getStringDateByDate:(id)arg1 formate:(id)arg2;
+ (id)getStringDateByDate:(id)arg1;
+ (id)makeCallBackDictByRequest:(id)arg1 entity:(id)arg2;
+ (id)getDataID;
+ (id)currentDate;
+ (id)getDeviceModel;
+ (id)appStatus;
+ (id)getAppVersion;
+ (id)utdid;

@end

