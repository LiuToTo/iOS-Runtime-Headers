/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@class NSMutableDictionary;

@interface ACDAuthenticationHandlerQueueManager : NSObject {
    NSMutableDictionary *_promptHandlerQueues;
    NSMutableDictionary *_renewalHandlerQueues;
    NSMutableDictionary *_verificationHandlerQueues;
}

- (void).cxx_destruct;
- (BOOL)hasPromptQueueForAccountID:(id)arg1;
- (BOOL)hasRenewalQueueForRenewalID:(id)arg1;
- (BOOL)hasVerificationQueueForAccountID:(id)arg1;
- (id)init;
- (id)popPromptHandlerForAccountID:(id)arg1;
- (id)popRenewalHandlerForRenewalID:(id)arg1;
- (id)popVerificationHandlerForAccountID:(id)arg1;
- (void)pushPromptHandler:(id)arg1 forAccountID:(id)arg2;
- (void)pushRenewalHandler:(id)arg1 forRenewalID:(id)arg2;
- (void)pushVerificationHandler:(id)arg1 forAccountID:(id)arg2;

@end