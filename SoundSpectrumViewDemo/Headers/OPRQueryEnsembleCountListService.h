//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class OPRBaseService;

@interface OPRQueryEnsembleCountListService : NSObject
{
    _Bool _isStart;
    CDUnknownBlockType _queryResultBlock;
    CDUnknownBlockType _queryCancelBlock;
    OPRBaseService *_queryDataService;
}

@property(nonatomic) _Bool isStart; // @synthesize isStart=_isStart;
@property(retain, nonatomic) OPRBaseService *queryDataService; // @synthesize queryDataService=_queryDataService;
@property(copy, nonatomic) CDUnknownBlockType queryCancelBlock; // @synthesize queryCancelBlock=_queryCancelBlock;
@property(copy, nonatomic) CDUnknownBlockType queryResultBlock; // @synthesize queryResultBlock=_queryResultBlock;
- (void).cxx_destruct;
- (_Bool)requesting;
- (void)cancelRequest;
- (void)requestDataList:(id)arg1 size:(long long)arg2 itemId:(id)arg3;

@end

