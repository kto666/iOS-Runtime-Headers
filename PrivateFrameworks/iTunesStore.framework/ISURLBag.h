/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSArray, NSDictionary;



@interface ISURLBag : NSObject 
{
    NSDictionary *_dictionary;
    NSDictionary *_headerPatterns;
    double _invalidationTime;
    NSArray *_networkConstraints;
}

@property(readonly) NSArray *networkConstraints;
@property(getter=isValid,readonly) BOOL valid;
@property double invalidationTime;

+ (void)invalidateAllBags;
+ (id)urlForKey:(id)arg1 inBagContext:(id)arg2;
+ (BOOL)urlIsTrusted:(id)arg1 inBagContext:(id)arg2;
+ (id)valueForKey:(id)arg1 inBagContext:(id)arg2;
+ (id)urlBagForContext:(id)arg1;
+ (id)copyExtraHeadersForURL:(id)arg1 inBagContext:(id)arg2;
+ (void)setURLBag:(id)arg1 forContext:(id)arg2;
+ (id)networkConstraintsForNetworkType:(NSInteger)arg1 inBagContext:(id)arg2;
+ (id)_copyFallbackContextForContext:(id)arg1;
+ (BOOL)_allowUnsignedBags;

- (id)networkConstraintsForNetworkType:(NSInteger)arg1;
- (NSInteger)minimumNetworkTypeForAssetType:(NSInteger)arg1 fileSize:(long long)arg2;
- (void)setInvalidationTime:(double)arg1;
- (id)initWithRawDictionary:(id)arg1;
- (id)copyExtraHeadersForURL:(id)arg1;
- (BOOL)loadFromDictionary:(id)arg1 returningError:(id*)arg2;
- (id)networkConstraints;
- (id)urlForKey:(id)arg1;
- (BOOL)urlIsTrusted:(id)arg1;
- (id)sanitizedURLForURL:(id)arg1;
- (id)_copyHeaderPatternsFromDictionary:(id)arg1;
- (id)_copyNetworkConstraintsFromDictionary:(id)arg1;
- (BOOL)_loadFromSignedDictionary:(id)arg1 returningError:(id*)arg2;
- (void)_writeURLResolutionCacheFile;
- (double)invalidationTime;
- (BOOL)isValid;
- (id)valueForKey:(id)arg1;
- (id)init;
- (void)dealloc;

@end