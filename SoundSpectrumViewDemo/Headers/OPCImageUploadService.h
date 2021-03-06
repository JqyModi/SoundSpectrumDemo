//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURLSessionTask;

@interface OPCImageUploadService : NSObject
{
    NSMutableDictionary *_finishTasksDict;
    NSMutableDictionary *_uploadingTasksDict;
    NSURLSessionTask *_currentTask;
}

+ (id)scaleImage:(id)arg1 toFileSize:(long long)arg2;
+ (id)MD5HexDigest:(id)arg1;
+ (id)commonService;
@property(retain, nonatomic) NSURLSessionTask *currentTask; // @synthesize currentTask=_currentTask;
@property(retain, nonatomic) NSMutableDictionary *uploadingTasksDict; // @synthesize uploadingTasksDict=_uploadingTasksDict;
@property(retain, nonatomic) NSMutableDictionary *finishTasksDict; // @synthesize finishTasksDict=_finishTasksDict;
- (void).cxx_destruct;
- (void)cancelUpload:(id)arg1;
- (id)uploadTaskWithImage:(id)arg1 buType:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

@end

