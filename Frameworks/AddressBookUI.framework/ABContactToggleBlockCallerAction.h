/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABContactToggleBlockCallerAction : ABContactAction <UIActionSheetDelegate> {
}

@property(readonly) BOOL isBlocked;

- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)allNumbersAndEmails;
- (void)block;
- (BOOL)isBlocked;
- (void)performActionWithSender:(id)arg1;
- (void)unblock;

@end