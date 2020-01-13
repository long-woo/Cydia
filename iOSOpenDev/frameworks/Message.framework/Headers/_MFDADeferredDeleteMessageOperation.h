/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/MFDAOfflineCacheOperation.h>
#import <Message/MFOfflineCacheOperation.h>

@class NSString;

@interface _MFDADeferredDeleteMessageOperation : MFOfflineCacheOperation <MFDAOfflineCacheOperation> {
	NSString *_messageID;	// 12 = 0xc
}
- (id)initWithDeleteMessageRequest:(id)deleteMessageRequest;	// 0x66319
- (id)initWithCoder:(id)coder;	// 0x66269
- (void)encodeWithCoder:(id)coder;	// 0x661f5
- (void)dealloc;	// 0x661a9
- (BOOL)performWithAccount:(id)account offlineCache:(id)cache;	// 0x66019
- (id)description;	// 0x65fad
@end