//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface OPRPlayEnsembleHeaderView : UIView
{
    UIImageView *_currentPlayerIconView;
    UIImageView *_currentPlayerSelectedInstrumentImageView;
    UIImageView *_leadingSingerIconView;
    UIImageView *_leadingSingerSelectedInstrumentImageView;
    UILabel *_scoreTitleLabel;
    UILabel *_currentPlayerPlayedScoreLabel;
    UILabel *_currentPlayerTitleLabel;
    UIView *_contentView;
    UIView *_currentPlayerInfoBgView;
    UIView *_leadingSingerInfoBgView;
    NSString *_currentPlayerIconUrl;
    NSString *_leadingSingerIconUrl;
}

@property(copy, nonatomic) NSString *leadingSingerIconUrl; // @synthesize leadingSingerIconUrl=_leadingSingerIconUrl;
@property(copy, nonatomic) NSString *currentPlayerIconUrl; // @synthesize currentPlayerIconUrl=_currentPlayerIconUrl;
@property(nonatomic) __weak UIView *leadingSingerInfoBgView; // @synthesize leadingSingerInfoBgView=_leadingSingerInfoBgView;
@property(nonatomic) __weak UIView *currentPlayerInfoBgView; // @synthesize currentPlayerInfoBgView=_currentPlayerInfoBgView;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak UILabel *currentPlayerTitleLabel; // @synthesize currentPlayerTitleLabel=_currentPlayerTitleLabel;
@property(nonatomic) __weak UILabel *currentPlayerPlayedScoreLabel; // @synthesize currentPlayerPlayedScoreLabel=_currentPlayerPlayedScoreLabel;
@property(nonatomic) __weak UILabel *scoreTitleLabel; // @synthesize scoreTitleLabel=_scoreTitleLabel;
@property(nonatomic) __weak UIImageView *leadingSingerSelectedInstrumentImageView; // @synthesize leadingSingerSelectedInstrumentImageView=_leadingSingerSelectedInstrumentImageView;
@property(nonatomic) __weak UIImageView *leadingSingerIconView; // @synthesize leadingSingerIconView=_leadingSingerIconView;
@property(nonatomic) __weak UIImageView *currentPlayerSelectedInstrumentImageView; // @synthesize currentPlayerSelectedInstrumentImageView=_currentPlayerSelectedInstrumentImageView;
@property(nonatomic) __weak UIImageView *currentPlayerIconView; // @synthesize currentPlayerIconView=_currentPlayerIconView;
- (void).cxx_destruct;
- (void)updateInstrumentImageView:(id)arg1 withImageUrlStr:(id)arg2 withAnimated:(_Bool)arg3;
- (void)updateIconView:(id)arg1 withImageUrlStr:(id)arg2;
- (void)sizeToFit;
- (void)setupSelfView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

