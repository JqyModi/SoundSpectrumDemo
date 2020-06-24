//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OPRBaseTableViewController.h"

@class NSArray, OPRSettingFooterView;

@interface OPRSettingViewController : OPRBaseTableViewController
{
    _Bool _didClearCache;
    _Bool _isClearingCache;
    OPRSettingFooterView *_logoutView;
    NSArray *_itemList;
}

@property(nonatomic) _Bool isClearingCache; // @synthesize isClearingCache=_isClearingCache;
@property(nonatomic) _Bool didClearCache; // @synthesize didClearCache=_didClearCache;
@property(retain, nonatomic) NSArray *itemList; // @synthesize itemList=_itemList;
@property(retain, nonatomic) OPRSettingFooterView *logoutView; // @synthesize logoutView=_logoutView;
- (void).cxx_destruct;
- (void)statPageToLogserver:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

