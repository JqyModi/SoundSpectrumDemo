//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OPRBaseViewController.h"

#import "OPRAudioEditBaseSlideViewDelegate-Protocol.h"
#import "OPSNavigationTransitioning-Protocol.h"
#import "UIViewControllerOPContainerProtocol-Protocol.h"

@class AEAudioFileOutput, AEAudioFilePlayerModule, AEAudioUnitOutput, AEMixerModule, NSArray, NSMutableArray, NSString, NSTimer, OPProgressHUD, OPRAudioBPMDetectService, OPRAudioEditAudioBeginPlayOffsetEditView, OPRAudioEditAudioTrackEditView, OPRAudioEditAudioVolumeView, OPRAudioEditBaseSlideView, OPRAudioEditContext, OPRAudioEditPreviewView, OPRAudioEditReqDataInfo, UIImageView, UIView;

@interface OPRAudioEditViewController : OPRBaseViewController <OPSNavigationTransitioning, OPRAudioEditBaseSlideViewDelegate, UIViewControllerOPContainerProtocol>
{
    unsigned int soundFileObject;
    _Bool _isDraft;
    CDUnknownBlockType _onViewControllerCallDismissDo;
    CDUnknownBlockType _onRetryClick;
    CDUnknownBlockType _onPostClickBeginAudioExportingHandler;
    CDUnknownBlockType _onAddEnsembleTrackContext;
    CDUnknownBlockType _onDeleteEnsembleTrackContext;
    CDUnknownBlockType _onSaveAudioEditContextData;
    CDUnknownBlockType _onPostClickFinishAudioExportingHandler;
    CDUnknownBlockType _onUpdateEnsemblePostText;
    OPRAudioEditReqDataInfo *_audioEditReqDataInfo;
    OPRAudioEditContext *_audioEditContext;
    NSMutableArray *_audioEditItems;
    NSArray *_playBeatAudioFilePlayerModules;
    NSArray *_playSingingAudioFilePlayerModules;
    NSArray *_playChordAudioFilePlayerModules;
    AEAudioFilePlayerModule *_soundAudioFilePlayerModule;
    UIImageView *_bgView;
    OPRAudioEditPreviewView *_audioPreviewView;
    OPRAudioEditBaseSlideView *_audioEditItemsContentView;
    UIView *_resultAnimationContentView;
    OPRAudioEditAudioTrackEditView *_audioTrackEditView;
    OPRAudioEditAudioVolumeView *_audioVolumeEditView;
    OPRAudioEditAudioBeginPlayOffsetEditView *_beginPlayOffsetEditView;
    AEMixerModule *_mixModule;
    AEMixerModule *_mixModuleForFileOutput;
    AEMixerModule *_ensembleModule;
    AEMixerModule *_ensembleModuleForFileOutput;
    AEAudioUnitOutput *_audioPlayOutput;
    AEAudioFileOutput *_audioFileOutput;
    OPRAudioBPMDetectService *_audioBPMDetectService;
    OPProgressHUD *_progressHUD;
    NSTimer *_autoPlayAudioTimer;
}

+ (void)statPrdCompose:(_Bool)arg1 beginTs:(double)arg2 filePath:(id)arg3;
@property(nonatomic) _Bool isDraft; // @synthesize isDraft=_isDraft;
@property(nonatomic) __weak NSTimer *autoPlayAudioTimer; // @synthesize autoPlayAudioTimer=_autoPlayAudioTimer;
@property(nonatomic) __weak OPProgressHUD *progressHUD; // @synthesize progressHUD=_progressHUD;
@property(retain, nonatomic) OPRAudioBPMDetectService *audioBPMDetectService; // @synthesize audioBPMDetectService=_audioBPMDetectService;
@property(retain, nonatomic) AEAudioFileOutput *audioFileOutput; // @synthesize audioFileOutput=_audioFileOutput;
@property(retain, nonatomic) AEAudioUnitOutput *audioPlayOutput; // @synthesize audioPlayOutput=_audioPlayOutput;
@property(retain, nonatomic) AEMixerModule *ensembleModuleForFileOutput; // @synthesize ensembleModuleForFileOutput=_ensembleModuleForFileOutput;
@property(retain, nonatomic) AEMixerModule *ensembleModule; // @synthesize ensembleModule=_ensembleModule;
@property(retain, nonatomic) AEMixerModule *mixModuleForFileOutput; // @synthesize mixModuleForFileOutput=_mixModuleForFileOutput;
@property(retain, nonatomic) AEMixerModule *mixModule; // @synthesize mixModule=_mixModule;
@property(nonatomic) __weak OPRAudioEditAudioBeginPlayOffsetEditView *beginPlayOffsetEditView; // @synthesize beginPlayOffsetEditView=_beginPlayOffsetEditView;
@property(nonatomic) __weak OPRAudioEditAudioVolumeView *audioVolumeEditView; // @synthesize audioVolumeEditView=_audioVolumeEditView;
@property(nonatomic) __weak OPRAudioEditAudioTrackEditView *audioTrackEditView; // @synthesize audioTrackEditView=_audioTrackEditView;
@property(nonatomic) __weak UIView *resultAnimationContentView; // @synthesize resultAnimationContentView=_resultAnimationContentView;
@property(nonatomic) __weak OPRAudioEditBaseSlideView *audioEditItemsContentView; // @synthesize audioEditItemsContentView=_audioEditItemsContentView;
@property(nonatomic) __weak OPRAudioEditPreviewView *audioPreviewView; // @synthesize audioPreviewView=_audioPreviewView;
@property(nonatomic) __weak UIImageView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) AEAudioFilePlayerModule *soundAudioFilePlayerModule; // @synthesize soundAudioFilePlayerModule=_soundAudioFilePlayerModule;
@property(retain, nonatomic) NSArray *playChordAudioFilePlayerModules; // @synthesize playChordAudioFilePlayerModules=_playChordAudioFilePlayerModules;
@property(retain, nonatomic) NSArray *playSingingAudioFilePlayerModules; // @synthesize playSingingAudioFilePlayerModules=_playSingingAudioFilePlayerModules;
@property(retain, nonatomic) NSArray *playBeatAudioFilePlayerModules; // @synthesize playBeatAudioFilePlayerModules=_playBeatAudioFilePlayerModules;
@property(retain, nonatomic) NSMutableArray *audioEditItems; // @synthesize audioEditItems=_audioEditItems;
@property(retain, nonatomic) OPRAudioEditContext *audioEditContext; // @synthesize audioEditContext=_audioEditContext;
@property(retain, nonatomic) OPRAudioEditReqDataInfo *audioEditReqDataInfo; // @synthesize audioEditReqDataInfo=_audioEditReqDataInfo;
@property(copy, nonatomic) CDUnknownBlockType onUpdateEnsemblePostText; // @synthesize onUpdateEnsemblePostText=_onUpdateEnsemblePostText;
@property(copy, nonatomic) CDUnknownBlockType onPostClickFinishAudioExportingHandler; // @synthesize onPostClickFinishAudioExportingHandler=_onPostClickFinishAudioExportingHandler;
@property(copy, nonatomic) CDUnknownBlockType onSaveAudioEditContextData; // @synthesize onSaveAudioEditContextData=_onSaveAudioEditContextData;
@property(copy, nonatomic) CDUnknownBlockType onDeleteEnsembleTrackContext; // @synthesize onDeleteEnsembleTrackContext=_onDeleteEnsembleTrackContext;
@property(copy, nonatomic) CDUnknownBlockType onAddEnsembleTrackContext; // @synthesize onAddEnsembleTrackContext=_onAddEnsembleTrackContext;
@property(copy, nonatomic) CDUnknownBlockType onPostClickBeginAudioExportingHandler; // @synthesize onPostClickBeginAudioExportingHandler=_onPostClickBeginAudioExportingHandler;
@property(copy, nonatomic) CDUnknownBlockType onRetryClick; // @synthesize onRetryClick=_onRetryClick;
@property(copy, nonatomic) CDUnknownBlockType onViewControllerCallDismissDo; // @synthesize onViewControllerCallDismissDo=_onViewControllerCallDismissDo;
- (void).cxx_destruct;
- (void)audioInterruptionHappen:(id)arg1;
- (void)applicationBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (long long)interactiveTransitionSupportType;
- (_Bool)controlStatusBarAppearance;
- (void)opr_ae_base_slideViewSwitchedToIndex:(long long)arg1;
- (id)opr_ae_base_sliderView:(id)arg1 titleForItemAtIndex:(long long)arg2;
- (id)opr_ae_base_sliderView:(id)arg1 viewForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInOPRAudioEditBaseSlideView:(id)arg1;
- (void)refreshBeginPlayOffsetEditView;
- (void)setupAudioBeginPlayOffsetEditView:(id)arg1;
- (void)onSelectAudioEffetWithName:(id)arg1 withIndex:(unsigned long long)arg2;
- (void)setupAudioEffectEditView:(id)arg1;
- (void)setupAudioVolumeEditView:(id)arg1;
- (float)playSingingAudioVolume;
- (float)playBeatAudioVolume;
- (id)playBeatTitle;
- (float)playChordAudioVolume;
- (void)setupAudioTrackEditView:(id)arg1;
- (void)setupEnsembleAudioTrackEditView:(id)arg1;
- (void)showPlayEnsemble:(long long)arg1;
- (void)beginPlayEnsemble:(long long)arg1;
- (void)showPlayBeatVC;
- (void)beginPlayBeat;
- (void)showPlaySingingVC;
- (void)beginPlaySinging;
- (void)showPlaySoundVC;
- (void)beginPlaySound;
- (_Bool)isGettingDynamicBPMData;
- (void)getDynamicBPMDataIfNeed;
- (long long)ensembleAuidoCount;
- (void)onPlayEnsembleItemClickDo:(long long)arg1;
- (void)onPlaySingingItemClickDo;
- (void)onPlaySoundItemClickDo;
- (void)onPlayBeatItemClickDo;
- (void)onAudioPlayClickDo;
- (void)onPostClickDo;
- (void)onSaveDraftDo;
- (void)onBackButtonClick;
- (void)beginAudioExportingWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isEnsemble;
- (id)viceAudioItem;
- (_Bool)didModifyPrd;
- (void)reloadData;
- (void)initWithEditData;
- (void)clearPlayModule;
- (void)resumeAudioPlay;
- (void)pauseAudioPlay;
- (void)stopAudioPlay;
- (void)resetAudioPlay;
- (void)autoPlayAudioAfterAudioBeginPlayOffsetUpdated;
- (void)soundEffect:(id)arg1;
- (void)showResultAnimation;
- (void)setupAudioEditItems:(struct CGRect)arg1;
- (void)setupAudioEditItemsContentView;
- (void)setupAudioPreviewView;
- (void)setupSelfView;
- (void)updateHeadTitle:(unsigned long long)arg1 levelText:(id)arg2;
- (void)updateEnsemblePostText;
- (void)setupHeaderView;
- (long long)preferredStatusBarStyle;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithInfo:(id)arg1 withContext:(id)arg2;
- (id)initWithInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

