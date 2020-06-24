//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class LOTAnimationView, NSString, OPRAudioDescLabel, OPRAudioEditAudioPlayView, OPRAudioEditPreviewViewBGView, OPTouchBounceButton, UIButton, UILabel;

@interface OPRAudioEditPreviewView : UIView
{
    _Bool _isEnsemble;
    CDUnknownBlockType _onPlayAudioClick;
    CDUnknownBlockType _onRetryClick;
    CDUnknownBlockType _onPostClick;
    CDUnknownBlockType _onTextInputClick;
    NSString *_inputText;
    NSString *_defaultText;
    OPRAudioEditPreviewViewBGView *_bgView;
    UILabel *_audioPreviewTitleLabel;
    OPRAudioEditAudioPlayView *_audioPlayView;
    UIButton *_prdDescPlaceholderView;
    OPRAudioDescLabel *_prdDescTextView;
    LOTAnimationView *_prdDescInputGuideAnimation;
    UIView *_controlItemContentView;
    OPTouchBounceButton *_rePlayItemView;
    OPTouchBounceButton *_postItemView;
}

@property(nonatomic) __weak OPTouchBounceButton *postItemView; // @synthesize postItemView=_postItemView;
@property(nonatomic) __weak OPTouchBounceButton *rePlayItemView; // @synthesize rePlayItemView=_rePlayItemView;
@property(nonatomic) __weak UIView *controlItemContentView; // @synthesize controlItemContentView=_controlItemContentView;
@property(nonatomic) __weak LOTAnimationView *prdDescInputGuideAnimation; // @synthesize prdDescInputGuideAnimation=_prdDescInputGuideAnimation;
@property(nonatomic) __weak OPRAudioDescLabel *prdDescTextView; // @synthesize prdDescTextView=_prdDescTextView;
@property(nonatomic) __weak UIButton *prdDescPlaceholderView; // @synthesize prdDescPlaceholderView=_prdDescPlaceholderView;
@property(nonatomic) __weak OPRAudioEditAudioPlayView *audioPlayView; // @synthesize audioPlayView=_audioPlayView;
@property(nonatomic) __weak UILabel *audioPreviewTitleLabel; // @synthesize audioPreviewTitleLabel=_audioPreviewTitleLabel;
@property(nonatomic) __weak OPRAudioEditPreviewViewBGView *bgView; // @synthesize bgView=_bgView;
@property(copy, nonatomic) NSString *defaultText; // @synthesize defaultText=_defaultText;
@property(nonatomic) _Bool isEnsemble; // @synthesize isEnsemble=_isEnsemble;
@property(copy, nonatomic) NSString *inputText; // @synthesize inputText=_inputText;
@property(copy, nonatomic) CDUnknownBlockType onTextInputClick; // @synthesize onTextInputClick=_onTextInputClick;
@property(copy, nonatomic) CDUnknownBlockType onPostClick; // @synthesize onPostClick=_onPostClick;
@property(copy, nonatomic) CDUnknownBlockType onRetryClick; // @synthesize onRetryClick=_onRetryClick;
@property(copy, nonatomic) CDUnknownBlockType onPlayAudioClick; // @synthesize onPlayAudioClick=_onPlayAudioClick;
- (void).cxx_destruct;
- (void)hideAudioDescGuide;
- (void)showAudioDescGuideIfNeed;
- (void)showPostGuideIfNeed;
- (void)hideGuideIfNeed;
- (void)showGuideIfNeed;
- (void)audioPlayDidFinish;
- (void)updateAudioPlayState:(_Bool)arg1;
- (void)updateAudioDuration:(long long)arg1;
- (void)updateReplayItemTitle:(id)arg1;
- (void)layoutSubviews;
- (void)setupSelfView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
