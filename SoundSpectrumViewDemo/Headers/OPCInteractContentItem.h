//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "OPCInteractContentProtocol-Protocol.h"

@class NSDictionary, NSNumber, NSString;

@interface OPCInteractContentItem : NSObject <OPCInteractContentProtocol, NSCoding, NSCopying>
{
    _Bool _favorited;
    CDUnknownBlockType _onInteractItemDataUpdate;
    NSNumber *_likeStatus;
    NSNumber *_likeCount;
    NSNumber *_commentCount;
    NSNumber *_ensembleCount;
    long long _followStatus;
    NSString *_source_interact;
}

@property(copy, nonatomic) NSString *source_interact; // @synthesize source_interact=_source_interact;
@property(nonatomic) long long followStatus; // @synthesize followStatus=_followStatus;
@property(nonatomic) _Bool favorited; // @synthesize favorited=_favorited;
@property(retain, nonatomic) NSNumber *ensembleCount; // @synthesize ensembleCount=_ensembleCount;
@property(retain, nonatomic) NSNumber *commentCount; // @synthesize commentCount=_commentCount;
@property(retain, nonatomic) NSNumber *likeCount; // @synthesize likeCount=_likeCount;
@property(retain, nonatomic) NSNumber *likeStatus; // @synthesize likeStatus=_likeStatus;
@property(copy, nonatomic) CDUnknownBlockType onInteractItemDataUpdate; // @synthesize onInteractItemDataUpdate=_onInteractItemDataUpdate;
- (void).cxx_destruct;
- (void)interactDataDidUpdate:(id)arg1;
- (void)raiseInteractDataUpdated:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) NSDictionary *logExt;
@property(readonly, copy, nonatomic) NSNumber *ugcType_interact;
@property(readonly, copy, nonatomic) NSString *recoid_interact;
@property(readonly, copy, nonatomic) NSNumber *strategy_interact;
@property(readonly, copy, nonatomic) NSString *segmentID_interact;
@property(readonly, copy, nonatomic) NSString *autorID_interact;
@property(readonly, copy, nonatomic) NSString *itemID_interact;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

