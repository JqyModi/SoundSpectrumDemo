//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (UCAFExpands)
+ (id)ucaf_parseQueryString:(id)arg1;
- (id)ucaf_urlWithoutQuery;
- (_Bool)ucaf_isQueryExist;
- (id)ucaf_urlWithoutFragment;
- (_Bool)ucaf_isFragementExist;
- (id)ucaf_querysDict;
- (id)ucaf_urlByDeleteParametersEx:(id)arg1;
- (id)ucaf_urlByUpdateParametersEx:(id)arg1;
- (id)ucaf_urlByDeleteParameters:(id)arg1;
- (id)ucaf_urlByUpdateParameters:(id)arg1;
- (id)concatenateQueryString:(id)arg1;
- (id)ucaf_urlByAppendingParameters:(id)arg1;
- (id)ucaf_urlStringByDeletingQueryString;
- (id)getPassword:(id)arg1;
- (id)getUsername:(id)arg1;
- (id)getFragment:(id)arg1;
- (id)getQuery:(id)arg1;
- (id)getParamString:(id)arg1;
- (id)getPath:(id)arg1;
- (id)getPort:(id)arg1;
@end
