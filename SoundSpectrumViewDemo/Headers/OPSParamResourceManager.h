//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OPSParamResourceManager : NSObject
{
}

+ (id)stringValueForKey:(id)arg1 withDefault:(id)arg2 withCode:(id)arg3;
+ (_Bool)isMatchValue:(id)arg1 withKey:(id)arg2 withCode:(id)arg3;
+ (id)numberValueForKey:(id)arg1 withCode:(id)arg2;
+ (id)arrayValueForKey:(id)arg1 withCode:(id)arg2;
+ (double)doubleValueForKey:(id)arg1 withCode:(id)arg2;
+ (_Bool)boolValueForKey:(id)arg1 withCode:(id)arg2;
+ (long long)integerValueForKey:(id)arg1 withCode:(id)arg2;
+ (id)stringValueForKey:(id)arg1 withCode:(id)arg2;
+ (id)dictionaryValueForKey:(id)arg1 withCode:(id)arg2;
+ (id)objectValueForKey:(id)arg1 withCode:(id)arg2;
+ (_Bool)containsKey:(id)arg1 withCode:(id)arg2;
+ (id)paramDictWithCode:(id)arg1;
+ (id)resourceWithCode:(id)arg1;
+ (void)addParamResourceWithCode:(id)arg1;
+ (id)shareManager;

@end

