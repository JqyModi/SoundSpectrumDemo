//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIFont;

@interface OPAlertStyleButton : NSObject
{
    double _height;
    UIFont *_font;
    UIColor *_textColor;
    UIColor *_backgroundColor;
    UIColor *_highlightTextColor;
    UIColor *_highlightBackgroundColor;
    UIColor *_disableTextColor;
    UIColor *_disableBackgroundColor;
}

@property(retain, nonatomic) UIColor *disableBackgroundColor; // @synthesize disableBackgroundColor=_disableBackgroundColor;
@property(retain, nonatomic) UIColor *disableTextColor; // @synthesize disableTextColor=_disableTextColor;
@property(retain, nonatomic) UIColor *highlightBackgroundColor; // @synthesize highlightBackgroundColor=_highlightBackgroundColor;
@property(retain, nonatomic) UIColor *highlightTextColor; // @synthesize highlightTextColor=_highlightTextColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) double height; // @synthesize height=_height;
- (void).cxx_destruct;

@end
