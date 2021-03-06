//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "OPWebViewBaseProtocol-Protocol.h"
#import "OPWebViewJsbProtocol-Protocol.h"
#import "OPWebViewNavigationProtocol-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"
#import "WKScriptMessageHandler-Protocol.h"
#import "WKUIDelegate-Protocol.h"

@class NSMutableArray, NSString, NSURL, WKUserContentController, WKWebView;
@protocol OPWebViewDelegate;

@interface OPWebView : UIView <WKScriptMessageHandler, WKNavigationDelegate, WKUIDelegate, OPWebViewBaseProtocol, OPWebViewNavigationProtocol, OPWebViewJsbProtocol>
{
    id <OPWebViewDelegate> delegate;
    WKWebView *_webView;
    WKUserContentController *_userContentController;
    NSMutableArray *_jsbHandlerList;
}

@property(retain, nonatomic) NSMutableArray *jsbHandlerList; // @synthesize jsbHandlerList=_jsbHandlerList;
@property(retain, nonatomic) WKUserContentController *userContentController; // @synthesize userContentController=_userContentController;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak id <OPWebViewDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webViewDidClose:(id)arg1;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)removeJavaScriptHandlerName:(id)arg1;
- (void)addJavaScriptHanlderName:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)evaluateJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)forwardToTop;
- (void)backToRoot;
- (void)goForward;
- (void)goBack;
@property(readonly, nonatomic) _Bool canGoForward;
@property(readonly, nonatomic) _Bool canGoBack;
- (void)stopLoading;
- (void)reload;
- (void)loadRequest:(id)arg1;
@property(readonly, copy, nonatomic) NSURL *URL;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) double estimatedProgress;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
- (void)webViewInit:(id)arg1;
- (void)dealloc;
- (id)initWithCustomSchemeHandler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

