//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol AgoraVideoFrameConsumer <NSObject>
- (void)consumeRawData:(void *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 format:(unsigned long long)arg3 size:(struct CGSize)arg4 rotation:(long long)arg5;
- (void)consumePixelBuffer:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 rotation:(long long)arg3;
@end

