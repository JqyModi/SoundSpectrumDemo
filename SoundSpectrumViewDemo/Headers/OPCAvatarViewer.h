//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, UIImage, UIImageView, UIScrollView;

@interface OPCAvatarViewer : UIViewController <UIScrollViewDelegate>
{
    float targetX;
    float targetY;
    float targetWidth;
    float targetHeight;
    _Bool _viewDidAppear;
    NSString *_avatarURL;
    UIImage *_defaultImage;
    UIScrollView *_scrollView;
    UIImageView *_photoImageView;
    struct CGRect _avatarFrameToAnimation;
}

@property(nonatomic) _Bool viewDidAppear; // @synthesize viewDidAppear=_viewDidAppear;
@property(retain, nonatomic) UIImageView *photoImageView; // @synthesize photoImageView=_photoImageView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) struct CGRect avatarFrameToAnimation; // @synthesize avatarFrameToAnimation=_avatarFrameToAnimation;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(copy, nonatomic) NSString *avatarURL; // @synthesize avatarURL=_avatarURL;
- (void).cxx_destruct;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (struct CGRect)zoomRectForScale:(float)arg1 withCenter:(struct CGPoint)arg2;
- (void)doubleTapEvent:(id)arg1;
- (void)oneTapEvent;
- (void)zoomPhotoToScreen;
- (void)showPhoto;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)prefersStatusBarHidden;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

