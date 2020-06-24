//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString, UTMCRecvData;
@protocol UTMCTnetDelegate;

@interface UTMCTnetObject : NSObject
{
    struct z_stream_s gzip_strm;
    unsigned int encodeArraySize;
    struct _opaque_pthread_mutex_t encode_lock;
    struct _opaque_pthread_mutex_t encodeArraySize_lock;
    struct NAL_session_t {
        struct NAL_addr_t;
        int;
        unsigned short;
        unsigned short;
        struct NAL_session_meta;
    } *_session;
    int _status;
    NSData *_frameData;
    int _vernier;
    int _dataLen;
    NSRecursiveLock *_lock;
    UTMCRecvData *_recvDataStruct;
    _Bool _tnetBufferFull;
    id <UTMCTnetDelegate> _sessionDelegate;
    NSString *_miniWua;
}

+ (void)initialize;
@property(copy, nonatomic) NSString *miniWua; // @synthesize miniWua=_miniWua;
@property _Bool tnetBufferFull; // @synthesize tnetBufferFull=_tnetBufferFull;
@property(nonatomic) __weak id <UTMCTnetDelegate> sessionDelegate; // @synthesize sessionDelegate=_sessionDelegate;
- (void).cxx_destruct;
- (void)recvDataUnPack:(char *)arg1 length:(int)arg2 type:(unsigned short)arg3 flag:(unsigned char)arg4;
- (void)sendFrame;
- (void)setFrameData:(id)arg1;
- (void)dealloc;
- (int)sessionStatus;
- (void)setSessionStauts:(int)arg1;
- (_Bool)connFail:(int)arg1;
- (void)close:(int)arg1;
- (void)disConnect;
- (void)connSuccess;
- (int)sendCustomFrame:(unsigned short)arg1 withFlags:(unsigned char)arg2 withLength:(int)arg3 withData:(char *)arg4 sslIndex:(unsigned int)arg5;
- (void)asynConnect;
- (_Bool)valid;
- (void)refreshMiniWua;
- (id)initWithHost:(id)arg1 port:(unsigned int)arg2 indext:(unsigned int)arg3 delegate:(id)arg4;
- (NAL_session_t_e4d01b93 *)createSocket:(id)arg1 port:(unsigned int)arg2 indext:(unsigned int)arg3;
@property(nonatomic) _Bool isStreamConnect;
- (void)deflateEndStream;
- (id)streamGzipDeflate:(id)arg1;
@property(retain, nonatomic) NSMutableArray *encodeArray;
@property(retain, nonatomic) NSMutableDictionary *encodeDict;
- (void)clear;
- (void)resetEncodeArraySize;
- (void)encodeArraySizeAddSize:(unsigned int)arg1;
- (unsigned int)encodeArraySize;
- (long long)_indexWithString:(id)arg1 type:(long long *)arg2 stringSize:(unsigned int)arg3;
- (long long)indexWithString:(id)arg1 type:(long long *)arg2;
- (long long)indexWithHeader:(id)arg1 type:(long long *)arg2;

@end

