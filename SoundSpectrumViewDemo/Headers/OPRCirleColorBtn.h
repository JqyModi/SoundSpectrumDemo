//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class OPRCirleColorBtnBgView, UIColor, UIImageView, UILabel;

@interface OPRCirleColorBtn : UIView
{
    _Bool _isCirle;
    OPRCirleColorBtnBgView *_bgView;
    UIImageView *_containerView;
    UIColor *_startColor;
    UIColor *_endColor;
    UILabel *_titleLabel;
    UIView *_nextHintView;
    UIView *_nextAnimHintView;
}

@property(retain, nonatomic) UIView *nextAnimHintView; // @synthesize nextAnimHintView=_nextAnimHintView;
@property(retain, nonatomic) UIView *nextHintView; // @synthesize nextHintView=_nextHintView;
@property(nonatomic) _Bool isCirle; // @synthesize isCirle=_isCirle;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIColor *endColor; // @synthesize endColor=_endColor;
@property(retain, nonatomic) UIColor *startColor; // @synthesize startColor=_startColor;
@property(retain, nonatomic) UIImageView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) OPRCirleColorBtnBgView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

