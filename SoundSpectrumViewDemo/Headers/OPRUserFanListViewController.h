//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OPRBaseViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSMutableArray, NSString, OPRUserFanListService, UICollectionView;

@interface OPRUserFanListViewController : OPRBaseViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    UICollectionView *_collectionView;
    OPRUserFanListService *_queryFanListService;
    NSMutableArray *_dataList;
    NSString *_userId;
}

@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSMutableArray *dataList; // @synthesize dataList=_dataList;
@property(retain, nonatomic) OPRUserFanListService *queryFanListService; // @synthesize queryFanListService=_queryFanListService;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)showPersonalPage:(id)arg1 nickName:(id)arg2 avatarUrl:(id)arg3;
- (void)updateEmptyViewDisplay;
- (void)showEmptyViewIfNeed;
- (void)requestIfNeed;
- (void)loadData;
- (void)initData;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;
- (id)initWithUserId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
