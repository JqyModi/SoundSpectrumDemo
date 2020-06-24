//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@interface OPROnlineuserCollectionViewLayout : UICollectionViewFlowLayout
{
    _Bool _scrollAnimation;
    double _miniLineSpace;
    double _miniInterItemSpace;
    struct CGPoint _lastOffset;
    struct CGSize _eachItemSize;
    struct UIEdgeInsets _sectionInsets;
}

@property(nonatomic) _Bool scrollAnimation; // @synthesize scrollAnimation=_scrollAnimation;
@property(nonatomic) struct CGSize eachItemSize; // @synthesize eachItemSize=_eachItemSize;
@property(nonatomic) double miniInterItemSpace; // @synthesize miniInterItemSpace=_miniInterItemSpace;
@property(nonatomic) double miniLineSpace; // @synthesize miniLineSpace=_miniLineSpace;
@property(nonatomic) struct UIEdgeInsets sectionInsets; // @synthesize sectionInsets=_sectionInsets;
@property(nonatomic) struct CGPoint lastOffset; // @synthesize lastOffset=_lastOffset;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)getCopyOfAttributes:(id)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
@property(readonly, nonatomic) double stepSpace;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (void)prepareLayout;
- (id)init;
- (id)initWithSectionInset:(struct UIEdgeInsets)arg1 andMiniLineSapce:(double)arg2 andMiniInterItemSpace:(double)arg3 andItemSize:(struct CGSize)arg4 andScrollAnimation:(_Bool)arg5;
- (id)initWithItemSize:(struct CGSize)arg1;

@end
