/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <CoreData/NSStoreMapping.h>

@class NSKnownKeysDictionary, NSManagedObjectModel, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLModel : NSStoreMapping
{
    NSString *_configuration;
    NSManagedObjectModel *_mom;
    NSKnownKeysDictionary *_entitiesByName;
    NSMutableArray *_entities;
    id *_entityDescriptionToSQLMap;
    unsigned int _brokenHashVersion;
    BOOL _retainLeopardStyleDictionaries;
    BOOL _modelHasPrecomputedKeyOrder;
    BOOL _hasVirtualToOnes;
}

- (void)_recordHasVirtualToOnes;
- (id)_precomputedKeyOrderForEntity:(id)arg1;
- (BOOL)_modelHasPrecomputedKeyOrder;
- (BOOL)_retainHashHack;
- (BOOL)_useSnowLeopardStyleHashing;
- (BOOL)_useLeopardStyleHashing;
- (void)_addIndexedEntity:(id)arg1;
- (id)entityForID:(unsigned long)arg1;
- (id)entitiesByName;
- (id)entities;
- (unsigned long)entityIDForName:(id)arg1;
- (id)_sqlEntityWithRenamingIdentifier:(id)arg1;
- (id)entityNamed:(id)arg1;
- (id)_entityMapping;
- (BOOL)_generateModel:(id)arg1 error:(id *)arg2;
- (id)managedObjectModel;
- (id)configurationName;
- (void)finalize;
- (void)dealloc;
- (id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 brokenHashVersion:(unsigned int)arg3;
- (id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 retainHashHack:(BOOL)arg3;
- (id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2;
- (id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 retainHashHack:(BOOL)arg3 brokenHashVersion:(unsigned int)arg4;

@end
