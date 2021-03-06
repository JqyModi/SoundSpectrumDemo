//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class OPRPlayerListFreeStyleTopicCellItem, UIButton, UILabel, UIView;
@protocol OPRPlayerListFreeStyleTopicCellDelegate;

@interface OPRPlayerListFreeStyleTopicCell : UICollectionViewCell
{
    id <OPRPlayerListFreeStyleTopicCellDelegate> _delegate;
    OPRPlayerListFreeStyleTopicCellItem *_cellItem;
    UIView *_bgView;
    UILabel *_titleView;
    UILabel *_aboutView;
    UIButton *_joinButton;
}

+ (double)viewHeightWithDesc:(id)arg1 textWidth:(double)arg2;
+ (double)viewHeight;
@property(retain, nonatomic) UIButton *joinButton; // @synthesize joinButton=_joinButton;
@property(retain, nonatomic) UILabel *aboutView; // @synthesize aboutView=_aboutView;
@property(retain, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) OPRPlayerListFreeStyleTopicCellItem *cellItem; // @synthesize cellItem=_cellItem;
@property(nonatomic) __weak id <OPRPlayerListFreeStyleTopicCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onBgViewClick:(id)arg1;
- (void)onJoinButtonClick:(id)arg1;
- (void)layoutSubviews;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

