//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, OPRAudioContentItem, OPRAudioPlayItem, UIColor;

@interface OPRSingingCardPlayerListCellItem : NSObject
{
    _Bool _hasMyClip;
    _Bool _isMe;
    _Bool _isCurrent;
    _Bool _isFromSolo;
    NSNumber *_viewHeight;
    OPRAudioContentItem *_dataItem;
    unsigned long long _cellIndex;
    UIColor *_topImageBackgroundColor;
    double _progress;
    OPRAudioPlayItem *_playerItem;
}

@property(nonatomic) _Bool isFromSolo; // @synthesize isFromSolo=_isFromSolo;
@property(nonatomic) _Bool isCurrent; // @synthesize isCurrent=_isCurrent;
@property(nonatomic) _Bool isMe; // @synthesize isMe=_isMe;
@property(retain, nonatomic) OPRAudioPlayItem *playerItem; // @synthesize playerItem=_playerItem;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) UIColor *topImageBackgroundColor; // @synthesize topImageBackgroundColor=_topImageBackgroundColor;
@property(nonatomic) _Bool hasMyClip; // @synthesize hasMyClip=_hasMyClip;
@property(nonatomic) unsigned long long cellIndex; // @synthesize cellIndex=_cellIndex;
@property(retain, nonatomic) OPRAudioContentItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) NSNumber *viewHeight; // @synthesize viewHeight=_viewHeight;
- (void).cxx_destruct;

@end
