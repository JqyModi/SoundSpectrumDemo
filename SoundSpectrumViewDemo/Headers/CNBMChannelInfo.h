//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

@interface CNBMChannelInfo : NSObject
{
    NSString *_bizId;
    NSMutableSet *_channelSet;
}

+ (id)bmChannelInfoWithBizId:(id)arg1;
@property(retain, nonatomic) NSMutableSet *channelSet; // @synthesize channelSet=_channelSet;
@property(retain, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
- (void)addChannel:(id)arg1;
- (id)getChannels;
- (id)init;
- (void)dealloc;

@end

