//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OPRBaseTableViewController.h"

@class NSArray, NSString;

@interface OPRUserMyVisitorsViewController : OPRBaseTableViewController
{
    long long _visitCount;
    NSArray *_items;
    NSString *_nextCursor;
}

@property(copy, nonatomic) NSString *nextCursor; // @synthesize nextCursor=_nextCursor;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) long long visitCount; // @synthesize visitCount=_visitCount;
- (void).cxx_destruct;
- (void)statPageToLogserver:(id)arg1;
- (void)loadMoreMessage;
- (void)refreshMessage;
- (_Bool)enableLoadMore;
- (_Bool)enableRefresh;
- (id)title;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithVisitCount:(long long)arg1;

@end

