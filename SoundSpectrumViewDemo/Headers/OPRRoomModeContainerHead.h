//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class OPRSegementView, UIButton;

@interface OPRRoomModeContainerHead : UITableViewHeaderFooterView
{
    CDUnknownBlockType _createRoomBlock;
    CDUnknownBlockType _joinRoomBlock;
    UIButton *_createRoomButton;
    UIButton *_joinRoomButton;
    OPRSegementView *_segement;
}

+ (double)segmentHeightY;
+ (double)headHeight;
@property(retain, nonatomic) OPRSegementView *segement; // @synthesize segement=_segement;
@property(retain, nonatomic) UIButton *joinRoomButton; // @synthesize joinRoomButton=_joinRoomButton;
@property(retain, nonatomic) UIButton *createRoomButton; // @synthesize createRoomButton=_createRoomButton;
@property(copy, nonatomic) CDUnknownBlockType joinRoomBlock; // @synthesize joinRoomBlock=_joinRoomBlock;
@property(copy, nonatomic) CDUnknownBlockType createRoomBlock; // @synthesize createRoomBlock=_createRoomBlock;
- (void).cxx_destruct;
- (void)onJoinRoomButtonClick:(id)arg1;
- (void)onCreateRoomButtonClick:(id)arg1;
- (void)setupUI;
- (id)buttonWithTitle:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithReuseIdentifier:(id)arg1;

@end
