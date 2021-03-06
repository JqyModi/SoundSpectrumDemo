//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface OPRInstrumentIconView : UIView
{
    UIView *_containerView;
    UIImageView *_imageView;
    UIImageView *_leftView;
    UIImageView *_rightView;
    double _leftMargrn;
}

@property(nonatomic) double leftMargrn; // @synthesize leftMargrn=_leftMargrn;
@property(nonatomic) __weak UIImageView *rightView; // @synthesize rightView=_rightView;
@property(nonatomic) __weak UIImageView *leftView; // @synthesize leftView=_leftView;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)updateFrame;
- (void)layoutSubviews;
- (id)createImageView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

