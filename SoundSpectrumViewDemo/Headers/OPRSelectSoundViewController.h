//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OPRBaseViewController.h"

#import "UIViewControllerOPContainerProtocol-Protocol.h"

@class AVPlayer, NSArray, NSString, OPRSoundResInfo, OPTouchBounceButton, UIButton, UIScrollView, UIView;

@interface OPRSelectSoundViewController : OPRBaseViewController <UIViewControllerOPContainerProtocol>
{
    CDUnknownBlockType _finishedSaveCustomSound;
    NSArray *_resList;
    UIScrollView *_kindView;
    OPTouchBounceButton *_selectedKindBtn;
    UIView *_bgView;
    UIScrollView *_keyboardContentView;
    NSArray *_keyboards;
    NSArray *_labels;
    UIView *_selectedBtn;
    OPRSoundResInfo *_selectedInfo;
    UIButton *_nextBtn;
    AVPlayer *_player;
}

+ (double)headerViewHeight;
+ (_Bool)shouldHiddenStatusBar;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) UIButton *nextBtn; // @synthesize nextBtn=_nextBtn;
@property(nonatomic) __weak OPRSoundResInfo *selectedInfo; // @synthesize selectedInfo=_selectedInfo;
@property(nonatomic) __weak UIView *selectedBtn; // @synthesize selectedBtn=_selectedBtn;
@property(retain, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property(retain, nonatomic) NSArray *keyboards; // @synthesize keyboards=_keyboards;
@property(retain, nonatomic) UIScrollView *keyboardContentView; // @synthesize keyboardContentView=_keyboardContentView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) OPTouchBounceButton *selectedKindBtn; // @synthesize selectedKindBtn=_selectedKindBtn;
@property(retain, nonatomic) UIScrollView *kindView; // @synthesize kindView=_kindView;
@property(retain, nonatomic) NSArray *resList; // @synthesize resList=_resList;
@property(copy, nonatomic) CDUnknownBlockType finishedSaveCustomSound; // @synthesize finishedSaveCustomSound=_finishedSaveCustomSound;
- (void).cxx_destruct;
- (_Bool)controlStatusBarAppearance;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)kindBtnClicked:(id)arg1;
- (void)buildKindListViewWithList:(id)arg1;
- (void)updateKeyboardWithInfoList:(id)arg1;
- (void)selectNext;
- (void)updateSelectBtnState;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

