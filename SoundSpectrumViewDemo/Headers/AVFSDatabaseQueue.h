//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSRecursiveLock;
@protocol AVFSDatabaseProtocol;

@interface AVFSDatabaseQueue : NSObject
{
    id <AVFSDatabaseProtocol> _db;
    NSRecursiveLock *_tableLock;
}

@property(retain, nonatomic) NSRecursiveLock *tableLock; // @synthesize tableLock=_tableLock;
- (void).cxx_destruct;
- (void)inTransaction:(CDUnknownBlockType)arg1;
- (void)inDatabase:(CDUnknownBlockType)arg1;
- (id)initWithPath:(id)arg1 key:(id)arg2;
- (_Bool)column:(id)arg1 existsInTable:(id)arg2;
- (id)sqliteTypeForColumnStorageType:(int)arg1;
- (void)refactorTableFromEntityDefinition:(id)arg1 forTable:(id)arg2 ORMClass:(Class)arg3;
- (void)addEntityRelation:(id)arg1;
- (id)entityRelations;
- (id)fieldsForTable:(id)arg1;
- (id)tableSchemas;
- (id)fetchSchemas;
- (void)generateIndexes:(id)arg1 forTable:(id)arg2;
- (id)entityRelationForProperty:(id)arg1 inClass:(Class)arg2;
- (id)entityRelationsForClass:(Class)arg1;

@end

