/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/XXUnknownSuperclass.h>
#import <OfficeImport/WXSection.h>


__attribute__((visibility("hidden")))
@interface WXSection : XXUnknownSuperclass {
}
+ (void)initialize;	// 0x196ca5
+ (void)readFrom:(xmlNode *)from to:(id)to state:(id)state;	// 0x196e15
@end

@interface WXSection (Private)
+ (void)mapHeader:(xmlNode *)header toSection:(id)section state:(id)state;	// 0x197059
+ (void)mapFooter:(xmlNode *)footer toSection:(id)section state:(id)state;	// 0x199c4d
+ (void)mapPrinterSettings:(xmlNode *)settings toSection:(id)section state:(id)state;	// 0x2858c5
+ (void)mapProperties:(xmlNode *)properties toSection:(id)section state:(id)state;	// 0x197431
@end