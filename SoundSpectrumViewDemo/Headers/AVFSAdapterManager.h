//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AVFSAdapterManager : NSObject
{
    NSMutableDictionary *_classDict;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableDictionary *classDict; // @synthesize classDict=_classDict;
- (void).cxx_destruct;
- (Class)adapterImpClassForProtocol:(id)arg1;
- (void)injectImpWithClass:(Class)arg1 forProtocol:(id)arg2;
- (id)init;

@end

