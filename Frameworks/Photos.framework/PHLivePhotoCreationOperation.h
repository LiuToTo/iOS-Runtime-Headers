/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHLivePhotoCreationOperation : NSOperation {
    int  _contentMode;
    NSArray * _resourceURLs;
    id /* block */  _resultHandler;
    struct CGSize { 
        float width; 
        float height; 
    }  _targetSize;
}

@property (nonatomic, readonly) int contentMode;
@property (nonatomic, readonly, copy) NSArray *resourceURLs;
@property (nonatomic, readonly, copy) id /* block */ resultHandler;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } targetSize;

- (void).cxx_destruct;
- (id)_createImageOnlyLivePhotoWithImageURL:(id)arg1;
- (int)contentMode;
- (id)initWithResourceURLs:(id)arg1 targetSize:(struct CGSize { float x1; float x2; })arg2 contentMode:(int)arg3 resultHandler:(id /* block */)arg4;
- (void)main;
- (id)resourceURLs;
- (id /* block */)resultHandler;
- (struct CGSize { float x1; float x2; })targetSize;

@end
