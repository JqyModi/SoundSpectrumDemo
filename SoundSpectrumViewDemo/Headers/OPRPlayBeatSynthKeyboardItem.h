//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OPRPlayBeatSynthKeyboardItem : NSObject
{
    NSString *_title;
    NSString *_imageName;
    NSString *_keyItemId;
    long long _itemIndex;
}

@property(nonatomic) long long itemIndex; // @synthesize itemIndex=_itemIndex;
@property(copy, nonatomic) NSString *keyItemId; // @synthesize keyItemId=_keyItemId;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

