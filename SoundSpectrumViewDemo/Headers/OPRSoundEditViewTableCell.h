//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, OPRSoundRecordInfo, UIButton, UILabel, UIView;

@interface OPRSoundEditViewTableCell : UITableViewCell
{
    _Bool _select;
    OPRSoundRecordInfo *_recordInfo;
    UIView *_bgLeftView;
    UIView *_bgContentView;
    UIView *_bgView;
    UILabel *_titleLabel;
    UILabel *_kindTitleLable;
    UIButton *_deleteBtn;
    UIButton *_volumeView;
    UILabel *_offsetLabel;
    CDUnknownBlockType _clickDelete;
    NSArray *_chordArray;
    UIView *_chordView;
}

@property(retain, nonatomic) UIView *chordView; // @synthesize chordView=_chordView;
@property(retain, nonatomic) NSArray *chordArray; // @synthesize chordArray=_chordArray;
@property(copy, nonatomic) CDUnknownBlockType clickDelete; // @synthesize clickDelete=_clickDelete;
@property(nonatomic) _Bool select; // @synthesize select=_select;
@property(retain, nonatomic) UILabel *offsetLabel; // @synthesize offsetLabel=_offsetLabel;
@property(retain, nonatomic) UIButton *volumeView; // @synthesize volumeView=_volumeView;
@property(retain, nonatomic) UIButton *deleteBtn; // @synthesize deleteBtn=_deleteBtn;
@property(retain, nonatomic) UILabel *kindTitleLable; // @synthesize kindTitleLable=_kindTitleLable;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIView *bgContentView; // @synthesize bgContentView=_bgContentView;
@property(retain, nonatomic) UIView *bgLeftView; // @synthesize bgLeftView=_bgLeftView;
@property(retain, nonatomic) OPRSoundRecordInfo *recordInfo; // @synthesize recordInfo=_recordInfo;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setOffset:(double)arg1;
- (void)setVolume:(double)arg1;
- (double)infoViewHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

