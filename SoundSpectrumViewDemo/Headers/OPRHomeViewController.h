//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "OPAccountManagerObserver-Protocol.h"
#import "OPCAudioSessionDelegate-Protocol.h"

@class NSString, OPCAudioSession, OPRHomeEntryBar, OPRRoomModeViewController, OPRSingingCardViewController, UIView;

@interface OPRHomeViewController : UIViewController <OPAccountManagerObserver, OPCAudioSessionDelegate>
{
    _Bool _onRoomMode;
    _Bool _hasStartEntryAnim;
    CDUnknownBlockType _viewCanBeOnShowBlock;
    OPRHomeEntryBar *_entryBar;
    OPRRoomModeViewController *_roomModeVC;
    OPRSingingCardViewController *_cardVC;
    UIView *_soloVCContainer;
    UIView *_topbarContainer;
    UIView *_logoView;
    OPCAudioSession *_audioSession;
}

@property(nonatomic) _Bool hasStartEntryAnim; // @synthesize hasStartEntryAnim=_hasStartEntryAnim;
@property(retain, nonatomic) OPCAudioSession *audioSession; // @synthesize audioSession=_audioSession;
@property(nonatomic) _Bool onRoomMode; // @synthesize onRoomMode=_onRoomMode;
@property(nonatomic) __weak UIView *logoView; // @synthesize logoView=_logoView;
@property(nonatomic) __weak UIView *topbarContainer; // @synthesize topbarContainer=_topbarContainer;
@property(nonatomic) __weak UIView *soloVCContainer; // @synthesize soloVCContainer=_soloVCContainer;
@property(nonatomic) __weak OPRSingingCardViewController *cardVC; // @synthesize cardVC=_cardVC;
@property(nonatomic) __weak OPRRoomModeViewController *roomModeVC; // @synthesize roomModeVC=_roomModeVC;
@property(nonatomic) __weak OPRHomeEntryBar *entryBar; // @synthesize entryBar=_entryBar;
@property(copy, nonatomic) CDUnknownBlockType viewCanBeOnShowBlock; // @synthesize viewCanBeOnShowBlock=_viewCanBeOnShowBlock;
- (void).cxx_destruct;
- (void)audioRouterTypeDidChange:(id)arg1;
- (void)accountManager:(id)arg1 logerStatusChanged:(unsigned long long)arg2;
- (void)accountManager:(id)arg1 logInEndWithResult:(unsigned long long)arg2 withError:(id)arg3;
- (void)showMoreSonglistEntryGuideIfNeed;
- (void)showSearchFeatureGuideIfNeed;
- (void)startSearchEntryBtnAnimtionIfNeed;
- (void)onlineUserListExitRoomModeNotification;
- (void)resetData;
- (void)viewOnShow:(_Bool)arg1;
- (void)onEnterRoomMode;
- (void)onEnterUserProfile;
- (void)onEnterSearch;
- (void)changePlayModeWithAnimated:(_Bool)arg1;
- (void)delayToShowEntryBar;
- (void)updateLogoViewShowStatus;
- (void)setupSelfView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

