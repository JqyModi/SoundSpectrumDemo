//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OPCShareViewController.h"

@class UIScrollView;

@interface OPRShareCommonViewController : OPCShareViewController
{
    UIScrollView *_scrollView;
}

@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (_Bool)needDimissWhenShareStart;
- (void)onBackButtonClick;
- (void)shareBtn:(id)arg1 applyPluginIndex:(unsigned long long)arg2;
- (id)shareBtn:(id)arg1 btnWidth:(double)arg2 left:(double)arg3;
- (void)viewDidLoad;
- (void)updateShareExtendDataWithObject:(id)arg1 withKey:(id)arg2;
- (id)initWithData:(id)arg1;

@end

