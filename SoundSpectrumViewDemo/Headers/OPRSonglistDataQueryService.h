//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURLSessionDataTask, OPRBaseService;

@interface OPRSonglistDataQueryService : NSObject
{
    CDUnknownBlockType _queryResultBlock;
    CDUnknownBlockType _queryCancelBlock;
    NSURLSessionDataTask *_requestTask;
    double _startTime;
    OPRBaseService *_queryDataService;
}

@property(retain, nonatomic) OPRBaseService *queryDataService; // @synthesize queryDataService=_queryDataService;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSURLSessionDataTask *requestTask; // @synthesize requestTask=_requestTask;
@property(copy, nonatomic) CDUnknownBlockType queryCancelBlock; // @synthesize queryCancelBlock=_queryCancelBlock;
@property(copy, nonatomic) CDUnknownBlockType queryResultBlock; // @synthesize queryResultBlock=_queryResultBlock;
- (void).cxx_destruct;
- (_Bool)requesting;
- (void)cancelRequest;
- (void)requestDataList:(id)arg1;
- (void)requestDataList:(_Bool)arg1 size:(long long)arg2 cursor:(id)arg3 next:(_Bool)arg4;

@end

