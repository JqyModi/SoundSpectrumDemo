//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OPRBaseViewController.h"

#import "OPSNavigationTransitioning-Protocol.h"

@class NSString, OPCFileUploadService, OPProgressHUD, OPRAudioEditViewController, OPRAudioRecognizeService, OPRBaseService, OPRContentGeneratingContext, OPRContentGeneratingInfo, OPRPlayEnsembleInfo, OPRSingingCardAnalysisView, OPRSingingCardSingResultView;

@interface OPRContentGeneratingViewController : OPRBaseViewController <OPSNavigationTransitioning>
{
    _Bool _disableShowOPNotificationOnViewDismiss;
    _Bool _useDraft;
    CDUnknownBlockType _contentGeneratingDidBeginPlay;
    CDUnknownBlockType _contentGeneratingDidFinishPost;
    CDUnknownBlockType _viewControllerDidDismiss;
    OPRContentGeneratingInfo *_contentGeneratingInfo;
    OPRContentGeneratingContext *_contentGeneratingContext;
    OPProgressHUD *_progressHUD;
    OPRBaseService *_postClipService;
    OPRAudioRecognizeService *_audioRecognizeService;
    OPCFileUploadService *_fileUploadService;
    CDUnknownBlockType _postTask;
    OPRSingingCardAnalysisView *_analysisView;
    OPRAudioEditViewController *_audioEditVC;
    OPRSingingCardSingResultView *_resultView;
    double _postBeginTS;
    OPRPlayEnsembleInfo *_ensembleInfo;
}

@property(retain, nonatomic) OPRPlayEnsembleInfo *ensembleInfo; // @synthesize ensembleInfo=_ensembleInfo;
@property(nonatomic) _Bool useDraft; // @synthesize useDraft=_useDraft;
@property(nonatomic) double postBeginTS; // @synthesize postBeginTS=_postBeginTS;
@property(nonatomic) __weak OPRSingingCardSingResultView *resultView; // @synthesize resultView=_resultView;
@property(nonatomic) __weak OPRAudioEditViewController *audioEditVC; // @synthesize audioEditVC=_audioEditVC;
@property(nonatomic) __weak OPRSingingCardAnalysisView *analysisView; // @synthesize analysisView=_analysisView;
@property(copy, nonatomic) CDUnknownBlockType postTask; // @synthesize postTask=_postTask;
@property(retain, nonatomic) OPCFileUploadService *fileUploadService; // @synthesize fileUploadService=_fileUploadService;
@property(retain, nonatomic) OPRAudioRecognizeService *audioRecognizeService; // @synthesize audioRecognizeService=_audioRecognizeService;
@property(retain, nonatomic) OPRBaseService *postClipService; // @synthesize postClipService=_postClipService;
@property(nonatomic) __weak OPProgressHUD *progressHUD; // @synthesize progressHUD=_progressHUD;
@property(retain, nonatomic) OPRContentGeneratingContext *contentGeneratingContext; // @synthesize contentGeneratingContext=_contentGeneratingContext;
@property(retain, nonatomic) OPRContentGeneratingInfo *contentGeneratingInfo; // @synthesize contentGeneratingInfo=_contentGeneratingInfo;
@property(copy, nonatomic) CDUnknownBlockType viewControllerDidDismiss; // @synthesize viewControllerDidDismiss=_viewControllerDidDismiss;
@property(copy, nonatomic) CDUnknownBlockType contentGeneratingDidFinishPost; // @synthesize contentGeneratingDidFinishPost=_contentGeneratingDidFinishPost;
@property(copy, nonatomic) CDUnknownBlockType contentGeneratingDidBeginPlay; // @synthesize contentGeneratingDidBeginPlay=_contentGeneratingDidBeginPlay;
@property(nonatomic) _Bool disableShowOPNotificationOnViewDismiss; // @synthesize disableShowOPNotificationOnViewDismiss=_disableShowOPNotificationOnViewDismiss;
- (void).cxx_destruct;
- (void)statPublishWithBeginTS:(double)arg1 withReqSucceed:(_Bool)arg2;
- (void)statComputeWithBeginTS:(double)arg1 withReqSucceed:(_Bool)arg2 withFileUpload:(_Bool)arg3;
- (long long)interactiveTransitionSupportType;
- (void)audioInterruptionHappen:(id)arg1;
- (void)applicationBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)removeNotifications;
- (void)initNotifications;
- (void)enableOPNotification:(_Bool)arg1;
- (void)hideWithAniamted:(_Bool)arg1 finishGenerating:(_Bool)arg2;
- (void)showOnViewController:(id)arg1 withAnimated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showOnViewController:(id)arg1 withAnimated:(_Bool)arg2;
- (id)navigationControllerOnShow;
- (void)showTopicDetail:(id)arg1;
- (void)showChordPlaybackPageWithDataItem:(id)arg1 withEntry:(id)arg2;
- (void)showPlayerList;
- (void)showResultView;
- (void)showMedalPage:(id)arg1;
- (void)finishPostDo;
- (void)startPostTaskWithAudioFileExportSucceed:(_Bool)arg1 audioFilePath:(id)arg2 audioEffectName:(id)arg3;
- (void)readyToStartPostTask;
- (void)hideAudioEditVC:(_Bool)arg1;
- (void)showAudioEditVC;
- (void)finishAnalysis;
- (void)showAnalysisView:(_Bool)arg1;
- (void)beginAnalysis;
- (void)initSingingInfoForOriginCreateBizIfNeed:(id)arg1;
- (void)initSingingInfoForChordPlaybackBizIfNeed:(id)arg1 rePlay:(_Bool)arg2;
- (void)initSingingInfo:(id)arg1;
- (void)saveDraftWhenRecordFinished;
- (void)showPlayChordVC:(_Bool)arg1 rePlay:(_Bool)arg2;
- (_Bool)checkNeedUpdateIfNeed;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithContentGenertingInfo:(id)arg1 withContext:(id)arg2;
- (id)initWithContentGenertingInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

