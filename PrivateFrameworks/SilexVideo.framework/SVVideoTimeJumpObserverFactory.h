/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoTimeJumpObserverFactory : NSObject <SVVideoTimeJumpObserverFactory> {
    <SVPlayerItemObserverFactory> * _playerItemObserverFactory;
    <SVVideoTimeProviderFactory> * _timeProviderFactory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVPlayerItemObserverFactory> *playerItemObserverFactory;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVVideoTimeProviderFactory> *timeProviderFactory;

- (void).cxx_destruct;
- (id)createTimeJumpObserverForVideo:(id)arg1;
- (id)initWithPlayerItemObserverFactory:(id)arg1 timeProviderFactory:(id)arg2;
- (id)playerItemObserverFactory;
- (id)timeProviderFactory;

@end