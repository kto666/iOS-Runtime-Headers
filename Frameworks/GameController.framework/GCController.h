/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@class <GCNamedProfile>, GCExtendedGamepad, GCGamepad, NSString;

@interface GCController : NSObject {
}

@property(getter=isAttachedToDevice,readonly) BOOL attachedToDevice;
@property(copy) id controllerPausedHandler;
@property(readonly) struct __IOHIDDevice { }* deviceRef;
@property(readonly) GCExtendedGamepad * extendedGamepad;
@property(readonly) GCGamepad * gamepad;
@property int playerIndex;
@property(retain) <GCNamedProfile> * profile;
@property(readonly) unsigned int service;
@property(readonly) NSString * vendorName;

+ (void)__open__;
+ (void)__setLogger__:(id)arg1;
+ (id)controllers;
+ (void)startWirelessControllerDiscoveryWithCompletionHandler:(id)arg1;
+ (void)stopWirelessControllerDiscovery;

- (id)controllerPausedHandler;
- (struct __IOHIDDevice { }*)deviceRef;
- (id)extendedGamepad;
- (id)gamepad;
- (BOOL)isAttachedToDevice;
- (int)playerIndex;
- (id)profile;
- (unsigned int)service;
- (void)setControllerPausedHandler:(id)arg1;
- (void)setPlayerIndex:(int)arg1;
- (void)setProfile:(id)arg1;
- (id)vendorName;

@end
