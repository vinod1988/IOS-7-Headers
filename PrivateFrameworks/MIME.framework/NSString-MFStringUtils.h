/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSString.h"

@interface NSString (MFStringUtils)
+ (id)mf_stringWithData:(id)arg1 encoding:(unsigned int)arg2;
- (id)mf_copyStringByEncodingIDNA;
- (id)mf_copyStringByDecodingIDNA;
- (id)mf_copyStringByEncodingIDNAInRange:(struct _NSRange)arg1;
- (id)mf_copyStringByDecodingIDNAInRange:(struct _NSRange)arg1;
- (id)mf_messageIDSubstring;
- (id)mf_MD5Digest;
- (id)mf_dataUsingEncoding:(unsigned int)arg1 allowLossyConversion:(BOOL)arg2;
- (id)mf_dataUsingEncoding:(unsigned int)arg1;
- (int)mf_caseInsensitiveCompareExcludingXDash:(id)arg1;
- (const void *)mf_lossyDefaultCStringBytes;
@end
