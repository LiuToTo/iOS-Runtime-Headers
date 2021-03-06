/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKClampNoiseModifier : GKNoiseModifier {
    double  _lowerBound;
    double  _upperBound;
}

- (id)cloneModule;
- (id)init;
- (id)initWithInputModuleCount:(unsigned int)arg1;
- (id)initWithLowerBound:(double)arg1 upperBound:(double)arg2;
- (int)requiredInputModuleCount;
- (double)valueAt;

@end
