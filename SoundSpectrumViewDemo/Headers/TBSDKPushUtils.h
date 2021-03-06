//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TBSDKPushUtils : NSObject
{
}

+ (id)hexadecimalStringFromData:(id)arg1;
+ (long long)currentApplicationState;
+ (id)convertJson2Dictionary:(id)arg1;
+ (id)decryptAES128WithData:(id)arg1 withKey:(id)arg2 withVector:(id)arg3;
+ (id)decodeBase64URLSafeString:(id)arg1;
+ (id)hmacsha1:(id)arg1 key:(id)arg2;
+ (id)md5WithBytes:(const char *)arg1 withLength:(unsigned long long)arg2;
+ (id)md5WithString:(id)arg1;
+ (id)md5WithData:(id)arg1;
+ (id)convertHexString:(id)arg1;
+ (unsigned long long)calcHexStringBytes:(id)arg1;
+ (id)reflectInvokeClass:(id)arg1 withSelector:(id)arg2;
+ (_Bool)isNotificationEnabled;
+ (_Bool)deviceSystemIsLargeIOS8;
+ (_Bool)deviceSystemIsLargeIOS9;
+ (_Bool)deviceSystemIsLargeIOS10;

@end

