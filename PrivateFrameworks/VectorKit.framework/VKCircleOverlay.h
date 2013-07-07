/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "VKOverlay.h"

@class GEOMapRegion;

__attribute__((visibility("hidden")))
@interface VKCircleOverlay : NSObject <VKOverlay>
{
    CDStruct_2c43369c _coordinate;
    GEOMapRegion *_boundingMapRegion;
    double _radius;
}

+ (id)circleWithCenterCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2;
@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property(readonly, nonatomic) GEOMapRegion *boundingMapRegion; // @synthesize boundingMapRegion=_boundingMapRegion;
- (id).cxx_construct;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate=_coordinate;
- (void)dealloc;
- (id)_initWithCenterCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2;

@end
