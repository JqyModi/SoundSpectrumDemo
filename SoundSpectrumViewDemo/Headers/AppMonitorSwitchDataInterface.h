//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AppMonitorSwitchDataInterface : NSObject
{
    _Bool _sample;
}

+ (void)disableSample;
+ (id)sharedInstance;
@property _Bool sample; // @synthesize sample=_sample;
- (void)setLocalConfig;
- (_Bool)GetResult:(id)arg1 MonitorPoint:(id)arg2 Type:(id)arg3 isSuccess:(_Bool)arg4 Dimension:(id)arg5 Arg:(id)arg6;
- (_Bool)GetResult:(id)arg1 MonitorPoint:(id)arg2 Type:(id)arg3 Dimension:(id)arg4 Arg:(id)arg5;
- (int)GetValidPoint:(id)arg1 MonitorPoint:(id)arg2 Measure:(id)arg3 measureValue:(id)arg4;
- (id)init;

@end
