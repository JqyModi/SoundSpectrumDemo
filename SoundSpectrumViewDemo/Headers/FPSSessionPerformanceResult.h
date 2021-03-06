//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FPSSessionPerformanceResult : NSObject
{
    double _duration;
    double _maxFrameTime;
    unsigned long long _smallDrops;
    unsigned long long _mediumDrops;
    unsigned long long _largeDrops;
    unsigned long long _frameCount;
}

@property(nonatomic) unsigned long long frameCount; // @synthesize frameCount=_frameCount;
@property(nonatomic) unsigned long long largeDrops; // @synthesize largeDrops=_largeDrops;
@property(nonatomic) unsigned long long mediumDrops; // @synthesize mediumDrops=_mediumDrops;
@property(nonatomic) unsigned long long smallDrops; // @synthesize smallDrops=_smallDrops;
@property(nonatomic) double maxFrameTime; // @synthesize maxFrameTime=_maxFrameTime;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double averageFPS;
- (id)description;

@end

