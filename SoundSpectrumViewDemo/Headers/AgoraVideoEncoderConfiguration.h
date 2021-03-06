//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AgoraVideoEncoderConfiguration : NSObject
{
    long long _frameRate;
    long long _minFrameRate;
    long long _bitrate;
    long long _minBitrate;
    long long _orientationMode;
    long long _degradationPreference;
    struct CGSize _dimensions;
}

@property(nonatomic) long long degradationPreference; // @synthesize degradationPreference=_degradationPreference;
@property(nonatomic) long long orientationMode; // @synthesize orientationMode=_orientationMode;
@property(nonatomic) long long minBitrate; // @synthesize minBitrate=_minBitrate;
@property(nonatomic) long long bitrate; // @synthesize bitrate=_bitrate;
@property(nonatomic) long long minFrameRate; // @synthesize minFrameRate=_minFrameRate;
@property(nonatomic) long long frameRate; // @synthesize frameRate=_frameRate;
@property(nonatomic) struct CGSize dimensions; // @synthesize dimensions=_dimensions;
- (id)initWithWidth:(long long)arg1 height:(long long)arg2 frameRate:(long long)arg3 bitrate:(long long)arg4 orientationMode:(long long)arg5;
- (id)initWithSize:(struct CGSize)arg1 frameRate:(long long)arg2 bitrate:(long long)arg3 orientationMode:(long long)arg4;
- (id)init;

@end

