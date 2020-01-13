/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/SFUOutputStream.h>
#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface SFUZipDeflateOutputStream : XXUnknownSuperclass <SFUOutputStream> {
@private
	id<SFUOutputStream> mOutputStream;	// 4 = 0x4
	z_stream_s mDeflateStream;	// 8 = 0x8
	char *mOutBuffer;	// 64 = 0x40
}
- (id)initWithOutputStream:(id)outputStream;	// 0x2e74ad
- (void)dealloc;	// 0x2e76d5
- (id)closeLocalStream;	// 0x2e788d
- (void)close;	// 0x2e73fd
- (void)writeBuffer:(const char *)buffer size:(unsigned long)size;	// 0x2e7745
- (BOOL)canSeek;	// 0x2e73dd
- (void)seekToOffset:(long long)offset whence:(int)whence;	// 0x2e7425
- (long long)offset;	// 0x2e73e1
- (BOOL)canCreateInputStream;	// 0x2e73f5
- (id)inputStream;	// 0x2e73f9
@end