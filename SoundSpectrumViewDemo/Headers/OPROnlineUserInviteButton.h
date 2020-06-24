//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class CADisplayLink, CALayer;

@interface OPROnlineUserInviteButton : UIButton
{
    double _duration;
    double _beginTIme;
    CALayer *_countLayer;
    CADisplayLink *_displayLink;
}

@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) CALayer *countLayer; // @synthesize countLayer=_countLayer;
@property(nonatomic) double beginTIme; // @synthesize beginTIme=_beginTIme;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (void)displayCallback;
- (void)stopCount;
- (void)startCount:(double)arg1 duration:(double)arg2;
- (void)setIsFollow:(_Bool)arg1;
- (void)updateCount;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

