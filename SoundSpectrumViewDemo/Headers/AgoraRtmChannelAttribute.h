//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AgoraRtmChannelAttribute : NSObject
{
    NSString *_key;
    NSString *_value;
    NSString *_lastUpdateUserId;
    long long _lastUpdateTs;
}

@property(nonatomic) long long lastUpdateTs; // @synthesize lastUpdateTs=_lastUpdateTs;
@property(copy, nonatomic) NSString *lastUpdateUserId; // @synthesize lastUpdateUserId=_lastUpdateUserId;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;

@end

