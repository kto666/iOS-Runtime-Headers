/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAMPSetQueueQueueOrder : AceObject <SAAceSerializable> {
}

@property BOOL descending;
@property(copy) NSString * mediaItemProperty;

+ (id)setQueueQueueOrder;
+ (id)setQueueQueueOrderWithDictionary:(id)arg1 context:(id)arg2;

- (BOOL)descending;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)mediaItemProperty;
- (void)setDescending:(BOOL)arg1;
- (void)setMediaItemProperty:(id)arg1;

@end