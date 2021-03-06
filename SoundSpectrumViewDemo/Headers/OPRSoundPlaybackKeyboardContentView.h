//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSDictionary, NSString, OPRPlaySoundKeyboard, OPRSoundResInfo, OPTouchBounceButton, UIScrollView;

@interface OPRSoundPlaybackKeyboardContentView : UIView
{
    NSDictionary *_chordDict;
    NSArray *_kindDataSource;
    NSArray *_effectDataSource;
    NSArray *_melodyDataSource;
    NSArray *_kindButtons;
    UIView *_tagMark;
    OPTouchBounceButton *_seletedButton;
    UIScrollView *_kindView;
    UIScrollView *_keyboardContainer;
    OPRPlaySoundKeyboard *_keyboard;
    unsigned long long _currentIndex;
    CDUnknownBlockType _onCurrentIndexChanged;
    NSString *_clickKeyboardTips;
}

@property(retain, nonatomic) NSString *clickKeyboardTips; // @synthesize clickKeyboardTips=_clickKeyboardTips;
@property(copy, nonatomic) CDUnknownBlockType onCurrentIndexChanged; // @synthesize onCurrentIndexChanged=_onCurrentIndexChanged;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) OPRPlaySoundKeyboard *keyboard; // @synthesize keyboard=_keyboard;
@property(retain, nonatomic) UIScrollView *keyboardContainer; // @synthesize keyboardContainer=_keyboardContainer;
@property(retain, nonatomic) UIScrollView *kindView; // @synthesize kindView=_kindView;
@property(nonatomic) __weak OPTouchBounceButton *seletedButton; // @synthesize seletedButton=_seletedButton;
@property(retain, nonatomic) UIView *tagMark; // @synthesize tagMark=_tagMark;
@property(retain, nonatomic) NSArray *kindButtons; // @synthesize kindButtons=_kindButtons;
@property(retain, nonatomic) NSArray *melodyDataSource; // @synthesize melodyDataSource=_melodyDataSource;
@property(retain, nonatomic) NSArray *effectDataSource; // @synthesize effectDataSource=_effectDataSource;
@property(retain, nonatomic) NSArray *kindDataSource; // @synthesize kindDataSource=_kindDataSource;
@property(copy, nonatomic) NSDictionary *chordDict; // @synthesize chordDict=_chordDict;
- (void).cxx_destruct;
- (void)setupKeyBoardMaskView;
- (void)buildKindListViewWithList:(id)arg1;
- (void)showClickAnimation:(id)arg1 kind:(id)arg2;
- (void)updateMelodyLevel:(long long)arg1 name:(id)arg2;
- (void)updateKindViewAndKeyBoard;
@property(readonly, nonatomic) OPRSoundResInfo *currentKind;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

