//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TikTokOpenPlatformPasteShareData : NSObject
{
    NSString *_bundle_id;
    NSString *_key;
    NSString *_secret;
    NSString *_unique_id;
}

@property(retain, nonatomic) NSString *unique_id; // @synthesize unique_id=_unique_id;
@property(retain, nonatomic) NSString *secret; // @synthesize secret=_secret;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *bundle_id; // @synthesize bundle_id=_bundle_id;
- (void).cxx_destruct;
- (id)jsonData;

@end

