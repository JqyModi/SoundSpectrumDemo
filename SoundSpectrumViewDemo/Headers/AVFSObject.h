//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVFSObjectContext, NSMutableDictionary, NSNumber, NSString;

@interface AVFSObject : NSObject
{
    id cachedPrimaryKeyValue;
    NSString *_curModuleName;
    NSString *_curEntityName;
    _Bool _exist;
    _Bool _markForDeletion;
    NSMutableDictionary *_fieldData;
    NSMutableDictionary *_changedValues;
    NSMutableDictionary *_relationEntities;
    AVFSObjectContext *_context;
}

+ (void)inspectClass:(Class)arg1 accumulateDefinitions:(id)arg2 accumulateRelationships:(id)arg3 accumulateProperties:(id)arg4;
+ (void)clearRecords;
+ (id)query;
+ (void)refactorModule:(id)arg1 entityName:(id)arg2;
+ (void)initialize;
+ (id)uniqueProperties;
+ (id)defaultValuesForEntity;
+ (id)indexesForEntity;
+ (id)moduleForEntity;
+ (id)queryWithModuleName:(id)arg1 entityName:(id)arg2;
+ (_Bool)supportMultiModule;
+ (void)startRefactorModule:(id)arg1 entityName:(id)arg2;
+ (void)injectPropertyTrapsFor:(id)arg1 reader:(CDUnknownFunctionPointerType)arg2 writer:(CDUnknownFunctionPointerType)arg3 typeEncoding:(const char *)arg4;
+ (void)injectPropertyTrapsFor:(id)arg1;
+ (int)getEntityPropertyType:(id)arg1;
+ (_Bool)isTypeAPrimitive:(int)arg1;
+ (int)getStorageType:(int)arg1;
@property(retain, nonatomic) AVFSObjectContext *context; // @synthesize context=_context;
@property(nonatomic) _Bool markForDeletion; // @synthesize markForDeletion=_markForDeletion;
@property(nonatomic) _Bool exist; // @synthesize exist=_exist;
@property(retain, nonatomic) NSMutableDictionary *relationEntities; // @synthesize relationEntities=_relationEntities;
@property(retain, nonatomic) NSMutableDictionary *changedValues; // @synthesize changedValues=_changedValues;
@property(retain, nonatomic) NSMutableDictionary *fieldData; // @synthesize fieldData=_fieldData;
- (void).cxx_destruct;
- (void)rebase;
- (id)getField:(id)arg1;
- (void)setField:(id)arg1 value:(id)arg2;
@property(retain, nonatomic) NSNumber *Id;
- (id)fieldNames;
- (_Bool)remove;
- (_Bool)save;
- (id)initWithPrimaryKeyValue:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)init;
- (void)startInitEntity;
- (id)entityQuery;
- (id)entityName;
- (id)moduleName;
- (id)initWithModuleName:(id)arg1 entityName:(id)arg2 needRefactor:(_Bool)arg3;
- (id)initWithModuleName:(id)arg1 entityName:(id)arg2;
- (_Bool)commitWithChain:(id)arg1;
- (_Bool)removeRaw;
- (id)propertyNameFromSelector:(SEL)arg1;

@end

