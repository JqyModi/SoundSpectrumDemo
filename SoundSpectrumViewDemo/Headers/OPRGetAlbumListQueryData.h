//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface OPRGetAlbumListQueryData : NSObject
{
    NSNumber *_size;
    NSString *_method;
    NSString *_cursor;
    NSString *_withFav;
    NSString *_entryType;
}

@property(copy, nonatomic) NSString *entryType; // @synthesize entryType=_entryType;
@property(copy, nonatomic) NSString *withFav; // @synthesize withFav=_withFav;
@property(copy, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
@property(copy, nonatomic) NSString *method; // @synthesize method=_method;
@property(copy, nonatomic) NSNumber *size; // @synthesize size=_size;
- (void).cxx_destruct;
- (id)initWithIsHot:(_Bool)arg1 withSize:(long long)arg2 withCursor:(id)arg3 withNext:(_Bool)arg4;

@end

