//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, OPRAudioContentItem;

@interface OPRAudioPostContentEnsembleCVCellItem : NSObject
{
    _Bool _isTop;
    _Bool _isTopItem;
    NSNumber *_viewHeight;
    OPRAudioContentItem *_dataItem;
    unsigned long long _cellIndex;
}

@property(nonatomic) _Bool isTopItem; // @synthesize isTopItem=_isTopItem;
@property(nonatomic) _Bool isTop; // @synthesize isTop=_isTop;
@property(nonatomic) unsigned long long cellIndex; // @synthesize cellIndex=_cellIndex;
@property(retain, nonatomic) OPRAudioContentItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) NSNumber *viewHeight; // @synthesize viewHeight=_viewHeight;
- (void).cxx_destruct;

@end

