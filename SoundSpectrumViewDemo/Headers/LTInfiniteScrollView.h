//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableDictionary, NSString, UIScrollView;
@protocol LTInfiniteScrollViewDataSource, LTInfiniteScrollViewDelegate;

@interface LTInfiniteScrollView : UIView <UIScrollViewDelegate>
{
    _Bool _verticalScroll;
    _Bool _scrollEnabled;
    _Bool _pagingEnabled;
    _Bool _bounces;
    int _scrollDirection;
    long long _currentIndex;
    id <LTInfiniteScrollViewDataSource> _dataSource;
    id <LTInfiniteScrollViewDelegate> _delegate;
    long long _maxScrollDistance;
    UIScrollView *_scrollView;
    double _viewSize;
    long long _visibleViewCount;
    long long _totalViewCount;
    double _previousPosition;
    double _totalSize;
    NSMutableDictionary *_views;
    struct UIEdgeInsets _contentInset;
}

@property(retain, nonatomic) NSMutableDictionary *views; // @synthesize views=_views;
@property(nonatomic) int scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(nonatomic) double totalSize; // @synthesize totalSize=_totalSize;
@property(nonatomic) double previousPosition; // @synthesize previousPosition=_previousPosition;
@property(nonatomic) long long totalViewCount; // @synthesize totalViewCount=_totalViewCount;
@property(nonatomic) long long visibleViewCount; // @synthesize visibleViewCount=_visibleViewCount;
@property(nonatomic) double viewSize; // @synthesize viewSize=_viewSize;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) long long maxScrollDistance; // @synthesize maxScrollDistance=_maxScrollDistance;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) _Bool bounces; // @synthesize bounces=_bounces;
@property(nonatomic) _Bool pagingEnabled; // @synthesize pagingEnabled=_pagingEnabled;
@property(nonatomic) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic) _Bool verticalScroll; // @synthesize verticalScroll=_verticalScroll;
@property(nonatomic) __weak id <LTInfiniteScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <LTInfiniteScrollViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
- (void).cxx_destruct;
- (struct CGPoint)centerForViewAtIndex:(long long)arg1;
- (struct CGPoint)contentOffsetForIndex:(long long)arg1;
- (double)currentCenter;
- (_Bool)needsCenterPage;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didScrollToIndex:(long long)arg1;
- (void)updateProgress;
- (void)reArrangeViews;
- (void)updateSize;
- (id)allViews;
- (id)viewAtIndex:(long long)arg1;
- (void)scrollToIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)reloadDataWithInitialIndex:(long long)arg1;
- (void)layoutSubviews;
- (void)setup;
- (double)scrollPosition;
- (double)scrollViewContentSize;
- (double)scrollViewSize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
