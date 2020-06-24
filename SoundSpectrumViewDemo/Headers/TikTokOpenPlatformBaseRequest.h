//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSURL;

@interface TikTokOpenPlatformBaseRequest : NSObject
{
    NSString *_requestId;
    NSString *_provider_requestId;
    NSString *_lang;
    NSString *_country;
    NSURL *_originalURL;
    NSDate *_createDate;
    NSDate *_sendDate;
    NSDate *_endDate;
}

@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *sendDate; // @synthesize sendDate=_sendDate;
@property(retain, nonatomic) NSDate *createDate; // @synthesize createDate=_createDate;
@property(retain, nonatomic) NSURL *originalURL; // @synthesize originalURL=_originalURL;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *lang; // @synthesize lang=_lang;
@property(copy, nonatomic) NSString *provider_requestId; // @synthesize provider_requestId=_provider_requestId;
@property(copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
- (void).cxx_destruct;
- (id)init;

@end

