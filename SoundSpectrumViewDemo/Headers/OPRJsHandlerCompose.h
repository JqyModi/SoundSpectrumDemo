//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OPRJsHandlerProtocol-Protocol.h"

@class NSArray, NSString;
@protocol OPRJsHandlerPushMessageProtocol;

@interface OPRJsHandlerCompose : NSObject <OPRJsHandlerProtocol>
{
    id <OPRJsHandlerPushMessageProtocol> _pushDelegate;
}

@property(nonatomic) __weak id <OPRJsHandlerPushMessageProtocol> pushDelegate; // @synthesize pushDelegate=_pushDelegate;
- (void).cxx_destruct;
- (void)execute:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 pushBlock:(CDUnknownBlockType)arg3;
- (_Bool)canExecute:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *methods;
@property(readonly, copy, nonatomic) NSString *module;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

