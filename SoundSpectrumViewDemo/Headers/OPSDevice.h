//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OPSDevice : NSObject
{
}

+ (id)macAddr;
+ (long long)diskAvailableSize;
+ (long long)diskTotalSize;
+ (double)memoryFree;
+ (double)memoryTotal;
+ (double)memoryUsed;
+ (long long)cpuNum;
+ (id)cpuType;
+ (struct CGSize)screenSize;
+ (id)deviceModel;
+ (id)deviceType;
+ (id)systemVersion;

@end

