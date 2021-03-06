//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class LOTAnimationView, NSArray, NSString, OPRAudioDescLabel, OPRSingingCardAudioPlayView, OPRSingingCardResultControlItemView, UIButton, UIImageView, UILabel;

@interface OPRSingingCardResultControlView : UIView
{
    _Bool _isEnsemble;
    _Bool _isOnAudioEditMode;
    CDUnknownBlockType _onPlayAudioClick;
    CDUnknownBlockType _onRetryClick;
    CDUnknownBlockType _onPostClick;
    CDUnknownBlockType _onPlayerListEntryClick;
    CDUnknownBlockType _onTextInputClick;
    CDUnknownBlockType _onCancelAudioEditModeClick;
    NSArray *_avatarURLs;
    double _contentViewFrameMinY;
    NSString *_inputText;
    UIView *_contentView;
    UILabel *_titleView;
    UIView *_ugcBgView;
    UIButton *_ugcPlaceholderView;
    OPRAudioDescLabel *_ugcAudioDescView;
    OPRSingingCardAudioPlayView *_audioPlayView;
    LOTAnimationView *_audioDescInputGuideAnimation;
    UIView *_controlItemContentView;
    OPRSingingCardResultControlItemView *_rePlayItemView;
    OPRSingingCardResultControlItemView *_postItemView;
    unsigned long long _resultState;
    UIView *_segmentPlayedUsersContainer;
    UIImageView *_leftUserIcon;
    UIImageView *_centerUserIcon;
    UIImageView *_rightUserIcon;
    UIButton *_playerListEntryBtn;
    UILabel *_descLabel;
}

@property(nonatomic) _Bool isOnAudioEditMode; // @synthesize isOnAudioEditMode=_isOnAudioEditMode;
@property(nonatomic) __weak UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(nonatomic) __weak UIButton *playerListEntryBtn; // @synthesize playerListEntryBtn=_playerListEntryBtn;
@property(nonatomic) __weak UIImageView *rightUserIcon; // @synthesize rightUserIcon=_rightUserIcon;
@property(nonatomic) __weak UIImageView *centerUserIcon; // @synthesize centerUserIcon=_centerUserIcon;
@property(nonatomic) __weak UIImageView *leftUserIcon; // @synthesize leftUserIcon=_leftUserIcon;
@property(nonatomic) __weak UIView *segmentPlayedUsersContainer; // @synthesize segmentPlayedUsersContainer=_segmentPlayedUsersContainer;
@property(nonatomic) unsigned long long resultState; // @synthesize resultState=_resultState;
@property(nonatomic) __weak OPRSingingCardResultControlItemView *postItemView; // @synthesize postItemView=_postItemView;
@property(nonatomic) __weak OPRSingingCardResultControlItemView *rePlayItemView; // @synthesize rePlayItemView=_rePlayItemView;
@property(nonatomic) __weak UIView *controlItemContentView; // @synthesize controlItemContentView=_controlItemContentView;
@property(nonatomic) __weak LOTAnimationView *audioDescInputGuideAnimation; // @synthesize audioDescInputGuideAnimation=_audioDescInputGuideAnimation;
@property(nonatomic) __weak OPRSingingCardAudioPlayView *audioPlayView; // @synthesize audioPlayView=_audioPlayView;
@property(nonatomic) __weak OPRAudioDescLabel *ugcAudioDescView; // @synthesize ugcAudioDescView=_ugcAudioDescView;
@property(nonatomic) __weak UIButton *ugcPlaceholderView; // @synthesize ugcPlaceholderView=_ugcPlaceholderView;
@property(nonatomic) __weak UIView *ugcBgView; // @synthesize ugcBgView=_ugcBgView;
@property(nonatomic) __weak UILabel *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool isEnsemble; // @synthesize isEnsemble=_isEnsemble;
@property(copy, nonatomic) NSString *inputText; // @synthesize inputText=_inputText;
@property(nonatomic) double contentViewFrameMinY; // @synthesize contentViewFrameMinY=_contentViewFrameMinY;
@property(retain, nonatomic) NSArray *avatarURLs; // @synthesize avatarURLs=_avatarURLs;
@property(copy, nonatomic) CDUnknownBlockType onCancelAudioEditModeClick; // @synthesize onCancelAudioEditModeClick=_onCancelAudioEditModeClick;
@property(copy, nonatomic) CDUnknownBlockType onTextInputClick; // @synthesize onTextInputClick=_onTextInputClick;
@property(copy, nonatomic) CDUnknownBlockType onPlayerListEntryClick; // @synthesize onPlayerListEntryClick=_onPlayerListEntryClick;
@property(copy, nonatomic) CDUnknownBlockType onPostClick; // @synthesize onPostClick=_onPostClick;
@property(copy, nonatomic) CDUnknownBlockType onRetryClick; // @synthesize onRetryClick=_onRetryClick;
@property(copy, nonatomic) CDUnknownBlockType onPlayAudioClick; // @synthesize onPlayAudioClick=_onPlayAudioClick;
- (void).cxx_destruct;
- (double)visibleContentHeight;
- (void)audioEditModeOn:(_Bool)arg1;
- (_Bool)enableAudioEditMode:(unsigned long long)arg1;
- (void)hideAudioDescGuide;
- (void)showAudioDescGuideIfNeed;
- (void)showPostGuideIfNeed;
- (void)hideGuideIfNeed;
- (void)showGuideIfNeed;
- (void)audioPlayDidFinish;
- (void)updateAudioPlayState:(_Bool)arg1;
- (void)updateLayoutWithState:(unsigned long long)arg1 withAudioDuration:(long long)arg2;
- (void)layoutSubviews;
- (void)setupPlayerListEntry;
- (void)setupSelfView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

