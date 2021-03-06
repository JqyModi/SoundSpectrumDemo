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

@class NSMutableArray, NSNumber, NSString, OPRAudioPostContentBottomView, OPRAudioPostContentCommentReplyHeaderView, OPRAudioPostContentEmptyView, OPRDeleteCommentService, OPRPostCommentService, OPRQueryCommentListService, UICollectionView;

@interface OPRAudioPostContentCommentReplyViewController : OPRBaseViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, OPCUserBlockManagerObserver>
{
    _Bool _needLayoutSubViews;
    _Bool _isEnsemble;
    OPRAudioPostContentCommentReplyHeaderView *_postContentHeaderView;
    OPRAudioPostContentBottomView *_postContentBottomView;
    UICollectionView *_collectionView;
    OPRAudioPostContentEmptyView *_contentEmptyView;
    OPRDeleteCommentService *_deleteCommentService;
    OPRPostCommentService *_postCommentService;
    NSString *_audioId;
    NSString *_audioUserId;
    NSString *_commentId;
    OPRQueryCommentListService *_queryCommentListService;
    NSMutableArray *_commentList;
    NSNumber *_commentReqLastIdx;
    NSString *_entry;
}

@property(copy, nonatomic) NSString *entry; // @synthesize entry=_entry;
@property(copy, nonatomic) NSNumber *commentReqLastIdx; // @synthesize commentReqLastIdx=_commentReqLastIdx;
@property(retain, nonatomic) NSMutableArray *commentList; // @synthesize commentList=_commentList;
@property(retain, nonatomic) OPRQueryCommentListService *queryCommentListService; // @synthesize queryCommentListService=_queryCommentListService;
@property(copy, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
@property(nonatomic) _Bool isEnsemble; // @synthesize isEnsemble=_isEnsemble;
@property(copy, nonatomic) NSString *audioUserId; // @synthesize audioUserId=_audioUserId;
@property(copy, nonatomic) NSString *audioId; // @synthesize audioId=_audioId;
@property(retain, nonatomic) OPRPostCommentService *postCommentService; // @synthesize postCommentService=_postCommentService;
@property(retain, nonatomic) OPRDeleteCommentService *deleteCommentService; // @synthesize deleteCommentService=_deleteCommentService;
@property(retain, nonatomic) OPRAudioPostContentEmptyView *contentEmptyView; // @synthesize contentEmptyView=_contentEmptyView;
@property(nonatomic) _Bool needLayoutSubViews; // @synthesize needLayoutSubViews=_needLayoutSubViews;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) OPRAudioPostContentBottomView *postContentBottomView; // @synthesize postContentBottomView=_postContentBottomView;
@property(retain, nonatomic) OPRAudioPostContentCommentReplyHeaderView *postContentHeaderView; // @synthesize postContentHeaderView=_postContentHeaderView;
- (void).cxx_destruct;
- (void)unBlockUser:(id)arg1 completed:(_Bool)arg2 error:(id)arg3;
- (void)blockUser:(id)arg1 completed:(_Bool)arg2 error:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)showPersonalPage:(id)arg1 nickName:(id)arg2 avatarUrl:(id)arg3;
- (void)insertCommentListItem:(id)arg1 replyInfo:(id)arg2 message:(id)arg3;
- (void)showCommentInputViewWithToUserId:(id)arg1 toUserName:(id)arg2 replyId:(id)arg3;
- (void)showListContentEmptyViewIfNeed;
- (void)updateEmptyViewDisplay:(_Bool)arg1;
- (void)showEmptyViewIfNeed:(_Bool)arg1;
- (void)updateHeaderViewWithData:(id)arg1;
- (void)requestIfNeed;
- (void)loadData;
- (void)initData;
- (void)showUserBlockAlert:(id)arg1;
- (id)scene;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;
- (id)initWithAudioId:(id)arg1 audioUserId:(id)arg2 isEnsemble:(_Bool)arg3 withCommentId:(id)arg4 withEntry:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

