//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIFont;

@interface OPVCVConfig : NSObject
{
    _Bool _secureTextEntry;
    _Bool _autoShowKeyboard;
    _Bool _showFlickerAnimation;
    _Bool _showUnderLine;
    long long _inputBoxNumber;
    double _inputBoxWidth;
    double _inputBoxHeight;
    double _inputBoxBorderWidth;
    double _inputBoxCornerRadius;
    double _inputBoxSpacing;
    double _leftMargin;
    UIColor *_inputBoxColor;
    UIColor *_inputBoxHighlightedColor;
    UIColor *_tintColor;
    UIFont *_font;
    UIColor *_textColor;
    unsigned long long _inputType;
    UIColor *_underLineColor;
    UIColor *_underLineHighlightedColor;
    struct CGSize _underLineSize;
}

@property(retain, nonatomic) UIColor *underLineHighlightedColor; // @synthesize underLineHighlightedColor=_underLineHighlightedColor;
@property(retain, nonatomic) UIColor *underLineColor; // @synthesize underLineColor=_underLineColor;
@property(nonatomic) struct CGSize underLineSize; // @synthesize underLineSize=_underLineSize;
@property(nonatomic) _Bool showUnderLine; // @synthesize showUnderLine=_showUnderLine;
@property(nonatomic) _Bool showFlickerAnimation; // @synthesize showFlickerAnimation=_showFlickerAnimation;
@property(nonatomic) _Bool autoShowKeyboard; // @synthesize autoShowKeyboard=_autoShowKeyboard;
@property(nonatomic) unsigned long long inputType; // @synthesize inputType=_inputType;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) _Bool secureTextEntry; // @synthesize secureTextEntry=_secureTextEntry;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) UIColor *inputBoxHighlightedColor; // @synthesize inputBoxHighlightedColor=_inputBoxHighlightedColor;
@property(retain, nonatomic) UIColor *inputBoxColor; // @synthesize inputBoxColor=_inputBoxColor;
@property(nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
@property(nonatomic) double inputBoxSpacing; // @synthesize inputBoxSpacing=_inputBoxSpacing;
@property(nonatomic) double inputBoxCornerRadius; // @synthesize inputBoxCornerRadius=_inputBoxCornerRadius;
@property(nonatomic) double inputBoxBorderWidth; // @synthesize inputBoxBorderWidth=_inputBoxBorderWidth;
@property(nonatomic) double inputBoxHeight; // @synthesize inputBoxHeight=_inputBoxHeight;
@property(nonatomic) double inputBoxWidth; // @synthesize inputBoxWidth=_inputBoxWidth;
@property(nonatomic) long long inputBoxNumber; // @synthesize inputBoxNumber=_inputBoxNumber;
- (void).cxx_destruct;
- (id)init;

@end
