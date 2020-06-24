//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OPSRouterWebPageProtocol;

@interface OPSRouter : NSObject
{
    id <OPSRouterWebPageProtocol> _webpageRouter;
    NSMutableArray *_itemList;
}

+ (id)routerQuery;
+ (id)routerScheme;
+ (id)defaultRouter;
+ (void)presentViewController:(id)arg1;
+ (void)pushViewController:(id)arg1;
@property(retain, nonatomic) NSMutableArray *itemList; // @synthesize itemList=_itemList;
@property(retain, nonatomic) id <OPSRouterWebPageProtocol> webpageRouter; // @synthesize webpageRouter=_webpageRouter;
- (void).cxx_destruct;
- (void)routeWithUrl:(id)arg1 withFinishedBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)routeWithUrl:(id)arg1;
- (id)routerQueriesWithUrl:(id)arg1;
- (id)routerItemFromRouterUrl:(id)arg1;
- (id)routerWithUrl:(id)arg1 routerItemClass:(Class)arg2;
- (_Bool)canRouterWithUrl:(id)arg1 routerItemClass:(Class)arg2;
- (_Bool)canRouterWithUrl:(id)arg1;
- (id)routerUrlObjectWithUrlObject:(id)arg1;
- (id)queriesWithUrlObject:(id)arg1;
- (id)url:(id)arg1 appendRouterUrlWithItemClass:(Class)arg2 withQueries:(id)arg3;
- (id)urlWithItemClass:(Class)arg1 withQueries:(id)arg2;
- (void)unregisterRouterItem:(id)arg1;
- (void)registerRouterItem:(id)arg1;
- (void)setWebPageRouterItem:(id)arg1;

@end
