//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface OPRRoomCountdownView : UIView
{
    UIImageView *_countImageView;
    long long _sec;
    CDUnknownBlockType _finishHandler;
}

@property(copy, nonatomic) CDUnknownBlockType finishHandler; // @synthesize finishHandler=_finishHandler;
@property(nonatomic) long long sec; // @synthesize sec=_sec;
@property(retain, nonatomic) UIImageView *countImageView; // @synthesize countImageView=_countImageView;
- (void).cxx_destruct;
- (void)makeAnimation;
- (void)countdownLoop;
- (void)startCountdown:(CDUnknownBlockType)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

