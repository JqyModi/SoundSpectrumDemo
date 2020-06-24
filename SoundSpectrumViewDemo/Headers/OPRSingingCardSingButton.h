//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class CAGradientLayer, CALayer, NSString, UIColor;

@interface OPRSingingCardSingButton : UIButton
{
    unsigned long long _singState;
    double _timeout;
    NSString *_defaultTitle;
    UIColor *_outCircleColor;
    CALayer *_progressLayer;
    CAGradientLayer *_customBGLayer;
    CALayer *_progressAnimationLayer;
}

@property(nonatomic) __weak CALayer *progressAnimationLayer; // @synthesize progressAnimationLayer=_progressAnimationLayer;
@property(retain, nonatomic) CAGradientLayer *customBGLayer; // @synthesize customBGLayer=_customBGLayer;
@property(retain, nonatomic) CALayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(retain, nonatomic) UIColor *outCircleColor; // @synthesize outCircleColor=_outCircleColor;
@property(copy, nonatomic) NSString *defaultTitle; // @synthesize defaultTitle=_defaultTitle;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) unsigned long long singState; // @synthesize singState=_singState;
- (void).cxx_destruct;
- (void)resumeLayer:(id)arg1;
- (void)pauseLayer:(id)arg1;
- (void)pause:(_Bool)arg1;
- (void)updateSingState;
- (void)startAnimation;
- (void)setProgress:(double)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

