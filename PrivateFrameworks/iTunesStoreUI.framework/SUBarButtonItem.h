/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UINavigationItem, UIView;



@interface SUBarButtonItem : UIBarButtonItem 
{
    UIView *_accessoryView;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _accessoryViewInsets;
    UINavigationItem *_lastNavigationItem;
}

@property(getter=isLoading) BOOL loading;
@property UIEdgeInsets accessoryViewInsets;
@property(retain) UIView *accessoryView;

+ (Class)classForNavigationButton;

- (void)setAccessoryViewInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (id)_navigationButton;
- (void)_updateViewForAccessoryChange;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })accessoryViewInsets;
- (void)configureFromScriptButton:(id)arg1;
- (void)setLoading:(BOOL)arg1;
- (id)accessoryView;
- (void)setAccessoryView:(id)arg1;
- (BOOL)isLoading;
- (id)createViewForNavigationItem:(id)arg1;
- (void)dealloc;

@end