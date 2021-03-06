//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class OPRRoomUserRankingHeaderViewData, UIImageView, UILabel;

@interface OPRRoomUserRankingHeaderView : UIView
{
    OPRRoomUserRankingHeaderViewData *_contentData;
    UIView *_bgView;
    UIImageView *_userIconView;
    UIImageView *_userTagView;
    UILabel *_userNameLabel;
    UILabel *_sortLabel;
    UIImageView *_likeView;
    UILabel *_likeCountLabel;
    UIView *_separator;
}

@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UILabel *likeCountLabel; // @synthesize likeCountLabel=_likeCountLabel;
@property(retain, nonatomic) UIImageView *likeView; // @synthesize likeView=_likeView;
@property(retain, nonatomic) UILabel *sortLabel; // @synthesize sortLabel=_sortLabel;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UIImageView *userTagView; // @synthesize userTagView=_userTagView;
@property(retain, nonatomic) UIImageView *userIconView; // @synthesize userIconView=_userIconView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) OPRRoomUserRankingHeaderViewData *contentData; // @synthesize contentData=_contentData;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupSelfView;
- (id)init;

@end

