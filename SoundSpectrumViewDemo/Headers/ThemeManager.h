//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ThemeManager : NSObject
{
    unsigned long long _currentState;
}

+ (id)sharedManager;
@property(nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
- (void)switchToThemeState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (_Bool)isNightMode;
- (void)setupTheme;
- (id)init;

@end

