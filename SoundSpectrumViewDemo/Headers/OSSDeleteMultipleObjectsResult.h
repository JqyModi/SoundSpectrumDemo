//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OSSResult.h"

@class NSArray, NSString;

@interface OSSDeleteMultipleObjectsResult : OSSResult
{
    NSArray *_deletedObjects;
    NSString *_encodingType;
}

@property(copy, nonatomic) NSString *encodingType; // @synthesize encodingType=_encodingType;
@property(copy, nonatomic) NSArray *deletedObjects; // @synthesize deletedObjects=_deletedObjects;
- (void).cxx_destruct;

@end

