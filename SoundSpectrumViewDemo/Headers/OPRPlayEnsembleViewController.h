//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OPREnsembleViewController.h"

#import "OPRQueryChordResManagerObserver-Protocol.h"
#import "OPRSingingScreenRecorderDelegate-Protocol.h"
#import "OPSNavigationTransitioning-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class AEAudioFilePlayerModule, NSArray, NSNumber, NSString, OPProgressHUD, OPRAudioBPMDetectService, OPRAudioSpeedEditView, OPRChordInstrumentItem, OPRChordInstrumentPlayStyleItem, OPREnsembleAddService, OPRPlayChordEnsembleContext, OPRPlayEnsembleHeaderView, OPRPlayEnsembleInfo, OPRPlayEnsembleMusicScoreView, OPRPlayEnsemblePlayChordsRecordData, OPRSingingAudioController, OPRSingingCardResultControlItemView, OPRSingingGuideBgView, OPRSingingGuideView, OPRSingingInstrumentScrollView, OPRSingingInstrumentStateView, OPRSingingPlayChordDataRecorder, OPRSingingPlayStyleSelectView, OPRSingingScreenRecorder, OPRSingingStateButton, OPRSingingSynthKeyboard, OPRSingingToneColorSelectView, OPTouchBounceButton, UIButton, UIFont, UIImageView, UILabel, UITextView, UIView;

@interface OPRPlayEnsembleViewController : OPREnsembleViewController <UITextViewDelegate, OPSNavigationTransitioning, OPRSingingScreenRecorderDelegate, OPRQueryChordResManagerObserver>
{
    _Bool _enableScreenRecord;
    _Bool _didShareInstrument;
    _Bool _didShowGuide1;
    _Bool _didShowGuide2;
    _Bool _didShowGuide3;
    _Bool _hasReportEnsemble;
    OPRPlayEnsembleInfo *_playEnsembleInfo;
    NSArray *_chordTagViews;
    NSArray *_validFilteredChordItems;
    NSArray *_defaultChords;
    NSArray *_customChords;
    long long _pitchLevel;
    OPRSingingPlayChordDataRecorder *_playedDataRecorder;
    NSArray *_instrumentList;
    NSArray *_allChordInstrumentList;
    OPRChordInstrumentItem *_currentSelectedInstrumentItem;
    OPRChordInstrumentPlayStyleItem *_currentSelectedPlayStyleItem;
    OPRPlayChordEnsembleContext *_playEnsembleContext;
    OPRAudioBPMDetectService *_audioBPMDetectService;
    OPRPlayEnsemblePlayChordsRecordData *_musicScoreBeatTipsData;
    AEAudioFilePlayerModule *_leadingSingerAudioFilePlayerModule;
    OPProgressHUD *_progressHUD;
    NSNumber *_leadingSingerAudioBeginPlayTs;
    UIImageView *_bgView;
    OPRPlayEnsembleHeaderView *_customHeaderView;
    OPRPlayEnsembleMusicScoreView *_musicScoreView;
    UIView *_lyricContentView;
    UITextView *_lyricView;
    double _lyricLineHeight;
    UIFont *_lyricFont;
    UIView *_keyboardContentView;
    UIView *_keyboardStateView;
    OPRSingingInstrumentScrollView *_instrumentSelectView;
    OPRSingingSynthKeyboard *_keyboard;
    OPTouchBounceButton *_clapBtn;
    UIButton *_clapBtnBgView;
    UIView *_singControlContentView;
    OPRSingingStateButton *_singBtn;
    OPRSingingCardResultControlItemView *_rePlayItemView;
    OPRSingingCardResultControlItemView *_tipsItemView;
    OPRSingingCardResultControlItemView *_nextStepItemView;
    UIView *_screenRecordContentView;
    UIButton *_screenRecordTipsView;
    OPRSingingScreenRecorder *_screenRecorder;
    OPRSingingInstrumentStateView *_instrumentStateView;
    UIButton *_settingContentView;
    OPRSingingToneColorSelectView *_toneColorSelectView;
    OPRSingingPlayStyleSelectView *_playStyleSelectView;
    OPRAudioSpeedEditView *_playSpeedSelectView;
    UILabel *_playSpeedSelectTitleLabel;
    UILabel *_toneColorSelectTitleLabel;
    UILabel *_playStyleSelectTitleLabel;
    OPRSingingAudioController *_audioController;
    OPRSingingGuideView *_pageGuideView;
    OPRSingingGuideBgView *_guideBgView;
    NSString *_entry;
    NSNumber *_viewBeginShowTs;
    unsigned long long _keyClickCount;
    unsigned long long _keyClickFailCount;
    double _keyClickCostTime;
    OPREnsembleAddService *_ensembleAddService;
}

+ (double)headerViewHeight;
+ (_Bool)shouldHiddenStatusBar;
@property(nonatomic) _Bool hasReportEnsemble; // @synthesize hasReportEnsemble=_hasReportEnsemble;
@property(retain, nonatomic) OPREnsembleAddService *ensembleAddService; // @synthesize ensembleAddService=_ensembleAddService;
@property(nonatomic) double keyClickCostTime; // @synthesize keyClickCostTime=_keyClickCostTime;
@property(nonatomic) unsigned long long keyClickFailCount; // @synthesize keyClickFailCount=_keyClickFailCount;
@property(nonatomic) unsigned long long keyClickCount; // @synthesize keyClickCount=_keyClickCount;
@property(retain, nonatomic) NSNumber *viewBeginShowTs; // @synthesize viewBeginShowTs=_viewBeginShowTs;
@property(copy, nonatomic) NSString *entry; // @synthesize entry=_entry;
@property(nonatomic) _Bool didShowGuide3; // @synthesize didShowGuide3=_didShowGuide3;
@property(nonatomic) _Bool didShowGuide2; // @synthesize didShowGuide2=_didShowGuide2;
@property(nonatomic) _Bool didShowGuide1; // @synthesize didShowGuide1=_didShowGuide1;
@property(nonatomic) __weak OPRSingingGuideBgView *guideBgView; // @synthesize guideBgView=_guideBgView;
@property(nonatomic) __weak OPRSingingGuideView *pageGuideView; // @synthesize pageGuideView=_pageGuideView;
@property(nonatomic) _Bool didShareInstrument; // @synthesize didShareInstrument=_didShareInstrument;
@property(retain, nonatomic) OPRSingingAudioController *audioController; // @synthesize audioController=_audioController;
@property(nonatomic) __weak UILabel *playStyleSelectTitleLabel; // @synthesize playStyleSelectTitleLabel=_playStyleSelectTitleLabel;
@property(nonatomic) __weak UILabel *toneColorSelectTitleLabel; // @synthesize toneColorSelectTitleLabel=_toneColorSelectTitleLabel;
@property(nonatomic) __weak UILabel *playSpeedSelectTitleLabel; // @synthesize playSpeedSelectTitleLabel=_playSpeedSelectTitleLabel;
@property(nonatomic) __weak OPRAudioSpeedEditView *playSpeedSelectView; // @synthesize playSpeedSelectView=_playSpeedSelectView;
@property(nonatomic) __weak OPRSingingPlayStyleSelectView *playStyleSelectView; // @synthesize playStyleSelectView=_playStyleSelectView;
@property(nonatomic) __weak OPRSingingToneColorSelectView *toneColorSelectView; // @synthesize toneColorSelectView=_toneColorSelectView;
@property(nonatomic) __weak UIButton *settingContentView; // @synthesize settingContentView=_settingContentView;
@property(nonatomic) __weak OPRSingingInstrumentStateView *instrumentStateView; // @synthesize instrumentStateView=_instrumentStateView;
@property(nonatomic) __weak OPRSingingScreenRecorder *screenRecorder; // @synthesize screenRecorder=_screenRecorder;
@property(nonatomic) __weak UIButton *screenRecordTipsView; // @synthesize screenRecordTipsView=_screenRecordTipsView;
@property(nonatomic) __weak UIView *screenRecordContentView; // @synthesize screenRecordContentView=_screenRecordContentView;
@property(nonatomic) _Bool enableScreenRecord; // @synthesize enableScreenRecord=_enableScreenRecord;
@property(nonatomic) __weak OPRSingingCardResultControlItemView *nextStepItemView; // @synthesize nextStepItemView=_nextStepItemView;
@property(nonatomic) __weak OPRSingingCardResultControlItemView *tipsItemView; // @synthesize tipsItemView=_tipsItemView;
@property(nonatomic) __weak OPRSingingCardResultControlItemView *rePlayItemView; // @synthesize rePlayItemView=_rePlayItemView;
@property(nonatomic) __weak OPRSingingStateButton *singBtn; // @synthesize singBtn=_singBtn;
@property(nonatomic) __weak UIView *singControlContentView; // @synthesize singControlContentView=_singControlContentView;
@property(nonatomic) __weak UIButton *clapBtnBgView; // @synthesize clapBtnBgView=_clapBtnBgView;
@property(nonatomic) __weak OPTouchBounceButton *clapBtn; // @synthesize clapBtn=_clapBtn;
@property(nonatomic) __weak OPRSingingSynthKeyboard *keyboard; // @synthesize keyboard=_keyboard;
@property(nonatomic) __weak OPRSingingInstrumentScrollView *instrumentSelectView; // @synthesize instrumentSelectView=_instrumentSelectView;
@property(nonatomic) __weak UIView *keyboardStateView; // @synthesize keyboardStateView=_keyboardStateView;
@property(nonatomic) __weak UIView *keyboardContentView; // @synthesize keyboardContentView=_keyboardContentView;
@property(retain, nonatomic) UIFont *lyricFont; // @synthesize lyricFont=_lyricFont;
@property(nonatomic) double lyricLineHeight; // @synthesize lyricLineHeight=_lyricLineHeight;
@property(nonatomic) __weak UITextView *lyricView; // @synthesize lyricView=_lyricView;
@property(nonatomic) __weak UIView *lyricContentView; // @synthesize lyricContentView=_lyricContentView;
@property(nonatomic) __weak OPRPlayEnsembleMusicScoreView *musicScoreView; // @synthesize musicScoreView=_musicScoreView;
@property(nonatomic) __weak OPRPlayEnsembleHeaderView *customHeaderView; // @synthesize customHeaderView=_customHeaderView;
@property(nonatomic) __weak UIImageView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) NSNumber *leadingSingerAudioBeginPlayTs; // @synthesize leadingSingerAudioBeginPlayTs=_leadingSingerAudioBeginPlayTs;
@property(nonatomic) __weak OPProgressHUD *progressHUD; // @synthesize progressHUD=_progressHUD;
@property(nonatomic) __weak AEAudioFilePlayerModule *leadingSingerAudioFilePlayerModule; // @synthesize leadingSingerAudioFilePlayerModule=_leadingSingerAudioFilePlayerModule;
@property(retain, nonatomic) OPRPlayEnsemblePlayChordsRecordData *musicScoreBeatTipsData; // @synthesize musicScoreBeatTipsData=_musicScoreBeatTipsData;
@property(retain, nonatomic) OPRAudioBPMDetectService *audioBPMDetectService; // @synthesize audioBPMDetectService=_audioBPMDetectService;
@property(retain, nonatomic) OPRPlayChordEnsembleContext *playEnsembleContext; // @synthesize playEnsembleContext=_playEnsembleContext;
@property(retain, nonatomic) OPRChordInstrumentPlayStyleItem *currentSelectedPlayStyleItem; // @synthesize currentSelectedPlayStyleItem=_currentSelectedPlayStyleItem;
@property(retain, nonatomic) OPRChordInstrumentItem *currentSelectedInstrumentItem; // @synthesize currentSelectedInstrumentItem=_currentSelectedInstrumentItem;
@property(retain, nonatomic) NSArray *allChordInstrumentList; // @synthesize allChordInstrumentList=_allChordInstrumentList;
@property(retain, nonatomic) NSArray *instrumentList; // @synthesize instrumentList=_instrumentList;
@property(retain, nonatomic) OPRSingingPlayChordDataRecorder *playedDataRecorder; // @synthesize playedDataRecorder=_playedDataRecorder;
@property(nonatomic) long long pitchLevel; // @synthesize pitchLevel=_pitchLevel;
@property(retain, nonatomic) NSArray *customChords; // @synthesize customChords=_customChords;
@property(retain, nonatomic) NSArray *defaultChords; // @synthesize defaultChords=_defaultChords;
@property(retain, nonatomic) NSArray *validFilteredChordItems; // @synthesize validFilteredChordItems=_validFilteredChordItems;
@property(retain, nonatomic) NSArray *chordTagViews; // @synthesize chordTagViews=_chordTagViews;
@property(retain, nonatomic) OPRPlayEnsembleInfo *playEnsembleInfo; // @synthesize playEnsembleInfo=_playEnsembleInfo;
- (void).cxx_destruct;
- (void)playStyleItemDidFinishDownloading:(id)arg1;
- (void)playStyleItemBeginDownloading:(id)arg1;
- (void)screenRecorderDidFinishRecording:(id)arg1 withPresentRecordingPreviewWithController:(id)arg2;
- (void)screenRecorderBeginRecording:(id)arg1;
- (void)screenRecorder:(id)arg1 recordingDidFailWithSystemError:(id)arg2 withBizError:(unsigned long long)arg3;
- (void)updateScreenRecorderTips:(_Bool)arg1;
- (void)statKeyClickSituation;
- (void)statEnsemblePlayTime;
- (void)audioInterruptionHappen:(id)arg1;
- (void)applicationBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (long long)interactiveTransitionSupportType;
- (_Bool)controlStatusBarAppearance;
- (_Bool)showPlayChordsGuideTipsIfNeed:(_Bool)arg1;
- (void)showPageGuideIfNeed:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showImpactFeedback;
- (void)hideWithAnimated:(_Bool)arg1 finishRecord:(_Bool)arg2;
- (unsigned long long)countDownSecond;
- (_Bool)unlockInstrumentIfNeed:(id)arg1;
- (void)clickNoteIfNeedWithSecond:(double)arg1;
- (void)updateLeadingSingerInstrumentViewWithSeconds:(double)arg1;
- (void)updateLeadingSingerInstrumentViewWithInstrumentItemId:(id)arg1;
- (_Bool)canEditSpeedWithInstrument:(id)arg1;
- (void)updatePlaySpeedSelectView;
- (void)updateCurrentSelectedPlayStyleTempoWithSpeed:(double)arg1;
- (long long)currentTempoLevel;
- (id)currentInstrumentSubType;
- (id)currentPlayStyleType;
- (id)currentInstrumentType;
- (void)hideInstrumentStateView;
- (void)showInstrumentStateView:(unsigned long long)arg1;
- (void)showInstrumentSetting:(_Bool)arg1;
- (void)hideControlArea:(_Bool)arg1;
- (void)selectToneColor:(id)arg1;
- (void)selectInstrument:(id)arg1;
- (void)loadDefaultInstrument;
- (void)enableNextStepItemView:(_Bool)arg1;
- (void)resetPlayContext;
- (void)showCommonSetting:(_Bool)arg1;
- (void)showPlayedScoreView;
- (void)startMusicScoreScrollingWithCountDown:(_Bool)arg1;
- (void)updateWithBPMData:(id)arg1;
- (void)getDynamicBPMData:(CDUnknownBlockType)arg1;
- (void)downloadLeadingSingerAudioFile:(CDUnknownBlockType)arg1;
- (void)beginPlayDo;
- (void)endRecord:(_Bool)arg1;
- (void)resetRecord:(_Bool)arg1 stopMusicScroeProgress:(_Bool)arg2;
- (void)resetRecord:(_Bool)arg1;
- (void)stopRecorder;
- (void)startRecorder;
- (void)beginRecordDo;
- (void)beginRecord;
- (void)singBtnClickDo;
- (void)onSingBtnClick;
- (void)onClapBtnClick;
- (void)onMenuButtonClick:(id)arg1;
- (void)onBackButtonClick;
- (void)onInstrumentClick;
- (void)setupMusicScoreView;
- (void)updateLyricAfterClickNote:(id)arg1;
- (void)setupLyricContentViewWithKeyboardEnable:(_Bool)arg1;
- (void)setupKeyboardContentView;
- (void)setupSingControlContentView;
- (void)setupSelfView;
- (void)setupHeaderView;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)initNotifications;
- (void)initPlayContext:(id)arg1;
- (void)initInstruments;
- (void)initCustomChordsWithPlayEnsembleInfo:(id)arg1;
- (void)initPitchLevelWithSongSegmentId:(id)arg1 withPlayEnsembleInfo:(id)arg2;
- (id)initWithInfo:(id)arg1 withEntry:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

