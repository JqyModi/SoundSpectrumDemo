//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class OPCUserAvatarView, OPRLikeListItem, UILabel, UIView;

@interface OPRAudioPostContentLikeCVCell : UICollectionViewCell
{
    OPRLikeListItem *_likeListItem;
    CDUnknownBlockType _onClickUserIcon;
    UIView *_bgView;
    OPCUserAvatarView *_userIconView;
    UILabel *_userNameLabel;
    UILabel *_postDateLabel;
    UIView *_bottomSeparator;
}

@property(retain, nonatomic) UIView *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property(retain, nonatomic) UILabel *postDateLabel; // @synthesize postDateLabel=_postDateLabel;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) OPCUserAvatarView *userIconView; // @synthesize userIconView=_userIconView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(copy, nonatomic) CDUnknownBlockType onClickUserIcon; // @synthesize onClickUserIcon=_onClickUserIcon;
@property(retain, nonatomic) OPRLikeListItem *likeListItem; // @synthesize likeListItem=_likeListItem;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupSelfView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

