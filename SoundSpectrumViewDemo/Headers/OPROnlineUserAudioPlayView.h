//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OPTouchBounceView.h"

@class CAGradientLayer, OPMusicBarChart, UIImageView, UILabel, UIView;

@interface OPROnlineUserAudioPlayView : OPTouchBounceView
{
    _Bool _playingAudio;
    _Bool _enable;
    long long _audioDuration;
    UIView *_bgView;
    UILabel *_durationInfoLabel;
    CAGradientLayer *_gradientLayer;
    UIImageView *_playStateView;
    OPMusicBarChart *_musicChart;
    UIImageView *_musicChartDisable;
}

@property(retain, nonatomic) UIImageView *musicChartDisable; // @synthesize musicChartDisable=_musicChartDisable;
@property(retain, nonatomic) OPMusicBarChart *musicChart; // @synthesize musicChart=_musicChart;
@property(retain, nonatomic) UIImageView *playStateView; // @synthesize playStateView=_playStateView;
@property(nonatomic) __weak CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UILabel *durationInfoLabel; // @synthesize durationInfoLabel=_durationInfoLabel;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(nonatomic) _Bool playingAudio; // @synthesize playingAudio=_playingAudio;
@property(nonatomic) long long audioDuration; // @synthesize audioDuration=_audioDuration;
- (void).cxx_destruct;
- (void)updateView;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)setupSelfView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
