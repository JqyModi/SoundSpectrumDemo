//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNDictHelper : NSObject
{
}

+ (id)getDictFromDict:(id)arg1 forKey:(id)arg2;
+ (id)getArrayFromDict:(id)arg1 forKey:(id)arg2;
+ (unsigned long long)getInt64tFromDict:(id)arg1 forKey:(id)arg2 defalutValue:(long long)arg3;
+ (_Bool)getBoolFromDict:(id)arg1 forKey:(id)arg2 defalutValue:(_Bool)arg3;
+ (float)getFloatFromDict:(id)arg1 forKey:(id)arg2 defalutValue:(float)arg3;
+ (int)getIntFromDict:(id)arg1 forKey:(id)arg2 defalutValue:(int)arg3;
+ (id)getStringFromDict:(id)arg1 forKey:(id)arg2;

@end

