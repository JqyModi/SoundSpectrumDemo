//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface AVFSObjectContext : NSObject
{
    NSMutableArray *_objects;
}

@property(retain, nonatomic) NSMutableArray *objects; // @synthesize objects=_objects;
- (void).cxx_destruct;
- (_Bool)commit;
- (id)firstObject;
- (_Bool)containsObject:(id)arg1;
- (void)deleteObject:(id)arg1;
- (void)insertObject:(id)arg1;
- (id)init;

@end

