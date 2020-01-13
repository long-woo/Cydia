/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <FTServices/FTFaceTimeMessage.h>
#import <FTServices/NSCopying.h>
#import <FTServices/FTServices-Structs.h>

@class NSNumber, NSData, NSString;

@interface FTRejectMessage : FTFaceTimeMessage <NSCopying> {
	NSData *_selfPushToken;	// 4 = 0x4
	NSData *_peerPushToken;	// 8 = 0x8
	NSString *_peerID;	// 12 = 0xc
	NSNumber *_reason;	// 16 = 0x10
}
@property(copy) NSNumber *reason;	// G=0x422d; S=0x4241; @synthesize=_reason
@property(copy) NSString *peerID;	// G=0x41f5; S=0x4209; @synthesize=_peerID
@property(copy) NSData *selfPushToken;	// G=0x4185; S=0x4199; @synthesize=_selfPushToken
@property(copy) NSData *peerPushToken;	// G=0x41bd; S=0x41d1; @synthesize=_peerPushToken
// declared property setter: - (void)setReason:(id)reason;	// 0x4241
// declared property getter: - (id)reason;	// 0x422d
// declared property setter: - (void)setPeerID:(id)anId;	// 0x4209
// declared property getter: - (id)peerID;	// 0x41f5
// declared property setter: - (void)setPeerPushToken:(id)token;	// 0x41d1
// declared property getter: - (id)peerPushToken;	// 0x41bd
// declared property setter: - (void)setSelfPushToken:(id)token;	// 0x4199
// declared property getter: - (id)selfPushToken;	// 0x4185
- (id)messageBody;	// 0x3f11
- (id)requiredKeys;	// 0x3e6d
- (id)bagKey;	// 0x3e61
- (void)dealloc;	// 0x3dd9
- (id)copyWithZone:(NSZone *)zone;	// 0x3dad
@end