//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OPRUserBaseListViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSMutableArray, NSString, OPRBaseService, OPREnsemblePowerService, OPRQueryUgcClipsService, OPRUserPageDraftCell, OPRUserPageUserPostListCVCell;

@interface OPRUserPostListViewController : OPRUserBaseListViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    _Bool _isEnsemble;
    _Bool _hideEmptyView;
    _Bool _showDraft;
    CDUnknownBlockType _fetchResultBlock;
    OPRUserPageUserPostListCVCell *_currentShowMoreMenuCell;
    OPRQueryUgcClipsService *_queryDataService;
    OPREnsemblePowerService *_ensemblePowerService;
    NSMutableArray *_dataList;
    OPRBaseService *_deleteClipService;
    long long _draftCount;
    OPRUserPageDraftCell *_draftCell;
}

@property(nonatomic) _Bool showDraft; // @synthesize showDraft=_showDraft;
@property(retain, nonatomic) OPRUserPageDraftCell *draftCell; // @synthesize draftCell=_draftCell;
@property(nonatomic) long long draftCount; // @synthesize draftCount=_draftCount;
@property(retain, nonatomic) OPRBaseService *deleteClipService; // @synthesize deleteClipService=_deleteClipService;
@property(retain, nonatomic) NSMutableArray *dataList; // @synthesize dataList=_dataList;
@property(retain, nonatomic) OPREnsemblePowerService *ensemblePowerService; // @synthesize ensemblePowerService=_ensemblePowerService;
@property(retain, nonatomic) OPRQueryUgcClipsService *queryDataService; // @synthesize queryDataService=_queryDataService;
@property(nonatomic) __weak OPRUserPageUserPostListCVCell *currentShowMoreMenuCell; // @synthesize currentShowMoreMenuCell=_currentShowMoreMenuCell;
@property(nonatomic) _Bool hideEmptyView; // @synthesize hideEmptyView=_hideEmptyView;
@property(nonatomic) _Bool isEnsemble; // @synthesize isEnsemble=_isEnsemble;
@property(copy, nonatomic) CDUnknownBlockType fetchResultBlock; // @synthesize fetchResultBlock=_fetchResultBlock;
- (void).cxx_destruct;
- (id)scene;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)showChordPlaybackPage:(id)arg1;
- (void)showPersonalPage:(id)arg1 nickName:(id)arg2 avatarUrl:(id)arg3;
- (void)showContentPage:(id)arg1 withCommentEntry:(_Bool)arg2;
- (void)hideAllCellMoreMenu;
- (_Bool)isOwner;
- (void)updateEmptyViewDisplay;
- (void)showEmptyViewIfNeed;
- (void)requestIfNeed;
- (void)loadData;
- (void)refreshData;
- (void)addCollectionViewHeader;
- (void)addCollectionViewFooter;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)updateLayout;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithUserProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
