/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"

@class EDResources;

__attribute__((visibility("hidden")))
@interface EDBorders : NSObject <NSCopying>
{
    EDResources *mResources;
    unsigned int mLeftBorderIndex;
    unsigned int mRightBorderIndex;
    unsigned int mTopBorderIndex;
    unsigned int mBottomBorderIndex;
    unsigned int mDiagonalBorderIndex;
    unsigned int mVerticalBorderIndex;
    unsigned int mHorizontalBorderIndex;
}

+ (id)bordersWithLeft:(id)arg1 right:(id)arg2 top:(id)arg3 bottom:(id)arg4 diagonal:(id)arg5 vertical:(id)arg6 horizontal:(id)arg7 resources:(id)arg8;
+ (id)bordersWithLeft:(id)arg1 right:(id)arg2 top:(id)arg3 bottom:(id)arg4 diagonal:(id)arg5 resources:(id)arg6;
+ (id)bordersWithResources:(id)arg1;
- (id)horizontalBorder;
- (id)verticalBorder;
- (id)diagonalBorder;
- (id)bottomBorder;
- (id)topBorder;
- (id)rightBorder;
- (id)leftBorder;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToBorders:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResources:(id)arg1;
- (void)setHorizontalBorder:(id)arg1;
- (void)setVerticalBorder:(id)arg1;
- (void)setDiagonalBorder:(id)arg1;
- (void)setBottomBorder:(id)arg1;
- (void)setTopBorder:(id)arg1;
- (void)setRightBorder:(id)arg1;
- (void)setLeftBorder:(id)arg1;

@end
