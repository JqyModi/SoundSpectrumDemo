//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, OPCUserAvatarView, OPRAudioDescLabel, OPRPlayerPlayButton, OPRSingingCardPlayerFollowBtn, OPRTopicContentCellItem, UIGestureRecognizer, UIImageView, UILabel, UIView;

@interface OPRTopicRankCell : UICollectionViewCell <UIGestureRecognizerDelegate>
{
    CDUnknownBlockType _onClickAudioPlay;
    CDUnknownBlockType _onClickUserIcon;
    CDUnknownBlockType _onClickUserName;
    CDUnknownBlockType _onClickDetailView;
    CDUnknownBlockType _onClickTopicTag;
    CDUnknownBlockType _onClickAtTag;
    OPRTopicContentCellItem *_cellItem;
    UILabel *_rankLabel;
    UIView *_containerView;
    OPCUserAvatarView *_userIconView;
    UILabel *_userNameLabel;
    OPRSingingCardPlayerFollowBtn *_followBtn;
    UIImageView *_iconTriangle;
    UIView *_contentBgView;
    OPRPlayerPlayButton *_playButton;
    OPRAudioDescLabel *_audioDescLabel;
    UILabel *_durationInfoLabel;
    UILabel *_audioTitleLabel;
    UIView *_separator;
    UIGestureRecognizer *_contentTapGesture;
}

@property(nonatomic) __weak UIGestureRecognizer *contentTapGesture; // @synthesize contentTapGesture=_contentTapGesture;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UILabel *audioTitleLabel; // @synthesize audioTitleLabel=_audioTitleLabel;
@property(retain, nonatomic) UILabel *durationInfoLabel; // @synthesize durationInfoLabel=_durationInfoLabel;
@property(retain, nonatomic) OPRAudioDescLabel *audioDescLabel; // @synthesize audioDescLabel=_audioDescLabel;
@property(retain, nonatomic) OPRPlayerPlayButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UIView *contentBgView; // @synthesize contentBgView=_contentBgView;
@property(retain, nonatomic) UIImageView *iconTriangle; // @synthesize iconTriangle=_iconTriangle;
@property(retain, nonatomic) OPRSingingCardPlayerFollowBtn *followBtn; // @synthesize followBtn=_followBtn;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) OPCUserAvatarView *userIconView; // @synthesize userIconView=_userIconView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UILabel *rankLabel; // @synthesize rankLabel=_rankLabel;
@property(retain, nonatomic) OPRTopicContentCellItem *cellItem; // @synthesize cellItem=_cellItem;
@property(copy, nonatomic) CDUnknownBlockType onClickAtTag; // @synthesize onClickAtTag=_onClickAtTag;
@property(copy, nonatomic) CDUnknownBlockType onClickTopicTag; // @synthesize onClickTopicTag=_onClickTopicTag;
@property(copy, nonatomic) CDUnknownBlockType onClickDetailView; // @synthesize onClickDetailView=_onClickDetailView;
@property(copy, nonatomic) CDUnknownBlockType onClickUserName; // @synthesize onClickUserName=_onClickUserName;
@property(copy, nonatomic) CDUnknownBlockType onClickUserIcon; // @synthesize onClickUserIcon=_onClickUserIcon;
@property(copy, nonatomic) CDUnknownBlockType onClickAudioPlay; // @synthesize onClickAudioPlay=_onClickAudioPlay;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)updateProgress:(double)arg1;
- (void)pauseAudioPlay:(_Bool)arg1;
- (void)startAudioPlay;
- (void)resetAudioPlay;
- (void)onPlayerStopPlay;
- (void)onPlayerPlayPause:(_Bool)arg1;
- (void)onPlayerPlayComplete:(_Bool)arg1 error:(id)arg2;
- (void)onPlayerPlaying:(double)arg1 totalDuration:(double)arg2;
- (void)onPlayerStartPlay:(_Bool)arg1 duration:(double)arg2;
- (_Bool)playerIsStoping;
- (_Bool)playerIsPlaying;
- (void)playerStopPlaying;
- (void)playerPauseOrPlay;
- (void)playerDealloc;
- (void)playerInit;
- (double)cellHeightAfterSetCellItem;
- (void)setFollowButtonEntry:(id)arg1;
- (void)updateRankLabel;
- (void)prepareForReuse;
- (double)heightAfterSetItem;
- (void)heightAfterLayoutWithWidth:(double)arg1;
- (void)layoutSubviews;
- (void)setupSelfView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

