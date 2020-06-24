//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, OPRAccountBindingInfo;

@interface OPRAccountProperty : NSObject
{
    _Bool _isDestroyAccount;
    _Bool _isLock;
    _Bool _isHideRightArrow;
    _Bool _canOpen;
    NSString *_title;
    NSString *_rightText;
    CDUnknownBlockType _openBlock;
    OPRAccountBindingInfo *_info;
}

@property(retain, nonatomic) OPRAccountBindingInfo *info; // @synthesize info=_info;
@property(copy, nonatomic) CDUnknownBlockType openBlock; // @synthesize openBlock=_openBlock;
@property(nonatomic) _Bool canOpen; // @synthesize canOpen=_canOpen;
@property(nonatomic) _Bool isHideRightArrow; // @synthesize isHideRightArrow=_isHideRightArrow;
@property(nonatomic) _Bool isLock; // @synthesize isLock=_isLock;
@property(nonatomic) _Bool isDestroyAccount; // @synthesize isDestroyAccount=_isDestroyAccount;
@property(copy, nonatomic) NSString *rightText; // @synthesize rightText=_rightText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end
