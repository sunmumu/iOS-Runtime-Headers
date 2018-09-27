/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMDeviceCertificateIdentity : RMDeviceIdentity {
    struct __SecIdentity { } * _identity;
}

@property (nonatomic) struct __SecIdentity { }*identity;

- (void)deviceIdentityWithCompletion:(id /* block */)arg1;
- (struct __SecIdentity { }*)identity;
- (id)initWithIdentity:(id)arg1;
- (void)setIdentity:(struct __SecIdentity { }*)arg1;
- (bool)validateIdentityForServer:(struct __SecTrust { }*)arg1;

@end