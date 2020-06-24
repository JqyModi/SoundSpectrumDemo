//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WaData : NSObject
{
    int _allUploadLine;
    CDUnknownBlockType _keyVCountBlock;
    NSMutableDictionary *_accumulateDic;
    NSMutableArray *_normalArr;
    NSString *_waDirectory;
    NSMutableDictionary *_outWaFiles;
}

+ (id)sharedInstance;
@property(nonatomic) int allUploadLine; // @synthesize allUploadLine=_allUploadLine;
@property(retain, nonatomic) NSMutableDictionary *outWaFiles; // @synthesize outWaFiles=_outWaFiles;
@property(retain, nonatomic) NSString *waDirectory; // @synthesize waDirectory=_waDirectory;
@property(retain, nonatomic) NSMutableArray *normalArr; // @synthesize normalArr=_normalArr;
@property(retain, nonatomic) NSMutableDictionary *accumulateDic; // @synthesize accumulateDic=_accumulateDic;
@property(copy, nonatomic) CDUnknownBlockType keyVCountBlock; // @synthesize keyVCountBlock=_keyVCountBlock;
- (_Bool)haveUpdateData;
- (void)removeOutTimeRecodeLines;
- (void)removeWaFilesRecodeLines:(_Bool)arg1;
- (int)uploadLine;
- (id)getNextPartWaData;
- (_Bool)prepareWaData;
- (id)dataAccumulate;
- (id)dataFromNormal;
- (void)fileData:(id)arg1 fileCount:(int)arg2 fileMark:(id)arg3;
- (void)fileAccumulate;
- (void)fileNormal;
- (void)fileCounter;
- (id)statisticsStrType:(id)arg1 component:(id)arg2 attributes:(id)arg3;
- (void)statisticsPackage:(id)arg1;
- (void)statisticsTask:(id)arg1;
- (void)statisticsAccumulate:(id)arg1;
- (void)statisticsNormal:(id)arg1;
- (int)accumulateCount;
- (id)dirName;
- (id)fileNameInterval;
- (void)dealloc;
- (id)init;

@end
