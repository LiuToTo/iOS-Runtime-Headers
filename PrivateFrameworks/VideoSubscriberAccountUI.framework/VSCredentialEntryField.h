/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSCredentialEntryField : NSObject {
    int  _autocapitalizationType;
    int  _autocorrectionType;
    int  _keyboardType;
    NSString * _placeholder;
    NSString * _recentsMessage;
    NSString * _recentsTitle;
    BOOL  _secure;
    NSString * _text;
    NSString * _title;
}

@property (nonatomic) int autocapitalizationType;
@property (nonatomic) int autocorrectionType;
@property (nonatomic) int keyboardType;
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic, copy) NSString *recentsMessage;
@property (nonatomic, copy) NSString *recentsTitle;
@property (getter=isSecure, nonatomic) BOOL secure;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (int)autocapitalizationType;
- (int)autocorrectionType;
- (id)init;
- (BOOL)isSecure;
- (int)keyboardType;
- (id)placeholder;
- (id)recentsMessage;
- (id)recentsTitle;
- (void)setAutocapitalizationType:(int)arg1;
- (void)setAutocorrectionType:(int)arg1;
- (void)setKeyboardType:(int)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setRecentsMessage:(id)arg1;
- (void)setRecentsTitle:(id)arg1;
- (void)setSecure:(BOOL)arg1;
- (void)setText:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)text;
- (id)title;

@end