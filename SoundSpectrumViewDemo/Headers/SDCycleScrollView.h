//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSString, NSTimer, UICollectionView, UICollectionViewFlowLayout, UIColor, UIControl, UIFont, UIImage, UIImageView;
@protocol SDCycleScrollViewDelegate;

@interface SDCycleScrollView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    _Bool _infiniteLoop;
    _Bool _autoScroll;
    _Bool _showPageControl;
    _Bool _hidesForSinglePage;
    _Bool _onlyDisplayText;
    int _pageControlStyle;
    int _pageControlAliment;
    NSArray *_imageURLStringsGroup;
    NSArray *_titlesGroup;
    NSArray *_localizationImageNamesGroup;
    double _autoScrollTimeInterval;
    long long _scrollDirection;
    id <SDCycleScrollViewDelegate> _delegate;
    CDUnknownBlockType _clickItemOperationBlock;
    CDUnknownBlockType _itemDidScrollOperationBlock;
    long long _bannerImageViewContentMode;
    UIImage *_placeholderImage;
    double _pageControlBottomOffset;
    double _pageControlRightOffset;
    UIColor *_currentPageDotColor;
    UIColor *_pageDotColor;
    UIImage *_currentPageDotImage;
    UIImage *_pageDotImage;
    UIColor *_titleLabelTextColor;
    UIFont *_titleLabelTextFont;
    UIColor *_titleLabelBackgroundColor;
    double _titleLabelHeight;
    long long _titleLabelTextAlignment;
    UICollectionView *_mainView;
    UICollectionViewFlowLayout *_flowLayout;
    NSArray *_imagePathsGroup;
    NSTimer *_timer;
    long long _totalItemsCount;
    UIControl *_pageControl;
    UIImageView *_backgroundImageView;
    struct CGSize _pageControlDotSize;
}

+ (void)clearImagesCache;
+ (id)cycleScrollViewWithFrame:(struct CGRect)arg1 delegate:(id)arg2 placeholderImage:(id)arg3;
+ (id)cycleScrollViewWithFrame:(struct CGRect)arg1 imageURLStringsGroup:(id)arg2;
+ (id)cycleScrollViewWithFrame:(struct CGRect)arg1 shouldInfiniteLoop:(_Bool)arg2 imageNamesGroup:(id)arg3;
+ (id)cycleScrollViewWithFrame:(struct CGRect)arg1 imageNamesGroup:(id)arg2;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) __weak UIControl *pageControl; // @synthesize pageControl=_pageControl;
@property(nonatomic) long long totalItemsCount; // @synthesize totalItemsCount=_totalItemsCount;
@property(nonatomic) __weak NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSArray *imagePathsGroup; // @synthesize imagePathsGroup=_imagePathsGroup;
@property(nonatomic) __weak UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(nonatomic) __weak UICollectionView *mainView; // @synthesize mainView=_mainView;
@property(nonatomic) long long titleLabelTextAlignment; // @synthesize titleLabelTextAlignment=_titleLabelTextAlignment;
@property(nonatomic) double titleLabelHeight; // @synthesize titleLabelHeight=_titleLabelHeight;
@property(retain, nonatomic) UIColor *titleLabelBackgroundColor; // @synthesize titleLabelBackgroundColor=_titleLabelBackgroundColor;
@property(retain, nonatomic) UIFont *titleLabelTextFont; // @synthesize titleLabelTextFont=_titleLabelTextFont;
@property(retain, nonatomic) UIColor *titleLabelTextColor; // @synthesize titleLabelTextColor=_titleLabelTextColor;
@property(retain, nonatomic) UIImage *pageDotImage; // @synthesize pageDotImage=_pageDotImage;
@property(retain, nonatomic) UIImage *currentPageDotImage; // @synthesize currentPageDotImage=_currentPageDotImage;
@property(retain, nonatomic) UIColor *pageDotColor; // @synthesize pageDotColor=_pageDotColor;
@property(retain, nonatomic) UIColor *currentPageDotColor; // @synthesize currentPageDotColor=_currentPageDotColor;
@property(nonatomic) struct CGSize pageControlDotSize; // @synthesize pageControlDotSize=_pageControlDotSize;
@property(nonatomic) double pageControlRightOffset; // @synthesize pageControlRightOffset=_pageControlRightOffset;
@property(nonatomic) double pageControlBottomOffset; // @synthesize pageControlBottomOffset=_pageControlBottomOffset;
@property(nonatomic) int pageControlAliment; // @synthesize pageControlAliment=_pageControlAliment;
@property(nonatomic) int pageControlStyle; // @synthesize pageControlStyle=_pageControlStyle;
@property(nonatomic) _Bool onlyDisplayText; // @synthesize onlyDisplayText=_onlyDisplayText;
@property(nonatomic) _Bool hidesForSinglePage; // @synthesize hidesForSinglePage=_hidesForSinglePage;
@property(nonatomic) _Bool showPageControl; // @synthesize showPageControl=_showPageControl;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(nonatomic) long long bannerImageViewContentMode; // @synthesize bannerImageViewContentMode=_bannerImageViewContentMode;
@property(copy, nonatomic) CDUnknownBlockType itemDidScrollOperationBlock; // @synthesize itemDidScrollOperationBlock=_itemDidScrollOperationBlock;
@property(copy, nonatomic) CDUnknownBlockType clickItemOperationBlock; // @synthesize clickItemOperationBlock=_clickItemOperationBlock;
@property(nonatomic) __weak id <SDCycleScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(nonatomic) _Bool autoScroll; // @synthesize autoScroll=_autoScroll;
@property(nonatomic) _Bool infiniteLoop; // @synthesize infiniteLoop=_infiniteLoop;
@property(nonatomic) double autoScrollTimeInterval; // @synthesize autoScrollTimeInterval=_autoScrollTimeInterval;
@property(retain, nonatomic) NSArray *localizationImageNamesGroup; // @synthesize localizationImageNamesGroup=_localizationImageNamesGroup;
@property(retain, nonatomic) NSArray *titlesGroup; // @synthesize titlesGroup=_titlesGroup;
@property(retain, nonatomic) NSArray *imageURLStringsGroup; // @synthesize imageURLStringsGroup=_imageURLStringsGroup;
- (void).cxx_destruct;
- (void)makeScrollViewScrollToIndex:(long long)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)adjustWhenControllerViewWillAppera;
- (void)dealloc;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutSubviews;
- (void)clearCache;
- (int)pageControlIndexWithCurrentCellIndex:(long long)arg1;
- (int)currentIndex;
- (void)scrollToIndex:(int)arg1;
- (void)automaticScroll;
- (void)setupPageControl;
- (void)invalidateTimer;
- (void)setupTimer;
- (void)disableScrollGesture;
- (void)setCustomPageControlDotImage:(id)arg1 isCurrentPageDot:(_Bool)arg2;
- (void)setupMainView;
- (void)initialization;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

