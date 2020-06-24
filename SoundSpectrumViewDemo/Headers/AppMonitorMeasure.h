//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface AppMonitorMeasure : NSObject <NSCoding>
{
    NSString *_name;
    NSNumber *_constantValue;
    NSNumber *_min;
    NSNumber *_max;
    NSArray *_bounds;
}

@property(copy, nonatomic) NSArray *bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) NSNumber *max; // @synthesize max=_max;
@property(retain, nonatomic) NSNumber *min; // @synthesize min=_min;
@property(retain, nonatomic) NSNumber *constantValue; // @synthesize constantValue=_constantValue;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isPureDouble:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)valid:(id)arg1;
- (void)setRangeWithMin:(id)arg1 max:(id)arg2;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 constantValue:(id)arg2;
- (id)initWithName:(id)arg1 constantValue:(id)arg2 min:(id)arg3 max:(id)arg4;
- (id)initWithName:(id)arg1 constantValue:(id)arg2 bounds:(id)arg3;

@end

