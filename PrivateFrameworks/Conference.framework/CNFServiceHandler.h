/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@interface CNFServiceHandler : NSObject <MCProfileConnectionObserver> {
}

+ (BOOL)isConnecting;
+ (BOOL)conferencingIsRestricted;
+ (BOOL)invitationListener;
+ (BOOL)conferencingIsRegisteredForAccount:(id)arg1;
+ (BOOL)conferencingHasValidatedAliasForAccount:(id)arg1;
+ (void)_configureDaemon;
+ (void)_accountRegistrationStatusChanged:(id)arg1;
+ (void)_accountActivationChanged:(id)arg1;
+ (void)_accountLoginStateChanged:(id)arg1;
+ (void)_aliasValidationStatusChanged:(id)arg1;
+ (void)_deviceCapabilityChanged:(id)arg1;
+ (BOOL)connect:(BOOL)arg1;
+ (void)_daemonDisconnectedNotification:(id)arg1;
+ (void)_daemonConnectedNotification:(id)arg1;
+ (void)setInvitationListener:(BOOL)arg1;
+ (void)updateConferencingIsAvailable;
+ (BOOL)isFaceTimeActivated;
+ (void)activateFaceTime;
+ (void)deactivateFaceTime;
+ (BOOL)conferencingIsSupported;
+ (int)activationState;
+ (BOOL)connect;
+ (unsigned long long)capabilities;
+ (void)setCapabilities:(unsigned long long)arg1;
+ (BOOL)isConnected;
+ (BOOL)disconnect;
+ (BOOL)conferencingIsAvailable;

- (id)_accountDomainForAccount:(id)arg1;
- (id)services;
- (void)_handleStatusChanged:(id)arg1;
- (void)_handlePeopleChanged:(id)arg1;
- (id)imAccountForAVURL:(id)arg1;
- (id)availableFaceTimeURLs;
- (id)init;
- (void)dealloc;

@end