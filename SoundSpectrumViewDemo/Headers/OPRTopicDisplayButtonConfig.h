//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OPRTopicDisplayButtonConfig : NSObject
{
    unsigned long long _type;
    NSString *_forwardUrl;
    NSString *_displayDesc;
}

@property(copy, nonatomic) NSString *displayDesc; // @synthesize displayDesc=_displayDesc;
@property(copy, nonatomic) NSString *forwardUrl; // @synthesize forwardUrl=_forwardUrl;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg1;

@end

