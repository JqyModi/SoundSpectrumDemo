//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface OPRSoundResInfo : NSObject <NSCoding>
{
    _Bool _cutAll;
    unsigned long long _type;
    NSString *_resId;
    NSString *_level;
    NSString *_kindId;
    NSString *_kind;
    NSString *_name;
    NSString *_fileName;
    NSString *_filePath;
}

@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(nonatomic) _Bool cutAll; // @synthesize cutAll=_cutAll;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(retain, nonatomic) NSString *kindId; // @synthesize kindId=_kindId;
@property(retain, nonatomic) NSString *level; // @synthesize level=_level;
@property(retain, nonatomic) NSString *resId; // @synthesize resId=_resId;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *resTypeId;
@property(readonly, nonatomic) NSString *identify;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

