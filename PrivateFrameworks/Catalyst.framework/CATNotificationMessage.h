/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATNotificationMessage : CATMessage {
    NSString * _name;
    NSUUID * _taskUUID;
    NSDictionary * _userInfo;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSUUID *taskUUID;
@property (nonatomic, copy) NSDictionary *userInfo;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 userInfo:(id)arg2;
- (id)initWithTaskUUID:(id)arg1 name:(id)arg2 userInfo:(id)arg3;
- (id)name;
- (void)setName:(id)arg1;
- (void)setTaskUUID:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)taskUUID;
- (id)userInfo;

@end