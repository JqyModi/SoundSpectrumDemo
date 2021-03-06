//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSArray, OPRAudioEditAudioBeginPlayOffsetEditItemViewInfo, OPTouchBounceButton, UILabel, UIView;

@interface OPRAudioEditAudioBeginPlayOffsetEditItemView : UICollectionViewCell
{
    OPRAudioEditAudioBeginPlayOffsetEditItemViewInfo *_viewInfo;
    CDUnknownBlockType _didChangeAudioPlayBeginOffset;
    UILabel *_titleLable;
    UIView *_controlView;
    OPTouchBounceButton *_leftBtn;
    OPTouchBounceButton *_rightBtn;
    UIView *_thumbView;
    UIView *_indicatorBgView;
    NSArray *_indicatorViews;
    UILabel *_tipsLabel;
}

@property(nonatomic) __weak UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) NSArray *indicatorViews; // @synthesize indicatorViews=_indicatorViews;
@property(nonatomic) __weak UIView *indicatorBgView; // @synthesize indicatorBgView=_indicatorBgView;
@property(nonatomic) __weak UIView *thumbView; // @synthesize thumbView=_thumbView;
@property(nonatomic) __weak OPTouchBounceButton *rightBtn; // @synthesize rightBtn=_rightBtn;
@property(nonatomic) __weak OPTouchBounceButton *leftBtn; // @synthesize leftBtn=_leftBtn;
@property(retain, nonatomic) UIView *controlView; // @synthesize controlView=_controlView;
@property(nonatomic) __weak UILabel *titleLable; // @synthesize titleLable=_titleLable;
@property(copy, nonatomic) CDUnknownBlockType didChangeAudioPlayBeginOffset; // @synthesize didChangeAudioPlayBeginOffset=_didChangeAudioPlayBeginOffset;
@property(retain, nonatomic) OPRAudioEditAudioBeginPlayOffsetEditItemViewInfo *viewInfo; // @synthesize viewInfo=_viewInfo;
- (void).cxx_destruct;
- (void)changeOffset:(_Bool)arg1;
- (void)updateThumbViewPosition:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setupSelfView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

