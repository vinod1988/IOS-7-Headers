/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/UIView.h>

#import "_UISiriWaveyViewDelegate.h"

@class UIButton, UIKeyboardDicationBackground, _UISiriWaveyView;

__attribute__((visibility("hidden")))
@interface UIDictationView : UIView <_UISiriWaveyViewDelegate>
{
    UIKeyboardDicationBackground *_background;
    UIButton *_endpointButton;
    UIButton *_endpointButtonLandscape;
    UIButton *_waveTapEndpointButton;
    int _state;
    BOOL _keyboardInTransition;
    BOOL _automaticAppearanceWasEnabled;
    _UISiriWaveyView *_waveyView;
}

+ (struct CGSize)layoutSize;
+ (id)activeInstance;
+ (id)sharedInstance;
+ (struct CGSize)viewSize;
+ (Class)dictationViewClass;
- (float)audioLevelForWaveyView:(id)arg1;
- (BOOL)visible;
- (void)endpointButtonPressed;
- (void)dealloc;
- (void)layoutSubviews;
- (BOOL)drawsOwnBackground;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setState:(int)arg1;
- (void)returnToKeyboard;
- (void)finishReturnToKeyboard;
- (void)prepareForReturnToKeyboard;
- (void)keyboardDidShow:(id)arg1;
- (struct CGPoint)backgroundOffset;
- (struct CGPoint)contentOffset;
- (struct CGPoint)positionForShow;
- (void)show;
- (void)applicationEnteredBackground;
- (struct CGSize)currentScreenSize;
- (id)createEndpointButtonWithRect:(struct CGRect)arg1 action:(SEL)arg2;
- (id)endpointButton;
- (id)endpointButtonImageWithRect:(struct CGRect)arg1 pressed:(BOOL)arg2;

@end
