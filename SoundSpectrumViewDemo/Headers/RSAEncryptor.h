//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RSAEncryptor : NSObject
{
    struct __SecKey *m_publicKey;
    struct __SecKey *m_privateKey;
}

- (_Bool)rsaSHA1VerifyData:(id)arg1 withSignature:(id)arg2;
- (id)rsaDecryptData:(id)arg1;
- (id)rsaDecryptString:(id)arg1;
- (id)rsaEncryptedDataArray:(id)arg1;
- (id)rsaEncryptedData:(id)arg1;
- (id)rsaEncryptedString:(id)arg1;
- (struct __SecKey *)newPrivateKeyRefrenceFromData:(id)arg1 password:(id)arg2;
- (struct __SecKey *)newPublicKeyRefrenceFromeData:(id)arg1;
- (void)loadPrivateKeyFromData:(id)arg1 password:(id)arg2;
- (void)loadPrivateKeyFromFile:(id)arg1 password:(id)arg2;
- (unsigned long long)blockSizeForPublicKey;
- (void)loadPublicKeyFromData:(id)arg1;
- (void)loadPublicKeyFromFile:(id)arg1;
- (struct __SecKey *)getPrivateKey;
- (struct __SecKey *)getPublicKey;
- (id)init;
- (void)dealloc;

@end

