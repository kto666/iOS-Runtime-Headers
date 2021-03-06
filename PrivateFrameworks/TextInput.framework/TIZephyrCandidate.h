/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIZephyrCandidate : TIKeyboardCandidateSingle {
    BOOL _isFromPhraseDictionary;
    BOOL _isFromTextChecker;
    unsigned int _usageTrackingMask;
    unsigned int _wordOriginFeedbackID;
    BOOL extensionCandidate;
}

@property(getter=isExtensionCandidate) BOOL extensionCandidate;
@property BOOL isFromPhraseDictionary;
@property BOOL isFromTextChecker;

+ (BOOL)supportsSecureCoding;
+ (int)type;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned int)arg3 usageTrackingMask:(unsigned int)arg4;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned int)arg3;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isAutocorrection;
- (BOOL)isExtensionCandidate;
- (BOOL)isFromPhraseDictionary;
- (BOOL)isFromTextChecker;
- (void)setExtensionCandidate:(BOOL)arg1;
- (void)setIsFromPhraseDictionary:(BOOL)arg1;
- (void)setIsFromTextChecker:(BOOL)arg1;
- (unsigned int)usageTrackingMask;
- (unsigned int)wordOriginFeedbackID;

@end
