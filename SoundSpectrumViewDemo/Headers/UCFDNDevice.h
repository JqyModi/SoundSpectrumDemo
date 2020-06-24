//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UCFDNDevice : NSObject
{
}

+ (id)OSBuildVersion;
+ (float)screenHeight;
+ (float)screenWidth;
+ (int)screenScale;
+ (_Bool)isOrientationPortrait;
+ (_Bool)isSupportCamera;
+ (unsigned long long)curMemoryFootprint;
+ (double)curUsedMemoryVSize;
+ (double)curUsedMemory;
+ (double)curAvaliableMemory;
+ (unsigned long long)physicalMemorySize;
+ (double)freeDiskSpace;
+ (double)totalDiskSpace;
+ (float)systemVersionEx;
+ (float)systemVersion;
+ (id)generateDeviceUUID;
+ (_Bool)is2ndGenOrLower;
+ (_Bool)isIPodTouch;
+ (_Bool)isNormalEndEquipment;
+ (_Bool)isLowEndEquipment;
+ (_Bool)isLowDevString:(id)arg1;
+ (id)deviceModel;
+ (char *)getDeviceModel:(char *)arg1 modelSize:(int)arg2;
+ (_Bool)iJailbroken;
+ (_Bool)isWifi;

@end

