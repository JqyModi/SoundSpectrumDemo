//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface OrangeIndexNamespaceModel : NSObject
{
    NSString *_loadLevel;
    NSString *_md5;
    NSString *_name;
    NSString *_resourceId;
    NSString *_type;
    NSString *_version;
    NSNumber *_highLazy;
    NSArray *_candidates;
}

@property(retain, nonatomic) NSArray *candidates; // @synthesize candidates=_candidates;
@property(retain, nonatomic) NSNumber *highLazy; // @synthesize highLazy=_highLazy;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *resourceId; // @synthesize resourceId=_resourceId;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *loadLevel; // @synthesize loadLevel=_loadLevel;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg1;

@end
