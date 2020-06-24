//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import "OPRRoomQucikResponseCollectionViewCellDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSString;
@protocol OPRRoomQuickResponseCollectionViewControllerDelegate;

@interface OPRRoomQuickResponseCollectionViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout, OPRRoomQucikResponseCollectionViewCellDelegate>
{
    id <OPRRoomQuickResponseCollectionViewControllerDelegate> _delegate;
    NSArray *_comments;
}

@property(retain, nonatomic) NSArray *comments; // @synthesize comments=_comments;
@property(nonatomic) __weak id <OPRRoomQuickResponseCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)commentDidClick:(id)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)viewDidLoad;
- (id)initWithCollectionViewLayout:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

