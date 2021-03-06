//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMutableData, RNCryptorEngine;
@protocol OS_dispatch_queue;

@interface RNCryptor : NSObject
{
    _Bool _finished;
    unsigned char _options;
    NSObject<OS_dispatch_queue> *_responseQueue;
    RNCryptorEngine *_engine;
    NSMutableData *__outData;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long __HMACLength;
    NSError *_error;
    CDUnknownBlockType _handler;
}

+ (id)randomDataOfLength:(unsigned long long)arg1;
+ (id)keyForPassword:(id)arg1 salt:(id)arg2 settings:(struct _RNCryptorKeyDerivationSettings)arg3;
+ (id)synchronousResultForCryptor:(id)arg1 data:(id)arg2 error:(id *)arg3;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) unsigned char options; // @synthesize options=_options;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long HMACLength; // @synthesize HMACLength=__HMACLength;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSMutableData *outData; // @synthesize outData=__outData;
@property(retain, nonatomic) RNCryptorEngine *engine; // @synthesize engine=_engine;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *responseQueue; // @synthesize responseQueue=_responseQueue;
- (void).cxx_destruct;
- (_Bool)hasHMAC;
- (void)cleanupAndNotifyWithError:(id)arg1;
- (void)finish;
- (void)addData:(id)arg1;
- (void)dealloc;
- (id)initWithHandler:(CDUnknownBlockType)arg1;

@end

