//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AFCMSResourceDataBase.h"

@class NSArray;

@interface OPCMSResourceImpl : AFCMSResourceDataBase
{
    NSArray *_kvList;
}

+ (void)addSubResourceGetHandler:(id)arg1;
@property(retain, nonatomic) NSArray *kvList; // @synthesize kvList=_kvList;
- (void).cxx_destruct;
- (id)imageResourceWithKey:(id)arg1;
- (id)subResourceDataWithKey:(id)arg1;
- (void)fillBizData:(id)arg1;

@end

