/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSMutableArray;

@interface PLDelayedFiledSystemDeletions : NSObject  {
    NSMutableArray *_deletionInfos;
}

+ (id)deletionsFromChangeHubEvent:(void*)arg1;
+ (void)appendDescriptionForEvent:(void*)arg1 toComponents:(id)arg2;

- (id)debugDescription;
- (void)dealloc;
- (id)initWithFilesystemDeletionInfos:(id)arg1;
- (void)deleteAllRemainingFilesAndThumbnails;
- (void)appendToXPCMessage:(void*)arg1;
- (void)addFilesystemDeletionInfo:(id)arg1;

@end