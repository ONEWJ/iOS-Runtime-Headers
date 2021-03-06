/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVSearchTemplateController : _TVBgImageLoadingViewController <IKAppKeyboardDelegate, TVAppTemplateImpressionable, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UISearchBarDelegate, _TVSearchTemplateViewDelegate> {
    UIImage * _backgroundImage;
    IKViewElement * _bannerElement;
    IKImageElement * _bgImageElement;
    IKViewElement * _collectionListElement;
    NSIndexPath * _focusedViewControllerIndexPath;
    IKImageElement * _heroImgElement;
    IKAppKeyboard * _ikKeyboard;
    float  _impressionThreshold;
    NSArray * _rowSpacingMetricsList;
    IKViewElement * _scopeElement;
    UIViewController * _scopeViewController;
    UISearchBar * _searchBar;
    IKTextFieldElement * _searchFieldElement;
    _TVSearchTemplateView * _searchTemplateView;
    IKViewElement * _suggestionsElement;
    UIViewController * _suggestionsViewController;
    UISystemInputViewController * _systemInputViewController;
    IKViewElement * _templateElement;
    NSArray * _viewControllers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)_viewControllerFromElement:(id)arg1 existingController:(id)arg2;

- (void).cxx_destruct;
- (void)_adjustFrameForScopeView:(id)arg1 inCell:(id)arg2;
- (void)_adjustOriginForSuggestionsView:(id)arg1 inCell:(id)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_adjustedCollectionMargins;
- (id)_backgroundImageProxy;
- (struct CGSize { float x1; float x2; })_backgroundImageProxySize;
- (void)_buildSpacingMetrics;
- (void)_cancelImpressionsUpdate;
- (struct TVRowMetrics { int x1; float x2; struct { float x_3_1_1; float x_3_1_2; } x3; struct { float x_4_1_1; float x_4_1_2; } x4; struct { float x_5_1_1; float x_5_1_2; } x5; struct { float x_6_1_1; float x_6_1_2; } x6; })_collapsedRowMetricsForViewController:(id)arg1;
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;
- (BOOL)_disableAutomaticKeyboardUI;
- (void)_doneButtonPressed:(id)arg1;
- (BOOL)_enableAutomaticKeyboardPressDone;
- (void)_recordImpressionsForVisibleView;
- (int)_sectionForViewControllerIndex:(int)arg1;
- (void)_setFocusedIndexPath:(id)arg1;
- (BOOL)_shouldShowScope;
- (BOOL)_shouldShowSuggestions;
- (BOOL)_updateCollectionList;
- (void)_updateImpressions;
- (void)_updateKeyboardText;
- (void)_updateSearchFieldText;
- (void)_updateViewIgnoringSparseUpdates:(BOOL)arg1;
- (int)_viewControllerIndexForSection:(int)arg1;
- (id)_viewControllers;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_visibleRectInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)dealloc;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (void)loadView;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollToTop;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { float x1; float x2; })arg2 targetContentOffset:(inout struct CGPoint { float x1; float x2; }*)arg3;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchTemplateView:(id)arg1 didOffsetOriginForCollectionView:(id)arg2;
- (id)searchTemplateView:(id)arg1 preferredFocusEnvironmentForKeyboard:(id)arg2;
- (void)siri_beginInteractiveTransition;
- (void)siri_endInteractiveTransition;
- (void)textDidChangeForKeyboard:(id)arg1;
- (void)tv_updateViewLayout;
- (void)updateWithViewElement:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
