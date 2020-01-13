/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/XXUnknownSuperclass.h>

@class NSTimer, NSMutableArray;

@interface CKTimedQueue : XXUnknownSuperclass {
	NSTimer *_timer;	// 4 = 0x4
	NSMutableArray *_queue;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
}
@property(assign, nonatomic) id delegate;	// G=0x7d33d; S=0x7d34d; @synthesize=_delegate
- (void)dealloc;	// 0x7d7a9
- (void)clearQueue;	// 0x7d3cd
- (id)dequeueItems;	// 0x7d819
- (void)enqueueItem:(id)item fireDate:(id)date;	// 0x7d435
- (void)_updateFireTimer;	// 0x7d615
- (void)_timerFired;	// 0x7d799
// declared property getter: - (id)delegate;	// 0x7d33d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x7d34d
@end