//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OPCShareViewController.h"

@class UIScrollView, UIView;

@interface OPRMVShareViewController : OPCShareViewController
{
    UIView *_shareTitleView;
    UIScrollView *_scrollView;
}

@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *shareTitleView; // @synthesize shareTitleView=_shareTitleView;
- (void).cxx_destruct;
- (_Bool)needLoadImage:(id)arg1;
- (_Bool)needDimissWhenShareStart;
- (void)updateShareExtendDataWithObject:(id)arg1 withKey:(id)arg2;
- (void)shareBtn:(id)arg1 applyPluginIndex:(unsigned long long)arg2;
- (id)shareBtn:(id)arg1 btnWidth:(double)arg2 left:(double)arg3;
- (void)makeContentViewEffect;
- (void)dismiss;
- (id)createLineView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)pluginKeysWithType:(unsigned long long)arg1;
- (id)initWithVideoItem:(id)arg1;

@end

