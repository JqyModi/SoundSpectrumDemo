//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSString, OPRRoomLikeButton, OPRRoomLikeEffectLottieManager, OPRRoomRecordingCountdownProgress, OPRSingingRoomItem, UIButton, UICollectionView, UIImageView, UILabel, UIView;
@protocol OPRSingingRoomPlayingViewControllerDelegate;

@interface OPRSingingRoomPlayingViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    _Bool _largeStateViewDismissing;
    id <OPRSingingRoomPlayingViewControllerDelegate> _delegate;
    OPRSingingRoomItem *_roomItem;
    UIView *_songContentView;
    UIImageView *_songSingerAvatarView;
    UILabel *_leaderSingLabel;
    UILabel *_songSingerNameLabel;
    UILabel *_songNumberLabel;
    UILabel *_lyricsLabel;
    UILabel *_albumLabel;
    UIView *_sepLineView;
    UICollectionView *_playerListCollectionView;
    UIView *_largeStateView;
    NSString *_largeStateViewShowID;
    UIView *_userPlayingStateView;
    OPRRoomLikeButton *_likeButton;
    OPRRoomRecordingCountdownProgress *_progress;
    UILabel *_likeCountLabel;
    unsigned long long _currentLikeCount;
    UIView *_likebuttonTipsEduView;
    OPRRoomLikeEffectLottieManager *_likeEffectManager;
    UIButton *_favButton;
}

+ (double)maxSongContentHeight;
@property(retain, nonatomic) UIButton *favButton; // @synthesize favButton=_favButton;
@property(retain, nonatomic) OPRRoomLikeEffectLottieManager *likeEffectManager; // @synthesize likeEffectManager=_likeEffectManager;
@property(nonatomic) __weak UIView *likebuttonTipsEduView; // @synthesize likebuttonTipsEduView=_likebuttonTipsEduView;
@property(nonatomic) unsigned long long currentLikeCount; // @synthesize currentLikeCount=_currentLikeCount;
@property(nonatomic) __weak UILabel *likeCountLabel; // @synthesize likeCountLabel=_likeCountLabel;
@property(nonatomic) __weak OPRRoomRecordingCountdownProgress *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) OPRRoomLikeButton *likeButton; // @synthesize likeButton=_likeButton;
@property(nonatomic) __weak UIView *userPlayingStateView; // @synthesize userPlayingStateView=_userPlayingStateView;
@property(nonatomic) _Bool largeStateViewDismissing; // @synthesize largeStateViewDismissing=_largeStateViewDismissing;
@property(copy, nonatomic) NSString *largeStateViewShowID; // @synthesize largeStateViewShowID=_largeStateViewShowID;
@property(retain, nonatomic) UIView *largeStateView; // @synthesize largeStateView=_largeStateView;
@property(nonatomic) __weak UICollectionView *playerListCollectionView; // @synthesize playerListCollectionView=_playerListCollectionView;
@property(nonatomic) __weak UIView *sepLineView; // @synthesize sepLineView=_sepLineView;
@property(nonatomic) __weak UILabel *albumLabel; // @synthesize albumLabel=_albumLabel;
@property(nonatomic) __weak UILabel *lyricsLabel; // @synthesize lyricsLabel=_lyricsLabel;
@property(nonatomic) __weak UILabel *songNumberLabel; // @synthesize songNumberLabel=_songNumberLabel;
@property(nonatomic) __weak UILabel *songSingerNameLabel; // @synthesize songSingerNameLabel=_songSingerNameLabel;
@property(nonatomic) __weak UILabel *leaderSingLabel; // @synthesize leaderSingLabel=_leaderSingLabel;
@property(nonatomic) __weak UIImageView *songSingerAvatarView; // @synthesize songSingerAvatarView=_songSingerAvatarView;
@property(nonatomic) __weak UIView *songContentView; // @synthesize songContentView=_songContentView;
@property(nonatomic) __weak OPRSingingRoomItem *roomItem; // @synthesize roomItem=_roomItem;
@property(nonatomic) __weak id <OPRSingingRoomPlayingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)receiveVolumeMuted:(_Bool)arg1 byUid:(id)arg2;
- (void)reciveLike;
- (void)addExtraSec:(double)arg1;
- (void)likeButtonDidClick;
- (void)favButtonDidClick;
- (void)presentUserPannel:(id)arg1 isSpecial:(_Bool)arg2;
- (void)hideFlyView;
- (void)showNextFlyView;
- (void)showWaitingFlyViewWithContent:(id)arg1;
- (void)showRaceResultFlyViewWithContent:(id)arg1;
- (void)_showFLyView:(id)arg1 BGImage:(id)arg2;
- (void)hideLargeIconViewAfter:(double)arg1;
- (void)hideLargeIconView;
- (void)hideLargeIconView:(_Bool)arg1;
- (void)showAnalysisHud;
- (void)showFuncRaceDidClickView;
- (void)showFuncNoRaceViewDissmissAfter:(double)arg1;
- (void)showResultViewDissmissAfter:(double)arg1 extraTime:(long long)arg2 like:(long long)arg3 rank:(long long)arg4 specialUser:(_Bool)arg5;
- (void)showUserOnSingingViewDissmissAfter:(double)arg1 countDownSec:(double)arg2 specialUser:(_Bool)arg3;
- (void)showGiveupViewDissmissAfter:(double)arg1;
- (void)showSuccessViewDissmissAfter:(double)arg1;
- (void)showAllWrongViewDissmissAfter:(double)arg1;
- (void)showWrongViewDissmissAfter:(double)arg1;
- (void)showGameOverViewDissmissAfter:(double)arg1;
- (void)_showLargeIconView:(id)arg1 dissmissAfter:(double)arg2;
- (void)initWithStateIconView;
- (void)playListDidUpdate;
- (void)refreshSegmentFavStatus;
- (void)reciveNewSegment;
- (void)resetLyric;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

