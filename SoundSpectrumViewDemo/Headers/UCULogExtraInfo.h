//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface UCULogExtraInfo : NSObject
{
    NSString *_wpkHeader;
    NSString *_logHeader;
    NSString *_path;
    NSString *_pubKey;
}

@property(copy, nonatomic) NSString *pubKey; // @synthesize pubKey=_pubKey;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *logHeader; // @synthesize logHeader=_logHeader;
@property(copy, nonatomic) NSString *wpkHeader; // @synthesize wpkHeader=_wpkHeader;
- (void).cxx_destruct;

@end

