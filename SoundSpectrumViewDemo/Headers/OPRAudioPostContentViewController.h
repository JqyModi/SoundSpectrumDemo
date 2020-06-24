//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OPRBaseViewController.h"

#import "OPCUserBlockManagerObserver-Protocol.h"
#import "OPRAudioPlayItemReceiverProtocol-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSMutableArray, NSNumber, NSString, OPRAudioContentItem, OPRAudioPlayItem, OPRAudioPostContentBottomView, OPRAudioPostContentEmptyView, OPRAudioPostContentHeaderView, OPRBaseService, OPRCancelRecordServie, OPRDeleteCommentService, OPREnsemblePowerService, OPREnsembleSetTopService, OPRPostCommentService, OPRQueryCommentListService, OPRQueryEnsembleCountListService, OPRQueryEnsembleListService, OPRQueryLikeListService, OPRSingingCardAudioPlayView, UICollectionView, UIView;
@protocol OPRAudioPlayItemReceiverProtocol;

@interface OPRAudioPostContentViewController : OPRBaseViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, OPRAudioPlayItemReceiverProtocol, OPCUserBlockManagerObserver>
{
    _Bool _needLayoutSubViews;
    _Bool _firstRefreshCompleted;
    _Bool _autoPause;
    _Bool _queryCommentListServiceReqSuccess;
    _Bool _isShowEnsembleUser;
    _Bool _forceRefresh;
    _Bool _isPresent;
    _Bool _isDismissing;
    _Bool _isOnShow;
    _Bool _playRecord;
    OPRAudioPostContentHeaderView *_postContentHeaderView;
    OPRAudioPostContentBottomView *_postContentBottomView;
    UICollectionView *_collectionView;
    OPRAudioPostContentEmptyView *_contentEmptyView;
    OPRAudioContentItem *_clipItem;
    OPRAudioContentItem *_ensembleItem;
    OPRAudioPlayItem *_playerItem;
    OPRAudioPlayItem *_defaultPlayerItem;
    OPRBaseService *_queryAudioDetailService;
    OPRQueryLikeListService *_queryLikedUserListService;
    NSMutableArray *_likedUserList;
    OPRQueryCommentListService *_queryCommentListService;
    NSMutableArray *_commentList;
    NSNumber *_commentReqLastIdx;
    OPRQueryEnsembleListService *_queryEnsembleListService;
    NSMutableArray *_ensembleAudioList;
    long long _topCount;
    OPRQueryEnsembleCountListService *_queryEnsembleCountListService;
    NSMutableArray *_ensembleCountList;
    OPREnsembleSetTopService *_ensembleSetTopService;
    OPRDeleteCommentService *_deleteCommentService;
    OPRPostCommentService *_postCommentService;
    OPRBaseService *_deleteClipService;
    OPREnsemblePowerService *_ensemblePowerService;
    OPRCancelRecordServie *_cancelRecordService;
    NSString *_entry;
    unsigned long long _selectTab;
    CDUnknownBlockType _dismissBlock;
    UIView *_ensembleHeaderView;
    UIView *_ensembleCountHeaderView;
    OPRSingingCardAudioPlayView *_currentPlayingCardView;
    OPRAudioContentItem *_currentPlayingContent;
    UIView *_setTopGuideView;
    OPRBaseViewController *_presentVC;
    id <OPRAudioPlayItemReceiverProtocol> _sourceReceiver;
}

@property(nonatomic) _Bool playRecord; // @synthesize playRecord=_playRecord;
@property(nonatomic) __weak id <OPRAudioPlayItemReceiverProtocol> sourceReceiver; // @synthesize sourceReceiver=_sourceReceiver;
@property(retain, nonatomic) OPRBaseViewController *presentVC; // @synthesize presentVC=_presentVC;
@property(retain, nonatomic) UIView *setTopGuideView; // @synthesize setTopGuideView=_setTopGuideView;
@property(retain, nonatomic) OPRAudioContentItem *currentPlayingContent; // @synthesize currentPlayingContent=_currentPlayingContent;
@property(retain, nonatomic) OPRSingingCardAudioPlayView *currentPlayingCardView; // @synthesize currentPlayingCardView=_currentPlayingCardView;
@property(retain, nonatomic) UIView *ensembleCountHeaderView; // @synthesize ensembleCountHeaderView=_ensembleCountHeaderView;
@property(retain, nonatomic) UIView *ensembleHeaderView; // @synthesize ensembleHeaderView=_ensembleHeaderView;
@property(nonatomic) _Bool isOnShow; // @synthesize isOnShow=_isOnShow;
@property(nonatomic) _Bool isDismissing; // @synthesize isDismissing=_isDismissing;
@property(nonatomic) _Bool isPresent; // @synthesize isPresent=_isPresent;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(nonatomic) _Bool forceRefresh; // @synthesize forceRefresh=_forceRefresh;
@property(nonatomic) unsigned long long selectTab; // @synthesize selectTab=_selectTab;
@property(copy, nonatomic) NSString *entry; // @synthesize entry=_entry;
@property(retain, nonatomic) OPRCancelRecordServie *cancelRecordService; // @synthesize cancelRecordService=_cancelRecordService;
@property(retain, nonatomic) OPREnsemblePowerService *ensemblePowerService; // @synthesize ensemblePowerService=_ensemblePowerService;
@property(retain, nonatomic) OPRBaseService *deleteClipService; // @synthesize deleteClipService=_deleteClipService;
@property(retain, nonatomic) OPRPostCommentService *postCommentService; // @synthesize postCommentService=_postCommentService;
@property(retain, nonatomic) OPRDeleteCommentService *deleteCommentService; // @synthesize deleteCommentService=_deleteCommentService;
@property(retain, nonatomic) OPREnsembleSetTopService *ensembleSetTopService; // @synthesize ensembleSetTopService=_ensembleSetTopService;
@property(retain, nonatomic) NSMutableArray *ensembleCountList; // @synthesize ensembleCountList=_ensembleCountList;
@property(retain, nonatomic) OPRQueryEnsembleCountListService *queryEnsembleCountListService; // @synthesize queryEnsembleCountListService=_queryEnsembleCountListService;
@property(nonatomic) _Bool isShowEnsembleUser; // @synthesize isShowEnsembleUser=_isShowEnsembleUser;
@property(nonatomic) long long topCount; // @synthesize topCount=_topCount;
@property(retain, nonatomic) NSMutableArray *ensembleAudioList; // @synthesize ensembleAudioList=_ensembleAudioList;
@property(retain, nonatomic) OPRQueryEnsembleListService *queryEnsembleListService; // @synthesize queryEnsembleListService=_queryEnsembleListService;
@property(copy, nonatomic) NSNumber *commentReqLastIdx; // @synthesize commentReqLastIdx=_commentReqLastIdx;
@property(retain, nonatomic) NSMutableArray *commentList; // @synthesize commentList=_commentList;
@property(nonatomic) _Bool queryCommentListServiceReqSuccess; // @synthesize queryCommentListServiceReqSuccess=_queryCommentListServiceReqSuccess;
@property(retain, nonatomic) OPRQueryCommentListService *queryCommentListService; // @synthesize queryCommentListService=_queryCommentListService;
@property(retain, nonatomic) NSMutableArray *likedUserList; // @synthesize likedUserList=_likedUserList;
@property(retain, nonatomic) OPRQueryLikeListService *queryLikedUserListService; // @synthesize queryLikedUserListService=_queryLikedUserListService;
@property(retain, nonatomic) OPRBaseService *queryAudioDetailService; // @synthesize queryAudioDetailService=_queryAudioDetailService;
@property(nonatomic) _Bool autoPause; // @synthesize autoPause=_autoPause;
@property(retain, nonatomic) OPRAudioPlayItem *defaultPlayerItem; // @synthesize defaultPlayerItem=_defaultPlayerItem;
@property(retain, nonatomic) OPRAudioPlayItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) OPRAudioContentItem *ensembleItem; // @synthesize ensembleItem=_ensembleItem;
@property(retain, nonatomic) OPRAudioContentItem *clipItem; // @synthesize clipItem=_clipItem;
@property(nonatomic) _Bool firstRefreshCompleted; // @synthesize firstRefreshCompleted=_firstRefreshCompleted;
@property(retain, nonatomic) OPRAudioPostContentEmptyView *contentEmptyView; // @synthesize contentEmptyView=_contentEmptyView;
@property(nonatomic) _Bool needLayoutSubViews; // @synthesize needLayoutSubViews=_needLayoutSubViews;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) OPRAudioPostContentBottomView *postContentBottomView; // @synthesize postContentBottomView=_postContentBottomView;
@property(retain, nonatomic) OPRAudioPostContentHeaderView *postContentHeaderView; // @synthesize postContentHeaderView=_postContentHeaderView;
- (void).cxx_destruct;
- (void)unBlockUser:(id)arg1 completed:(_Bool)arg2 error:(id)arg3;
- (void)blockUser:(id)arg1 completed:(_Bool)arg2 error:(id)arg3;
- (void)playItemReceiverPlayNext;
- (void)playItemReceiverPlayPrevious;
- (_Bool)playItemReceiverCanAutoPlayNext;
- (id)scene;
- (void)onPlayerStopPlay;
- (void)onPlayerPlayPause:(_Bool)arg1;
- (void)onPlayerPlayComplete:(_Bool)arg1 error:(id)arg2;
- (void)onPlayerPlaying:(double)arg1 totalDuration:(double)arg2;
- (void)onPlayerStartPlay:(_Bool)arg1 duration:(double)arg2;
- (_Bool)playerIsStoping;
- (_Bool)playerIsPlaying;
- (void)playerStopPlaying;
- (void)playerAutoPlay;
- (void)playerAutoPause;
- (void)playerPauseOrPlay;
- (void)play:(id)arg1 withCardView:(id)arg2 scene:(id)arg3;
- (void)playerDealloc;
- (void)playerInit;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)onMenuButtonClick:(id)arg1;
- (void)showRecordFailbox;
- (void)doRecord:(id)arg1;
- (void)showUserBlockAlert:(id)arg1;
- (void)onBackButtonClick;
- (void)stopAllService;
- (void)deleteCurrentAudio;
- (void)showPlayEnsembleVC:(id)arg1;
- (void)showAudioPlayPage;
- (void)showEnsemblePlaybackPage:(id)arg1 scene:(id)arg2;
- (void)showChordPlaybackPage:(id)arg1 scene:(id)arg2;
- (void)showPersonalPage:(id)arg1 nickName:(id)arg2 avatarUrl:(id)arg3 scene:(id)arg4;
- (void)showPersonalPageWithAudioContentItem:(id)arg1;
- (void)insertCommentListItem:(id)arg1 replyId:(id)arg2 message:(id)arg3;
- (void)showCommentInputViewWithToUserId:(id)arg1 toUserName:(id)arg2 replyId:(id)arg3;
- (void)showAudioNotExitView;
- (void)updateEmptyViewDisplay;
- (void)updateMjFooterViewStatusWhenGetData;
- (void)showListContentEmptyViewIfNeed;
- (void)updateListContentHeaderIfNeed;
- (void)showEmptyViewIfNeed;
- (void)requestIfNeed;
- (void)loadData;
- (void)initData;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;
- (id)initWithDataItem:(id)arg1 withPlayerItem:(id)arg2 withPresent:(_Bool)arg3 withDismissBlock:(CDUnknownBlockType)arg4 withEntry:(id)arg5 directTo:(unsigned long long)arg6;
- (id)initWithAudioData:(id)arg1 withEntry:(id)arg2 directTo:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

