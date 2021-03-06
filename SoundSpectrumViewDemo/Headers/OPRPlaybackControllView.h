//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class OPRSingingCardResultControlItemView, OPRSingingStateButton, OPRSongSegmentData, UIButton, UIScrollView;

@interface OPRPlaybackControllView : UIView
{
    _Bool _isBeat;
    _Bool _wantToSingEnsemble;
    CDUnknownBlockType _onClickWantToSing;
    CDUnknownBlockType _onPlayBtnClick;
    CDUnknownBlockType _onDisplayClick;
    OPRSingingStateButton *_playBtn;
    OPRSingingCardResultControlItemView *_wantToSingBtn;
    OPRSongSegmentData *_segmentData;
    UIScrollView *_bottomView;
    UIButton *_selectedBtn;
    UIView *_selectView;
}

@property(nonatomic) _Bool wantToSingEnsemble; // @synthesize wantToSingEnsemble=_wantToSingEnsemble;
@property(retain, nonatomic) UIView *selectView; // @synthesize selectView=_selectView;
@property(retain, nonatomic) UIButton *selectedBtn; // @synthesize selectedBtn=_selectedBtn;
@property(retain, nonatomic) UIScrollView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) _Bool isBeat; // @synthesize isBeat=_isBeat;
@property(retain, nonatomic) OPRSongSegmentData *segmentData; // @synthesize segmentData=_segmentData;
@property(retain, nonatomic) OPRSingingCardResultControlItemView *wantToSingBtn; // @synthesize wantToSingBtn=_wantToSingBtn;
@property(retain, nonatomic) OPRSingingStateButton *playBtn; // @synthesize playBtn=_playBtn;
@property(copy, nonatomic) CDUnknownBlockType onDisplayClick; // @synthesize onDisplayClick=_onDisplayClick;
@property(copy, nonatomic) CDUnknownBlockType onPlayBtnClick; // @synthesize onPlayBtnClick=_onPlayBtnClick;
@property(copy, nonatomic) CDUnknownBlockType onClickWantToSing; // @synthesize onClickWantToSing=_onClickWantToSing;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long singState;
- (void)onClickPlayBtn;
- (void)setButton:(id)arg1 hide:(_Bool)arg2;
- (void)onBottomItemClick:(id)arg1;
- (void)updateWantToSing:(_Bool)arg1;
- (void)setBottomItem:(id)arg1;
- (void)setupView:(id)arg1;
- (void)reset;
- (void)pause:(_Bool)arg1;
- (void)setProgress:(double)arg1;
- (id)initWithContentView:(id)arg1 withSegmentData:(id)arg2;

@end

