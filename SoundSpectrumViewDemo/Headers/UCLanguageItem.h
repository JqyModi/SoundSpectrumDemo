//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface UCLanguageItem : NSObject
{
    long long _langType;
    NSString *_langName;
    NSString *_langCodeName;
    NSString *_langLocalName;
    NSString *_langParameterName;
}

@property(copy, nonatomic) NSString *langParameterName; // @synthesize langParameterName=_langParameterName;
@property(copy, nonatomic) NSString *langLocalName; // @synthesize langLocalName=_langLocalName;
@property(copy, nonatomic) NSString *langCodeName; // @synthesize langCodeName=_langCodeName;
@property(copy, nonatomic) NSString *langName; // @synthesize langName=_langName;
@property(nonatomic) long long langType; // @synthesize langType=_langType;
- (void)dealloc;
- (id)initWithType:(long long)arg1 withName:(id)arg2 withCode:(id)arg3 withLocal:(id)arg4 withParameter:(id)arg5;

@end
