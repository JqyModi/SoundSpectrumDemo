//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OPCSubscriptionButton.h"

@interface OPRChordPlaybackUserFollowBtn : OPCSubscriptionButton
{
    _Bool _hideTitle;
}

@property(nonatomic) _Bool hideTitle; // @synthesize hideTitle=_hideTitle;
- (struct CGSize)folowButtonSize;
- (id)followedImage;
- (id)followedTitle;
- (void)onClick;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateSelfView;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withUserProfile:(id)arg2;

@end
