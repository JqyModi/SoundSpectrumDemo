//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, UIButton;

@interface OPRAudioPostContentBottomView : UIView
{
    _Bool _hideSingBtn;
    CDUnknownBlockType _onClickCommentBtn;
    CDUnknownBlockType _onClickSingBtn;
    UIView *_bgView;
    UIButton *_singBtn;
    UIButton *_commentBtn;
    CALayer *_shadowLayer;
    CALayer *_bgViewMaskLayer;
}

@property(retain, nonatomic) CALayer *bgViewMaskLayer; // @synthesize bgViewMaskLayer=_bgViewMaskLayer;
@property(retain, nonatomic) CALayer *shadowLayer; // @synthesize shadowLayer=_shadowLayer;
@property(retain, nonatomic) UIButton *commentBtn; // @synthesize commentBtn=_commentBtn;
@property(retain, nonatomic) UIButton *singBtn; // @synthesize singBtn=_singBtn;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) _Bool hideSingBtn; // @synthesize hideSingBtn=_hideSingBtn;
@property(copy, nonatomic) CDUnknownBlockType onClickSingBtn; // @synthesize onClickSingBtn=_onClickSingBtn;
@property(copy, nonatomic) CDUnknownBlockType onClickCommentBtn; // @synthesize onClickCommentBtn=_onClickCommentBtn;
- (void).cxx_destruct;
- (void)onSingBtnClick:(id)arg1;
- (void)onCommentBtnClick:(id)arg1;
- (void)updatePlaceHolder:(id)arg1;
- (void)layoutSubviews;
- (void)setupSelfView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

