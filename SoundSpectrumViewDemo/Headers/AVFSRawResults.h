//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface AVFSRawResults : NSObject
{
    NSMutableArray *_rawResults;
}

@property(retain, nonatomic) NSMutableArray *rawResults; // @synthesize rawResults=_rawResults;
- (void).cxx_destruct;
- (id)columnNameForIndex:(long long)arg1;
- (id)valueForColumn:(id)arg1 atRow:(long long)arg2;
- (long long)columnCount;
- (long long)rowCount;

@end
