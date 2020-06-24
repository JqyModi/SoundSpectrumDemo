//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OPRBaseViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSString, OPRUserPageUserPostListCVCell, OPUserProfile, UICollectionView;

@interface OPRUserBaseListViewController : OPRBaseViewController <UICollectionViewDataSource, UICollectionViewDelegate>
{
    _Bool _ignoreCanScrollStatus;
    _Bool _canScroll;
    _Bool _enableRefresh;
    _Bool _hasLoadListData;
    OPUserProfile *_userProfile;
    UICollectionView *_collectionView;
    CDUnknownBlockType _canScrollChanged;
    CDUnknownBlockType _refreshDataCompelete;
    double _emptyViewHeight;
    OPRUserPageUserPostListCVCell *_currentShowMoreMenuCell;
}

@property(nonatomic) __weak OPRUserPageUserPostListCVCell *currentShowMoreMenuCell; // @synthesize currentShowMoreMenuCell=_currentShowMoreMenuCell;
@property(nonatomic) double emptyViewHeight; // @synthesize emptyViewHeight=_emptyViewHeight;
@property(nonatomic) _Bool hasLoadListData; // @synthesize hasLoadListData=_hasLoadListData;
@property(nonatomic) _Bool enableRefresh; // @synthesize enableRefresh=_enableRefresh;
@property(copy, nonatomic) CDUnknownBlockType refreshDataCompelete; // @synthesize refreshDataCompelete=_refreshDataCompelete;
@property(copy, nonatomic) CDUnknownBlockType canScrollChanged; // @synthesize canScrollChanged=_canScrollChanged;
@property(nonatomic) _Bool canScroll; // @synthesize canScroll=_canScroll;
@property(nonatomic) _Bool ignoreCanScrollStatus; // @synthesize ignoreCanScrollStatus=_ignoreCanScrollStatus;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) OPUserProfile *userProfile; // @synthesize userProfile=_userProfile;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)updateLayout;
- (void)viewDidLoad;
- (void)refreshData;
- (id)initWithUserProfile:(id)arg1;
- (id)initWithUserProfile:(id)arg1 hideHeader:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
