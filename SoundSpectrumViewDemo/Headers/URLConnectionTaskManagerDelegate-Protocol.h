//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSError, NSURLResponse, URLConnectionTaskRequest;

@protocol URLConnectionTaskManagerDelegate <NSObject>

@optional
- (void)didReceiveResponse:(NSURLResponse *)arg1 withRequest:(URLConnectionTaskRequest *)arg2;
- (void)didReceivePartData:(NSData *)arg1 withRequest:(URLConnectionTaskRequest *)arg2;
- (_Bool)shouldRetryRequest:(URLConnectionTaskRequest *)arg1 onError:(NSError *)arg2 useBackupURL:(_Bool *)arg3;
- (void)didFailWithError:(NSError *)arg1 withRequest:(URLConnectionTaskRequest *)arg2;
- (void)didReceiveData:(NSData *)arg1 withRequest:(URLConnectionTaskRequest *)arg2;
- (void)didParsedData:(id)arg1 parsedError:(NSError *)arg2 withRequest:(URLConnectionTaskRequest *)arg3;
@end

