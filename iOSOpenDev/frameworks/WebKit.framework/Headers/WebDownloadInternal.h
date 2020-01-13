/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <WebKit/NSURLDownloadDelegate.h>
#import <WebKit/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface WebDownloadInternal : XXUnknownSuperclass <NSURLDownloadDelegate> {
@private
	id realDelegate;	// 4 = 0x4
}
- (void)dealloc;	// 0x4426d
- (void)setRealDelegate:(id)delegate;	// 0x43ee9
- (BOOL)respondsToSelector:(SEL)selector;	// 0x44169
- (void)downloadDidBegin:(id)download;	// 0x43f29
- (id)download:(id)download willSendRequest:(id)request redirectResponse:(id)response;	// 0x43f4d
- (void)download:(id)download didReceiveAuthenticationChallenge:(id)challenge;	// 0x43edd
- (void)download:(id)download didCancelAuthenticationChallenge:(id)challenge;	// 0x43ee1
- (void)download:(id)download didReceiveResponse:(id)response;	// 0x43f79
- (void)download:(id)download didReceiveDataOfLength:(unsigned)length;	// 0x43fa5
- (BOOL)download:(id)download shouldDecodeSourceDataOfMIMEType:(id)mimetype;	// 0x43fd1
- (void)download:(id)download decideDestinationWithSuggestedFilename:(id)suggestedFilename;	// 0x43ffd
- (void)download:(id)download didCreateDestination:(id)destination;	// 0x44029
- (void)downloadDidFinish:(id)download;	// 0x44055
- (void)download:(id)download didFailWithError:(id)error;	// 0x44079
- (id)download:(id)download shouldBeginChildDownloadOfSource:(id)source delegate:(id *)delegate;	// 0x440a5
- (void)download:(id)download didBeginChildDownload:(id)download2;	// 0x440d1
@end