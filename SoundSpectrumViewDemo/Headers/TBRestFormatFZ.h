//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TBRestFormatFZ : NSObject
{
}

+ (void)append2byteWithUInt16:(id)arg1 value:(unsigned short)arg2;
+ (void)append4byteWithUInt32:(id)arg1 value:(unsigned int)arg2;
+ (id)parseResponseData:(id)arg1;
+ (id)getPayloadData:(unsigned int)arg1 responseStrings:(id)arg2;
+ (id)getPayloadData:(unsigned int)arg1 responseString:(id)arg2;
+ (id)getPayloadHeader;
+ (id)convertTraceLogToReqData:(int)arg1 responseStrings:(id)arg2;
+ (id)convertTraceLogToReqData:(int)arg1 sessionBuffer:(id)arg2 traceBuffer:(id)arg3;
+ (id)assemblePayloadData:(id)arg1;

@end

