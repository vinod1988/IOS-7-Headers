/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSProgressPublisher.h"

@class NSFileAccessNode, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface NSProgressPublisherProxy : NSObject <NSProgressPublisher>
{
    id <NSProgressPublisher> _forwarder;
    id _publisherID;
    NSString *_lowerCaseAppBundleID;
    NSMutableSet *_lowerCaseBundleIDsOfUnacknowledgedApps;
    NSString *_lowerCaseCategoryName;
    BOOL _isGeneral;
    NSFileAccessNode *_itemLocation;
}

@property NSFileAccessNode *itemLocation; // @synthesize itemLocation=_itemLocation;
@property BOOL isGeneral; // @synthesize isGeneral=_isGeneral;
@property(copy) NSString *category; // @synthesize category=_lowerCaseCategoryName;
- (id)description;
- (id)descriptionWithIndenting:(id)arg1;
- (oneway void)appWithBundleID:(id)arg1 didAcknowledgeWithSuccess:(BOOL)arg2;
- (oneway void)prioritize;
- (oneway void)pause;
- (oneway void)cancel;
- (oneway void)stopProvidingValues;
- (oneway void)startProvidingValuesWithInitialAcceptor:(id)arg1;
- (id)appBundleID;
- (id)publisherID;
- (void)dealloc;
- (id)initWithForwarder:(id)arg1 publisherID:(id)arg2 appBundleID:(id)arg3 acknowledgementAppBundleIDs:(id)arg4;

@end

