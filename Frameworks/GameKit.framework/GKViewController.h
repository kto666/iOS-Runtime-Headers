/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKColorPalette, GKViewController;

@interface GKViewController : UIViewController {
    GKColorPalette *_colorPalette;
    int _gkFocusBubbleType;
    GKViewController *_rootViewController;
    BOOL _shouldUpdateContentOnlyWhenAuthenticated;
}

@property(retain) GKColorPalette * colorPalette;
@property int gkFocusBubbleType;
@property(retain) GKViewController * rootViewController;
@property BOOL shouldUpdateContentOnlyWhenAuthenticated;

- (id)colorPalette;
- (void)dealloc;
- (BOOL)displayUsingSplitNavigationBar;
- (int)gkFocusBubbleType;
- (int)lastKnownOrientation;
- (void)loadView;
- (void)popToRootViewControllerAnimated:(BOOL)arg1;
- (void)pushFullScreenViewController:(id)arg1 animated:(BOOL)arg2;
- (id)rootViewController;
- (void)setColorPalette:(id)arg1;
- (void)setGkFocusBubbleType:(int)arg1;
- (void)setRootViewController:(id)arg1;
- (void)setShouldUpdateContentOnlyWhenAuthenticated:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)shouldUpdateContentOnlyWhenAuthenticated;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
