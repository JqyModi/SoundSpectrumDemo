//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, OPTipPreferences;
@protocol OPTipViewDelegate;

@interface OPTipView : UIView
{
    long long _ID;
    NSString *_text;
    id <OPTipViewDelegate> _delegate;
    CDUnknownBlockType _clickBlock;
    OPTipPreferences *_preferences;
    UIView *_presentingView;
    UIView *_dismissOverlay;
    UIView *_parentView;
    struct CGPoint _arrowTip;
}

@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(nonatomic) struct CGPoint arrowTip; // @synthesize arrowTip=_arrowTip;
@property(retain, nonatomic) UIView *dismissOverlay; // @synthesize dismissOverlay=_dismissOverlay;
@property(nonatomic) __weak UIView *presentingView; // @synthesize presentingView=_presentingView;
@property(retain, nonatomic) OPTipPreferences *preferences; // @synthesize preferences=_preferences;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(nonatomic) __weak id <OPTipViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly) long long ID; // @synthesize ID=_ID;
- (void).cxx_destruct;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)showAnimated:(_Bool)arg1 forItem:(id)arg2 withinSuperView:(id)arg3;
- (void)showAnimated:(_Bool)arg1 forView:(id)arg2 withinSuperView:(id)arg3;
- (void)handleTapOnOverLay:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)handleRotation:(id)arg1;
- (void)drawTextWithFrame:(struct CGRect)arg1 andContext:(struct CGContext *)arg2;
- (void)drawBorderWithPath:(struct CGPath *)arg1 andContext:(struct CGContext *)arg2;
- (void)paintBubble:(struct CGContext *)arg1;
- (void)drawRightBubbleShapeWithFrame:(struct CGRect)arg1 cornerRadius:(double)arg2 path:(struct CGPath *)arg3;
- (void)drawLeftBubbleShapeWithFrame:(struct CGRect)arg1 cornerRadius:(double)arg2 path:(struct CGPath *)arg3;
- (void)drawBottomBubbleShapeWithFrame:(struct CGRect)arg1 cornerRadius:(double)arg2 path:(struct CGPath *)arg3;
- (void)drawTopBubbleShapeWithFrame:(struct CGRect)arg1 cornerRadius:(double)arg2 path:(struct CGPath *)arg3;
- (void)drawBubbleWithFrame:(struct CGRect)arg1 arrowPosition:(long long)arg2 andContext:(struct CGContext *)arg3;
- (_Bool)isFrame:(struct CGRect)arg1 forReferenceViewFrame:(struct CGRect)arg2;
- (struct CGSize)getContentSize;
- (struct CGSize)getTextSize;
- (struct CGRect)computeFrameWithPosition:(long long)arg1 referenceFrame:(struct CGRect)arg2 superViewFrame:(struct CGRect)arg3;
- (void)arrangeWithinSuperView:(id)arg1 shouldUpdateWidth:(_Bool)arg2;
- (void)dealloc;
- (id)initWithPreferences:(id)arg1 andText:(id)arg2;
- (id)initWithText:(id)arg1;
- (id)initWithPreferences:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end

