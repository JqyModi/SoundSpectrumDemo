//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AgoraRtcLocalVideoStats : NSObject
{
    unsigned long long _sentBitrate;
    unsigned long long _sentFrameRate;
    unsigned long long _encoderOutputFrameRate;
    unsigned long long _rendererOutputFrameRate;
    unsigned long long _sentTargetBitrate;
    unsigned long long _sentTargetFrameRate;
    long long _qualityAdaptIndication;
    unsigned long long _encodedBitrate;
    unsigned long long _encodedFrameWidth;
    unsigned long long _encodedFrameHeight;
    unsigned long long _encodedFrameCount;
    long long _codecType;
}

@property(nonatomic) long long codecType; // @synthesize codecType=_codecType;
@property(nonatomic) unsigned long long encodedFrameCount; // @synthesize encodedFrameCount=_encodedFrameCount;
@property(nonatomic) unsigned long long encodedFrameHeight; // @synthesize encodedFrameHeight=_encodedFrameHeight;
@property(nonatomic) unsigned long long encodedFrameWidth; // @synthesize encodedFrameWidth=_encodedFrameWidth;
@property(nonatomic) unsigned long long encodedBitrate; // @synthesize encodedBitrate=_encodedBitrate;
@property(nonatomic) long long qualityAdaptIndication; // @synthesize qualityAdaptIndication=_qualityAdaptIndication;
@property(nonatomic) unsigned long long sentTargetFrameRate; // @synthesize sentTargetFrameRate=_sentTargetFrameRate;
@property(nonatomic) unsigned long long sentTargetBitrate; // @synthesize sentTargetBitrate=_sentTargetBitrate;
@property(nonatomic) unsigned long long rendererOutputFrameRate; // @synthesize rendererOutputFrameRate=_rendererOutputFrameRate;
@property(nonatomic) unsigned long long encoderOutputFrameRate; // @synthesize encoderOutputFrameRate=_encoderOutputFrameRate;
@property(nonatomic) unsigned long long sentFrameRate; // @synthesize sentFrameRate=_sentFrameRate;
@property(nonatomic) unsigned long long sentBitrate; // @synthesize sentBitrate=_sentBitrate;

@end

