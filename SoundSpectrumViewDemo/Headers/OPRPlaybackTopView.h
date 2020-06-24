//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, OPRChordPlaybackUserFollowBtn, OPREnsemblePlaybackInfo, OPRPlayEnsembleHeaderView, UIButton, UIImageView, UILabel;

@interface OPRPlaybackTopView : UIView
{
    _Bool _isChrod;
    CDUnknownBlockType _onClickBackButton;
    UIImageView *_userIconView;
    UILabel *_userNameLabel;
    OPRChordPlaybackUserFollowBtn *_followBtn;
    OPREnsemblePlaybackInfo *_ensembleInfo;
    OPRPlayEnsembleHeaderView *_customHeaderView;
    NSArray *_chordInstrumentList;
    NSArray *_beatInstrumentList;
    UIButton *_backButton;
}

@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) _Bool isChrod; // @synthesize isChrod=_isChrod;
@property(retain, nonatomic) NSArray *beatInstrumentList; // @synthesize beatInstrumentList=_beatInstrumentList;
@property(retain, nonatomic) NSArray *chordInstrumentList; // @synthesize chordInstrumentList=_chordInstrumentList;
@property(retain, nonatomic) OPRPlayEnsembleHeaderView *customHeaderView; // @synthesize customHeaderView=_customHeaderView;
@property(retain, nonatomic) OPREnsemblePlaybackInfo *ensembleInfo; // @synthesize ensembleInfo=_ensembleInfo;
@property(nonatomic) __weak OPRChordPlaybackUserFollowBtn *followBtn; // @synthesize followBtn=_followBtn;
@property(nonatomic) __weak UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(nonatomic) __weak UIImageView *userIconView; // @synthesize userIconView=_userIconView;
@property(copy, nonatomic) CDUnknownBlockType onClickBackButton; // @synthesize onClickBackButton=_onClickBackButton;
- (void).cxx_destruct;
- (void)setScoreLabelHidden:(_Bool)arg1;
- (void)reset;
- (void)updateLeadingSingerInstrumentView:(id)arg1;
- (void)updateCurrentPlayerInstrumentViewWithType:(unsigned long long)arg1;
- (void)updateLeadingSingerInstrumentViewWithType:(unsigned long long)arg1;
- (void)updateCurrentPlayerInstrumentView:(id)arg1;
- (void)setupEnsembleView:(id)arg1 withEnsembleInfo:(id)arg2;
- (void)setupView:(id)arg1 withSegmentData:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithContentView:(id)arg1 withEnsembleData:(id)arg2;
- (id)initWithContentView:(id)arg1 withSegmentData:(id)arg2;

@end

