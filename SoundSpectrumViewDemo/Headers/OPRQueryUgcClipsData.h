//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface OPRQueryUgcClipsData : NSObject
{
    NSString *_authorId;
    NSString *_method;
    NSNumber *_size;
    NSString *_cursor;
    NSArray *_types;
}

@property(retain, nonatomic) NSArray *types; // @synthesize types=_types;
@property(copy, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
@property(retain, nonatomic) NSNumber *size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *method; // @synthesize method=_method;
@property(copy, nonatomic) NSString *authorId; // @synthesize authorId=_authorId;
- (void).cxx_destruct;
- (id)initWithAuthorId:(id)arg1 size:(long long)arg2 cursor:(id)arg3 next:(_Bool)arg4 isEnsemble:(_Bool)arg5;

@end

