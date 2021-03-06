//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class OPRMessageBaseItem, UIView;
@protocol OPRMessageBoxContentCellDelegate;

@interface OPRMessageBoxContentCell : UITableViewCell
{
    OPRMessageBaseItem *_item;
    UIView *_bgView;
    id <OPRMessageBoxContentCellDelegate> _delegate;
}

+ (_Bool)canMatchItem:(id)arg1;
+ (id)cellIdentifier;
+ (double)cellHightWithMaxWidth:(double)arg1 withItem:(id)arg2;
@property(nonatomic) __weak id <OPRMessageBoxContentCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) OPRMessageBaseItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)updateLayout;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

