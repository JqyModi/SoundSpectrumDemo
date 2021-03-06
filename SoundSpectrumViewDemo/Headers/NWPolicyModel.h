//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NWCoding.h"

#import "NSCopying-Protocol.h"

@class NSMutableDictionary, NSString;

@interface NWPolicyModel : NWCoding <NSCopying>
{
    _Bool _updated;
    NSMutableDictionary *_policies;
    NSMutableDictionary *_ipv6BlackList;
    NSString *_netType;
    double _lastModificationTime;
}

+ (void)eliminateStrategy:(id)arg1 maxNum:(int)arg2;
@property(readonly, nonatomic) _Bool updated; // @synthesize updated=_updated;
@property(nonatomic) double lastModificationTime; // @synthesize lastModificationTime=_lastModificationTime;
@property(readonly, nonatomic) NSString *netType; // @synthesize netType=_netType;
@property(readonly, nonatomic) NSMutableDictionary *ipv6BlackList; // @synthesize ipv6BlackList=_ipv6BlackList;
@property(readonly, nonatomic) NSMutableDictionary *policies; // @synthesize policies=_policies;
- (void).cxx_destruct;
- (id)description;
- (void)copyForSerializationFromObject:(id)arg1;
- (void)addIPv6BlackList:(id)arg1;
- (_Bool)isIPv6BlackListIncluded:(id)arg1 withTTL:(long long)arg2;
- (int)containsHostPolicy:(id)arg1;
- (void)removeAll;
- (void)updatePoliciesTTL:(double)arg1 forHost:(id)arg2;
- (unsigned long long)removeExpiredPolicies:(long long)arg1;
- (void)eliminateStrategy;
- (void)addPolicyGroup:(id)arg1;
- (id)searchPolicyGroupWithHost:(id)arg1;
- (id)currentHostScheme:(id)arg1;
- (id)currentHostCname:(id)arg1;
- (void)updatePoliciesWithOrigin:(id)arg1;
- (void)updatePolicy:(id)arg1 withStatus:(_Bool)arg2;
- (_Bool)validateIPstack:(int)arg1 forPolicy:(id)arg2;
- (id)searchPoliciesWithHost:(id)arg1 withScheme:(id)arg2 withType:(int)arg3 withResult:(int *)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNetType:(id)arg1;

@end

