//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OPRBaseViewController.h"

#import "OPCAudioSessionDelegate-Protocol.h"
#import "OPSNavigationTransitioning-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class AEAudioFilePlayerModule, CADisplayLink, NSArray, NSNumber, NSString, OPAlertController, OPCAudioSession, OPRPlaySingingContext, OPRPlaySingingDataInfo, OPRPlaySingingProgressBar, OPRSingingAudioController, OPRSingingCardResultControlItemView, OPRSingingStateButton, UIButton, UIFont, UIImageView, UILabel, UITextView, UIView;

@interface OPRPlaySingingViewController : OPRBaseViewController <UITextViewDelegate, OPSNavigationTransitioning, OPCAudioSessionDelegate>
{
    _Bool _disableShowOPNotificationOnViewDismiss;
    CDUnknownBlockType _viewControllerDidDismiss;
    CDUnknownBlockType _finishRecording;
    OPRPlaySingingDataInfo *_playSingingDataInfo;
    OPRPlaySingingContext *_playContext;
    NSArray *_chordTagViews;
    NSArray *_chordItems;
    NSArray *_validFilteredChordItems;
    OPCAudioSession *_audioSession;
    OPAlertController *_headPhoneGuideAlertController;
    AEAudioFilePlayerModule *_baseAudioFilePlayerModule;
    UIImageView *_bgView;
    UIButton *_roleBtn;
    UIView *_progressStateContentView;
    OPRPlaySingingProgressBar *_progressBarView;
    UILabel *_playTimeLabel;
    UILabel *_audioFileCountLabel;
    CADisplayLink *_playDisplayLink;
    UIView *_lyricContentView;
    UITextView *_lyricView;
    double _lyricLineHeight;
    UIFont *_lyricFont;
    UIView *_singControlContentView;
    OPRSingingStateButton *_singBtn;
    OPRSingingCardResultControlItemView *_rePlayItemView;
    OPRSingingCardResultControlItemView *_nextStepItemView;
    OPRSingingAudioController *_audioController;
    NSNumber *_beginRecordTs;
}

@property(retain, nonatomic) NSNumber *beginRecordTs; // @synthesize beginRecordTs=_beginRecordTs;
@property(retain, nonatomic) OPRSingingAudioController *audioController; // @synthesize audioController=_audioController;
@property(nonatomic) __weak OPRSingingCardResultControlItemView *nextStepItemView; // @synthesize nextStepItemView=_nextStepItemView;
@property(nonatomic) __weak OPRSingingCardResultControlItemView *rePlayItemView; // @synthesize rePlayItemView=_rePlayItemView;
@property(nonatomic) __weak OPRSingingStateButton *singBtn; // @synthesize singBtn=_singBtn;
@property(nonatomic) __weak UIView *singControlContentView; // @synthesize singControlContentView=_singControlContentView;
@property(retain, nonatomic) UIFont *lyricFont; // @synthesize lyricFont=_lyricFont;
@property(nonatomic) double lyricLineHeight; // @synthesize lyricLineHeight=_lyricLineHeight;
@property(nonatomic) __weak UITextView *lyricView; // @synthesize lyricView=_lyricView;
@property(nonatomic) __weak UIView *lyricContentView; // @synthesize lyricContentView=_lyricContentView;
@property(retain, nonatomic) CADisplayLink *playDisplayLink; // @synthesize playDisplayLink=_playDisplayLink;
@property(nonatomic) __weak UILabel *audioFileCountLabel; // @synthesize audioFileCountLabel=_audioFileCountLabel;
@property(nonatomic) __weak UILabel *playTimeLabel; // @synthesize playTimeLabel=_playTimeLabel;
@property(nonatomic) __weak OPRPlaySingingProgressBar *progressBarView; // @synthesize progressBarView=_progressBarView;
@property(nonatomic) __weak UIView *progressStateContentView; // @synthesize progressStateContentView=_progressStateContentView;
@property(nonatomic) __weak UIButton *roleBtn; // @synthesize roleBtn=_roleBtn;
@property(nonatomic) __weak UIImageView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak AEAudioFilePlayerModule *baseAudioFilePlayerModule; // @synthesize baseAudioFilePlayerModule=_baseAudioFilePlayerModule;
@property(nonatomic) __weak OPAlertController *headPhoneGuideAlertController; // @synthesize headPhoneGuideAlertController=_headPhoneGuideAlertController;
@property(retain, nonatomic) OPCAudioSession *audioSession; // @synthesize audioSession=_audioSession;
@property(retain, nonatomic) NSArray *validFilteredChordItems; // @synthesize validFilteredChordItems=_validFilteredChordItems;
@property(retain, nonatomic) NSArray *chordItems; // @synthesize chordItems=_chordItems;
@property(retain, nonatomic) NSArray *chordTagViews; // @synthesize chordTagViews=_chordTagViews;
@property(retain, nonatomic) OPRPlaySingingContext *playContext; // @synthesize playContext=_playContext;
@property(retain, nonatomic) OPRPlaySingingDataInfo *playSingingDataInfo; // @synthesize playSingingDataInfo=_playSingingDataInfo;
@property(copy, nonatomic) CDUnknownBlockType finishRecording; // @synthesize finishRecording=_finishRecording;
@property(copy, nonatomic) CDUnknownBlockType viewControllerDidDismiss; // @synthesize viewControllerDidDismiss=_viewControllerDidDismiss;
@property(nonatomic) _Bool disableShowOPNotificationOnViewDismiss; // @synthesize disableShowOPNotificationOnViewDismiss=_disableShowOPNotificationOnViewDismiss;
- (void).cxx_destruct;
- (void)audioRouterTypeDidChange:(id)arg1;
- (void)audioInterruptionHappen:(id)arg1;
- (void)applicationBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (long long)interactiveTransitionSupportType;
- (void)enableOPNotification:(_Bool)arg1;
- (void)showUseHeadPhoneGuideIfNeed;
- (void)showPlaySingingGuideWithConfirmClick:(CDUnknownBlockType)arg1;
- (_Bool)showPlaySingingGuideIfNeed;
- (void)displayLinkAction;
- (void)beginPlayDo;
- (void)endRecord;
- (void)resetRecord:(_Bool)arg1 stopAudioSpectrumViewProgress:(_Bool)arg2;
- (void)resetRecord:(_Bool)arg1;
- (void)stopRecorder;
- (void)startRecorder;
- (void)beginRecordDo;
- (void)beginRecord;
- (void)onSingBtnClick;
- (void)onRoleButtonDidClick:(id)arg1;
- (void)onBackButtonClick;
- (void)enableNextStepItemView:(_Bool)arg1;
- (void)resetPlayContext;
- (void)updateProgressBarDisplay;
- (void)setupLyricContentView;
- (void)setupSingControlContentView;
- (void)setupProgressStateContentView;
- (void)setupSelfView;
- (void)setupHeaderView;
- (long long)preferredStatusBarStyle;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)initNotifications;
- (id)initWithInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

