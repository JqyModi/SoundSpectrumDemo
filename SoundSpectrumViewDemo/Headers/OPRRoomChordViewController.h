//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OPRBaseViewController.h"

#import "UITextViewDelegate-Protocol.h"

@class NSArray, NSString, OPRRoomCountDownButton, OPRRoomGotoSingButton, OPRRoomLikeEffectLottieManager, OPRSingingInfo, OPRSingingRoomItem, OPRSingingSynthKeyboard, OPTouchBounceButton, UIButton, UIFont, UIImageView, UILabel, UITextView, UIView;
@protocol OPRRoomChordViewControllerDelegate;

@interface OPRRoomChordViewController : OPRBaseViewController <UITextViewDelegate>
{
    id <OPRRoomChordViewControllerDelegate> _delegate;
    OPRSingingRoomItem *_roomItem;
    OPRSingingInfo *_singingInfo;
    NSArray *_chordTagViews;
    NSArray *_validFilteredChordItems;
    NSArray *_defaultChords;
    NSArray *_customChords;
    long long _pitchLevel;
    long long _guitarPlayStyle;
    UIImageView *_bgView;
    UIView *_lyricContentView;
    UITextView *_lyricView;
    double _lyricLineHeight;
    UIFont *_lyricFont;
    UIView *_keyboardContentView;
    UIView *_keyboardStateView;
    OPTouchBounceButton *_pianoBtn;
    OPTouchBounceButton *_guitarBtn;
    OPTouchBounceButton *_settingBtn;
    OPRSingingSynthKeyboard *_keyboard;
    OPTouchBounceButton *_clapBtn;
    UIButton *_clapBtnBgView;
    UIButton *_settingContentView;
    OPTouchBounceButton *_defaultScoreBtn;
    OPTouchBounceButton *_customScoreBtn;
    OPTouchBounceButton *_editCustomScoreBtn;
    OPTouchBounceButton *_pitchUpBtn;
    OPTouchBounceButton *_pitchDownBtn;
    UILabel *_pitchLevelLabel;
    UILabel *_chordSettingItem1TitleLabel;
    OPTouchBounceButton *_currentInstrumentBtn;
    UIButton *_playStyleSelectionView;
    UIView *_singControlContentView;
    OPRRoomCountDownButton *_singBtn;
    double _timeout;
    double _presentTimeInterval;
    UILabel *_likeCountLabel;
    OPRRoomGotoSingButton *_gotoSingButton;
    OPRRoomLikeEffectLottieManager *_likeEffectManager;
    unsigned long long _currentLikeCount;
}

@property(nonatomic) unsigned long long currentLikeCount; // @synthesize currentLikeCount=_currentLikeCount;
@property(retain, nonatomic) OPRRoomLikeEffectLottieManager *likeEffectManager; // @synthesize likeEffectManager=_likeEffectManager;
@property(nonatomic) __weak OPRRoomGotoSingButton *gotoSingButton; // @synthesize gotoSingButton=_gotoSingButton;
@property(retain, nonatomic) UILabel *likeCountLabel; // @synthesize likeCountLabel=_likeCountLabel;
@property(nonatomic) double presentTimeInterval; // @synthesize presentTimeInterval=_presentTimeInterval;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) OPRRoomCountDownButton *singBtn; // @synthesize singBtn=_singBtn;
@property(retain, nonatomic) UIView *singControlContentView; // @synthesize singControlContentView=_singControlContentView;
@property(nonatomic) __weak UIButton *playStyleSelectionView; // @synthesize playStyleSelectionView=_playStyleSelectionView;
@property(nonatomic) __weak OPTouchBounceButton *currentInstrumentBtn; // @synthesize currentInstrumentBtn=_currentInstrumentBtn;
@property(nonatomic) __weak UILabel *chordSettingItem1TitleLabel; // @synthesize chordSettingItem1TitleLabel=_chordSettingItem1TitleLabel;
@property(nonatomic) __weak UILabel *pitchLevelLabel; // @synthesize pitchLevelLabel=_pitchLevelLabel;
@property(nonatomic) __weak OPTouchBounceButton *pitchDownBtn; // @synthesize pitchDownBtn=_pitchDownBtn;
@property(nonatomic) __weak OPTouchBounceButton *pitchUpBtn; // @synthesize pitchUpBtn=_pitchUpBtn;
@property(nonatomic) __weak OPTouchBounceButton *editCustomScoreBtn; // @synthesize editCustomScoreBtn=_editCustomScoreBtn;
@property(nonatomic) __weak OPTouchBounceButton *customScoreBtn; // @synthesize customScoreBtn=_customScoreBtn;
@property(nonatomic) __weak OPTouchBounceButton *defaultScoreBtn; // @synthesize defaultScoreBtn=_defaultScoreBtn;
@property(retain, nonatomic) UIButton *settingContentView; // @synthesize settingContentView=_settingContentView;
@property(retain, nonatomic) UIButton *clapBtnBgView; // @synthesize clapBtnBgView=_clapBtnBgView;
@property(retain, nonatomic) OPTouchBounceButton *clapBtn; // @synthesize clapBtn=_clapBtn;
@property(retain, nonatomic) OPRSingingSynthKeyboard *keyboard; // @synthesize keyboard=_keyboard;
@property(retain, nonatomic) OPTouchBounceButton *settingBtn; // @synthesize settingBtn=_settingBtn;
@property(retain, nonatomic) OPTouchBounceButton *guitarBtn; // @synthesize guitarBtn=_guitarBtn;
@property(retain, nonatomic) OPTouchBounceButton *pianoBtn; // @synthesize pianoBtn=_pianoBtn;
@property(retain, nonatomic) UIView *keyboardStateView; // @synthesize keyboardStateView=_keyboardStateView;
@property(retain, nonatomic) UIView *keyboardContentView; // @synthesize keyboardContentView=_keyboardContentView;
@property(retain, nonatomic) UIFont *lyricFont; // @synthesize lyricFont=_lyricFont;
@property(nonatomic) double lyricLineHeight; // @synthesize lyricLineHeight=_lyricLineHeight;
@property(retain, nonatomic) UITextView *lyricView; // @synthesize lyricView=_lyricView;
@property(retain, nonatomic) UIView *lyricContentView; // @synthesize lyricContentView=_lyricContentView;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) long long guitarPlayStyle; // @synthesize guitarPlayStyle=_guitarPlayStyle;
@property(nonatomic) long long pitchLevel; // @synthesize pitchLevel=_pitchLevel;
@property(retain, nonatomic) NSArray *customChords; // @synthesize customChords=_customChords;
@property(retain, nonatomic) NSArray *defaultChords; // @synthesize defaultChords=_defaultChords;
@property(retain, nonatomic) NSArray *validFilteredChordItems; // @synthesize validFilteredChordItems=_validFilteredChordItems;
@property(retain, nonatomic) NSArray *chordTagViews; // @synthesize chordTagViews=_chordTagViews;
@property(retain, nonatomic) OPRSingingInfo *singingInfo; // @synthesize singingInfo=_singingInfo;
@property(nonatomic) __weak OPRSingingRoomItem *roomItem; // @synthesize roomItem=_roomItem;
@property(nonatomic) __weak id <OPRRoomChordViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_refreshLikeCount:(unsigned long long)arg1 animation:(_Bool)arg2;
- (void)refreshLikeCount:(unsigned long long)arg1 animation:(_Bool)arg2;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)onKeyboardStateItemLongPress:(id)arg1;
- (void)onGuitarButtonClick:(id)arg1;
- (void)onKeyboardStateItemClick:(id)arg1;
- (void)setupLyricContentView;
- (_Bool)playAudioWithNote:(id)arg1 withSampleType:(unsigned long long)arg2 withSubSampleType:(unsigned long long)arg3;
- (void)stopAllEffect;
- (void)onSingBtnClick;
- (void)onClapBtnClick;
- (void)setupKeyboardContentView;
- (void)setupSingingControlContentView;
- (void)setupSelfView;
- (void)onRoleButtonDidClick:(id)arg1;
- (void)popViewControllerAnimated:(_Bool)arg1;
- (void)onBackButtonClick;
- (void)setupHeaderView;
- (_Bool)enableSubtitle;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithItem:(id)arg1 recordTotleTime:(double)arg2 presentTimeInterval:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
