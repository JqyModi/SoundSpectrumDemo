//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, NSTimer, UIViewController;

@interface OPAlertFactory : NSObject <UITextFieldDelegate>
{
    NSTimer *_smsVerificationGetCodeTimer;
    unsigned long long _smsVerificationGetCodeSeconds;
    UIViewController *_bindPhoneNumVC;
}

+ (void)presentNormalConfirmOnlyAlertWithTitle:(id)arg1 withConfirmTitle:(id)arg2 withTextAlignment:(long long)arg3 withButtonTitleColor:(id)arg4 confrimHandler:(CDUnknownBlockType)arg5;
+ (void)presentNormalConfirmAndCancelActionAlertWithTitle:(id)arg1 withTitleTextAlignment:(long long)arg2 withDesc:(id)arg3 withDescTextAlignment:(long long)arg4 withConfirmTitle:(id)arg5 withCancelTitle:(id)arg6 withConfirmClicked:(CDUnknownBlockType)arg7 withCancelClicked:(CDUnknownBlockType)arg8;
+ (void)presentPrivacyAlertWithTitle:(id)arg1 desc:(id)arg2 confirmButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4 confirmClicked:(CDUnknownBlockType)arg5 cancelClicked:(CDUnknownBlockType)arg6;
+ (void)presentMultipleInputAlertWithTitle:(id)arg1 withPlaceHolder:(id)arg2 withInputHeight:(double)arg3 withConfirmTitle:(id)arg4 withCancelTitle:(id)arg5 withInputDelegate:(id)arg6 withConfirmClicked:(CDUnknownBlockType)arg7;
+ (id)presentNormalInputAlertWithTitle:(id)arg1 withDesc:(id)arg2 inputText:(id)arg3 withConfirmTitle:(id)arg4 withCancelTitle:(id)arg5 withInputKeyboardType:(long long)arg6 withBanInputMenuControl:(_Bool)arg7 withInputDelegate:(id)arg8 withConfirmClicked:(CDUnknownBlockType)arg9 withDismiss:(CDUnknownBlockType)arg10;
+ (id)presentRecommendToUseHeadPhoneAlertWithDesc:(id)arg1;
+ (void)presentTopicAlert:(id)arg1 withDesc:(id)arg2;
+ (void)presentNeedUpdateAlert;
+ (void)presentBottomSelectAlert:(id)arg1 withIcon:(id)arg2 withLeftTitle:(id)arg3 withLeftDesc:(id)arg4 withLeftIcon:(id)arg5 withRightTitle:(id)arg6 withRightDesc:(id)arg7 withRightIcon:(id)arg8 withButtonClicked:(CDUnknownBlockType)arg9;
+ (void)presentSwitchAlertWithTitle:(id)arg1 withSubTitle:(id)arg2 withDese:(id)arg3 isOn:(_Bool)arg4 withConfirmCLicked:(CDUnknownBlockType)arg5;
+ (void)presentListAlertWithTitle:(id)arg1 withDesc:(id)arg2 withListTitle:(id)arg3 withHighlightIndex:(long long)arg4 withBackgroundClickEnable:(_Bool)arg5 withClicked:(CDUnknownBlockType)arg6;
+ (void)presentNormalAlertWithTitle:(id)arg1 withDesc:(id)arg2 withConfirmTitle:(id)arg3 withCancelTitle:(id)arg4 withBackgroundClickEnable:(_Bool)arg5 withCancelClicked:(CDUnknownBlockType)arg6 withConfirmClicked:(CDUnknownBlockType)arg7;
+ (id)normalAlertWithTitle:(id)arg1 withDesc:(id)arg2 withConfirmTitle:(id)arg3 withCancelTitle:(id)arg4 withBackgroundClickEnable:(_Bool)arg5 withCancelClicked:(CDUnknownBlockType)arg6 withConfirmClicked:(CDUnknownBlockType)arg7;
+ (void)presentNormalAlertWithTitle:(id)arg1 desc:(id)arg2 clickTitle:(id)arg3;
+ (void)presentNoChordAlertWithTitle:(id)arg1 confirmClicked:(CDUnknownBlockType)arg2;
+ (void)presentDidPostOriginCreateSuccessAlertWithConfirmClicked:(CDUnknownBlockType)arg1;
+ (void)presentDidPostSuccessAlertWithConfirmClicked:(CDUnknownBlockType)arg1;
+ (void)presentDidPostSuccessWithTitle:(id)arg1 message:(id)arg2 alertWithConfirmClicked:(CDUnknownBlockType)arg3;
+ (void)presentUnFollowAlertWithUserName:(id)arg1 withConfirmClicked:(CDUnknownBlockType)arg2 withCancelClicked:(CDUnknownBlockType)arg3;
+ (void)presentShowBusinessCardAlertWithCardUserName:(id)arg1 withConfirmClicked:(CDUnknownBlockType)arg2 withCancelClicked:(CDUnknownBlockType)arg3;
+ (void)presentTotalLikeCountAlertWithLikeCount:(id)arg1 withUserName:(id)arg2;
+ (void)presentMedalAlertWithTitle:(id)arg1 withMedalImageUrl:(id)arg2 withMedalBgImageUrl:(id)arg3 withMedalInfo:(id)arg4;
+ (void)presentReplyCommentAlertWithReplyClicked:(CDUnknownBlockType)arg1 copyTextBlock:(CDUnknownBlockType)arg2 deleteClicked:(CDUnknownBlockType)arg3 reportClicked:(CDUnknownBlockType)arg4 blockClicked:(CDUnknownBlockType)arg5;
+ (void)presentReportAlertWithReportReasonClicked:(CDUnknownBlockType)arg1 confirmClicked:(CDUnknownBlockType)arg2 cancelClicked:(CDUnknownBlockType)arg3;
+ (void)presentDeleteUGCPostClipAlertWithTitle:(id)arg1 confirmClicked:(CDUnknownBlockType)arg2;
+ (void)presentCardListLoadNoMoreDataAlertWithConfirmClicked:(CDUnknownBlockType)arg1 withCancelClicked:(CDUnknownBlockType)arg2;
+ (void)presentInvalidTicketAlertWithConfirmClicked:(CDUnknownBlockType)arg1;
+ (void)presentNoRecordPermissionAlertWithConfirmClicked:(CDUnknownBlockType)arg1;
+ (void)presentLogoutAlertWithConfirmClicked:(CDUnknownBlockType)arg1 withCancelClicked:(CDUnknownBlockType)arg2;
+ (void)presentCommonOneButtonAlertWithTitle:(id)arg1 buttonTitle:(id)arg2 withTextAlignment:(long long)arg3 withButtonTitleColor:(id)arg4 clicked:(CDUnknownBlockType)arg5;
+ (void)presentCommonOneButtonAlertWithTitle:(id)arg1 buttonTitle:(id)arg2 clicked:(CDUnknownBlockType)arg3;
+ (id)shareInstance;
+ (_Bool)presentingAlert;
+ (void)setPresentingAlert:(_Bool)arg1;
+ (void)dismissAllAlert;
+ (void)presentRoomObserveringAlert;
+ (void)presentRoomStartGameFailWithNoSongAlertWithConfirmClicked:(CDUnknownBlockType)arg1;
+ (void)presentRoomStartGameFailAlertWithConfirmClicked:(CDUnknownBlockType)arg1;
+ (void)presentRoomHadBeenDismissedAlertWithConfirmClicked:(CDUnknownBlockType)arg1;
+ (void)presentChooseAlbumAlertWithConfirmClicked:(CDUnknownBlockType)arg1;
+ (void)presentCloseRoomWithConfirmClicked:(CDUnknownBlockType)arg1 withCancelClicked:(CDUnknownBlockType)arg2;
+ (void)presentBeInvitedToJoinTheRoomAlertWithInviterName:(id)arg1 withConfirmClicked:(CDUnknownBlockType)arg2 withCancelClicked:(CDUnknownBlockType)arg3;
+ (void)presentBeKickedOffAlertWithReason:(id)arg1 withConfirmClicked:(CDUnknownBlockType)arg2;
+ (void)presentReportRoomUserWithConfirmClicked:(CDUnknownBlockType)arg1;
+ (void)presentReportRoomWithConfirmClicked:(CDUnknownBlockType)arg1;
+ (void)presentRestoreRoomAlertWithConfirmClicked:(CDUnknownBlockType)arg1 withCancelClicked:(CDUnknownBlockType)arg2;
+ (void)presentJoinRoomAlertWithInputDelegate:(id)arg1 withConfirmClicked:(CDUnknownBlockType)arg2 withDismiss:(CDUnknownBlockType)arg3;
+ (void)presentChangeRoomNameAlertWithInputText:(id)arg1 withConfirmClicked:(CDUnknownBlockType)arg2 withDismiss:(CDUnknownBlockType)arg3;
+ (void)presentCreateRoomAlertWithInputText:(id)arg1 withConfirmClicked:(CDUnknownBlockType)arg2 withDismiss:(CDUnknownBlockType)arg3;
+ (void)presentCard1TipsAlert;
+ (void)presentFirstPlayAlert:(_Bool)arg1;
@property(nonatomic) __weak UIViewController *bindPhoneNumVC; // @synthesize bindPhoneNumVC=_bindPhoneNumVC;
@property(nonatomic) unsigned long long smsVerificationGetCodeSeconds; // @synthesize smsVerificationGetCodeSeconds=_smsVerificationGetCodeSeconds;
@property(retain, nonatomic) NSTimer *smsVerificationGetCodeTimer; // @synthesize smsVerificationGetCodeTimer=_smsVerificationGetCodeTimer;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)textFieldShouldReturn:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

