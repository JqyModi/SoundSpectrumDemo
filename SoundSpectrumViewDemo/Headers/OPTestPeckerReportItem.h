//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface OPTestPeckerReportItem : NSObject <NSCoding>
{
    NSString *_itemId;
    NSString *_info;
    NSString *_userInfo;
    NSDictionary *_extensionInfo;
    NSMutableDictionary *_imageDict;
    NSMutableArray *_imageNames;
}

+ (id)loadWithId:(id)arg1;
+ (id)dirWithId:(id)arg1;
@property(retain, nonatomic) NSMutableArray *imageNames; // @synthesize imageNames=_imageNames;
@property(retain, nonatomic) NSMutableDictionary *imageDict; // @synthesize imageDict=_imageDict;
@property(retain, nonatomic) NSDictionary *extensionInfo; // @synthesize extensionInfo=_extensionInfo;
@property(retain, nonatomic) NSString *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSString *info; // @synthesize info=_info;
@property(readonly, copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (void)clearData;
- (void)saveToFile;
- (void)removeImage:(id)arg1;
- (id)addImage:(id)arg1;
@property(readonly, nonatomic) NSDictionary *images;
- (id)dir;
- (id)generateId;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end
