//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SmartSwitch.h"

@interface BuildTimeSwitch : SmartSwitch
{
    _Bool _triggered;
    _Bool _triggerChecked;
    double _triggerTimeInterval;
}

@property(nonatomic) _Bool triggerChecked; // @synthesize triggerChecked=_triggerChecked;
@property(nonatomic) _Bool triggered; // @synthesize triggered=_triggered;
@property(nonatomic) double triggerTimeInterval; // @synthesize triggerTimeInterval=_triggerTimeInterval;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)triggerDate;
- (_Bool)isSwitchTriggered;
- (id)initWithSwitchKey:(id)arg1 originalValue:(_Bool)arg2 triggeredValue:(_Bool)arg3 triggerTimeInterval:(double)arg4;

@end

