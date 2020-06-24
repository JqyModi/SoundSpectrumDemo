//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UTMCTnetRequestHelper : NSObject
{
    long long _adashProtocolType;
    double _lastUploadTimeInterval;
}

+ (id)uploadDataWithV1ProtocolToBufferWithStream:(id)arg1 miniWua:(id)arg2;
+ (id)uploadDataToBufferWithStream:(id)arg1 host:(id)arg2 port:(unsigned int)arg3 tnetObject:(id *)arg4 uploadGalleryType:(long long)arg5;
+ (id)uploadDataToBufferWithStream:(id)arg1 host:(id)arg2 port:(unsigned int)arg3 tnetObject:(id *)arg4;
+ (void)setAdashProtocolType:(long long)arg1;
+ (id)sharedInstance;
@property(nonatomic) double lastUploadTimeInterval; // @synthesize lastUploadTimeInterval=_lastUploadTimeInterval;
@property(nonatomic) long long adashProtocolType; // @synthesize adashProtocolType=_adashProtocolType;
- (id)_headerToBuffer:(unsigned long long)arg1 type:(unsigned char)arg2 adashProtocolType:(long long)arg3;
- (id)_offlineGalleryToBuffer:(unsigned long long)arg1 adashProtocolType:(long long)arg2;
- (id)_offlineGalleryToBuffer:(unsigned long long)arg1;
- (id)_realTimeGalleryToBuffer:(unsigned long long)arg1;
- (id)_payLoadHeaderToBufferWithSession:(id)arg1 type:(long long)arg2 miniWua:(id)arg3;
- (id)_v2_uploadLogsToBufferWithLogsDict:(id)arg1 session:(id)arg2;
- (id)_v1_uploadLogsToBuffer:(id)arg1;
- (id)_v1_uploadDataToBufferWithStream:(id)arg1 miniWua:(id)arg2;
- (id)_uploadDataToBufferWithStream:(id)arg1 host:(id)arg2 port:(unsigned int)arg3 tnetObject:(id *)arg4 uploadGalleryType:(long long)arg5;

@end

