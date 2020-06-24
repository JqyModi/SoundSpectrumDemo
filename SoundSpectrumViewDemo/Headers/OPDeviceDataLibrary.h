//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OPDeviceDataLibrary : NSObject
{
    unsigned long long _iDevice;
}

+ (unsigned long long)transformMachineToIdevice;
+ (id)sharedLibrery;
@property(nonatomic) unsigned long long iDevice; // @synthesize iDevice=_iDevice;
- (id)getDiskSpaceVersion;
- (id)getCPUProcessor;
- (double)getBatterVolocity;
- (long long)getBatteryCapacity;
- (id)getLatestVersion;
- (id)getInitialVersion;
- (id)getDiviceName;

@end
