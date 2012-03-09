/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString, GKTurnBasedMatch;

@interface GKGetTurnBasedGameWithDetailsDataRequest : GKDataRequest  {
    NSString *_sessionID;
    GKTurnBasedMatch *_match;
}

@property(retain) NSString * sessionID;
@property(retain) GKTurnBasedMatch * match;


- (void)dealloc;
- (id)match;
- (void)setMatch:(id)arg1;
- (void)handleResponseFromServer:(id)arg1;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (id)key;
- (id)request;

@end