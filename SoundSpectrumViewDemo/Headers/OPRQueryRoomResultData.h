//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OPRQueryRoomResultData : NSObject
{
    NSString *_roomId;
    NSString *_roundId;
    long long _roomType;
    long long _source;
}

@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) long long roomType; // @synthesize roomType=_roomType;
@property(copy, nonatomic) NSString *roundId; // @synthesize roundId=_roundId;
@property(copy, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
- (void).cxx_destruct;
- (id)init;

@end

