//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IUCAFAppContext, IUCAFSecurtityGuardService, IUCAFStatService;

@interface UCAFMobilePlatform : NSObject
{
    id <IUCAFStatService> _statService;
    id <IUCAFSecurtityGuardService> _securtityGuardService;
    id <IUCAFAppContext> _appContext;
}

+ (id)shareInstance;
@property(retain, nonatomic) id <IUCAFAppContext> appContext; // @synthesize appContext=_appContext;
@property(retain, nonatomic) id <IUCAFSecurtityGuardService> securtityGuardService; // @synthesize securtityGuardService=_securtityGuardService;
@property(retain, nonatomic) id <IUCAFStatService> statService; // @synthesize statService=_statService;
- (void).cxx_destruct;
- (id)getAppContext;
- (void)registerAppContext:(id)arg1;
- (id)getSGService;
- (void)registerSGService:(id)arg1;
- (id)getStatService;
- (void)registerStatService:(id)arg1;

@end

