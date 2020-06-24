//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OPRSingingCardPlayerListCell.h"

@class OPROnlineUserInviteButton;

@interface OPROnlineUserListCell : OPRSingingCardPlayerListCell
{
    OPROnlineUserInviteButton *_inviteButton;
    CDUnknownBlockType _onInviteButtonBlock;
}

@property(copy, nonatomic) CDUnknownBlockType onInviteButtonBlock; // @synthesize onInviteButtonBlock=_onInviteButtonBlock;
@property(retain, nonatomic) OPROnlineUserInviteButton *inviteButton; // @synthesize inviteButton=_inviteButton;
- (void).cxx_destruct;
- (void)onInviteTimeChange:(id)arg1;
- (void)startInvite;
- (void)updateInviteButtonStatus;
- (void)setupInviteButton;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setCellItem:(id)arg1;

@end
