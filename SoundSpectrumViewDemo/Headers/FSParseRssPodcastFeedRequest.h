//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FSXMLHttpRequest.h"

@class NSMutableArray;

@interface FSParseRssPodcastFeedRequest : FSXMLHttpRequest
{
    NSMutableArray *_playlistItems;
}

- (void).cxx_destruct;
@property(readonly) NSMutableArray *playlistItems;
- (void)parseXMLNode:(struct _xmlNode *)arg1 xPathQuery:(id)arg2;
- (void)parseResponseData;
- (void)parseItems:(struct _xmlNode *)arg1;
- (id)parseLocalFileUrl:(id)arg1;

@end

