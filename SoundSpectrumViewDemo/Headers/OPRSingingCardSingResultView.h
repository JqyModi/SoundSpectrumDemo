//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AEAudioUnitOutput, AEMixerModule, NSArray, OPRSingResultTopicContentView, OPRSingingCardItem, OPRSingingCardPostSucceedResultView, OPRSingingCardResultControlView, UIButton, UIImageView;

@interface OPRSingingCardSingResultView : UIView
{
    _Bool _isEnsemble;
    OPRSingingCardItem *_item;
    CDUnknownBlockType _onPlayerListEntryClick;
    CDUnknownBlockType _onCloseClick;
    CDUnknownBlockType _onTopicTagClick;
    UIImageView *_bgView;
    UIButton *_closeBtn;
    OPRSingingCardResultControlView *_controlView;
    OPRSingingCardPostSucceedResultView *_postSucceedResultView;
    UIView *_animationView;
    AEMixerModule *_mixModule;
    AEAudioUnitOutput *_audioPlayOutput;
    OPRSingResultTopicContentView *_topicContentView;
    NSArray *_topicItemList;
}

@property(retain, nonatomic) NSArray *topicItemList; // @synthesize topicItemList=_topicItemList;
@property(nonatomic) __weak OPRSingResultTopicContentView *topicContentView; // @synthesize topicContentView=_topicContentView;
@property(retain, nonatomic) AEAudioUnitOutput *audioPlayOutput; // @synthesize audioPlayOutput=_audioPlayOutput;
@property(retain, nonatomic) AEMixerModule *mixModule; // @synthesize mixModule=_mixModule;
@property(nonatomic) __weak UIView *animationView; // @synthesize animationView=_animationView;
@property(nonatomic) __weak OPRSingingCardPostSucceedResultView *postSucceedResultView; // @synthesize postSucceedResultView=_postSucceedResultView;
@property(nonatomic) __weak OPRSingingCardResultControlView *controlView; // @synthesize controlView=_controlView;
@property(nonatomic) __weak UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(nonatomic) __weak UIImageView *bgView; // @synthesize bgView=_bgView;
@property(copy, nonatomic) CDUnknownBlockType onTopicTagClick; // @synthesize onTopicTagClick=_onTopicTagClick;
@property(copy, nonatomic) CDUnknownBlockType onCloseClick; // @synthesize onCloseClick=_onCloseClick;
@property(copy, nonatomic) CDUnknownBlockType onPlayerListEntryClick; // @synthesize onPlayerListEntryClick=_onPlayerListEntryClick;
@property(nonatomic) _Bool isEnsemble; // @synthesize isEnsemble=_isEnsemble;
@property(nonatomic) __weak OPRSingingCardItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)showAnimation;
- (void)clearPlayModule;
- (void)resumeAudioPlay;
- (void)pauseAudioPlay;
- (void)stopAudioPlay;
- (void)resetAudioPlay;
- (void)updateResultState;
- (void)showTopicContentIfNeed;
- (void)setupCloseBtn:(id)arg1;
- (void)setupSubResultView:(id)arg1;
- (void)setupControlView:(id)arg1;
- (void)setupTopicContentView:(id)arg1;
- (void)setupBgView:(id)arg1;
- (void)setupSelfView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
