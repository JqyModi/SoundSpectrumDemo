//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSMutableArray, NSString, OPProgressHUD, OPRQueryRoomResultService, OPRSingingRoomEndViewContentHeader, OPRSingingRoomItem, OPTouchBounceButton, UIActivityIndicatorView, UICollectionView, UILabel, UIView;

@interface OPRSingingRoomEndViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    CDUnknownBlockType _dismissHandler;
    UIView *_contentView;
    UILabel *_emptyTipsLabel;
    OPProgressHUD *_progressHUD;
    OPRQueryRoomResultService *_queryResultService;
    OPRSingingRoomEndViewContentHeader *_contentHeader;
    UIActivityIndicatorView *_activityIndicator;
    OPTouchBounceButton *_shareButton;
    UICollectionView *_userListView;
    NSMutableArray *_userLists;
    NSString *_roundId;
    NSString *_roomId;
    OPRSingingRoomItem *_roomItem;
}

@property(nonatomic) __weak OPRSingingRoomItem *roomItem; // @synthesize roomItem=_roomItem;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(retain, nonatomic) NSString *roundId; // @synthesize roundId=_roundId;
@property(retain, nonatomic) NSMutableArray *userLists; // @synthesize userLists=_userLists;
@property(retain, nonatomic) UICollectionView *userListView; // @synthesize userListView=_userListView;
@property(retain, nonatomic) OPTouchBounceButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) OPRSingingRoomEndViewContentHeader *contentHeader; // @synthesize contentHeader=_contentHeader;
@property(retain, nonatomic) OPRQueryRoomResultService *queryResultService; // @synthesize queryResultService=_queryResultService;
@property(retain, nonatomic) OPProgressHUD *progressHUD; // @synthesize progressHUD=_progressHUD;
@property(retain, nonatomic) UILabel *emptyTipsLabel; // @synthesize emptyTipsLabel=_emptyTipsLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
- (void).cxx_destruct;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)refreshContentView;
- (void)loadDataAfter:(double)arg1;
- (void)makeShareBtnEnable:(_Bool)arg1;
- (void)dismissHUD:(_Bool)arg1;
- (void)showHUDWithText:(id)arg1;
- (void)onEmptyViewClick;
- (void)shareButtonDidClick:(id)arg1;
- (void)closeView;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithRoomItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

