//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class OPRSingingCardEmptyItem, UIButton, UIImageView, UILabel;
@protocol OPRSingingCardContentEmptyCellDelegate;

@interface OPRSingingCardContentEmptyCell : UICollectionViewCell
{
    OPRSingingCardEmptyItem *_item;
    id <OPRSingingCardContentEmptyCellDelegate> _delegate;
    UIImageView *_emptyImageView;
    UILabel *_emptyTipsLabel;
    UIButton *_changeSonglistBtn;
}

@property(nonatomic) __weak UIButton *changeSonglistBtn; // @synthesize changeSonglistBtn=_changeSonglistBtn;
@property(retain, nonatomic) UILabel *emptyTipsLabel; // @synthesize emptyTipsLabel=_emptyTipsLabel;
@property(retain, nonatomic) UIImageView *emptyImageView; // @synthesize emptyImageView=_emptyImageView;
@property(nonatomic) __weak id <OPRSingingCardContentEmptyCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) OPRSingingCardEmptyItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)onChangeSonglistBtnClick;
- (id)initWithFrame:(struct CGRect)arg1;

@end
