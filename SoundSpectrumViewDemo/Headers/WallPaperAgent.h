//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WallPaperSet;

@interface WallPaperAgent : NSObject
{
    struct vector<id<ThemeDataChangeDelegate>, std::__1::allocator<id<ThemeDataChangeDelegate>>> m_observerList;
    WallPaperSet *_wallPaperSet;
    NSString *_installedDir;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *installedDir; // @synthesize installedDir=_installedDir;
@property(retain, nonatomic) WallPaperSet *wallPaperSet; // @synthesize wallPaperSet=_wallPaperSet;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getFullInstallPathWithWallPaper:(id)arg1;
- (id)getWallPaperInstallDir;
- (id)getCurrentWallPaper;
- (id)getWallPaperByName:(id)arg1;
- (id)getAllWallPaperThemeInfo;
- (long long)getWallPaperCount;
- (_Bool)isCustomWallPaper;
- (_Bool)isCanApply:(id)arg1;
- (_Bool)isExists:(id)arg1;
- (id)deleteFileName2xTag:(id)arg1;
- (_Bool)isExistsFile:(id)arg1;
- (id)getWallPaperSet;
- (id)getDBFilePath;
- (_Bool)saveDBToFile;
- (void)moveWallpaperDataToNewDirIfNecessary;
- (void)loadDBFromFile;
- (void)initDB;
- (void)delaySendRegisterMessage:(id)arg1;
- (id)registerWallPaper:(id)arg1;
- (_Bool)saveToInstallConfigWithName:(id)arg1 configFile:(id)arg2;
- (id)loadInstallConfig:(id)arg1;
- (id)findINIFileName:(id)arg1;
- (id)findConfigFilePath:(id)arg1;
- (_Bool)deleteWallPaper:(id)arg1;
- (_Bool)cleanWallPaper;
- (_Bool)applyWallPaper:(id)arg1 skinName:(id)arg2;
- (_Bool)removeWallPaperObserver:(id)arg1;
- (void)addWallPaperObserver:(id)arg1;
- (void)dealloc;
- (id)init;

@end

