//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMMotionManager;

@interface OPMotionManager : NSObject
{
    CMMotionManager *_motionManager;
    unsigned long long _shakeCount;
}

+ (id)defaultMotion;
@property(nonatomic) unsigned long long shakeCount; // @synthesize shakeCount=_shakeCount;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
- (void).cxx_destruct;
- (void)resetShakeCount;
- (void)outputAccelertionData:(CDStruct_39925896)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)stopAccelerometerWithHandler;
- (void)startAccelerometerWithHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end

