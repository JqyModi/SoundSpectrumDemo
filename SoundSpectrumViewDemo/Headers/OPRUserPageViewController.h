//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OPRBaseViewController.h"

#import "OPCUserBlockManagerObserver-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, OPRSingingCardPlayerListEmptyView, OPRUserBaseListViewController, OPRUserContentContainerCell, OPRUserPageHeaderView, OPUserProfile, UIButton, UICollectionView, UIImage, UIImageView, UILabel, UIView;

@interface OPRUserPageViewController : OPRBaseViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, OPCUserBlockManagerObserver>
{
    _Bool _needUpdateUserInfo;
    _Bool _canShowUserBlockTips;
    _Bool _needLayoutSubViews;
    _Bool _scrollEanbled;
    _Bool _hasLoadAllListData;
    _Bool _hadAppeared;
    NSString *_entry;
    NSDictionary *_songStatInfo;
    unsigned long long _defaultTab;
    UIButton *_backBtn;
    UIButton *_menuBtn;
    UILabel *_userNameLabel;
    OPRUserPageHeaderView *_collectionFirstSectionHeader;
    long long _lastHeaderViewHeight;
    UIView *_collectionViewBgView;
    UICollectionView *_collectionView;
    UIView *_songlistBgView;
    UIImageView *_userDIYHeaderBgView;
    UIView *_userDIYHeaderBgViewMaskView;
    OPUserProfile *_userProfile;
    UIImage *_defaultHeaderImage;
    OPRSingingCardPlayerListEmptyView *_emptyCustomView;
    NSArray *_childContentVCs;
    OPRUserBaseListViewController *_currentVC;
    OPRUserContentContainerCell *_containerCell;
    NSNumber *_hasNormalPost;
    NSNumber *_hasEnsemblePost;
    struct CGSize _backgroundImageSize;
}

@property(retain, nonatomic) NSNumber *hasEnsemblePost; // @synthesize hasEnsemblePost=_hasEnsemblePost;
@property(retain, nonatomic) NSNumber *hasNormalPost; // @synthesize hasNormalPost=_hasNormalPost;
@property(nonatomic) _Bool hadAppeared; // @synthesize hadAppeared=_hadAppeared;
@property(nonatomic) _Bool hasLoadAllListData; // @synthesize hasLoadAllListData=_hasLoadAllListData;
@property(nonatomic) _Bool scrollEanbled; // @synthesize scrollEanbled=_scrollEanbled;
@property(nonatomic) __weak OPRUserContentContainerCell *containerCell; // @synthesize containerCell=_containerCell;
@property(nonatomic) __weak OPRUserBaseListViewController *currentVC; // @synthesize currentVC=_currentVC;
@property(retain, nonatomic) NSArray *childContentVCs; // @synthesize childContentVCs=_childContentVCs;
@property(retain, nonatomic) OPRSingingCardPlayerListEmptyView *emptyCustomView; // @synthesize emptyCustomView=_emptyCustomView;
@property(nonatomic) _Bool needLayoutSubViews; // @synthesize needLayoutSubViews=_needLayoutSubViews;
@property(retain, nonatomic) UIImage *defaultHeaderImage; // @synthesize defaultHeaderImage=_defaultHeaderImage;
@property(retain, nonatomic) OPUserProfile *userProfile; // @synthesize userProfile=_userProfile;
@property(nonatomic) struct CGSize backgroundImageSize; // @synthesize backgroundImageSize=_backgroundImageSize;
@property(retain, nonatomic) UIView *userDIYHeaderBgViewMaskView; // @synthesize userDIYHeaderBgViewMaskView=_userDIYHeaderBgViewMaskView;
@property(retain, nonatomic) UIImageView *userDIYHeaderBgView; // @synthesize userDIYHeaderBgView=_userDIYHeaderBgView;
@property(retain, nonatomic) UIView *songlistBgView; // @synthesize songlistBgView=_songlistBgView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIView *collectionViewBgView; // @synthesize collectionViewBgView=_collectionViewBgView;
@property(nonatomic) long long lastHeaderViewHeight; // @synthesize lastHeaderViewHeight=_lastHeaderViewHeight;
@property(retain, nonatomic) OPRUserPageHeaderView *collectionFirstSectionHeader; // @synthesize collectionFirstSectionHeader=_collectionFirstSectionHeader;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UIButton *menuBtn; // @synthesize menuBtn=_menuBtn;
@property(retain, nonatomic) UIButton *backBtn; // @synthesize backBtn=_backBtn;
@property(nonatomic) _Bool canShowUserBlockTips; // @synthesize canShowUserBlockTips=_canShowUserBlockTips;
@property(nonatomic) _Bool needUpdateUserInfo; // @synthesize needUpdateUserInfo=_needUpdateUserInfo;
@property(nonatomic) unsigned long long defaultTab; // @synthesize defaultTab=_defaultTab;
@property(copy, nonatomic) NSDictionary *songStatInfo; // @synthesize songStatInfo=_songStatInfo;
@property(copy, nonatomic) NSString *entry; // @synthesize entry=_entry;
- (void).cxx_destruct;
- (void)statPV;
- (double)stanrdContentOffSetY;
- (void)unBlockUser:(id)arg1 completed:(_Bool)arg2 error:(id)arg3;
- (void)blockUser:(id)arg1 completed:(_Bool)arg2 error:(id)arg3;
- (void)hideAllCellMoreMenu;
- (void)onMenuButtonClick:(id)arg1;
- (void)addMenuButtonIfNeed;
- (unsigned long long)selectedType;
- (void)adjustBGHeaderViewScale:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)isOwner;
- (void)requestIfNeed;
- (void)loadData:(_Bool)arg1;
- (void)initData;
- (void)updateBackgroundImage;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)updateAllChildListScrollStatusIfNeed:(_Bool)arg1;
- (void)initSelectedTab;
- (void)setupChildContentVCs;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;
- (id)initWithUserProfile:(id)arg1 defaultHeaderImage:(id)arg2;
- (id)initWithUserId:(id)arg1 userAvatarUrl:(id)arg2 userNickName:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

