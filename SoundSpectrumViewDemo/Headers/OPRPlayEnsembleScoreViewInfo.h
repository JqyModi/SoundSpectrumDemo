//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, UILabel;

@interface OPRPlayEnsembleScoreViewInfo : NSObject
{
    NSString *_playerIconURL;
    NSString *_leadingSingerIconURL;
    NSNumber *_score;
    UILabel *_scoreLabel;
}

@property(nonatomic) __weak UILabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(retain, nonatomic) NSNumber *score; // @synthesize score=_score;
@property(copy, nonatomic) NSString *leadingSingerIconURL; // @synthesize leadingSingerIconURL=_leadingSingerIconURL;
@property(copy, nonatomic) NSString *playerIconURL; // @synthesize playerIconURL=_playerIconURL;
- (void).cxx_destruct;

@end
