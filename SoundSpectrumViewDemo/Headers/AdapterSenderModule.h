//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface AdapterSenderModule : NSObject
{
    int eventId;
    NSDictionary *sendContent;
    NSString *businessType;
    NSString *aggregationType;
    NSString *sendFlag;
    NSString *currentStack;
}

@property(retain, nonatomic) NSString *currentStack; // @synthesize currentStack;
@property(retain, nonatomic) NSString *sendFlag; // @synthesize sendFlag;
@property(nonatomic) int eventId; // @synthesize eventId;
@property(retain, nonatomic) NSString *aggregationType; // @synthesize aggregationType;
@property(retain, nonatomic) NSString *businessType; // @synthesize businessType;
@property(retain, nonatomic) NSDictionary *sendContent; // @synthesize sendContent;
- (void).cxx_destruct;

@end

