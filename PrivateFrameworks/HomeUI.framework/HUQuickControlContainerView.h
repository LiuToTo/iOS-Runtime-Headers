/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlContainerView : UIView {
    unsigned int  _activeControlType;
    HUPillButton * _alternateControlButton;
    HUQuickControlAuxiliaryHostView * _auxiliaryHostView;
    _UIBackdropViewSettings * _blurSettings;
    UIView * _blurTintView;
    float  _blurTransitionProgress;
    _UIBackdropView * _blurView;
    HUQuickControlButtonRowView * _buttonRowView;
    float  _chromeTransitionProgress;
    NSLayoutConstraint * _compactControlBottomConstraint;
    NSArray * _contentConstraints;
    UILayoutGuide * _controlButtonSpacingLayoutGuide;
    HUControlHostView * _controlHostView;
    float  _controlTransitionProgress;
    UILayoutGuide * _controlViewLayoutGuide;
    <HUQuickControlContainerViewDelegate> * _delegate;
    HUPillButton * _detailsButton;
    float  _horizontalControlCompressionFactor;
    float  _initialSourceViewScale;
    UIView<HUQuickControlPresentableView> * _primaryControlView;
    UIView<HUQuickControlPresentableView> * _secondaryControlView;
    BOOL  _shouldShowAlternateControlButton;
    BOOL  _shouldShowControls;
    BOOL  _shouldShowDetailsButton;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _sourceRect;
    HUQuickControlSummaryView * _summaryView;
    UILayoutGuide * _topSummarySpacingLayoutGuide;
    float  _verticalDirectionalControlStretchFactor;
}

@property (nonatomic) unsigned int activeControlType;
@property (nonatomic, readonly) UIView<HUQuickControlPresentableView> *activeControlView;
@property (nonatomic, retain) HUPillButton *alternateControlButton;
@property (nonatomic, retain) HUQuickControlAuxiliaryHostView *auxiliaryHostView;
@property (nonatomic, retain) _UIBackdropViewSettings *blurSettings;
@property (nonatomic, retain) UIView *blurTintView;
@property (nonatomic) float blurTransitionProgress;
@property (nonatomic, retain) _UIBackdropView *blurView;
@property (nonatomic, retain) HUQuickControlButtonRowView *buttonRowView;
@property (nonatomic) float chromeTransitionProgress;
@property (nonatomic, retain) NSLayoutConstraint *compactControlBottomConstraint;
@property (nonatomic, retain) NSArray *contentConstraints;
@property (nonatomic, retain) UILayoutGuide *controlButtonSpacingLayoutGuide;
@property (nonatomic, retain) HUControlHostView *controlHostView;
@property (nonatomic) float controlTransitionProgress;
@property (nonatomic, retain) UILayoutGuide *controlViewLayoutGuide;
@property (nonatomic, readonly) <HUQuickControlContainerViewDelegate> *delegate;
@property (nonatomic, retain) HUPillButton *detailsButton;
@property (nonatomic) float horizontalControlCompressionFactor;
@property (nonatomic) float initialSourceViewScale;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } presentedControlFrame;
@property (nonatomic, readonly) UIView<HUQuickControlPresentableView> *primaryControlView;
@property (nonatomic, readonly) UIView<HUQuickControlPresentableView> *secondaryControlView;
@property (nonatomic) BOOL shouldShowAlternateControlButton;
@property (nonatomic) BOOL shouldShowControls;
@property (nonatomic) BOOL shouldShowDetailsButton;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } sourceRect;
@property (nonatomic, retain) HUQuickControlSummaryView *summaryView;
@property (nonatomic, retain) UILayoutGuide *topSummarySpacingLayoutGuide;
@property (nonatomic) float verticalDirectionalControlStretchFactor;

+ (BOOL)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_alternateControlButtonTapped:(id)arg1;
- (void)_configureCompactHeightConstraints:(id)arg1;
- (void)_configureControlViewLayoutGuideConstraints:(id)arg1;
- (void)_configureRegularHeightConstraints:(id)arg1;
- (struct CGPoint { float x1; float x2; })_controlHostCenter;
- (struct CGPoint { float x1; float x2; })_controlHostCenterForPresentationProgress:(float)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_controlHostTransform;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_controlHostTransformForPresentationProgress:(float)arg1;
- (void)_detailsButtonTapped:(id)arg1;
- (struct CGSize { float x1; float x2; })_presentedControlHostSize;
- (void)_setupAlternateControlButtonIfNecessary;
- (void)_setupBlurView;
- (BOOL)_shouldShowControlView;
- (int)_sizeSubclass;
- (float)_summaryFirstBaselineToControlTopSpacing;
- (struct CGPoint { float x1; float x2; })_transformedPresentedControlHostCenterOffset;
- (void)_updateAlternateControlButtonText;
- (void)_updateCompactControlBottomConstraint;
- (void)_updateContentAlignment;
- (void)_updateControlHostLayout;
- (BOOL)_useCompactHeightLayout;
- (unsigned int)activeControlType;
- (id)activeControlView;
- (id)alternateControlButton;
- (id)auxiliaryHostView;
- (id)blurSettings;
- (id)blurTintView;
- (float)blurTransitionProgress;
- (id)blurView;
- (id)buttonRowView;
- (float)chromeTransitionProgress;
- (id)compactControlBottomConstraint;
- (id)contentConstraints;
- (id)controlButtonSpacingLayoutGuide;
- (id)controlHostView;
- (float)controlTransitionProgress;
- (id)controlViewLayoutGuide;
- (id)delegate;
- (id)detailsButton;
- (void)hideAuxiliaryView;
- (float)horizontalControlCompressionFactor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 delegate:(id)arg2 sourceRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (float)initialSourceViewScale;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })presentedControlFrame;
- (id)primaryControlView;
- (id)secondaryControlView;
- (void)setActiveControlType:(unsigned int)arg1;
- (void)setAlternateControlButton:(id)arg1;
- (void)setAuxiliaryHostView:(id)arg1;
- (void)setBlurSettings:(id)arg1;
- (void)setBlurTintView:(id)arg1;
- (void)setBlurTransitionProgress:(float)arg1;
- (void)setBlurView:(id)arg1;
- (void)setButtonRowView:(id)arg1;
- (void)setChromeTransitionProgress:(float)arg1;
- (void)setCompactControlBottomConstraint:(id)arg1;
- (void)setContentConstraints:(id)arg1;
- (void)setControlButtonSpacingLayoutGuide:(id)arg1;
- (void)setControlHostView:(id)arg1;
- (void)setControlTransitionProgress:(float)arg1;
- (void)setControlViewLayoutGuide:(id)arg1;
- (void)setDetailsButton:(id)arg1;
- (void)setHorizontalControlCompressionFactor:(float)arg1;
- (void)setInitialSourceViewScale:(float)arg1;
- (void)setShouldShowAlternateControlButton:(BOOL)arg1;
- (void)setShouldShowControls:(BOOL)arg1;
- (void)setShouldShowDetailsButton:(BOOL)arg1;
- (void)setSummaryView:(id)arg1;
- (void)setTopSummarySpacingLayoutGuide:(id)arg1;
- (void)setVerticalDirectionalControlStretchFactor:(float)arg1;
- (BOOL)shouldShowAlternateControlButton;
- (BOOL)shouldShowControls;
- (BOOL)shouldShowDetailsButton;
- (void)showAuxiliaryView:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })sourceRect;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })sourceViewTransformForPresentationProgress:(float)arg1;
- (id)summaryView;
- (id)topSummarySpacingLayoutGuide;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (float)verticalDirectionalControlStretchFactor;

@end
