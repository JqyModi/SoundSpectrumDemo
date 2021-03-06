//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, OrangeIPStrategy, OrangeIndexNamespaceModel;

@interface OrangeNamespaceRequest : NSObject
{
    _Bool _requesting;
    int _cdnReqeustTime;
    int _apiServerReqeustTime;
    int _cdnMaxRetry;
    int _apiServerMaxRetry;
    OrangeIPStrategy *_ipStrategy;
    NSString *_url;
    NSString *_protocol;
    OrangeIndexNamespaceModel *_indexNamespaceModel;
}

@property(retain, nonatomic) OrangeIndexNamespaceModel *indexNamespaceModel; // @synthesize indexNamespaceModel=_indexNamespaceModel;
@property(copy, nonatomic) NSString *protocol; // @synthesize protocol=_protocol;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) OrangeIPStrategy *ipStrategy; // @synthesize ipStrategy=_ipStrategy;
@property(nonatomic) int apiServerMaxRetry; // @synthesize apiServerMaxRetry=_apiServerMaxRetry;
@property(nonatomic) int cdnMaxRetry; // @synthesize cdnMaxRetry=_cdnMaxRetry;
@property(nonatomic) int apiServerReqeustTime; // @synthesize apiServerReqeustTime=_apiServerReqeustTime;
@property(nonatomic) int cdnReqeustTime; // @synthesize cdnReqeustTime=_cdnReqeustTime;
@property(nonatomic) _Bool requesting; // @synthesize requesting=_requesting;
- (void).cxx_destruct;

@end

