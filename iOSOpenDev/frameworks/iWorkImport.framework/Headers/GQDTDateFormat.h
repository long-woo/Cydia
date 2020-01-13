/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <iWorkImport/XXUnknownSuperclass.h>
#import <iWorkImport/GQDTDateFormat.h>
#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDNameMappable.h>


__attribute__((visibility("hidden")))
@interface GQDTDateFormat : XXUnknownSuperclass <GQDNameMappable> {
@private
	CFStringRef mFormatString;	// 4 = 0x4
}
+ (const StateSpec *)stateForReading;	// 0x574fd
- (id)initWithFormatString:(CFStringRef)formatString;	// 0x57539
- (void)dealloc;	// 0x57589
- (CFStringRef)formatString;	// 0x57509
@end

@interface GQDTDateFormat (Private)
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x575cd
@end