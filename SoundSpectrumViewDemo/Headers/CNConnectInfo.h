//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@interface CNConnectInfo : NSObject <NSCoding>
{
    int _prelinkType;
    long long _rawBytes;
}

+ (id)connInfo;
@property(nonatomic) long long rawBytes; // @synthesize rawBytes=_rawBytes;
@property(nonatomic) int prelinkType; // @synthesize prelinkType=_prelinkType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)init;

@end

