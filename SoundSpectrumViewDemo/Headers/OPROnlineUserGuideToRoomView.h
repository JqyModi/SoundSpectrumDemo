//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface OPROnlineUserGuideToRoomView : UIView
{
    CDUnknownBlockType _startToRoomHandler;
    UIImageView *_background;
    UILabel *_tips;
    UIButton *_start;
}

@property(retain, nonatomic) UIButton *start; // @synthesize start=_start;
@property(retain, nonatomic) UILabel *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) UIImageView *background; // @synthesize background=_background;
@property(copy, nonatomic) CDUnknownBlockType startToRoomHandler; // @synthesize startToRoomHandler=_startToRoomHandler;
- (void).cxx_destruct;
- (void)onStartClick;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

