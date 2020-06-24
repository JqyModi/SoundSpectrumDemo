//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface UCDeepLinkInfo : NSObject
{
    NSString *_host;
    NSString *_path;
    NSString *_biz;
    NSString *_action;
    NSString *_src_pkg;
    NSString *_src_ch;
    NSDictionary *_params;
}

@property(copy, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(copy, nonatomic) NSString *src_ch; // @synthesize src_ch=_src_ch;
@property(copy, nonatomic) NSString *src_pkg; // @synthesize src_pkg=_src_pkg;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *biz; // @synthesize biz=_biz;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
- (void)dealloc;
- (void)parseDeepLink:(id)arg1;
- (id)initWithDeepLink:(id)arg1;

@end

