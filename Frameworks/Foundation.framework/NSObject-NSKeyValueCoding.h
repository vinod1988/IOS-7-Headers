/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface NSObject (NSKeyValueCoding)
+ (id)_createMutableArrayValueGetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (BOOL)accessInstanceVariablesDirectly;
- (void)setValuesForKeysWithDictionary:(id)arg1;
- (id)dictionaryWithValuesForKeys:(id)arg1;
- (void)setNilValueForKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)mutableSetValueForKeyPath:(id)arg1;
- (id)mutableOrderedSetValueForKeyPath:(id)arg1;
- (id)mutableArrayValueForKeyPath:(id)arg1;
- (BOOL)validateValue:(inout id *)arg1 forKeyPath:(id)arg2 error:(out id *)arg3;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)valueForKeyPath:(id)arg1;
- (id)mutableSetValueForKey:(id)arg1;
- (id)mutableOrderedSetValueForKey:(id)arg1;
- (id)mutableArrayValueForKey:(id)arg1;
- (BOOL)validateValue:(inout id *)arg1 forKey:(id)arg2 error:(out id *)arg3;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
@end
