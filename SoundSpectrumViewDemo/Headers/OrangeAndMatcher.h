//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface OrangeAndMatcher : NSObject
{
    NSArray *_unitMatcherList;
}

+ (id)andMatcherWithRegex:(id)arg1;
@property(retain, nonatomic) NSArray *unitMatcherList; // @synthesize unitMatcherList=_unitMatcherList;
- (void).cxx_destruct;
- (_Bool)match:(id)arg1;
- (id)initWithRegex:(id)arg1;

@end

