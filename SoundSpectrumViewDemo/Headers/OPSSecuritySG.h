//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OPSSecuritySG : NSObject
{
}

+ (id)signWithString:(id)arg1 key:(unsigned long long)arg2;
+ (id)decryptWithString:(id)arg1 key:(unsigned long long)arg2 base64:(_Bool)arg3;
+ (id)encryptWithString:(id)arg1 key:(unsigned long long)arg2 base64:(_Bool)arg3;
+ (id)decryptWithData:(id)arg1 key:(unsigned long long)arg2;
+ (id)encryptWithData:(id)arg1 key:(unsigned long long)arg2;
+ (id)sgAuthCode;
+ (id)sgKeyString;
+ (id)signCurrentKeyWithString:(id)arg1;
+ (id)decryptCurrentKeyWithString:(id)arg1 base64:(_Bool)arg2;
+ (id)encryptCurrentKeyWithString:(id)arg1 base64:(_Bool)arg2;
+ (id)decryptCurrentKeyWithData:(id)arg1;
+ (id)encryptCurrentKeyWithData:(id)arg1;
+ (id)currentAuthCode;
+ (id)currentKeyString;
+ (unsigned long long)currentKey;
+ (void)setCurrentKey:(unsigned long long)arg1;

@end
