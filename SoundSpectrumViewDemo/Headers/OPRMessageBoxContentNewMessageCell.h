//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OPRMessageBoxContentCell.h"

@class UILabel;

@interface OPRMessageBoxContentNewMessageCell : OPRMessageBoxContentCell
{
    UILabel *_messageLabel;
}

+ (_Bool)canMatchItem:(id)arg1;
+ (id)cellIdentifier;
+ (double)cellHightWithMaxWidth:(double)arg1 withItem:(id)arg2;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
