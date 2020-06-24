//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OPSRouterItemProtocol-Protocol.h"
#import "OPSRouterRegisterProtocol-Protocol.h"

@class NSString;

@interface OPRNewRoomRouterItem : NSObject <OPSRouterItemProtocol, OPSRouterRegisterProtocol>
{
}

+ (id)plsWithstring:(id)arg1;
+ (id)stringWithPls:(id)arg1;
+ (id)routerPath;
+ (id)routerHost;
+ (id)url:(id)arg1 appendRouterWithPlayLists:(id)arg2;
+ (void)routeWithPlayLists:(id)arg1;
+ (void)registerRouter;
- (void)routeWithQueries:(id)arg1 withOriginUrl:(id)arg2;
- (_Bool)canRouteWithQueries:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

