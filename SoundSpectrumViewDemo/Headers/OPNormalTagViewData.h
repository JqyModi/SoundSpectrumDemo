//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface OPNormalTagViewData : NSObject
{
    _Bool _isPlaybackItem;
    _Bool _isEnsemblePlayback;
    _Bool _isProductParamsItem;
    _Bool _isGray;
    UIColor *_tintColor;
    NSString *_iconUrl;
    NSString *_title;
    NSString *_clickUrl;
}

@property(nonatomic) _Bool isGray; // @synthesize isGray=_isGray;
@property(nonatomic) _Bool isProductParamsItem; // @synthesize isProductParamsItem=_isProductParamsItem;
@property(nonatomic) _Bool isEnsemblePlayback; // @synthesize isEnsemblePlayback=_isEnsemblePlayback;
@property(nonatomic) _Bool isPlaybackItem; // @synthesize isPlaybackItem=_isPlaybackItem;
@property(copy, nonatomic) NSString *clickUrl; // @synthesize clickUrl=_clickUrl;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(copy, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
- (void).cxx_destruct;

@end
