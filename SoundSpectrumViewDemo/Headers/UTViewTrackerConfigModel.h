//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UTViewTrackerConfigModel : NSObject
{
    _Bool _turnOn;
    float _areaThreshold;
    float _commitDelay;
    unsigned long long _timeThreshold;
}

@property(nonatomic) float commitDelay; // @synthesize commitDelay=_commitDelay;
@property(nonatomic) float areaThreshold; // @synthesize areaThreshold=_areaThreshold;
@property(nonatomic) unsigned long long timeThreshold; // @synthesize timeThreshold=_timeThreshold;
@property(nonatomic) _Bool turnOn; // @synthesize turnOn=_turnOn;
- (void)updateWithJSONDictionary:(id)arg1;
- (id)init;

@end
