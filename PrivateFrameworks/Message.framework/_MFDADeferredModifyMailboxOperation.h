/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Message/MFOfflineCacheOperation.h>

#import "MFDADeferredFolderChangeOperation.h"

@class NSString;

@interface _MFDADeferredModifyMailboxOperation : MFOfflineCacheOperation <MFDADeferredFolderChangeOperation>
{
    NSString *_folderID;
    NSString *_newParentFolderID;
    NSString *_newDisplayName;
}

- (id)description;
- (id)folderChangeResult;
- (void)applyToFolderMap:(id)arg1;
- (BOOL)performWithAccount:(id)arg1 offlineCache:(id)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFolderID:(id)arg1 newParentFolderID:(id)arg2 newDisplayName:(id)arg3;

@end

