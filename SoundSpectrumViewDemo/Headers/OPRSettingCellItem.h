//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OPRSettingCellItem : NSObject
{
    _Bool _switchOn;
    unsigned long long _index;
    NSString *_title;
    NSString *_rightTips;
    unsigned long long _rightStyle;
    CDUnknownBlockType _onItemClickBlock;
}

+ (id)itemWithIndex:(unsigned long long)arg1 withTitle:(id)arg2 withRightStyle:(unsigned long long)arg3 withInitValueBlock:(CDUnknownBlockType)arg4 withClickBlock:(CDUnknownBlockType)arg5;
+ (id)itemWithIndex:(unsigned long long)arg1 withTitle:(id)arg2 withRightStyle:(unsigned long long)arg3;
@property(copy, nonatomic) CDUnknownBlockType onItemClickBlock; // @synthesize onItemClickBlock=_onItemClickBlock;
@property(nonatomic) unsigned long long rightStyle; // @synthesize rightStyle=_rightStyle;
@property(nonatomic) _Bool switchOn; // @synthesize switchOn=_switchOn;
@property(retain, nonatomic) NSString *rightTips; // @synthesize rightTips=_rightTips;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (void).cxx_destruct;

@end

