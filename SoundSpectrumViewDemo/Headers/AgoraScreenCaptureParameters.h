//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AgoraScreenCaptureParameters : NSObject
{
    _Bool _captureMouseCursor;
    long long _frameRate;
    long long _bitrate;
    struct CGSize _dimensions;
}

@property(nonatomic) _Bool captureMouseCursor; // @synthesize captureMouseCursor=_captureMouseCursor;
@property(nonatomic) long long bitrate; // @synthesize bitrate=_bitrate;
@property(nonatomic) long long frameRate; // @synthesize frameRate=_frameRate;
@property(nonatomic) struct CGSize dimensions; // @synthesize dimensions=_dimensions;
- (id)init;

@end

