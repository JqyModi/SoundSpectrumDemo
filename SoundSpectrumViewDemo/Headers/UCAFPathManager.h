//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UCAFPathManager : NSObject
{
}

+ (_Bool)ucaf_isDirectory:(id)arg1;
+ (_Bool)ucaf_fileExistsAtPath:(id)arg1 isDirectory:(_Bool *)arg2;
+ (_Bool)ucaf_fileExistsAtPath:(id)arg1;
+ (id)ucaf_localRelativePath:(id)arg1 haspathComponent:(_Bool)arg2;
+ (_Bool)ucaf_pathIsLocalPath:(id)arg1;
+ (id)ucaf_getGeneralDownloadPath;
+ (id)ucaf_inboxDirectory;
+ (id)ucaf_localFilesDirectory;
+ (id)ucaf_tmpDirectory:(id)arg1 mkDir:(_Bool)arg2;
+ (id)ucaf_tmpPath:(id)arg1 mkDir:(_Bool)arg2;
+ (id)ucaf_tmpDirectory;
+ (id)ucaf_cachesDirectory:(id)arg1 mkDir:(_Bool)arg2;
+ (id)ucaf_cachesPath:(id)arg1 mkDir:(_Bool)arg2;
+ (id)ucaf_cachesDirectory;
+ (id)ucaf_profileDirectory:(id)arg1 mkDir:(_Bool)arg2;
+ (id)ucaf_profilePath:(id)arg1 mkDir:(_Bool)arg2;
+ (id)ucaf_tempDirectory;
+ (id)ucaf_profileDirectory;
+ (id)ucaf_documentDirectory:(id)arg1 mkDir:(_Bool)arg2;
+ (id)ucaf_documentPath:(id)arg1 mkDir:(_Bool)arg2;
+ (id)ucaf_documentDirectory;
+ (void)ucaf_createDirectoryAtPath:(id)arg1;
+ (void)ucaf_createDirectoryIfNeeded:(id)arg1;
+ (id)ucaf_libraryDirectory;
+ (id)ucaf_homeDirectory;

@end

