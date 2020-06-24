//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OPRBaseTableViewController.h"

#import "OPAccountManagerObserver-Protocol.h"

@class NSArray, NSString, OPProgressHUD, OPRAccountProperty;

@interface OPRAccountManagerViewController : OPRBaseTableViewController <OPAccountManagerObserver>
{
    _Bool _canEdit;
    NSString *_ucid;
    NSString *_serverTicket;
    NSArray *_propertyList;
    OPRAccountProperty *_qqProperty;
    OPRAccountProperty *_wechatProperty;
    OPRAccountProperty *_mobileProperty;
    OPProgressHUD *_hud;
}

+ (void)updateLastLoginPlugin:(id)arg1;
+ (id)lastLoginPlugin;
@property(retain, nonatomic) OPProgressHUD *hud; // @synthesize hud=_hud;
@property(retain, nonatomic) OPRAccountProperty *mobileProperty; // @synthesize mobileProperty=_mobileProperty;
@property(retain, nonatomic) OPRAccountProperty *wechatProperty; // @synthesize wechatProperty=_wechatProperty;
@property(retain, nonatomic) OPRAccountProperty *qqProperty; // @synthesize qqProperty=_qqProperty;
@property(retain, nonatomic) NSArray *propertyList; // @synthesize propertyList=_propertyList;
@property(nonatomic) _Bool canEdit; // @synthesize canEdit=_canEdit;
@property(copy, nonatomic) NSString *serverTicket; // @synthesize serverTicket=_serverTicket;
@property(copy, nonatomic) NSString *ucid; // @synthesize ucid=_ucid;
- (void).cxx_destruct;
- (void)statToLogserver:(id)arg1 ct:(id)arg2 ac:(id)arg3;
- (void)statPageToLogserver:(id)arg1;
- (void)accountManager:(id)arg1 unbindAccountWithPlugin:(id)arg2 withResult:(unsigned long long)arg3 withError:(id)arg4;
- (void)accountManager:(id)arg1 bindAccountWithPlugin:(id)arg2 withResult:(unsigned long long)arg3 withBindName:(id)arg4 withError:(id)arg5;
- (void)hideLoadingView;
- (void)showLoadingView:(id)arg1;
- (void)applyAccountDestroy;
- (void)bindingMobile:(_Bool)arg1;
- (void)bindingWechat;
- (void)bindingQQ;
- (void)copyUid:(id)arg1;
- (void)alertBinding:(id)arg1 confirm:(CDUnknownBlockType)arg2;
- (void)refreshBinding;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)updateThirdAccountBinding:(id)arg1 isBind:(_Bool)arg2 bindShowName:(id)arg3;
- (void)updateCanOpen;
- (void)updateAllProperty:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

