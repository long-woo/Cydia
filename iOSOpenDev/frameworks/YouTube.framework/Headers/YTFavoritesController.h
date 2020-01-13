/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

#import <YouTube/XXUnknownSuperclass.h>

@class NSMutableArray, YTAccountFeedRequest, NSURL, YTAuthenticatedAccountPost;
@protocol YTFavoritesControllerDelegate;

@interface YTFavoritesController : XXUnknownSuperclass {
	NSMutableArray *_pendingFavoritesShortIDs;	// 4 = 0x4
	NSMutableArray *_mergedFavorites;	// 8 = 0x8
	YTAuthenticatedAccountPost *_accountPost;	// 12 = 0xc
	YTAccountFeedRequest *_accountFeedRequest;	// 16 = 0x10
	BOOL _usingAccountFavorites;	// 20 = 0x14
	BOOL _shouldOfferMergeOfLocalBookmarks;	// 21 = 0x15
	NSURL *_batchURL;	// 24 = 0x18
	NSMutableArray *_bookmarkVideos;	// 28 = 0x1c
	NSMutableArray *_bookmarkShortIDs;	// 32 = 0x20
	id<YTFavoritesControllerDelegate> _mergeBookmarksDelegate;	// 36 = 0x24
}
@property(assign) BOOL usingAccountFavorites;	// G=0x11d09; S=0x11d39; converted property
@property(retain) NSURL *batchURL;	// G=0x11d29; S=0x12775; converted property
@property(readonly, assign) BOOL shouldOfferMergeOfLocalBookmarks;	// G=0x11dad; converted property
+ (id)sharedFavoritesController;	// 0x1288d
- (void)dealloc;	// 0x12bcd
// converted property getter: - (BOOL)usingAccountFavorites;	// 0x11d09
// converted property setter: - (void)setUsingAccountFavorites:(BOOL)favorites;	// 0x11d39
// converted property getter: - (BOOL)shouldOfferMergeOfLocalBookmarks;	// 0x11dad
- (void)setLocalBookmarksMergeOffered:(BOOL)offered;	// 0x11e1d
- (void)_processNextPendingFavoritesBatch;	// 0x11e85
- (void)mergeLocalBookmarksToAccountFavoritesWithDelegate:(id)delegate;	// 0x11f79
- (void)_bookmarksDidChangeNotifyObservers:(BOOL)_bookmarks;	// 0x12045
- (void)_saveBookmarks;	// 0x120f1
- (void)_loadBookmarks;	// 0x12181
- (id)bookmarkedVideos;	// 0x11d19
- (void)searchRequestReturnedVideos:(id)videos;	// 0x12399
- (void)bookmarksSearchRequestInterrupted;	// 0x12405
- (id)bookmarkedShortIDs;	// 0x12431
- (void)addLocalBookmarkForVideo:(id)video;	// 0x12461
- (void)addFavoriteForVideo:(id)video;	// 0x12521
- (void)removeFavoriteForVideo:(id)video;	// 0x12619
- (void)saveBookmarksIfNeeded;	// 0x1274d
// converted property setter: - (void)setBatchURL:(id)url;	// 0x12775
// converted property getter: - (id)batchURL;	// 0x11d29
- (void)YTAuthenticatedAccountPost:(id)post didFinishWithType:(int)type error:(id)error;	// 0x127d1
- (void)accountFeedRequest:(id)request receivedVideos:(id)videos;	// 0x128d5
- (void)accountFeedRequest:(id)request didFailWithError:(id)error;	// 0x12819
@end