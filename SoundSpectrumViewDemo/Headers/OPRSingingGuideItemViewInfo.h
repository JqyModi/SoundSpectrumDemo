//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString;

@interface OPRSingingGuideItemViewInfo : NSObject
{
    _Bool _isEnsemble;
    NSString *_lottieName;
    NSString *_subLottieName;
    NSString *_title;
    NSString *_desc;
    NSString *_guideType;
    unsigned long long _guideNum;
    NSString *_imageName;
    NSAttributedString *_attributedTitle;
    NSAttributedString *_attributedDesc;
}

@property(copy, nonatomic) NSAttributedString *attributedDesc; // @synthesize attributedDesc=_attributedDesc;
@property(copy, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(nonatomic) _Bool isEnsemble; // @synthesize isEnsemble=_isEnsemble;
@property(nonatomic) unsigned long long guideNum; // @synthesize guideNum=_guideNum;
@property(copy, nonatomic) NSString *guideType; // @synthesize guideType=_guideType;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *subLottieName; // @synthesize subLottieName=_subLottieName;
@property(copy, nonatomic) NSString *lottieName; // @synthesize lottieName=_lottieName;
- (void).cxx_destruct;

@end

