//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface OPRSingingCardPlayerListEmptyView : UIView
{
    UIImageView *_emptyImageView;
    UILabel *_emptyTipsLabel;
}

@property(retain, nonatomic) UILabel *emptyTipsLabel; // @synthesize emptyTipsLabel=_emptyTipsLabel;
@property(retain, nonatomic) UIImageView *emptyImageView; // @synthesize emptyImageView=_emptyImageView;
- (void).cxx_destruct;
- (void)updateContentByDefault;
- (void)updateEmptyTipsText:(id)arg1 emptyImage:(id)arg2 networkErrText:(id)arg3 networkErrImage:(id)arg4;
- (void)updateContent;
- (id)initWithFrame:(struct CGRect)arg1;

@end

