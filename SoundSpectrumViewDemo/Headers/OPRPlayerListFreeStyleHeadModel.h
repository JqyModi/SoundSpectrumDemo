//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSNumber, NSString, UIImageView;

@interface OPRPlayerListFreeStyleHeadModel : NSObject
{
    _Bool _showEmptyTips;
    NSString *_desc;
    NSString *_joinDesc;
    NSAttributedString *_richText;
    UIImageView *_emptyTips;
    CDUnknownBlockType _enterTopicBlock;
    NSNumber *_height;
}

@property(retain, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(copy, nonatomic) CDUnknownBlockType enterTopicBlock; // @synthesize enterTopicBlock=_enterTopicBlock;
@property(nonatomic) _Bool showEmptyTips; // @synthesize showEmptyTips=_showEmptyTips;
@property(copy, nonatomic) UIImageView *emptyTips; // @synthesize emptyTips=_emptyTips;
@property(retain, nonatomic) NSAttributedString *richText; // @synthesize richText=_richText;
@property(copy, nonatomic) NSString *joinDesc; // @synthesize joinDesc=_joinDesc;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
- (void).cxx_destruct;
- (void)calculateHeight:(double)arg1;
- (double)heightForEmpty;
- (void)setupProperty;
- (id)initWithDesc:(id)arg1 joinDesc:(id)arg2 showEmptyTips:(_Bool)arg3;

@end

