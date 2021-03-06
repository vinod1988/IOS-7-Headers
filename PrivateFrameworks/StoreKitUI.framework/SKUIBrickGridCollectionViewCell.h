/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UICollectionViewCell.h"

@class NSString, SKUITextBoxView, UIImage, UIImageView;

@interface SKUIBrickGridCollectionViewCell : UICollectionViewCell
{
    NSString *_accessibilityLabel;
    UIImageView *_brickImageView;
    struct UIEdgeInsets _contentInsets;
    SKUITextBoxView *_editorialView;
}

@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)setColoringWithColorScheme:(id)arg1;
@property(retain, nonatomic) UIImage *brickImage;
- (void)applyEditorialLayout:(id)arg1 orientation:(int)arg2;

@end

