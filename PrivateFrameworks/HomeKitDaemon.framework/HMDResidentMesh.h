/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDResidentMesh : NSObject <HMFLogging, HMFMessageReceiver, HMFTimerDelegate> {
    HMDAccountRegistry * _accountRegistry;
    unsigned long long  _broadcastRate;
    HMFTimer * _devicesChangedTimer;
    HMDHomeManager * _homeManager;
    NSSet * _primaryResidentForHomes;
    NSMutableArray * _reachableAccessories;
    HMDCentralMessageDispatcher * _remoteMessageDispatcher;
    HMDResidentMeshMeshStorage * _resident;
    NSMutableArray * _residents;
    long long  _startupTickCount;
    HMFTimer * _startupTimer;
    NSUUID * _uuid;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) HMDAccountRegistry *accountRegistry;
@property unsigned long long broadcastRate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HMFTimer *devicesChangedTimer;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHomeManager *homeManager;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) NSSet *primaryResidentForHomes;
@property (nonatomic, retain) NSMutableArray *reachableAccessories;
@property (nonatomic) HMDCentralMessageDispatcher *remoteMessageDispatcher;
@property (nonatomic) HMDResidentMeshMeshStorage *resident;
@property (nonatomic, retain) NSMutableArray *residents;
@property (nonatomic) long long startupTickCount;
@property (nonatomic, readonly) HMFTimer *startupTimer;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUUID *uuid;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)__accessoryIsNotReachable:(id)arg1;
- (void)__accessoryIsReachable:(id)arg1;
- (void)__deviceIsNotReachable:(id)arg1;
- (void)__deviceIsReachable:(id)arg1;
- (void)__deviceResidentChanged:(id)arg1;
- (void)__rebuildResidents:(id)arg1;
- (void)__rebuildResidentsViaElection:(id)arg1;
- (void)_addConnectivityFromDeviceToAccessory:(id)arg1 activateTimer:(bool)arg2;
- (id)_addDeviceInMesh:(id)arg1;
- (id)_addDeviceInResidents:(id)arg1;
- (void)_buildResidentsWithElection:(id)arg1 device:(id)arg2;
- (bool)_checkReachabilityWithTimerActivation:(bool)arg1;
- (void)_deviceIsNotReachable:(id)arg1;
- (void)_deviceIsReachable:(id)arg1;
- (void)_dumpDebug;
- (id)_dumpState;
- (id)_findDeviceInMesh:(id)arg1;
- (id)_findDeviceInMeshByUUID:(id)arg1;
- (id)_findDeviceInResidents:(id)arg1;
- (void)_flushWorkQueue;
- (void)_handleMeshUpdateMessage:(id)arg1;
- (void)_handleMeshUpdateRequestMessage:(id)arg1;
- (void)_removeConnectivityFromDeviceToAccessory:(id)arg1 activateTimer:(bool)arg2;
- (void)_sendMessage:(id)arg1 payload:(id)arg2 target:(id)arg3 responseHandler:(id /* block */)arg4;
- (id)accountRegistry;
- (unsigned long long)broadcastRate;
- (void)dealloc;
- (id)deviceForAccessory:(id)arg1;
- (id)devicesChangedTimer;
- (void)dumpDebug;
- (id)dumpState;
- (id)homeManager;
- (id)initWithHomeManager:(id)arg1 residentEnabled:(bool)arg2;
- (id)logIdentifier;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)primaryResidentForHomes;
- (id)reachableAccessories;
- (id)remoteMessageDispatcher;
- (id)resident;
- (id)residents;
- (void)setAccountRegistry:(id)arg1;
- (void)setBroadcastRate:(unsigned long long)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setPrimaryResidentForHomes:(id)arg1;
- (void)setReachableAccessories:(id)arg1;
- (void)setRemoteMessageDispatcher:(id)arg1;
- (void)setResident:(id)arg1;
- (void)setResidents:(id)arg1;
- (void)setStartupTickCount:(long long)arg1;
- (void)setUuid:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (long long)startupTickCount;
- (id)startupTimer;
- (void)timerDidFire:(id)arg1;
- (id)uuid;
- (id)workQueue;

@end
