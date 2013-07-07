/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface UIKeyboardInputManagerClient : NSObject
{
    NSXPCConnection *_connection;
}

+ (BOOL)instancesRespondToSelector:(SEL)arg1;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)handleError:(id)arg1 forRequest:(id)arg2;
- (void)handleRequest:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)init;
- (void)dealloc;

@end
