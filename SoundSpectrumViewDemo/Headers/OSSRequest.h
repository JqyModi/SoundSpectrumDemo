//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class OSSNetworkingRequestDelegate;

@interface OSSRequest : NSObject
{
    _Bool _isAuthenticationRequired;
    _Bool _isCancelled;
    unsigned long long _crcFlag;
    OSSNetworkingRequestDelegate *_requestDelegate;
}

@property(retain, nonatomic) OSSNetworkingRequestDelegate *requestDelegate; // @synthesize requestDelegate=_requestDelegate;
@property(nonatomic) unsigned long long crcFlag; // @synthesize crcFlag=_crcFlag;
@property _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(nonatomic) _Bool isAuthenticationRequired; // @synthesize isAuthenticationRequired=_isAuthenticationRequired;
- (void).cxx_destruct;
- (id)requestParams;
- (void)cancel;
- (id)init;

@end
