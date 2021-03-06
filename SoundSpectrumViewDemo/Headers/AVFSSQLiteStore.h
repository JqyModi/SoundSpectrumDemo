//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVFSDatabaseQueue, NSString;

@interface AVFSSQLiteStore : NSObject
{
    AVFSDatabaseQueue *_database;
    AVFSDatabaseQueue *_encryptDatabase;
    NSString *_moduleName;
    NSString *_path;
}

@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
- (void).cxx_destruct;
- (void)setEncryptData:(id)arg1 forKey:(id)arg2;
- (id)getEncryptDataForKey:(id)arg1;
- (id)_encryptDatabase;
- (id)_database;
- (id)encryptDatabase;
- (id)database;
- (id)getDataInfosEarlierThanTime:(long long)arg1;
- (id)getDataInfosOrderedByTimeWithLimit:(unsigned long long)arg1;
- (unsigned long long)totalByte;
- (unsigned long long)totalCount;
- (id)allkeys;
- (void)removeAllData;
- (_Bool)cleanDataForKey:(id)arg1;
- (void)removeDataForKey:(id)arg1;
- (id)setData:(id)arg1 forKey:(id)arg2 options:(unsigned long long)arg3 profileInfo:(id *)arg4;
- (id)setData:(id)arg1 forKey:(id)arg2 options:(unsigned long long)arg3;
- (id)getDataForKey:(id)arg1 error:(id *)arg2 profileInfo:(id *)arg3;
- (id)getDataForKey:(id)arg1 error:(id *)arg2;
- (_Bool)containsDataForKey:(id)arg1;
- (id)initWithModule:(id)arg1;

@end

