/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISWrappedAVPlayer : ISObservable {
    NSObject<OS_dispatch_queue> * _avPlayerQueue;
    <ISWrappedAVPlayerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSObject<OS_dispatch_queue> * _ivarQueue;
    void * _ivarQueueIdentifier;
    BOOL  _ivarQueue_audioEnabled;
    AVPlayerItem * _ivarQueue_currentItem;
    NSArray * _ivarQueue_currentItemLoadedTimeRanges;
    NSError * _ivarQueue_error;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _ivarQueue_itemDuration;
    NSError * _ivarQueue_itemError;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _ivarQueue_itemForwardPlaybackEndTime;
    BOOL  _ivarQueue_itemIsLikelyToKeepUp;
    BOOL  _ivarQueue_itemPlaybackBufferEmpty;
    BOOL  _ivarQueue_itemPlaybackBufferFull;
    int  _ivarQueue_itemStatus;
    BOOL  _ivarQueue_loopingEnabled;
    float  _ivarQueue_rate;
    int  _ivarQueue_status;
    float  _ivarQueue_volume;
    NSMutableDictionary * _observersByID;
    void * _playerQueueIdentifier;
    AVPlayer * _playerQueue_avPlayer;
    AVPlayerLooper * _playerQueue_avPlayerLooper;
    AVQueuePlayer * _playerQueue_avQueuePlayer;
    id  _playerQueue_playerItemDidPlayToEndObserver;
}

@property <ISWrappedAVPlayerDelegate> *delegate;

+ (id)observedAVPIKeysAndContexts;
+ (id)observedAVPKeys;

- (void).cxx_destruct;
- (void)_assertOnIvarQueue;
- (void)_assertOnPlayerQueue;
- (void)_handleLooperItemsDidChange;
- (id)_initWithAVPlayer:(id)arg1;
- (BOOL)_isOnIvarQueue;
- (BOOL)_isOnPlayerQueue;
- (id)_nextObserverUID;
- (id)_nilOrValue:(id)arg1;
- (void)_performIvarRead:(id /* block */)arg1;
- (void)_performIvarWrite:(id /* block */)arg1;
- (void)_performPlayerTransaction:(id /* block */)arg1;
- (void)_performPlayerTransaction:(id /* block */)arg1 sync:(BOOL)arg2;
- (void)_playerItemDidPlayToEnd:(id)arg1;
- (id)_playerQueue_avPlayer;
- (id)_playerQueue_avQueuePlayer;
- (void)_playerQueue_startObservingPlayerItem:(id)arg1;
- (void)_playerQueue_stopObservingPlayerItem:(id)arg1;
- (void)_playerQueue_updatePlayerItemAudioTracksEnabled;
- (id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(id /* block */)arg3;
- (id)addPeriodicTimeObserverForInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 queue:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)attachToPlayerLayerIfNeeded:(id)arg1;
- (void)cancelPendingPrerolls;
- (id)currentItem;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentItemDuration;
- (id)currentItemError;
- (BOOL)currentItemIsLikelyToKeepUp;
- (id)currentItemLoadedTimeRanges;
- (BOOL)currentItemPlaybackBufferEmpty;
- (BOOL)currentItemPlaybackBufferFull;
- (int)currentItemStatus;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentTime;
- (void)dealloc;
- (id)delegate;
- (id)error;
- (id)init;
- (BOOL)isAudioEnabled;
- (BOOL)isLoopingEnabled;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })itemForwardPlaybackEndTime;
- (id)mutableChangeObject;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pause;
- (void)playToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 withInitialRate:(float)arg2 overDuration:(double)arg3 progressHandler:(id /* block */)arg4;
- (void)prepareForReuseWithCompletion:(id /* block */)arg1;
- (void)prerollAtRate:(float)arg1 completionHandler:(id /* block */)arg2;
- (float)rate;
- (void)removeTimeObserver:(id)arg1;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1 thenCall:(id /* block */)arg2;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 completionHandler:(id /* block */)arg4;
- (void)setActionAtItemEnd:(int)arg1;
- (void)setAllowsExternalPlayback:(BOOL)arg1;
- (void)setAudioEnabled:(BOOL)arg1;
- (void)setAudioSession:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimensionsOfReservedVideoMemory:(struct CGSize { float x1; float x2; })arg1;
- (void)setItemBlendsVideoFrames:(BOOL)arg1;
- (void)setItemForwardEndPlaybackTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setLoopingEnabled:(BOOL)arg1;
- (void)setRate:(float)arg1;
- (void)setRate:(float)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 atHostTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)setVolume:(float)arg1;
- (int)status;
- (float)volume;

@end
