//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage;

@interface ThumbnailImage : NSObject
{
    _Bool _isNightMode;
    _Bool _isPortrait;
    _Bool _isHomePage;
    _Bool _isExtend;
    UIImage *_image;
    struct CGRect _validRect;
}

+ (id)thumbnailImage:(id)arg1 withNightMode:(_Bool)arg2 andPortrait:(_Bool)arg3 andHomePage:(_Bool)arg4 andExtend:(_Bool)arg5;
@property(nonatomic) struct CGRect validRect; // @synthesize validRect=_validRect;
@property(nonatomic) _Bool isExtend; // @synthesize isExtend=_isExtend;
@property(nonatomic) _Bool isHomePage; // @synthesize isHomePage=_isHomePage;
@property(nonatomic) _Bool isPortrait; // @synthesize isPortrait=_isPortrait;
@property(nonatomic) _Bool isNightMode; // @synthesize isNightMode=_isNightMode;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)dealloc;
- (id)initWithImage:(id)arg1 withNightMode:(_Bool)arg2 andPortrait:(_Bool)arg3 andHomePage:(_Bool)arg4 andExtend:(_Bool)arg5;

@end
