//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YYLabel.h"

@class NSString, UIColor, UIFont;

@interface OPRAudioDescLabel : YYLabel
{
    _Bool _canTap;
    CDUnknownBlockType _opTapAction;
    CDUnknownBlockType _opTopicTapAction;
    CDUnknownBlockType _opAtTapAction;
    CDUnknownBlockType _opRouteTapAction;
    double _minLineHeight;
    UIFont *_opFont;
    UIColor *_opTextColor;
}

@property(retain, nonatomic) UIColor *opTextColor; // @synthesize opTextColor=_opTextColor;
@property(retain, nonatomic) UIFont *opFont; // @synthesize opFont=_opFont;
@property(nonatomic) double minLineHeight; // @synthesize minLineHeight=_minLineHeight;
@property(copy, nonatomic) CDUnknownBlockType opRouteTapAction; // @synthesize opRouteTapAction=_opRouteTapAction;
@property(copy, nonatomic) CDUnknownBlockType opAtTapAction; // @synthesize opAtTapAction=_opAtTapAction;
@property(copy, nonatomic) CDUnknownBlockType opTopicTapAction; // @synthesize opTopicTapAction=_opTopicTapAction;
@property(copy, nonatomic) CDUnknownBlockType opTapAction; // @synthesize opTapAction=_opTapAction;
@property(nonatomic) _Bool canTap; // @synthesize canTap=_canTap;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *opText;
@property(copy, nonatomic) NSString *opAttributedText;
- (void)setTextColor:(id)arg1;
- (void)setFont:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
