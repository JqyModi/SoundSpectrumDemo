//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface UTDurationCustomEventManager : NSObject
{
    NSMutableDictionary *_eventItems;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)getInstance;
@property(retain) NSMutableDictionary *eventItems; // @synthesize eventItems=_eventItems;
- (void).cxx_destruct;
- (void)removeItem:(id)arg1;
- (id)item:(id)arg1;
- (void)addItem:(id)arg1 forKey:(id)arg2;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

