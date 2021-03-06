//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString, UIButton, UIPageControl, UIScrollView;

@interface OPRPlaySoundKeyboard : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    _Bool _hideBottom;
    _Bool _useKeyUp;
    _Bool _selectMode;
    _Bool _showMelodyHint;
    _Bool _isFakeKeyboard;
    _Bool _startStat;
    _Bool _isAutoFullWithEmpty;
    CDUnknownBlockType _keyboardDidClick;
    CDUnknownBlockType _keyboardDidSelect;
    CDUnknownBlockType _keyboardDidLongPress;
    NSDictionary *_chordDict;
    NSArray *_resList;
    NSArray *_btnList;
    long long _currentPage;
    UIScrollView *_baseView;
    UIPageControl *_pageControl;
    NSDictionary *_melodyChordDict;
    NSString *_currentChord;
    NSString *_nextChord;
    double _totalOffset;
    double _currentOffset;
    long long _melodyLevel;
    UIButton *_melodyLevelView;
    UIView *_melodyContentView;
    UIButton *_doubleLeftBtn;
    UIButton *_leftBtn;
    UIButton *_doubleRightBtn;
    UIButton *_rightBtn;
    NSArray *_colorList;
    NSMutableDictionary *_cacheImageDict;
}

+ (void)cancelSelectState:(id)arg1;
+ (id)effectColorHexWithIndex:(long long)arg1;
@property(nonatomic) _Bool isAutoFullWithEmpty; // @synthesize isAutoFullWithEmpty=_isAutoFullWithEmpty;
@property(retain, nonatomic) NSMutableDictionary *cacheImageDict; // @synthesize cacheImageDict=_cacheImageDict;
@property(nonatomic) _Bool startStat; // @synthesize startStat=_startStat;
@property(retain, nonatomic) NSArray *colorList; // @synthesize colorList=_colorList;
@property(retain, nonatomic) UIButton *rightBtn; // @synthesize rightBtn=_rightBtn;
@property(retain, nonatomic) UIButton *doubleRightBtn; // @synthesize doubleRightBtn=_doubleRightBtn;
@property(retain, nonatomic) UIButton *leftBtn; // @synthesize leftBtn=_leftBtn;
@property(retain, nonatomic) UIButton *doubleLeftBtn; // @synthesize doubleLeftBtn=_doubleLeftBtn;
@property(retain, nonatomic) UIView *melodyContentView; // @synthesize melodyContentView=_melodyContentView;
@property(retain, nonatomic) UIButton *melodyLevelView; // @synthesize melodyLevelView=_melodyLevelView;
@property(nonatomic) long long melodyLevel; // @synthesize melodyLevel=_melodyLevel;
@property(nonatomic) double currentOffset; // @synthesize currentOffset=_currentOffset;
@property(nonatomic) double totalOffset; // @synthesize totalOffset=_totalOffset;
@property(retain, nonatomic) NSString *nextChord; // @synthesize nextChord=_nextChord;
@property(retain, nonatomic) NSString *currentChord; // @synthesize currentChord=_currentChord;
@property(retain, nonatomic) NSDictionary *melodyChordDict; // @synthesize melodyChordDict=_melodyChordDict;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIScrollView *baseView; // @synthesize baseView=_baseView;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) NSArray *btnList; // @synthesize btnList=_btnList;
@property(retain, nonatomic) NSArray *resList; // @synthesize resList=_resList;
@property(copy, nonatomic) NSDictionary *chordDict; // @synthesize chordDict=_chordDict;
@property(nonatomic) _Bool isFakeKeyboard; // @synthesize isFakeKeyboard=_isFakeKeyboard;
@property(nonatomic) _Bool showMelodyHint; // @synthesize showMelodyHint=_showMelodyHint;
@property(nonatomic) _Bool selectMode; // @synthesize selectMode=_selectMode;
@property(nonatomic) _Bool useKeyUp; // @synthesize useKeyUp=_useKeyUp;
@property(nonatomic) _Bool hideBottom; // @synthesize hideBottom=_hideBottom;
@property(copy, nonatomic) CDUnknownBlockType keyboardDidLongPress; // @synthesize keyboardDidLongPress=_keyboardDidLongPress;
@property(copy, nonatomic) CDUnknownBlockType keyboardDidSelect; // @synthesize keyboardDidSelect=_keyboardDidSelect;
@property(copy, nonatomic) CDUnknownBlockType keyboardDidClick; // @synthesize keyboardDidClick=_keyboardDidClick;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)updateMelodyLevel:(long long)arg1;
- (void)updateKeyBordTitleName;
- (void)showAnimation:(id)arg1;
- (void)showKeyClickAnimation:(id)arg1;
- (id)bgImageWithIndex:(id)arg1;
- (id)colorHexValueWithIndex:(id)arg1;
- (id)effectColorWithIndex:(unsigned long long)arg1;
- (void)keyboardClick:(id)arg1;
- (void)keyboardLongClick:(id)arg1;
- (id)mainChordForNode:(id)arg1;
- (void)updateKeyboarHintWithNode:(id)arg1 nextNode:(id)arg2 offset:(double)arg3 force:(_Bool)arg4;
- (void)updateKeyboarHintWithNode:(id)arg1 nextNode:(id)arg2 offset:(double)arg3;
- (double)showButtonContentHeight;
- (void)updateKeyboardShow;
- (void)updateKeyboardWithItemList:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateMelodyTitle;
- (void)initKeybordView;
- (id)initWithItemList:(id)arg1 isAutoFullWithEmpty:(_Bool)arg2;
- (id)initWithItemList:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

