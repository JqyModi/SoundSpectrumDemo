//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OPCShareViewController.h"

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, OPRShareInviteData, UIButton, UIScrollView;

@interface OPRSingingRoomInviteViewController : OPCShareViewController <UIScrollViewDelegate>
{
    OPRShareInviteData *_inviteData;
    UIButton *_followTabBtn;
    UIButton *_shareTabBtn;
    UIScrollView *_scrollView;
}

@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIButton *shareTabBtn; // @synthesize shareTabBtn=_shareTabBtn;
@property(retain, nonatomic) UIButton *followTabBtn; // @synthesize followTabBtn=_followTabBtn;
@property(retain, nonatomic) OPRShareInviteData *inviteData; // @synthesize inviteData=_inviteData;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onSharePageBtnClick:(id)arg1;
- (void)onFollowPageBtnClick:(id)arg1;
- (void)onShareButtonClick:(id)arg1;
- (void)shareBtn:(id)arg1 applyPluginIndex:(unsigned long long)arg2;
- (id)shareBtn:(id)arg1 left:(double)arg2;
- (id)createShareInviteView:(struct CGRect)arg1;
- (void)initScrollContainer;
- (void)makeContentViewEffect;
- (void)viewDidLoad;
- (id)initWithInviteData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

