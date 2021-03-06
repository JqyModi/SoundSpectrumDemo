//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface OSSResult : NSObject
{
    long long _httpResponseCode;
    NSDictionary *_httpResponseHeaderFields;
    NSString *_requestId;
    NSString *_remoteCRC64ecma;
    NSString *_localCRC64ecma;
}

@property(copy, nonatomic) NSString *localCRC64ecma; // @synthesize localCRC64ecma=_localCRC64ecma;
@property(copy, nonatomic) NSString *remoteCRC64ecma; // @synthesize remoteCRC64ecma=_remoteCRC64ecma;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) NSDictionary *httpResponseHeaderFields; // @synthesize httpResponseHeaderFields=_httpResponseHeaderFields;
@property(nonatomic) long long httpResponseCode; // @synthesize httpResponseCode=_httpResponseCode;
- (void).cxx_destruct;
- (id)description;

@end

