//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class OPRAccountProperty, OPTouchBounceView, UIImageView, UILabel;

@interface OPRAccountPropertyCell : UITableViewCell
{
    OPRAccountProperty *_property;
    OPTouchBounceView *_bgView;
    UILabel *_titleView;
    UIImageView *_rightArrowView;
    UILabel *_rightTipsView;
    UIImageView *_lockView;
}

@property(retain, nonatomic) UIImageView *lockView; // @synthesize lockView=_lockView;
@property(retain, nonatomic) UILabel *rightTipsView; // @synthesize rightTipsView=_rightTipsView;
@property(retain, nonatomic) UIImageView *rightArrowView; // @synthesize rightArrowView=_rightArrowView;
@property(retain, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) OPTouchBounceView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) OPRAccountProperty *property; // @synthesize property=_property;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

