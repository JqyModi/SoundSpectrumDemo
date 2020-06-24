//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableData;

@interface UTMCRecvData : NSObject
{
    unsigned char _version;
    unsigned char _type;
    unsigned int _recvBodyLen;
    unsigned int _recvdataLen;
    int _sessionNum;
    NSMutableData *_recvData;
    NSDictionary *_allRecvInfo;
}

@property(retain) NSDictionary *allRecvInfo; // @synthesize allRecvInfo=_allRecvInfo;
@property int sessionNum; // @synthesize sessionNum=_sessionNum;
@property unsigned char type; // @synthesize type=_type;
@property unsigned char version; // @synthesize version=_version;
@property unsigned int recvdataLen; // @synthesize recvdataLen=_recvdataLen;
@property unsigned int recvBodyLen; // @synthesize recvBodyLen=_recvBodyLen;
@property(retain, nonatomic) NSMutableData *recvData; // @synthesize recvData=_recvData;
- (void).cxx_destruct;
- (id)frameResolve:(id)arg1 allLength:(int)arg2;
- (int)recvDataUnPack:(char *)arg1 length:(int)arg2 type:(unsigned short)arg3 flag:(unsigned char)arg4;
- (void)reset;
- (id)init;

@end

