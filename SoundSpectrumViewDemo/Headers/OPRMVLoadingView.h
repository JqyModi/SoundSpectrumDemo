//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class OPLoadingIndicator, UILabel;

@interface OPRMVLoadingView : UIView
{
    OPLoadingIndicator *_loadingView;
    UILabel *_tips;
    UILabel *_progressLabel;
}

+ (id)loadingView;
@property(retain, nonatomic) UILabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(retain, nonatomic) UILabel *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) OPLoadingIndicator *loadingView; // @synthesize loadingView=_loadingView;
- (void).cxx_destruct;
- (void)hide;
- (void)show;
- (void)updateProgress:(double)arg1;
- (void)endLoading;
- (void)startLoading;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

