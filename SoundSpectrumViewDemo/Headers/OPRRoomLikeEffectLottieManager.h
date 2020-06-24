//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface OPRRoomLikeEffectLottieManager : NSObject
{
    NSArray *_lottieAnimationViewArray;
    unsigned long long _animatingCount;
    NSMutableArray *_watingAnimations;
}

@property(retain, nonatomic) NSMutableArray *watingAnimations; // @synthesize watingAnimations=_watingAnimations;
@property(nonatomic) unsigned long long animatingCount; // @synthesize animatingCount=_animatingCount;
@property(retain, nonatomic) NSArray *lottieAnimationViewArray; // @synthesize lottieAnimationViewArray=_lottieAnimationViewArray;
- (void).cxx_destruct;
- (void)removeAllAnimation;
- (void)showLikeAnmiationGroup:(id)arg1;
- (_Bool)showLikeAnmiationWithItem:(id)arg1;
- (id)getAvaliableLikeLottieView;
- (void)loadLottieResource;
- (id)init;

@end
