//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WKURLSchemeHandler-Protocol.h"

@class NSString, WKWebView;
@protocol WKURLSchemeTask;

@protocol OPRCustomSchemeHandlerProtocol <WKURLSchemeHandler>
+ (NSString *)customScheme;
- (void)webView:(WKWebView *)arg1 stopURLSchemeTask:(id <WKURLSchemeTask>)arg2;
- (void)webView:(WKWebView *)arg1 startURLSchemeTask:(id <WKURLSchemeTask>)arg2;
@end
