//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface OPRSingingCardPlayChordResultView : UIView
{
    UIImageView *_imageView;
    UILabel *_scoreLabel;
    UILabel *_titleLabel;
    UILabel *_descLabel;
}

@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *descText;
- (void)setPlayChordDesc:(id)arg1;
- (void)setPlayChordLevel:(id)arg1;
- (void)setPlayChordScore:(unsigned long long)arg1 tailText:(id)arg2;
- (void)sizeToFit;
- (id)initWithFrame:(struct CGRect)arg1;

@end
