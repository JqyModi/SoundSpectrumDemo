//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class OPRHomeEntryBannerView, OPTitleMarqueeButton, OPTouchBounceButton;

@interface OPRHomeEntryBar : UIView
{
    CDUnknownBlockType _clickSearchBtn;
    CDUnknownBlockType _clickEntryBtn;
    unsigned long long _mode;
    OPTitleMarqueeButton *_searchEntryBtn;
    CDUnknownBlockType _updateSearchBtnLayout;
    unsigned long long _soloType;
    UIView *_soloView;
    OPTouchBounceButton *_roomEntryBtn;
    OPRHomeEntryBannerView *_bannerView;
    OPTouchBounceButton *_roomView;
}

@property(retain, nonatomic) OPTouchBounceButton *roomView; // @synthesize roomView=_roomView;
@property(retain, nonatomic) OPRHomeEntryBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) OPTouchBounceButton *roomEntryBtn; // @synthesize roomEntryBtn=_roomEntryBtn;
@property(retain, nonatomic) UIView *soloView; // @synthesize soloView=_soloView;
@property(nonatomic) unsigned long long soloType; // @synthesize soloType=_soloType;
@property(copy, nonatomic) CDUnknownBlockType updateSearchBtnLayout; // @synthesize updateSearchBtnLayout=_updateSearchBtnLayout;
@property(retain, nonatomic) OPTitleMarqueeButton *searchEntryBtn; // @synthesize searchEntryBtn=_searchEntryBtn;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(copy, nonatomic) CDUnknownBlockType clickEntryBtn; // @synthesize clickEntryBtn=_clickEntryBtn;
@property(copy, nonatomic) CDUnknownBlockType clickSearchBtn; // @synthesize clickSearchBtn=_clickSearchBtn;
- (void).cxx_destruct;
- (void)onActivityEntryUpdated;
- (void)onReceiveBannersChangedNotification:(id)arg1;
- (void)checkBannerIsActivity;
- (void)updateSearchEntryResource;
- (void)updateLayout;
- (void)onSearchButtonClick:(id)arg1;
- (void)onModeButtonClick:(id)arg1;
- (void)hasShownRedPoint;
- (_Bool)needShowRedPoint;
- (void)searchEntryBtnLayoutDidUpdate;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

