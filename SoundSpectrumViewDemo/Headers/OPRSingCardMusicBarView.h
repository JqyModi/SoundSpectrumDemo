//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, LOTAnimationView;

@interface OPRSingCardMusicBarView : UIView
{
    LOTAnimationView *_animationView;
    CAGradientLayer *_animationViewOpacityLayer;
}

@property(retain, nonatomic) CAGradientLayer *animationViewOpacityLayer; // @synthesize animationViewOpacityLayer=_animationViewOpacityLayer;
@property(retain, nonatomic) LOTAnimationView *animationView; // @synthesize animationView=_animationView;
- (void).cxx_destruct;
- (void)startNoteAnimation;
- (void)playNote:(id)arg1;
- (void)stopAnimation;
- (void)pauseAnimation;
- (void)startAnimation;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
