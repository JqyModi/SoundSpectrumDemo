//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface OPRMakeMVView : UIButton
{
    _Bool _needAdjustWidth;
    CDUnknownBlockType _onEntryClick;
    UIButton *_actionButton;
    unsigned long long _style;
}

+ (void)openMakeMVPage:(id)arg1 statScene:(id)arg2;
+ (id)makeMVView:(unsigned long long)arg1;
@property(nonatomic) _Bool needAdjustWidth; // @synthesize needAdjustWidth=_needAdjustWidth;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(copy, nonatomic) CDUnknownBlockType onEntryClick; // @synthesize onEntryClick=_onEntryClick;
- (void).cxx_destruct;
- (id)buttonImagePlanA;
- (void)changedSkinIfNeed;
- (id)buttonImage;
- (void)onActionButtonClick:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

