//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class OPTouchBounceView, UILabel;

@interface OPRSettingFooterView : UIView
{
    CDUnknownBlockType _clickBlock;
    OPTouchBounceView *_bgView;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) OPTouchBounceView *bgView; // @synthesize bgView=_bgView;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
- (void).cxx_destruct;
- (void)onClickAction:(id)arg1;
- (double)contentHeight;
- (void)layoutSubviews;
- (void)setupSelfView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
