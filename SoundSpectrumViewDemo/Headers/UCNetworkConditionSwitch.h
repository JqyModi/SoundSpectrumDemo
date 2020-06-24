//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface UCNetworkConditionSwitch : NSObject
{
    NSDictionary *_switchsInfo;
}

+ (id)conditionSwitchWithConfig:(id)arg1;
@property(retain, nonatomic) NSDictionary *switchsInfo; // @synthesize switchsInfo=_switchsInfo;
- (id)description;
- (id)keyForNetType:(int)arg1;
- (id)parseSwitchs:(id)arg1;
- (long long)switchForCurrentNetCondition;
- (id)switchFlagForCurrentNetCondition;
- (long long)switchForNetType:(int)arg1;
- (id)switchFlagForNetType:(int)arg1;
- (void)updateSwitchConfig:(id)arg1;
- (void)dealloc;
- (id)initWithConfig:(id)arg1;

@end

