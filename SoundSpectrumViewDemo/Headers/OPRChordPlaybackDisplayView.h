//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OPRPlaybackDisplayView.h"

#import "UITextViewDelegate-Protocol.h"

@class NSArray, NSNumber, NSString, OPRChordInstrumentPlayStyleItem, OPRChordPlaybackInstrumentView, OPRSingingSynthKeyboard, OPRSongSegmentData, OPTouchBounceButton, UIButton, UIFont, UITextView, UIView;

@interface OPRChordPlaybackDisplayView : OPRPlaybackDisplayView <UITextViewDelegate>
{
    _Bool _isUserChords;
    OPRSongSegmentData *_segmentData;
    NSArray *_chordTagViews;
    NSArray *_validFilteredChordItems;
    NSNumber *_pitchLevel;
    NSArray *_chordItems;
    NSArray *_chordInstrumentList;
    NSArray *_beatInstrumentList;
    OPRChordInstrumentPlayStyleItem *_currentSelectedPlayStyleItem;
    UIView *_lyricContentView;
    UITextView *_lyricView;
    double _lyricLineHeight;
    UIFont *_lyricFont;
    UIView *_keyboardContentView;
    UIView *_keyboardStateView;
    OPRChordPlaybackInstrumentView *_instrumentView;
    OPRSingingSynthKeyboard *_keyboard;
    OPTouchBounceButton *_clapBtn;
    UIButton *_clapBtnBgView;
    UIButton *_keyboardMaskBtn;
    UIButton *_recordInfoContentView;
}

@property(nonatomic) _Bool isUserChords; // @synthesize isUserChords=_isUserChords;
@property(nonatomic) __weak UIButton *recordInfoContentView; // @synthesize recordInfoContentView=_recordInfoContentView;
@property(nonatomic) __weak UIButton *keyboardMaskBtn; // @synthesize keyboardMaskBtn=_keyboardMaskBtn;
@property(nonatomic) __weak UIButton *clapBtnBgView; // @synthesize clapBtnBgView=_clapBtnBgView;
@property(nonatomic) __weak OPTouchBounceButton *clapBtn; // @synthesize clapBtn=_clapBtn;
@property(nonatomic) __weak OPRSingingSynthKeyboard *keyboard; // @synthesize keyboard=_keyboard;
@property(nonatomic) __weak OPRChordPlaybackInstrumentView *instrumentView; // @synthesize instrumentView=_instrumentView;
@property(nonatomic) __weak UIView *keyboardStateView; // @synthesize keyboardStateView=_keyboardStateView;
@property(nonatomic) __weak UIView *keyboardContentView; // @synthesize keyboardContentView=_keyboardContentView;
@property(retain, nonatomic) UIFont *lyricFont; // @synthesize lyricFont=_lyricFont;
@property(nonatomic) double lyricLineHeight; // @synthesize lyricLineHeight=_lyricLineHeight;
@property(nonatomic) __weak UITextView *lyricView; // @synthesize lyricView=_lyricView;
@property(nonatomic) __weak UIView *lyricContentView; // @synthesize lyricContentView=_lyricContentView;
@property(retain, nonatomic) OPRChordInstrumentPlayStyleItem *currentSelectedPlayStyleItem; // @synthesize currentSelectedPlayStyleItem=_currentSelectedPlayStyleItem;
@property(retain, nonatomic) NSArray *beatInstrumentList; // @synthesize beatInstrumentList=_beatInstrumentList;
@property(retain, nonatomic) NSArray *chordInstrumentList; // @synthesize chordInstrumentList=_chordInstrumentList;
@property(retain, nonatomic) NSArray *chordItems; // @synthesize chordItems=_chordItems;
@property(retain, nonatomic) NSNumber *pitchLevel; // @synthesize pitchLevel=_pitchLevel;
@property(retain, nonatomic) NSArray *validFilteredChordItems; // @synthesize validFilteredChordItems=_validFilteredChordItems;
@property(retain, nonatomic) NSArray *chordTagViews; // @synthesize chordTagViews=_chordTagViews;
@property(copy, nonatomic) OPRSongSegmentData *segmentData; // @synthesize segmentData=_segmentData;
- (void).cxx_destruct;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)showKeyPlayAnimation:(_Bool)arg1 withKeyItemId:(id)arg2 withTempoLevel:(id)arg3;
- (void)showRecordDetail:(_Bool)arg1;
- (void)clickNote:(id)arg1 withTempoLevel:(id)arg2;
- (void)updateInstrumentViewWithInstrumentItemId:(id)arg1 withPlayStyleId:(id)arg2;
- (void)resetPlayer;
- (void)onClapBtnClick;
- (void)setupLyricContentView;
- (void)setupKeyboardContentView;
- (void)setupSelfView;
- (void)setupView;
- (void)setPausePlaying;
- (void)setPlayingTime:(double)arg1 duration:(double)arg2;
- (void)setStartPlaying;
- (void)reset;
- (void)initInstruments;
- (void)initChords;
- (id)initWithFrame:(struct CGRect)arg1 withInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
