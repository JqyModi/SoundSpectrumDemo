//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AppMonitorMeasureValueSet, NSMutableArray;

@interface AppMonitorEntity : NSObject
{
    _Bool _isDetail;
    int _lock;
    NSMutableArray *_measureValuesArray;
    long long _count;
    long long _noise;
    AppMonitorMeasureValueSet *_measureValues;
}

@property _Bool isDetail; // @synthesize isDetail=_isDetail;
@property(retain, nonatomic) AppMonitorMeasureValueSet *measureValues; // @synthesize measureValues=_measureValues;
@property long long noise; // @synthesize noise=_noise;
@property long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSMutableArray *measureValuesArray; // @synthesize measureValuesArray=_measureValuesArray;
@property(nonatomic) int lock; // @synthesize lock=_lock;
- (void).cxx_destruct;
- (id)getMeasureValuesArray;
- (void)merge:(id)arg1 metric:(id)arg2;
- (void)incrNoise;
- (void)incrCount;
- (id)init;

@end
