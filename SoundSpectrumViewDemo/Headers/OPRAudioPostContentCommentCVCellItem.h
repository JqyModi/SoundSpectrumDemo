//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, OPRCommentListItem;

@interface OPRAudioPostContentCommentCVCellItem : NSObject
{
    NSNumber *_viewHeight;
    OPRCommentListItem *_commentListItem;
    NSString *_commentUserId;
}

@property(copy, nonatomic) NSString *commentUserId; // @synthesize commentUserId=_commentUserId;
@property(retain, nonatomic) OPRCommentListItem *commentListItem; // @synthesize commentListItem=_commentListItem;
@property(retain, nonatomic) NSNumber *viewHeight; // @synthesize viewHeight=_viewHeight;
- (void).cxx_destruct;

@end
