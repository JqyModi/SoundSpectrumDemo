//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol OPRAudioListTagViewDelegate;

@interface OPRAudioListTagView : UIView
{
    double _margin;
    id <OPRAudioListTagViewDelegate> _delegate;
    UIView *_playbackView;
    UIView *_paramView;
    UIView *_syncRateView;
}

@property(retain, nonatomic) UIView *syncRateView; // @synthesize syncRateView=_syncRateView;
@property(retain, nonatomic) UIView *paramView; // @synthesize paramView=_paramView;
@property(retain, nonatomic) UIView *playbackView; // @synthesize playbackView=_playbackView;
@property(nonatomic) __weak id <OPRAudioListTagViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double margin; // @synthesize margin=_margin;
- (void).cxx_destruct;
- (void)updateTagViewWithAudioItem:(id)arg1;
- (void)resizeWithMaxWidth:(double)arg1;
- (id)init;

@end

