//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface FSStreamStatistics : NSObject
{
    NSDate *_snapshotTime;
    unsigned long long _audioStreamPacketCount;
    unsigned long long _audioQueueUsedBufferCount;
    unsigned long long _audioQueuePCMPacketQueueCount;
}

@property(nonatomic) unsigned long long audioQueuePCMPacketQueueCount; // @synthesize audioQueuePCMPacketQueueCount=_audioQueuePCMPacketQueueCount;
@property(nonatomic) unsigned long long audioQueueUsedBufferCount; // @synthesize audioQueueUsedBufferCount=_audioQueueUsedBufferCount;
@property(nonatomic) unsigned long long audioStreamPacketCount; // @synthesize audioStreamPacketCount=_audioStreamPacketCount;
@property(retain, nonatomic) NSDate *snapshotTime; // @synthesize snapshotTime=_snapshotTime;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSString *snapshotTimeFormatted;

@end

