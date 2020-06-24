//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class OPRAPCCommentReplyHeaderViewDataItem, OPRAudioContentCommentLabel, OPTouchBounceButton, UIButton, UIImageView, UILabel;

@interface OPRAudioPostContentCommentReplyHeaderView : UIView
{
    _Bool _showOriginalContent;
    CDUnknownBlockType _onClickUserIcon;
    CDUnknownBlockType _onClickUserName;
    CDUnknownBlockType _onClickAtUser;
    CDUnknownBlockType _onClickShowOriginalContent;
    CDUnknownBlockType _onClickLike;
    CDUnknownBlockType _onLongPressContent;
    CDUnknownBlockType _onClickContent;
    OPRAPCCommentReplyHeaderViewDataItem *_viewDataItem;
    UIView *_bgView;
    UIImageView *_userIconView;
    UILabel *_userNameLabel;
    UILabel *_authorLabel;
    UIButton *_showOriginalContentBtn;
    UIView *_contentBgView;
    OPRAudioContentCommentLabel *_messageLabel;
    UILabel *_postDateLabel;
    OPTouchBounceButton *_likeBtn;
    UIView *_separator;
    UIView *_stateBgView;
    UIButton *_commentBtn;
    UIView *_bottomSeparator;
}

@property(retain, nonatomic) UIView *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property(retain, nonatomic) UIButton *commentBtn; // @synthesize commentBtn=_commentBtn;
@property(retain, nonatomic) UIView *stateBgView; // @synthesize stateBgView=_stateBgView;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) OPTouchBounceButton *likeBtn; // @synthesize likeBtn=_likeBtn;
@property(retain, nonatomic) UILabel *postDateLabel; // @synthesize postDateLabel=_postDateLabel;
@property(retain, nonatomic) OPRAudioContentCommentLabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UIView *contentBgView; // @synthesize contentBgView=_contentBgView;
@property(retain, nonatomic) UIButton *showOriginalContentBtn; // @synthesize showOriginalContentBtn=_showOriginalContentBtn;
@property(nonatomic) _Bool showOriginalContent; // @synthesize showOriginalContent=_showOriginalContent;
@property(retain, nonatomic) UILabel *authorLabel; // @synthesize authorLabel=_authorLabel;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UIImageView *userIconView; // @synthesize userIconView=_userIconView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) OPRAPCCommentReplyHeaderViewDataItem *viewDataItem; // @synthesize viewDataItem=_viewDataItem;
@property(copy, nonatomic) CDUnknownBlockType onClickContent; // @synthesize onClickContent=_onClickContent;
@property(copy, nonatomic) CDUnknownBlockType onLongPressContent; // @synthesize onLongPressContent=_onLongPressContent;
@property(copy, nonatomic) CDUnknownBlockType onClickLike; // @synthesize onClickLike=_onClickLike;
@property(copy, nonatomic) CDUnknownBlockType onClickShowOriginalContent; // @synthesize onClickShowOriginalContent=_onClickShowOriginalContent;
@property(copy, nonatomic) CDUnknownBlockType onClickAtUser; // @synthesize onClickAtUser=_onClickAtUser;
@property(copy, nonatomic) CDUnknownBlockType onClickUserName; // @synthesize onClickUserName=_onClickUserName;
@property(copy, nonatomic) CDUnknownBlockType onClickUserIcon; // @synthesize onClickUserIcon=_onClickUserIcon;
- (void).cxx_destruct;
- (void)onLikeStateChanged:(id)arg1;
- (void)onLikeBtnClick:(id)arg1;
- (void)updateLikeBtnView;
- (double)viewHeightAfterLayoutWithWidth:(double)arg1;
- (void)updateCommentBtnView;
- (void)layoutSubviews;
- (void)setupSelfView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withShowOriginalContent:(_Bool)arg2;

@end
