//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UICollectionView;

@interface OPRSingingSynthKeyboard : UIView <UICollectionViewDelegate, UICollectionViewDataSource, CAAnimationDelegate>
{
    _Bool _disableShowEnvAnimationOnKeyClick;
    NSArray *_keyboardItems;
    CDUnknownBlockType _onClickItem;
    CDUnknownBlockType _onSwipeItem;
    UIView *_bgView;
    UICollectionView *_collectionView;
    double _keyWidth;
    double _keySpace;
    double _keyAreaLeftRightMagin;
    NSMutableArray *_envAnimationViewsArr;
    NSString *_currentClickItemId;
    unsigned long long _currentKeyClickTimes;
}

+ (id)keyClickEnvImageNameWithIndex:(unsigned long long)arg1;
+ (id)colorHexValueWithIndex:(unsigned long long)arg1;
@property(nonatomic) unsigned long long currentKeyClickTimes; // @synthesize currentKeyClickTimes=_currentKeyClickTimes;
@property(copy, nonatomic) NSString *currentClickItemId; // @synthesize currentClickItemId=_currentClickItemId;
@property(retain, nonatomic) NSMutableArray *envAnimationViewsArr; // @synthesize envAnimationViewsArr=_envAnimationViewsArr;
@property(nonatomic) double keyAreaLeftRightMagin; // @synthesize keyAreaLeftRightMagin=_keyAreaLeftRightMagin;
@property(nonatomic) double keySpace; // @synthesize keySpace=_keySpace;
@property(nonatomic) double keyWidth; // @synthesize keyWidth=_keyWidth;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) _Bool disableShowEnvAnimationOnKeyClick; // @synthesize disableShowEnvAnimationOnKeyClick=_disableShowEnvAnimationOnKeyClick;
@property(copy, nonatomic) CDUnknownBlockType onSwipeItem; // @synthesize onSwipeItem=_onSwipeItem;
@property(copy, nonatomic) CDUnknownBlockType onClickItem; // @synthesize onClickItem=_onClickItem;
@property(retain, nonatomic) NSArray *keyboardItems; // @synthesize keyboardItems=_keyboardItems;
- (void).cxx_destruct;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)playProgressAnimationWithKeyItemId:(id)arg1 withDuration:(double)arg2 resetOtherKeysAnimation:(_Bool)arg3;
- (_Bool)needPlayProgressAnimation;
- (void)highLightKeyViewWithKeyItemId:(id)arg1 withTagSize:(struct CGSize)arg2 animated:(_Bool)arg3;
- (void)clickItemWithKeyItemId:(id)arg1 showCombo:(_Bool)arg2 withClickArea:(id)arg3;
- (id)allKeyViewItems;
- (struct CGRect)keyAreaRectWithKeyView:(id)arg1 withArea:(unsigned long long)arg2;
- (id)keyViewWithKeyItemId:(id)arg1;
- (id)keyViewWithIndex:(unsigned long long)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)showEnvAnimationWithIndex:(unsigned long long)arg1;
- (void)updateCollectionView;
- (void)updateCollectionViewContentInset;
- (void)layoutSubviews;
- (void)setupSelfView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

