//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "OPRSingingRoomCreatePlayerCellDelegate-Protocol.h"
#import "OPRSingingRoomSonglistCVCellDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSString, OPRRoomWaitingInviteButton, OPRRoomWaitingStartButton, OPRSingingRoomItem, UICollectionView, UIImageView, UILabel;
@protocol OPRSingingRoomCreatingViewControllerDelegate;

@interface OPRSingingRoomCreatingViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, OPRSingingRoomSonglistCVCellDelegate, OPRSingingRoomCreatePlayerCellDelegate>
{
    _Bool _shouldHideCellTips;
    id <OPRSingingRoomCreatingViewControllerDelegate> _delegate;
    OPRSingingRoomItem *_roomItem;
    UICollectionView *_songListCollectionView;
    UICollectionView *_playerListCollectionView;
    NSArray *_albumList;
    UILabel *_playerLabel;
    OPRRoomWaitingStartButton *_startButton;
    OPRRoomWaitingInviteButton *_inviteButton;
    UIImageView *_findingTipsView;
}

@property(nonatomic) _Bool shouldHideCellTips; // @synthesize shouldHideCellTips=_shouldHideCellTips;
@property(retain, nonatomic) UIImageView *findingTipsView; // @synthesize findingTipsView=_findingTipsView;
@property(nonatomic) __weak OPRRoomWaitingInviteButton *inviteButton; // @synthesize inviteButton=_inviteButton;
@property(nonatomic) __weak OPRRoomWaitingStartButton *startButton; // @synthesize startButton=_startButton;
@property(retain, nonatomic) UILabel *playerLabel; // @synthesize playerLabel=_playerLabel;
@property(retain, nonatomic) NSArray *albumList; // @synthesize albumList=_albumList;
@property(nonatomic) __weak UICollectionView *playerListCollectionView; // @synthesize playerListCollectionView=_playerListCollectionView;
@property(nonatomic) __weak UICollectionView *songListCollectionView; // @synthesize songListCollectionView=_songListCollectionView;
@property(nonatomic) __weak OPRSingingRoomItem *roomItem; // @synthesize roomItem=_roomItem;
@property(nonatomic) __weak id <OPRSingingRoomCreatingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)receiveVolumeMuted:(_Bool)arg1 byUid:(id)arg2;
- (void)receiveVolume:(id)arg1;
- (void)songListCellDidClick:(id)arg1;
- (void)cellBanUserDidClick:(id)arg1;
- (id)playerLisetCollectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)playerCollectionViewCount;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)needShowFindingCell;
- (struct CGRect)startButtonRect;
- (void)updateFindingCellRect:(id)arg1 left:(_Bool)arg2;
- (id)editSonglistViewData;
- (void)playListDidUpdate;
- (void)songListDidUpdate;
- (void)roomRoleDidUpdate;
- (void)refreshStartCountDown;
- (void)chooseAlbum;
- (void)refreshSonglistView;
- (void)readyButtonDidClick;
- (void)inviteDidClick;
- (void)beginButtonDidClick;
- (void)configPlayListCollectionLayout:(id)arg1;
- (void)configSongCollectionLayout:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

