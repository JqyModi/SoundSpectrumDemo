//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface OPRSingingScreenRecorderAudioItem : NSObject
{
    NSString *_fileName;
    NSNumber *_beginPlayOffsetSecond;
    NSNumber *_volume;
    NSNumber *_endOffsetSecond;
}

@property(retain, nonatomic) NSNumber *endOffsetSecond; // @synthesize endOffsetSecond=_endOffsetSecond;
@property(retain, nonatomic) NSNumber *volume; // @synthesize volume=_volume;
@property(retain, nonatomic) NSNumber *beginPlayOffsetSecond; // @synthesize beginPlayOffsetSecond=_beginPlayOffsetSecond;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
- (void).cxx_destruct;

@end
