//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface OPSUTOriginalCustom : NSObject
{
    NSString *_eventId;
    NSString *_name;
    NSDictionary *_properties;
}

@property(retain, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
- (void).cxx_destruct;
- (void)sendWithPageName:(id)arg1;
- (id)utService;
- (id)initWithEventId:(id)arg1 withName:(id)arg2;

@end
