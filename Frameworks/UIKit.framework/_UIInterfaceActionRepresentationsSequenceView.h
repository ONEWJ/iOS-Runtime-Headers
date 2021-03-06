/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIInterfaceActionRepresentationsSequenceView : UIScrollView {
    int  _actionLayoutAxis;
    NSArray * _arrangedActionRepresentationViews;
    NSLayoutConstraint * _minimumHeightConstraint;
    _UIInterfaceActionSeparatableSequenceView * _separatedContentSequenceView;
    int  _sizingSeparatedContentSequenceViewToFitDisabledCount;
    unsigned int  _visualCornerPosition;
    UIInterfaceActionVisualStyle * _visualStyle;
}

@property (nonatomic) int actionLayoutAxis;
@property (nonatomic, retain) NSArray *arrangedActionRepresentationViews;
@property (nonatomic, readonly) NSLayoutConstraint *minimumHeightConstraint;
@property (nonatomic, readonly) _UIInterfaceActionSeparatableSequenceView *separatedContentSequenceView;
@property (nonatomic) unsigned int visualCornerPosition;
@property (nonatomic, retain) UIInterfaceActionVisualStyle *visualStyle;

- (void).cxx_destruct;
- (void)_applyVisualStyle;
- (void)_applyVisualStyleToSeparatedContentSequenceView;
- (float)_contentFitCanScrollThreshold;
- (void)_disableSeparatedContentSequenceViewToFit;
- (void)_enableSeparatedContentSequenceViewToFit;
- (BOOL)_isHorizontalLayout;
- (void)_loadDefaultSizingConstraints;
- (float)_minimumNumberOfRowsRequiredVisible;
- (void)_notifyDidScroll;
- (struct CGSize { float x1; float x2; })_sizeByApplyingLayoutMarginsAsOutsetToSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_temporarilySkipSizingSeparatedContentSequenceViewToFit;
- (void)_updateMinimumHeightConstraint;
- (void)_updateSeparatedContentSequenceViewToFitSizeIfPossible;
- (int)actionLayoutAxis;
- (id)arrangedActionRepresentationViews;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (float)fittingWidthForLayoutAxis:(int)arg1;
- (id)initWithVisualStyle:(id)arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)minimumHeightConstraint;
- (void)reloadDisplayedContentVisualStyle;
- (id)separatedContentSequenceView;
- (void)setActionLayoutAxis:(int)arg1;
- (void)setArrangedActionRepresentationViews:(id)arg1;
- (void)setVisualCornerPosition:(unsigned int)arg1;
- (void)setVisualStyle:(id)arg1;
- (struct CGSize { float x1; float x2; })systemLayoutSizeFittingSize:(struct CGSize { float x1; float x2; })arg1;
- (void)updateConstraints;
- (unsigned int)visualCornerPosition;
- (id)visualStyle;
- (void)willUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;

@end
