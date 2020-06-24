//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSTimer;
@protocol NSCoding;

@interface UCTimerSerialization : NSObject
{
    _Bool _needsEncrypt;
    NSObject<NSCoding> *_target;
    NSString *_outputPath;
    NSTimer *_scheduleTimer;
    double _outputInterval;
}

@property(readonly, nonatomic) double outputInterval; // @synthesize outputInterval=_outputInterval;
@property(retain, nonatomic) NSTimer *scheduleTimer; // @synthesize scheduleTimer=_scheduleTimer;
@property(readonly, nonatomic) _Bool needsEncrypt; // @synthesize needsEncrypt=_needsEncrypt;
@property(readonly, nonatomic) NSString *outputPath; // @synthesize outputPath=_outputPath;
@property(retain, nonatomic) NSObject<NSCoding> *target; // @synthesize target=_target;
- (void)outputToFile;
- (void)scheduledOutputToFile;
- (void)synchronize;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 needsEncrypt:(_Bool)arg2 outputPath:(id)arg3 outputInterval:(double)arg4;

@end
