//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface OPRUGCEmptyTipsView : UIView
{
    NSString *_text;
    UIView *_textBgView;
    UIImageView *_assessoryImageView;
    UILabel *_textLabel;
}

@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *assessoryImageView; // @synthesize assessoryImageView=_assessoryImageView;
@property(retain, nonatomic) UIView *textBgView; // @synthesize textBgView=_textBgView;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)setupSelfView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
