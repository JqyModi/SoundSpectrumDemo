//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OPRSingingSynthKeyboardItem : NSObject
{
    _Bool _highLighted;
    _Bool _showClickAreaSeparator;
    _Bool _hideKeyItemId;
    NSString *_title;
    NSString *_keyItemId;
    long long _itemIndex;
    unsigned long long _keyStyle;
    struct CGSize _tagSize;
}

@property(nonatomic) unsigned long long keyStyle; // @synthesize keyStyle=_keyStyle;
@property(nonatomic) _Bool hideKeyItemId; // @synthesize hideKeyItemId=_hideKeyItemId;
@property(nonatomic) _Bool showClickAreaSeparator; // @synthesize showClickAreaSeparator=_showClickAreaSeparator;
@property(nonatomic) struct CGSize tagSize; // @synthesize tagSize=_tagSize;
@property(nonatomic) _Bool highLighted; // @synthesize highLighted=_highLighted;
@property(nonatomic) long long itemIndex; // @synthesize itemIndex=_itemIndex;
@property(copy, nonatomic) NSString *keyItemId; // @synthesize keyItemId=_keyItemId;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

