//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "OPRListScrollProtocol-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSString, OPROnlineUserErrorView, OPROnlineUserGuideToRoomView, OPROnlineUserLoadingView, OPROnlineUserManager, UICollectionView, UIView;

@interface OPROnlineUserListViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, OPRListScrollProtocol>
{
    _Bool _canScroll;
    CDUnknownBlockType _canScrollChanged;
    CDUnknownBlockType _refreshDataCompelete;
    UICollectionView *_collectionView;
    OPROnlineUserManager *_manager;
    NSArray *_dataList;
    UIView *_emptyView;
    OPROnlineUserErrorView *_errorView;
    OPROnlineUserLoadingView *_loadingView;
    OPROnlineUserGuideToRoomView *_roomView;
    long long _currentPlayIndex;
}

@property(nonatomic) long long currentPlayIndex; // @synthesize currentPlayIndex=_currentPlayIndex;
@property(retain, nonatomic) OPROnlineUserGuideToRoomView *roomView; // @synthesize roomView=_roomView;
@property(retain, nonatomic) OPROnlineUserLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) OPROnlineUserErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(copy, nonatomic) NSArray *dataList; // @synthesize dataList=_dataList;
@property(retain, nonatomic) OPROnlineUserManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) CDUnknownBlockType refreshDataCompelete; // @synthesize refreshDataCompelete=_refreshDataCompelete;
@property(copy, nonatomic) CDUnknownBlockType canScrollChanged; // @synthesize canScrollChanged=_canScrollChanged;
@property(nonatomic) _Bool canScroll; // @synthesize canScroll=_canScroll;
- (void).cxx_destruct;
- (id)entry;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onLikeClickWithCell:(id)arg1;
- (_Bool)onlineUserCell:(id)arg1 startInvite:(double)arg2 userStatus:(long long)arg3;
- (void)resetCurrentAudioPlay;
- (void)showShareViewWithAudioItem:(id)arg1;
- (void)showChordPlaybackPageWithAudioItem:(id)arg1;
- (void)showContentPage:(id)arg1 withCommentEntry:(_Bool)arg2;
- (void)showPersonalPage:(id)arg1 nickName:(id)arg2 avatarUrl:(id)arg3;
- (void)showPersonalPage:(id)arg1 headerImage:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)setupEmptyView;
- (void)showUserListView;
- (void)showGuideToRoomView;
- (void)showLoadingView;
- (void)showErrorView;
- (void)onUserListChanged:(id)arg1 hasMore:(_Bool)arg2;
- (void)onAppWillResignActive:(id)arg1;
- (void)addNotification;
- (void)viewDidLayoutSubviews;
- (void)refresh;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

