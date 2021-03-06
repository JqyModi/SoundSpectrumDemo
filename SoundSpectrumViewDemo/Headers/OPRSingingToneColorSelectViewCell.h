//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class OPRSingingToneColorSelectViewCellItem, OPRotateCircleView, OPTouchBounceView, UIImageView, UILabel, UIView;

@interface OPRSingingToneColorSelectViewCell : UICollectionViewCell
{
    OPTouchBounceView *_bgView;
    UIImageView *_toneColorImageView;
    UIView *_selectedTagView;
    UIView *_stateImageBgView;
    UIImageView *_stateImageView;
    UILabel *_toneColorTitleLabel;
    OPRotateCircleView *_loadingIndicator;
    UIView *_redPointView;
    OPRSingingToneColorSelectViewCellItem *_cellItem;
}

@property(nonatomic) __weak OPRSingingToneColorSelectViewCellItem *cellItem; // @synthesize cellItem=_cellItem;
@property(nonatomic) __weak UIView *redPointView; // @synthesize redPointView=_redPointView;
@property(nonatomic) __weak OPRotateCircleView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(nonatomic) __weak UILabel *toneColorTitleLabel; // @synthesize toneColorTitleLabel=_toneColorTitleLabel;
@property(nonatomic) __weak UIImageView *stateImageView; // @synthesize stateImageView=_stateImageView;
@property(nonatomic) __weak UIView *stateImageBgView; // @synthesize stateImageBgView=_stateImageBgView;
@property(nonatomic) __weak UIView *selectedTagView; // @synthesize selectedTagView=_selectedTagView;
@property(nonatomic) __weak UIImageView *toneColorImageView; // @synthesize toneColorImageView=_toneColorImageView;
@property(nonatomic) __weak OPTouchBounceView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (void)hideGuideTipIfNeed;
- (void)showGuideTipIfNeed;
- (void)layoutSubviews;
- (void)setupSelfView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

