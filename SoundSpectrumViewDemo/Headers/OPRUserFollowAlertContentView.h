//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSString, OPRRoomUserFollowButton, OPUserProfile, UIButton, UICollectionView, UIImageView, UILabel;
@protocol OPRUserFollowAlertContentViewDelegate;

@interface OPRUserFollowAlertContentView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    UIImageView *_imageView;
    UIImageView *_sexIcon;
    UILabel *_titleLabel;
    OPUserProfile *_userProfile;
    UIView *_loadingMaskView;
    OPRRoomUserFollowButton *_followButton;
    UIButton *_kickOffButton;
    UIButton *_muteButton;
    UICollectionView *_medalsCollectionView;
    UICollectionView *_numbersCollectionView;
    id <OPRUserFollowAlertContentViewDelegate> _delegate;
}

@property(nonatomic) __weak id <OPRUserFollowAlertContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UICollectionView *numbersCollectionView; // @synthesize numbersCollectionView=_numbersCollectionView;
@property(retain, nonatomic) UICollectionView *medalsCollectionView; // @synthesize medalsCollectionView=_medalsCollectionView;
@property(retain, nonatomic) UIButton *muteButton; // @synthesize muteButton=_muteButton;
@property(retain, nonatomic) UIButton *kickOffButton; // @synthesize kickOffButton=_kickOffButton;
@property(retain, nonatomic) OPRRoomUserFollowButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UIView *loadingMaskView; // @synthesize loadingMaskView=_loadingMaskView;
@property(retain, nonatomic) OPUserProfile *userProfile; // @synthesize userProfile=_userProfile;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *sexIcon; // @synthesize sexIcon=_sexIcon;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)layoutSubviews;
- (void)refreshNumbers;
- (void)updateMuteState:(_Bool)arg1;
- (void)showCollectionView;
- (void)reportButtonDidClick;
- (void)closeButtonDidClick;
- (void)followbuttonDidClick;
- (void)muteButtonDidClick;
- (void)kictoffButtonDidClick;
- (id)initWithWidth:(double)arg1 canKickoff:(_Bool)arg2 canMute:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

