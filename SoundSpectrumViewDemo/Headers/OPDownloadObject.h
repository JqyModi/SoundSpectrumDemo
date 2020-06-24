//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSURLSessionDownloadTask;

@interface OPDownloadObject : NSObject
{
    _Bool _hasRetry;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _remainingTimeBlock;
    NSURLSessionDownloadTask *_downloadTask;
    NSString *_fileName;
    NSString *_friendlyName;
    NSString *_directoryName;
    NSString *_customFileDirectoryPath;
    NSDate *_startDate;
}

@property(nonatomic) _Bool hasRetry; // @synthesize hasRetry=_hasRetry;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(copy, nonatomic) NSString *customFileDirectoryPath; // @synthesize customFileDirectoryPath=_customFileDirectoryPath;
@property(copy, nonatomic) NSString *directoryName; // @synthesize directoryName=_directoryName;
@property(copy, nonatomic) NSString *friendlyName; // @synthesize friendlyName=_friendlyName;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSURLSessionDownloadTask *downloadTask; // @synthesize downloadTask=_downloadTask;
@property(copy, nonatomic) CDUnknownBlockType remainingTimeBlock; // @synthesize remainingTimeBlock=_remainingTimeBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
- (void).cxx_destruct;
- (id)initWithDownloadTask:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 remainingTime:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end

