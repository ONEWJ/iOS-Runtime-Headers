/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSString, NSXPCListener;

@interface _UIViewServiceSessionManager : NSObject <NSXPCListenerDelegate> {
    int _connectionNotificationToken;
    NSXPCListener *_listener;
    int _lock;
    NSMutableArray *_sessions;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (id)__serviceSessionManager;
+ (bool)hasActiveSessions;
+ (void)startViewServiceSessionManagerAsPlugin:(bool)arg1;

- (void)_configureSessionForConnection:(id)arg1;
- (bool)_hasActiveSessions;
- (id)_initAsPlugIn:(bool)arg1;
- (void)_registerSessionForDefaultDeputies:(id)arg1;
- (void)_startListener;
- (void)_startListenerWithName:(id)arg1;
- (void)_startOrStopSystemsForBackgroundRunning;
- (void)dealloc;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end