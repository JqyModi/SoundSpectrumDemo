//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface OPRSingCardCurrentColorsView : UIView
{
    UIView *_foreView_1;
    UIView *_foreView_2;
    UIView *_foreView_3;
    UIColor *_foreColor;
}

+ (id)createColorViewWithColor:(id)arg1;
@property(retain, nonatomic) UIColor *foreColor; // @synthesize foreColor=_foreColor;
@property(retain, nonatomic) UIView *foreView_3; // @synthesize foreView_3=_foreView_3;
@property(retain, nonatomic) UIView *foreView_2; // @synthesize foreView_2=_foreView_2;
@property(retain, nonatomic) UIView *foreView_1; // @synthesize foreView_1=_foreView_1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)addInnerPathForView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

