/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKAnchorContext;

@interface VKMercatorTerrainAnchor : VKMercatorAnchor {
    VKAnchorContext *_anchorContext;
}

- (void)dealloc;
- (BOOL)followsTerrain;
- (id)initWithAnchorContext:(id)arg1 coordinate:(struct { double x1; double x2; })arg2;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;
- (void)setMercatorPoint:(struct { double x1; double x2; double x3; })arg1;
- (struct { double x1; double x2; double x3; })worldPoint;

@end