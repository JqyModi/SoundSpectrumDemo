//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OPCShareViewController.h"

@class NSString;

@interface OPRShareInviteViewController : OPCShareViewController
{
    _Bool _isFunc;
    NSString *_roomId;
    NSString *_sender;
    NSString *_isHost;
    NSString *_hostID;
}

@property(copy, nonatomic) NSString *hostID; // @synthesize hostID=_hostID;
@property(copy, nonatomic) NSString *isHost; // @synthesize isHost=_isHost;
@property(copy, nonatomic) NSString *sender; // @synthesize sender=_sender;
@property(nonatomic) _Bool isFunc; // @synthesize isFunc=_isFunc;
@property(copy, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
- (void).cxx_destruct;
- (void)onShareButtonClick:(id)arg1;
- (void)shareBtn:(id)arg1 applyPluginIndex:(unsigned long long)arg2;
- (id)shareBtn:(id)arg1 left:(double)arg2;
- (void)viewDidLoad;
- (id)initWithInviteData:(id)arg1;

@end
