//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CAAnimationDelegate-Protocol.h"

@class NSString, UIView;
@protocol OPThrowAnimationDelegate;

@interface OPThrowAnimation : NSObject <CAAnimationDelegate>
{
    id <OPThrowAnimationDelegate> _delegate;
    UIView *_showingView;
}

+ (id)sharedAnimation;
@property(retain, nonatomic) UIView *showingView; // @synthesize showingView=_showingView;
@property(nonatomic) __weak id <OPThrowAnimationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)groupAnimation:(id)arg1 endScale:(double)arg2 isRotation:(_Bool)arg3 animationDuration:(double)arg4;
- (void)groupAnimation:(id)arg1 isRotation:(_Bool)arg2 endScale:(double)arg3;
- (void)groupAnimation:(id)arg1;
- (void)throwObject:(id)arg1 path:(id)arg2 isRotation:(_Bool)arg3 endScale:(double)arg4;
- (void)throwObject:(id)arg1 from:(struct CGPoint)arg2 to:(struct CGPoint)arg3 endScale:(double)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

