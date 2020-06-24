//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface OPTouchBounceView : UIView
{
    unsigned int soundFileObject;
    _Bool _bounceEnable;
    double _bounceScale;
    CDUnknownBlockType _shouldBounceBlock;
    CDUnknownBlockType _bounceClickBlock;
    UIView *_contentView;
    UIView *_bounceView;
}

@property(retain, nonatomic) UIView *bounceView; // @synthesize bounceView=_bounceView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType bounceClickBlock; // @synthesize bounceClickBlock=_bounceClickBlock;
@property(copy, nonatomic) CDUnknownBlockType shouldBounceBlock; // @synthesize shouldBounceBlock=_shouldBounceBlock;
@property(nonatomic) _Bool bounceEnable; // @synthesize bounceEnable=_bounceEnable;
@property(nonatomic) double bounceScale; // @synthesize bounceScale=_bounceScale;
- (void).cxx_destruct;
- (void)playSoundEffect:(id)arg1 type:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (void)addSubview:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

