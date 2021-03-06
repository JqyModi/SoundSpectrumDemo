//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

@class NSDate, NSString;

@interface UIAttributeImage : UIImage
{
    _Bool virtualFile;
    _Bool _isDeallocing;
    NSString *pathName;
    long long fileSize;
    NSDate *fileDate;
    NSDate *lastReleaseDate;
    double _scale_ex;
}

+ (_Bool)setFileDate:(id)arg1 withFile:(id)arg2;
+ (_Bool)saveCGImageToDocuments:(struct CGImage *)arg1 name:(id)arg2;
+ (_Bool)saveCGImageToFile:(struct CGImage *)arg1 path:(id)arg2;
+ (id)imageWithData:(id)arg1 scale:(double)arg2;
+ (id)imageWithCGImage:(struct CGImage *)arg1;
+ (id)imageWithCGImage:(struct CGImage *)arg1 scale:(double)arg2;
+ (id)getFileAttribute:(id)arg1;
+ (void)setInitWithContentsOfFile_IMP:(CDUnknownFunctionPointerType)arg1;
@property(nonatomic) _Bool isDeallocing; // @synthesize isDeallocing=_isDeallocing;
@property(nonatomic) double scale_ex; // @synthesize scale_ex=_scale_ex;
@property(nonatomic) _Bool virtualFile; // @synthesize virtualFile;
@property(retain) NSDate *lastReleaseDate; // @synthesize lastReleaseDate;
@property(retain) NSDate *fileDate; // @synthesize fileDate;
@property(nonatomic) long long fileSize; // @synthesize fileSize;
@property(retain) NSString *pathName; // @synthesize pathName;
- (long long)dateCompare:(id)arg1;
- (oneway void)release;
- (id)retain;
- (void)dealloc;
- (id)initWithData:(id)arg1 filePath:(id)arg2;
- (id)initWithContentsOfFile:(id)arg1;
@property(readonly, nonatomic) double scale;
- (double)superScale;
- (struct CGSize)size;

@end

