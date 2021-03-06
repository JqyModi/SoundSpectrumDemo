//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class OPRUserFollowButton, OPUserProfile, UIImageView, UILabel, UIView;

@interface OPRUserMyVistorCell : UITableViewCell
{
    OPUserProfile *_cellItem;
    UIView *_bgView;
    UIImageView *_userIconView;
    UILabel *_userNameLabel;
    OPRUserFollowButton *_followBtn;
}

@property(retain, nonatomic) OPRUserFollowButton *followBtn; // @synthesize followBtn=_followBtn;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UIImageView *userIconView; // @synthesize userIconView=_userIconView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) OPUserProfile *cellItem; // @synthesize cellItem=_cellItem;
- (void).cxx_destruct;
- (void)updateFollowBtnFrame;
- (void)layoutSubviews;
- (void)setupSelfView;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

