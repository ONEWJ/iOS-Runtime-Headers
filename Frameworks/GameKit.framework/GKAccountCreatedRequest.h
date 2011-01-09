/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString;



@interface GKAccountCreatedRequest : GKDataRequest 
{
    NSString *_playerID;
    NSString *_authToken;
    NSString *_accountName;
}

@property(retain) NSString *accountName;
@property(retain) NSString *authToken;
@property(retain) NSString *playerID;


- (void)setAccountName:(id)arg1;
- (id)accountName;
- (id)key;
- (id)request;
- (void)dealloc;
- (id)authToken;
- (void)setPlayerID:(id)arg1;
- (void)handleResponseFromServer:(id)arg1 error:(id)arg2;
- (BOOL)authenticationRequired;
- (void)setAuthToken:(id)arg1;
- (id)playerID;

@end