//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface OPRotateCircleView : UIView
{
    UIView *_bgView;
    CAShapeLayer *_rotateLayer;
    CAShapeLayer *_bgLayer;
}

@property(nonatomic) __weak CAShapeLayer *bgLayer; // @synthesize bgLayer=_bgLayer;
@property(nonatomic) __weak CAShapeLayer *rotateLayer; // @synthesize rotateLayer=_rotateLayer;
@property(nonatomic) __weak UIView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)startAnimation;
- (void)setLineWidth:(double)arg1;
- (void)setBgLineColor:(id)arg1;
- (void)setRotateLineColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

