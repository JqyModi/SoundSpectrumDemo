//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface AVFSQuery : NSObject
{
    _Bool _supportMulti;
    int _limitOf;
    int _offsetFrom;
    int _batchSize;
    int _queryType;
    NSArray *_parameters;
    NSString *_whereClause;
    NSString *_orderBy;
    NSString *_sumFieldName;
    NSString *_distinctFieldName;
    Class _classDecl;
    NSString *_moduleName;
    NSString *_entityName;
}

@property _Bool supportMulti; // @synthesize supportMulti=_supportMulti;
@property(retain) NSString *entityName; // @synthesize entityName=_entityName;
@property(retain) NSString *moduleName; // @synthesize moduleName=_moduleName;
@property(retain) Class classDecl; // @synthesize classDecl=_classDecl;
@property(retain) NSString *distinctFieldName; // @synthesize distinctFieldName=_distinctFieldName;
@property(retain) NSString *sumFieldName; // @synthesize sumFieldName=_sumFieldName;
@property int queryType; // @synthesize queryType=_queryType;
@property int batchSize; // @synthesize batchSize=_batchSize;
@property int offsetFrom; // @synthesize offsetFrom=_offsetFrom;
@property int limitOf; // @synthesize limitOf=_limitOf;
@property(retain) NSString *orderBy; // @synthesize orderBy=_orderBy;
@property(retain) NSString *whereClause; // @synthesize whereClause=_whereClause;
@property(retain) NSArray *parameters; // @synthesize parameters=_parameters;
- (void).cxx_destruct;
- (id)paramatiseQueryString:(id)arg1;
- (id)performQueryWithRowBlock:(CDUnknownBlockType)arg1;
- (id)distinct:(id)arg1;
- (double)sum:(id)arg1;
- (unsigned long long)count;
- (void)asyncFetch:(CDUnknownBlockType)arg1;
- (id)fetchIntoContext:(id)arg1;
- (id)fetch;
- (id)groupBy:(id)arg1;
- (id)offset:(int)arg1;
- (id)orderOn:(id)arg1 by:(unsigned long long)arg2;
- (id)limit:(int)arg1;
- (id)whereWithFormat:(id)arg1 withParams:(id)arg2;
- (id)whereWithFormat:(id)arg1;
- (id)where:(id)arg1;
- (id)setEntityClass:(Class)arg1 moduleName:(id)arg2 entityName:(id)arg3;
- (id)setEntityClass:(Class)arg1;
- (id)init;

@end

