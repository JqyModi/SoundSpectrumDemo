//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OPRAccountBindingInfo : NSObject
{
    unsigned long long _bindingState;
    NSString *_bindingType;
    NSString *_bindShowName;
}

+ (id)bindingInfoWithType:(id)arg1 inDictArray:(id)arg2;
+ (id)bindingInfoWithDict:(id)arg1;
@property(copy, nonatomic) NSString *bindShowName; // @synthesize bindShowName=_bindShowName;
@property(copy, nonatomic) NSString *bindingType; // @synthesize bindingType=_bindingType;
@property(nonatomic) unsigned long long bindingState; // @synthesize bindingState=_bindingState;
- (void).cxx_destruct;
- (void)updateBinding:(unsigned long long)arg1 showName:(id)arg2;

@end
