//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (UCPAspects)
+ (id)ucp_aspects_ifNotExitThenHookSelector:(SEL)arg1 withOptions:(unsigned long long)arg2 usingBlock:(id)arg3 error:(id *)arg4;
+ (_Bool)ucp_aspects_hasHookSelector:(SEL)arg1 withOptions:(unsigned long long)arg2 usingBlock:(id)arg3 error:(id *)arg4;
+ (id)ucp_aspects_hookSelector:(SEL)arg1 withOptions:(unsigned long long)arg2 usingBlock:(id)arg3 error:(id *)arg4;
- (id)ucp_aspects_ifNotExitThenHookSelector:(SEL)arg1 withOptions:(unsigned long long)arg2 usingBlock:(id)arg3 error:(id *)arg4;
- (_Bool)ucp_aspects_hasHookSelector:(SEL)arg1 withOptions:(unsigned long long)arg2 usingBlock:(id)arg3 error:(id *)arg4;
- (id)ucp_aspects_hookSelector:(SEL)arg1 withOptions:(unsigned long long)arg2 usingBlock:(id)arg3 error:(id *)arg4;
@end

