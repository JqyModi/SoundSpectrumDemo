//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (URLAdditions)
+ (id)handleUrlStringForIPV6Environment:(id)arg1;
+ (_Bool)Url:(id)arg1 equalOtherURLWithoutParams:(id)arg2;
- (id)stringByAppendingPrefixIfNeed;
- (_Bool)isPhoneUrl;
- (_Bool)isBookStoreLink;
- (_Bool)hasBookStorePrefix;
- (_Bool)isAppStoreLink;
- (_Bool)isAppStoreURLPrefix;
- (id)urlWithNewHost:(id)arg1;
- (id)stringByDeletingAllQuerys;
- (id)stringByDeletingQueryForKeys:(id)arg1;
- (id)stringByReplacingQueryValue:(id)arg1 forKey:(id)arg2;
- (id)stringByDeletingQuerys;
- (id)stringByDeletingQuery:(id)arg1;
- (id)stringByAppendingQuerys:(id)arg1 shouldEncode:(_Bool)arg2;
- (id)stringByAppendingQuerys:(id)arg1;
- (id)stringByAppendingQueryValue:(id)arg1 forKey:(id)arg2;
- (id)host;
- (id)queryString;
- (id)queryValueForKey:(id)arg1 decodedValue:(_Bool)arg2;
- (id)queryValueForKey:(id)arg1;
- (id)queryComponents:(_Bool)arg1;
- (id)queryComponents;
- (id)dictionaryFromQueryComponents;
- (id)substringToChar:(id)arg1;
- (id)trimBlankSpacePrefixAndSuffix;
- (_Bool)isContainStrOfStrList:(id)arg1;
- (_Bool)isPunyStrRegularPattern;
- (_Bool)isEngStrRegularPattern;
- (_Bool)isIPRegularPattern;
- (_Bool)isRegularPattern:(id)arg1;
- (_Bool)isValidRegularUrl;
- (_Bool)isValidIPAddress;
- (id)TLDSet;
- (_Bool)isValidUrl;
- (id)trimInvisibleCharacters;
@end

