/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class NSMutableIndexSet, PUMomentsZoomLevelManager, PUSessionInfo, PUTabbedLibraryViewControllerSpec;

@interface PUTabbedLibraryViewController : PLTabbedLibraryViewController {
    NSMutableIndexSet *_everDisplayedContentModes;
    PUSessionInfo *_sessionInfo;
    PUTabbedLibraryViewControllerSpec *_spec;
    PUMomentsZoomLevelManager *_zoomLevelManager;
}

@property(retain) PUSessionInfo * sessionInfo;

- (void).cxx_destruct;
- (BOOL)_navigateToDefaultLocationInNavigationController:(id)arg1 animated:(BOOL)arg2;
- (id)_navigationControllerForContentMode:(int)arg1;
- (Class)_navigationControllerLayoutTransitioningClass:(id)arg1;
- (BOOL)_navigationControllerShouldCrossFadeBottomBars:(id)arg1;
- (BOOL)_navigationControllerShouldUseBuiltinInteractionController:(id)arg1;
- (id)_nextCloudFeedNavigatingObject;
- (BOOL)canShowTabBadgeForContentMode:(int)arg1;
- (BOOL)cloudFeedAssetIsAvailableForNavigation:(id)arg1;
- (BOOL)cloudFeedCommentIsAvailableForNavigation:(id)arg1;
- (BOOL)cloudFeedInvitationForAlbumIsAvailableForNavigation:(id)arg1;
- (BOOL)cloudFeedIsAvailableForNavigation;
- (void)configureTabBar:(id)arg1;
- (void)configureTabBarItem:(id)arg1 iconName:(id)arg2;
- (id)initWithSpec:(id)arg1;
- (void)navigateToCloudFeedWithCompletion:(id)arg1;
- (void)navigateToInitialLocationInNavigationController:(id)arg1;
- (BOOL)navigateToRootOfCurrentTabAnimated:(BOOL)arg1;
- (id)navigationController:(id)arg1 animationControllerForOperation:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (id)newNavigationControllerWithRootController:(id)arg1;
- (id)newRootViewControllerForContentMode:(int)arg1;
- (BOOL)pu_shouldSelectViewController:(id)arg1;
- (id)sessionInfo;
- (void)setSelectedViewController:(id)arg1;
- (void)setSessionInfo:(id)arg1;
- (BOOL)shouldShowTabForContentMode:(int)arg1;
- (void)updateDisplayedTabs:(BOOL)arg1;

@end
