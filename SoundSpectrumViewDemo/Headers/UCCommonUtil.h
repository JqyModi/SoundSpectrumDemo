//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UCCommonUtil : NSObject
{
}

+ (struct CGSize)scaleSizeWithRatioRespected:(struct CGSize)arg1 toFitSize:(struct CGSize)arg2;
+ (void)removeRecycleBinTempFolder:(id)arg1;
+ (void)moveToFolder:(id)arg1 filePath:(id)arg2;
+ (id)getRecycleBinTempFolder;
+ (_Bool)moveToRecycleBin:(id)arg1 needRecreatePath:(_Bool)arg2;

@end

