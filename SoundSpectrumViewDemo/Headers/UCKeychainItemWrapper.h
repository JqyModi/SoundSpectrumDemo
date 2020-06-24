//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, UCKeychainItem;

@interface UCKeychainItemWrapper : NSObject
{
    UCKeychainItem *_item;
    NSData *_data;
}

+ (void)deleteDataInKeychainForIdentifier:(id)arg1 accessGroup:(id)arg2;
+ (void)saveDataInKeychain:(id)arg1 forIdentifier:(id)arg2 accessGroup:(id)arg3;
+ (id)dataInKeychainForIdentifier:(id)arg1 accessGroup:(id)arg2;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) UCKeychainItem *item; // @synthesize item=_item;
- (void)deleteKeychainItem;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 accessGroup:(id)arg2;

@end

