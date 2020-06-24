//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "OPAccountManagerObserver-Protocol.h"
#import "OPRAudioPlayItemReceiverProtocol-Protocol.h"
#import "OPRPlayerListFreeStyleTopicCellDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSMutableArray, NSString, OPRAudioPlayItem, OPRBaseService, OPRPlayerListFreeStyleHeadModel, OPRQueryLeadingSingersService, OPRSingingCardPlayerListEmptyView, OPRSingingCardPlayerListTopbar, OPRSongSegmentData, UICollectionView, UIViewController;

@interface OPRSingingCardPlayerListView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, OPRPlayerListFreeStyleTopicCellDelegate, OPAccountManagerObserver, OPRAudioPlayItemReceiverProtocol>
{
    _Bool _isFromSolo;
    _Bool _hasMyClip;
    _Bool _didStatPV;
    _Bool _fullscreen;
    _Bool _isContentViewAnimationing;
    _Bool _isBeginDrag;
    OPRSongSegmentData *_segmentData;
    CDUnknownBlockType _shareSongInfo;
    CDUnknownBlockType _listViewDidHide;
    CDUnknownBlockType _onClickChordPlayback;
    UIView *_parentView;
    OPRAudioPlayItem *_defaultPlayerItem;
    OPRSingingCardPlayerListTopbar *_contentViewTopbar;
    NSMutableArray *_dataList;
    NSMutableArray *_audioIdList;
    UIView *_backgroundView;
    UIView *_contentView;
    UICollectionView *_collectionView;
    OPRQueryLeadingSingersService *_queryDataService;
    OPRSingingCardPlayerListEmptyView *_emptyView;
    NSString *_lastItemCursor;
    UIViewController *_navVC;
    OPRBaseService *_topicService;
    OPRPlayerListFreeStyleHeadModel *_headModel;
}

@property(retain, nonatomic) OPRPlayerListFreeStyleHeadModel *headModel; // @synthesize headModel=_headModel;
@property(nonatomic) __weak OPRBaseService *topicService; // @synthesize topicService=_topicService;
@property(nonatomic) _Bool isBeginDrag; // @synthesize isBeginDrag=_isBeginDrag;
@property(nonatomic) _Bool isContentViewAnimationing; // @synthesize isContentViewAnimationing=_isContentViewAnimationing;
@property(nonatomic) _Bool fullscreen; // @synthesize fullscreen=_fullscreen;
@property(nonatomic) __weak UIViewController *navVC; // @synthesize navVC=_navVC;
@property(copy, nonatomic) NSString *lastItemCursor; // @synthesize lastItemCursor=_lastItemCursor;
@property(retain, nonatomic) OPRSingingCardPlayerListEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) OPRQueryLeadingSingersService *queryDataService; // @synthesize queryDataService=_queryDataService;
@property(nonatomic) _Bool didStatPV; // @synthesize didStatPV=_didStatPV;
@property(nonatomic) _Bool hasMyClip; // @synthesize hasMyClip=_hasMyClip;
@property(nonatomic) _Bool isFromSolo; // @synthesize isFromSolo=_isFromSolo;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSMutableArray *audioIdList; // @synthesize audioIdList=_audioIdList;
@property(retain, nonatomic) NSMutableArray *dataList; // @synthesize dataList=_dataList;
@property(retain, nonatomic) OPRSingingCardPlayerListTopbar *contentViewTopbar; // @synthesize contentViewTopbar=_contentViewTopbar;
@property(retain, nonatomic) OPRAudioPlayItem *defaultPlayerItem; // @synthesize defaultPlayerItem=_defaultPlayerItem;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(copy, nonatomic) CDUnknownBlockType onClickChordPlayback; // @synthesize onClickChordPlayback=_onClickChordPlayback;
@property(copy, nonatomic) CDUnknownBlockType listViewDidHide; // @synthesize listViewDidHide=_listViewDidHide;
@property(copy, nonatomic) CDUnknownBlockType shareSongInfo; // @synthesize shareSongInfo=_shareSongInfo;
@property(retain, nonatomic) OPRSongSegmentData *segmentData; // @synthesize segmentData=_segmentData;
- (void).cxx_destruct;
- (id)entry;
- (id)morningfilterTopicType;
- (void)playAtIndex:(long long)arg1;
- (long long)currentPlayingIndex;
- (void)playItemReceiverPlayPrevious;
- (void)playItemReceiverPlayNext;
- (_Bool)playItemReceiverCanAutoPlayNext;
- (void)fetchTopicHotList;
- (void)playerListFreeStyleTopicCellDidClickJoinButton:(id)arg1;
- (void)playerListFreeStyleTopicCellDidClickBgView:(id)arg1 topicId:(id)arg2;
- (void)accountManager:(id)arg1 logerStatusChanged:(unsigned long long)arg2;
- (unsigned long long)authorIdentify:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)adjustFullscreenTypeWhenScroll;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)onBackgroundViewClick;
- (void)onLikeClickWithCell:(id)arg1;
- (void)resetCurrentAudioPlay;
- (void)showEmptyView:(_Bool)arg1;
- (void)showChordPlaybackPage:(id)arg1;
- (void)showContentPage:(id)arg1 withCommentEntry:(_Bool)arg2;
- (void)showPersonalPage:(id)arg1 nickName:(id)arg2 songStatInfo:(id)arg3;
- (void)showPersonalPage:(id)arg1 headerImage:(id)arg2;
- (void)statPV;
- (void)hideWithAnimated:(_Bool)arg1;
- (void)cancelQequest;
- (void)requestMoreServiceData;
- (void)refreshServiceData;
- (void)configCollectionViewMjFooterView;
- (void)configCollectionViewMjHeaderView;
- (void)setupCollectionView;
- (void)setupTopBar;
- (void)setupContentView;
- (void)setupBackgroundView;
- (void)onAppDidBecomeActive:(id)arg1;
- (void)addNotification;
- (double)getHalfScreenHeight;
- (void)showWithPlayItem:(id)arg1 withAnimated:(_Bool)arg2;
- (id)initWithParentView:(id)arg1 withNavVC:(id)arg2 isFromSolo:(_Bool)arg3;
- (id)initWithParentView:(id)arg1 isFromSolo:(_Bool)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
