/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Foundation/NSValue.h>

__attribute__((visibility("hidden")))
@interface NSWeakPointerValue : NSValue
{
    void *_value;
    void *_weakValue;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)nonretainedObjectValue;
- (void)getValue:(void *)arg1;
- (const char *)objCType;
- (unsigned int)hash;
- (BOOL)isEqualToValue:(id)arg1;
- (id)initWithPointer:(void *)arg1;

@end

