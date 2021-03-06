/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKFriendRequestComposeViewController : UINavigationController <GKExtensionParentViewControllerProtocol> {
    UIAlertController * _alertController;
    <GKFriendRequestComposeViewControllerDelegate> * _composeViewDelegateWeak;
    NSMutableArray * _emailsToAddAsRecipients;
    NSString * _message;
    NSMutableArray * _playerInternalsToAddAsRecipients;
    unsigned long long  _recipientCount;
    GKFriendRequestHostViewController * _remoteViewController;
    unsigned int  _rid;
}

@property (nonatomic, retain) UIAlertController *alertController;
@property (nonatomic) <GKFriendRequestComposeViewControllerDelegate> *composeViewDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *emailsToAddAsRecipients;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, retain) NSMutableArray *playerInternalsToAddAsRecipients;
@property (nonatomic) unsigned long long recipientCount;
@property (nonatomic, retain) GKFriendRequestHostViewController *remoteViewController;
@property (nonatomic) unsigned int rid;
@property (readonly) Class superclass;

+ (bool)_preventsAppearanceProxyCustomization;
+ (unsigned long long)maxNumberOfRecipients;

- (void)_addRecipientInternals:(id)arg1;
- (void)_setupChildViewController;
- (void)_setupRemoteViewController;
- (void)addRecipientPlayers:(id)arg1;
- (void)addRecipientsWithEmailAddresses:(id)arg1;
- (void)addRecipientsWithPlayerIDs:(id)arg1;
- (id)alertController;
- (bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (id)composeViewDelegate;
- (void)dealloc;
- (id)emailsToAddAsRecipients;
- (void)extensionDidFinishWithError:(id)arg1;
- (id)init;
- (id)message;
- (id)playerInternalsToAddAsRecipients;
- (void)prepareForNewRecipients:(id)arg1;
- (unsigned long long)recipientCount;
- (id)remoteViewController;
- (unsigned int)rid;
- (void)sendFinishedMessageToDelegateCancelled:(bool)arg1;
- (void)setAlertController:(id)arg1;
- (void)setComposeViewDelegate:(id)arg1;
- (void)setEmailsToAddAsRecipients:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setPlayerInternalsToAddAsRecipients:(id)arg1;
- (void)setRecipientCount:(unsigned long long)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)setRid:(unsigned int)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (bool)shouldAutomaticallyForwardRotationMethods;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
