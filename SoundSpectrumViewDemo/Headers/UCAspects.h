//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UCAspects : NSObject
{
}

+ (_Bool)hasMethodForClass:(Class)arg1 selector:(SEL)arg2 methodType:(long long)arg3;
+ (void)replaceMethodForClass:(Class)arg1 selector:(SEL)arg2 methodType:(long long)arg3 block:(id)arg4;
+ (_Bool)hookMethodForClass:(Class)arg1 selector:(SEL)arg2 methodType:(long long)arg3 usingBlock:(id)arg4;
+ (_Bool)hookClassMethodForClass:(Class)arg1 selector:(SEL)arg2 usingBlock:(id)arg3;
+ (_Bool)hookInstanceMethodForClass:(Class)arg1 selector:(SEL)arg2 usingBlock:(id)arg3;

@end

