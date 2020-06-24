//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OPTipPreferences.h"

@class NSArray, UIColor, UIFont;

@interface OPTipDrawing : OPTipPreferences
{
    long long _arrowPostion;
    double _cornerRadius;
    double _arrowHeight;
    double _arrowWidth;
    UIColor *_foregroundColor;
    UIColor *_backgroundColor;
    NSArray *_backgroundGradientColors;
    NSArray *_backgroundGradientColorLocations;
    long long _textAlignment;
    UIColor *_borderColor;
    double _borderWidth;
    UIFont *_font;
}

@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) NSArray *backgroundGradientColorLocations; // @synthesize backgroundGradientColorLocations=_backgroundGradientColorLocations;
@property(retain, nonatomic) NSArray *backgroundGradientColors; // @synthesize backgroundGradientColors=_backgroundGradientColors;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(nonatomic) double arrowWidth; // @synthesize arrowWidth=_arrowWidth;
@property(nonatomic) double arrowHeight; // @synthesize arrowHeight=_arrowHeight;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) long long arrowPostion; // @synthesize arrowPostion=_arrowPostion;
- (void).cxx_destruct;
- (id)init;

@end

