//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UCAppInfoContext-Protocol.h"

@class NSString;

@interface AppActivityContext : NSObject <UCAppInfoContext>
{
}

- (id)getutdid;
- (id)getua;
- (id)getsver;
- (id)getsn;
- (id)getscreenSize;
- (id)getpver;
- (id)getmac;
- (id)getlocation;
- (id)getip;
- (id)getfp;
- (id)getcp;
- (id)getch;
- (id)getbtype;
- (id)getbseq;
- (id)getbmode;
- (id)getbid;
- (id)getPPChInfo;
- (id)getLang;
- (id)getAppKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

