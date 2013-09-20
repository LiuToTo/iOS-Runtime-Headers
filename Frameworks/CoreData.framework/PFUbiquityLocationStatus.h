/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSError, PFUbiquityLocation;

@interface PFUbiquityLocationStatus : NSObject {
    NSError *_error;
    unsigned int _hash;
    BOOL _isDeleted;
    BOOL _isDownloaded;
    BOOL _isDownloading;
    BOOL _isExported;
    BOOL _isFailed;
    BOOL _isImported;
    BOOL _isLive;
    BOOL _isScheduled;
    BOOL _isUploaded;
    BOOL _isUploading;
    PFUbiquityLocation *_location;
    int _numNotifications;
}

@property(readonly) NSError * error;
@property(readonly) BOOL isDeleted;
@property(readonly) BOOL isDownloaded;
@property BOOL isDownloading;
@property(readonly) BOOL isExported;
@property(readonly) BOOL isFailed;
@property(readonly) BOOL isImported;
@property(readonly) BOOL isLive;
@property(readonly) BOOL isScheduled;
@property(readonly) BOOL isUploaded;
@property(readonly) BOOL isUploading;
@property(readonly) PFUbiquityLocation * location;
@property(readonly) int numNotifications;

- (void)checkFileURLState;
- (void)dealloc;
- (id)description;
- (void)encounteredError:(id)arg1;
- (id)error;
- (BOOL)getBoolResourceFromURL:(id)arg1 forKey:(id)arg2;
- (unsigned int)hash;
- (id)init;
- (id)initWithLocation:(id)arg1;
- (BOOL)isDeleted;
- (BOOL)isDownloaded;
- (BOOL)isDownloading;
- (BOOL)isExported;
- (BOOL)isFailed;
- (BOOL)isImported;
- (BOOL)isLive;
- (BOOL)isScheduled;
- (BOOL)isUploaded;
- (BOOL)isUploading;
- (id)location;
- (void)logImportWasCancelled;
- (void)logWasExported;
- (void)logWasImported;
- (void)logWasScheduled;
- (int)numNotifications;
- (void)recoveredFromError;
- (void)setIsDownloading:(BOOL)arg1;
- (void)statusDidChange;

@end