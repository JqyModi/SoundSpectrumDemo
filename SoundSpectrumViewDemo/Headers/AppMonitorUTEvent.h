//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface AppMonitorUTEvent : NSObject
{
    NSString *_eventId;
    NSString *_page;
    NSString *_arg1;
    NSString *_arg2;
    NSString *_arg3;
    NSString *_access;
    NSString *_subAccess;
    NSMutableDictionary *_args;
}

@property(retain, nonatomic) NSMutableDictionary *args; // @synthesize args=_args;
@property(retain, nonatomic) NSString *subAccess; // @synthesize subAccess=_subAccess;
@property(retain, nonatomic) NSString *access; // @synthesize access=_access;
@property(retain, nonatomic) NSString *arg3; // @synthesize arg3=_arg3;
@property(retain, nonatomic) NSString *arg2; // @synthesize arg2=_arg2;
@property(retain, nonatomic) NSString *arg1; // @synthesize arg1=_arg1;
@property(retain, nonatomic) NSString *page; // @synthesize page=_page;
@property(retain, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
- (void).cxx_destruct;
- (id)toUTDictionary;

@end

