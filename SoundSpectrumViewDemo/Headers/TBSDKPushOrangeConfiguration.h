//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TBSDKPushOrangeConfiguration : NSObject
{
    _Bool _retransmitAgooIdentifiersSwitch;
    NSMutableDictionary *_defaultValueDict;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool retransmitAgooIdentifiersSwitch; // @synthesize retransmitAgooIdentifiersSwitch=_retransmitAgooIdentifiersSwitch;
@property(retain, nonatomic) NSMutableDictionary *defaultValueDict; // @synthesize defaultValueDict=_defaultValueDict;
- (void).cxx_destruct;
- (_Bool)isEnableRetransmitAgooIdentifiers;
- (id)parseContent:(id)arg1 withKey:(id)arg2;
- (void)updateNotification:(id)arg1;
- (long long)orangeIntegerValue:(id)arg1;
- (_Bool)orangeBoolValue:(id)arg1;
- (id)orangeValue:(id)arg1;
- (id)init;

@end

