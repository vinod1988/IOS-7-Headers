/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableDictionary;

@interface TRAuthorizedDeviceManager : NSObject
{
    NSMutableDictionary *_authorizationList;
}

+ (id)_deviceIdentifierForData:(id)arg1;
+ (id)_dataForDeviceIdentifier:(id)arg1;
+ (id)currentDeviceIdentifier;
+ (id)sharedDeviceManager;
- (void).cxx_destruct;
- (id)_deviceAuthorizationFilePath;
- (id)_deviceAuthorizationDirectory;
- (BOOL)removeDeviceWithIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)isAuthorizedDeviceWithIdentifier:(id)arg1;
- (id)deviceNameForIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *deviceIdentifiers;
- (BOOL)addDeviceWithIdentifier:(id)arg1 forDeviceName:(id)arg2 error:(id *)arg3;
- (id)init;

@end

