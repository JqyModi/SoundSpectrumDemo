//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OPRBaseViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString, NSTimer, OPTouchBounceButton, UILabel, UITextField;

@interface OPRUserBindPhoneNumberViewController : OPRBaseViewController <UITextFieldDelegate>
{
    _Bool _isCountDown;
    _Bool _isGetCodeBySms;
    CDUnknownBlockType _completedHandler;
    CDUnknownBlockType _cancelHandler;
    NSString *_entry;
    NSString *_countryCode;
    UITextField *_phoneInput;
    UITextField *_codeInput;
    OPTouchBounceButton *_getCodeBtn;
    OPTouchBounceButton *_getCodeByVoiceBtn;
    UILabel *_codeReceiveTips;
    NSTimer *_timer;
    long long _restTime;
}

@property(nonatomic) long long restTime; // @synthesize restTime=_restTime;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool isGetCodeBySms; // @synthesize isGetCodeBySms=_isGetCodeBySms;
@property(nonatomic) _Bool isCountDown; // @synthesize isCountDown=_isCountDown;
@property(retain, nonatomic) UILabel *codeReceiveTips; // @synthesize codeReceiveTips=_codeReceiveTips;
@property(retain, nonatomic) OPTouchBounceButton *getCodeByVoiceBtn; // @synthesize getCodeByVoiceBtn=_getCodeByVoiceBtn;
@property(retain, nonatomic) OPTouchBounceButton *getCodeBtn; // @synthesize getCodeBtn=_getCodeBtn;
@property(retain, nonatomic) UITextField *codeInput; // @synthesize codeInput=_codeInput;
@property(retain, nonatomic) UITextField *phoneInput; // @synthesize phoneInput=_phoneInput;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *entry; // @synthesize entry=_entry;
@property(copy, nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(copy, nonatomic) CDUnknownBlockType completedHandler; // @synthesize completedHandler=_completedHandler;
- (void).cxx_destruct;
- (void)statControl:(id)arg1;
- (void)statPage:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)updateCountDownStatus;
- (void)onTimerToCountDown;
- (void)stopToCountDown;
- (void)startToCountDown:(long long)arg1 byVoice:(_Bool)arg2;
- (void)onGetCodeByVoiceBtnClick;
- (void)onGetCodeBtnClick;
- (void)onNextBtnClick;
- (void)onBackgroundClick;
- (void)onBackButtonClick;
- (void)setupPrivacyAndTermsView:(id)arg1;
- (void)setupCheckCodeView:(id)arg1;
- (void)setupPhoneNumberView:(id)arg1;
- (void)setupContentView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithEntry:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

