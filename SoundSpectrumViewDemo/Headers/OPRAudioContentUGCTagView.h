//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface OPRAudioContentUGCTagView : UIView
{
    _Bool _onlyMeVisible;
    _Bool _isRecord;
    _Bool _recorded;
    NSArray *_ugcTagItems;
    unsigned long long _singOriginal;
    UIView *_contentView;
}

@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool recorded; // @synthesize recorded=_recorded;
@property(nonatomic) _Bool isRecord; // @synthesize isRecord=_isRecord;
@property(nonatomic) unsigned long long singOriginal; // @synthesize singOriginal=_singOriginal;
@property(nonatomic) _Bool onlyMeVisible; // @synthesize onlyMeVisible=_onlyMeVisible;
@property(retain, nonatomic) NSArray *ugcTagItems; // @synthesize ugcTagItems=_ugcTagItems;
- (void).cxx_destruct;
- (void)updateLayout;
- (id)initWithFrame:(struct CGRect)arg1;

@end

