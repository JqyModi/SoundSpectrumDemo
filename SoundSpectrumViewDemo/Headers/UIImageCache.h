//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface UIImageCache : NSObject
{
    NSMutableDictionary *m_cacheDict;
    int m_nTotalImageSize;
}

+ (void)pushImage:(id)arg1;
+ (void)removeImage:(id)arg1;
+ (void)clear;
+ (id)imageWithData:(id)arg1 filePath:(id)arg2;
+ (id)imageWithContentsOfFile:(id)arg1 checkCache:(_Bool)arg2;
+ (id)defaultCacheImage;
- (void)clear;
- (void)didReceiveMemoryWarning;
- (id)description;
- (id)imageWithData:(id)arg1 filePath:(id)arg2;
- (id)imageWithContentsOfFile:(id)arg1 checkCache:(_Bool)arg2;
- (id)getImageWithoutCacheForPath:(id)arg1;
- (id)getImage:(id)arg1 checkCache:(_Bool)arg2;
- (void)removeImage:(id)arg1;
- (void)pushImage:(id)arg1;
- (void)clearSomeCaches;
- (void)dealloc;
- (id)init;

@end

