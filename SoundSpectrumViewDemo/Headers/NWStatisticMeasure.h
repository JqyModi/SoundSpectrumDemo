//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NWStatisticMeasure : NSObject
{
    NSString *_name;
    double _minValue;
    double _maxValue;
    double _defaultValue;
    double _saveCoefficient;
    double _value;
}

@property(nonatomic) double value; // @synthesize value=_value;
@property(nonatomic) double saveCoefficient; // @synthesize saveCoefficient=_saveCoefficient;
@property(nonatomic) double defaultValue; // @synthesize defaultValue=_defaultValue;
@property(nonatomic) double maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) double minValue; // @synthesize minValue=_minValue;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 withMinValue:(double)arg2 withMaxValue:(double)arg3 withDefaultValue:(double)arg4 withSaveCoefficient:(double)arg5;

@end

