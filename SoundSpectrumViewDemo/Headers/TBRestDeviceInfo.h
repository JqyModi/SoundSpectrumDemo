//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TBRestDeviceInfo : NSObject
{
    NSString *mOsName;
    NSString *mUtdid;
    NSString *mAppVersion;
    NSString *mImei;
    NSString *mImsi;
    NSString *mBrand;
    NSString *mCpu;
    NSString *mDeviceId;
    NSString *mDeviceModel;
    NSString *mResolution;
    NSString *mCarrier;
    NSString *mAccess;
    NSString *mAccessSubType;
    NSString *mCountry;
    NSString *mLanguage;
    NSString *mOsVersion;
}

@property(retain) NSString *mOsVersion; // @synthesize mOsVersion;
@property(retain) NSString *mLanguage; // @synthesize mLanguage;
@property(retain) NSString *mCountry; // @synthesize mCountry;
@property(retain) NSString *mAccessSubType; // @synthesize mAccessSubType;
@property(retain) NSString *mAccess; // @synthesize mAccess;
@property(retain) NSString *mCarrier; // @synthesize mCarrier;
@property(retain) NSString *mResolution; // @synthesize mResolution;
@property(retain) NSString *mDeviceModel; // @synthesize mDeviceModel;
@property(retain) NSString *mDeviceId; // @synthesize mDeviceId;
@property(retain) NSString *mCpu; // @synthesize mCpu;
@property(retain) NSString *mBrand; // @synthesize mBrand;
@property(retain) NSString *mImsi; // @synthesize mImsi;
@property(retain) NSString *mImei; // @synthesize mImei;
@property(retain) NSString *mAppVersion; // @synthesize mAppVersion;
@property(retain) NSString *mUtdid; // @synthesize mUtdid;
@property(retain) NSString *mOsName; // @synthesize mOsName;
- (void).cxx_destruct;

@end

