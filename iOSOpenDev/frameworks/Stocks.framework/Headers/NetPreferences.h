/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Stocks/NSURLConnectionDelegate.h>
#import <Stocks/XXUnknownSuperclass.h>

@class NSURLConnection, NSMutableData, NSString, NSURL;

@interface NetPreferences : XXUnknownSuperclass <NSURLConnectionDelegate> {
	NSString *_buildVersion;	// 4 = 0x4
	NSString *_productVersion;	// 8 = 0x8
	NSString *_UUID;	// 12 = 0xc
	NSURL *_serviceURL;	// 16 = 0x10
	NSURL *_serviceURLGT;	// 20 = 0x14
	NSURLConnection *_gtButtonLogoConnection;	// 24 = 0x18
	NSMutableData *_gtButtonLogoData;	// 28 = 0x1c
	NSURLConnection *_gtBacksideLogoConnection;	// 32 = 0x20
	NSMutableData *_gtBacksideLogoData;	// 36 = 0x24
	BOOL _serviceDebugging;	// 40 = 0x28
	BOOL _isNetworkReachable;	// 41 = 0x29
}
@property(assign, nonatomic, getter=isNetworkReachable) BOOL networkReachable;	// G=0xefe9; S=0xef75; 
@property(readonly, retain) NSString *UUID;	// G=0xea01; converted property
@property(readonly, retain) NSURL *serviceURL;	// G=0xe7f1; converted property
@property(readonly, retain) NSURL *serviceURLGT;	// G=0xe73d; converted property
@property(readonly, assign) BOOL serviceDebugging;	// G=0xda41; converted property
+ (id)sharedPreferences;	// 0xdb6d
- (id)init;	// 0xda51
- (void)setupLogging;	// 0xf0e9
// declared property getter: - (BOOL)isNetworkReachable;	// 0xefe9
// declared property setter: - (void)setNetworkReachable:(BOOL)reachable;	// 0xef75
- (id)_stocksUserAgent;	// 0xee79
- (id)_stocksCountryCode;	// 0xee1d
- (id)_stocksAcceptLanguage;	// 0xed6d
- (void)addStocksHeadersToPostRequest:(id)postRequest;	// 0xec85
- (id)financeRequestAttributes;	// 0xeb51
// converted property getter: - (id)UUID;	// 0xea01
- (BOOL)multipleDataSourcesAllowedForGT;	// 0xe965
- (id)_urlStringWithHost:(id)host;	// 0xe905
// converted property getter: - (id)serviceURL;	// 0xe7f1
// converted property getter: - (id)serviceURLGT;	// 0xe73d
- (id)newsServiceURLForStock:(id)stock;	// 0xe649
- (id)fullQuoteURLOverrideForStock:(id)stock;	// 0xe49d
- (id)backsideLogoURL;	// 0xe3b9
- (id)_cacheDirectoryPath;	// 0xe349
- (id)logoButtonImage;	// 0xe16d
- (id)logoBacksideImage;	// 0xdfc5
- (void)connection:(id)connection didReceiveData:(id)data;	// 0xdef9
- (void)connection:(id)connection didFailWithError:(id)error;	// 0xde6d
- (void)connectionDidFinishLoading:(id)connection;	// 0xdc6d
// converted property getter: - (BOOL)serviceDebugging;	// 0xda41
- (id)serviceDebuggingPath;	// 0xdbb5
@end