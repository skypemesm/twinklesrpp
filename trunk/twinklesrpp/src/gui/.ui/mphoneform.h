/****************************************************************************
** Form interface generated from reading ui file 'mphoneform.ui'
**
** Created: Wed Sep 29 18:51:12 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef MPHONEFORM_H
#define MPHONEFORM_H

#include <qvariant.h>
#include <qmainwindow.h>
#include "phone.h"
#include "dtmfform.h"
#include "inviteform.h"
#include "redirectform.h"
#include "termcapform.h"
#include "srvredirectform.h"
#include "userprofileform.h"
#include "transferform.h"
#include "syssettingsform.h"
#include "logviewform.h"
#include "historyform.h"
#include "selectuserform.h"
#include "selectprofileform.h"
#include "qevent.h"
#include "twinklesystray.h"
#include "im/msg_session.h"
#include "messageformview.h"
#include "buddylistview.h"
#include "diamondcard.h"

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QAction;
class QActionGroup;
class QToolBar;
class QPopupMenu;
class QSplitter;
class QListView;
class QListViewItem;
class QLabel;
class QComboBox;
class QToolButton;
class QPushButton;
class QGroupBox;
class QTextEdit;
class QButtonGroup;
class QRadioButton;
class QLineEdit;
extern t_phone *phone;

class MphoneForm : public QMainWindow
{
    Q_OBJECT

public:
    MphoneForm( QWidget* parent = 0, const char* name = 0, WFlags fl = WType_TopLevel );
    ~MphoneForm();

    QSplitter* splitter2;
    QListView* buddyListView;
    QLabel* callTextLabel;
    QComboBox* callComboBox;
    QToolButton* addressToolButton;
    QPushButton* callPushButton;
    QLabel* userLabel;
    QComboBox* userComboBox;
    QLabel* statAaLabel;
    QLabel* statCfLabel;
    QLabel* statDndLabel;
    QLabel* statMWILabel;
    QLabel* statMissedLabel;
    QLabel* statRegLabel;
    QGroupBox* displayGroupBox;
    QTextEdit* displayTextEdit;
    QButtonGroup* lineButtonGroup;
    QRadioButton* line1RadioButton;
    QLabel* fromhead1Label;
    QLabel* tohead1Label;
    QLabel* subjecthead1Label;
    QLabel* line1StatLabel;
    QLabel* status1TextLabel;
    QLabel* line1HoldLabel;
    QLabel* line1MuteLabel;
    QLabel* line1ConfLabel;
    QLabel* line1ReferLabel;
    QLabel* crypt1Label;
    QLabel* line1SasLabel;
    QLabel* codec1TextLabel;
    QLabel* timer1TextLabel;
    QLineEdit* from1Label;
    QLineEdit* to1Label;
    QLineEdit* subject1Label;
    QLabel* photo1Label;
    QRadioButton* line2RadioButton;
    QLabel* fromhead2Label;
    QLabel* tohead2Label;
    QLabel* subjecthead2Label;
    QLabel* line2StatLabel;
    QLabel* status2TextLabel;
    QLabel* line2HoldLabel;
    QLabel* line2MuteLabel;
    QLabel* line2ConfLabel;
    QLabel* line2ReferLabel;
    QLabel* crypt2Label;
    QLabel* line2SasLabel;
    QLabel* codec2TextLabel;
    QLabel* timer2TextLabel;
    QLineEdit* from2Label;
    QLineEdit* to2Label;
    QLineEdit* subject2Label;
    QLabel* photo2Label;
    QMenuBar *menubar;
    QPopupMenu *fileMenu;
    QPopupMenu *Edit;
    QPopupMenu *Call;
    QPopupMenu *popupMenu_19;
    QPopupMenu *Message;
    QPopupMenu *PopupMenu_2;
    QPopupMenu *PopupMenu_3;
    QPopupMenu *View;
    QPopupMenu *Diamondcard;
    QPopupMenu *helpMenu;
    QToolBar *callToolbar;
    QAction* fileExitAction;
    QAction* helpAboutAction;
    QAction* callInvite;
    QAction* callAnswer;
    QAction* callBye;
    QAction* callReject;
    QAction* callHold;
    QAction* callRedirect;
    QAction* callDTMF;
    QAction* regRegister;
    QAction* regDeregister;
    QAction* regShow;
    QAction* callTermCap;
    QAction* serviceDnd;
    QAction* serviceRedirection;
    QAction* callRedial;
    QAction* helpAboutQtAction;
    QAction* editUserProfileAction;
    QAction* callConference;
    QAction* callMute;
    QAction* callTransfer;
    QAction* editSysSettingsAction;
    QAction* registrationAction;
    QAction* regDeregisterAll;
    QAction* serviceAutoAnswer;
    QAction* viewLogAction;
    QAction* viewCall_HistoryAction;
    QAction* fileChangeUserAction;
    QAction* helpWhats_ThisAction;
    QActionGroup* actgrActivateLine;
    QAction* actionLine1;
    QAction* actionLine2;
    QAction* callActivate_LineAction;
    QAction* viewDisplayAction;
    QAction* servicesVoice_mailAction;
    QAction* actionSendMsg;
    QAction* viewBuddyListAction;
    QAction* helpManualAction;
    QAction* diamondcardSign_upAction;

    virtual QString getMWIStatus( const t_mwi & mwi, bool & msg_waiting ) const;
    virtual t_twinkle_sys_tray * getSysTray();
    virtual bool getViewDisplay();
    virtual bool getViewBuddyList();
    virtual bool getViewCompactLineStatus();

public slots:
    virtual void closeEvent( QCloseEvent * e );
    virtual void fileExit();
    virtual void display( const QString & s );
    virtual void displayHeader();
    virtual void showLineTimer( int line );
    virtual void showLineTimer1();
    virtual void showLineTimer2();
    virtual void updateLineTimer( int line );
    virtual void updateLineEncryptionState( int line );
    virtual void updateLineStatus( int line );
    virtual void updateState();
    virtual void updateRegStatus();
    virtual void flashMWI();
    virtual void updateMwi();
    virtual void updateServicesStatus();
    virtual void updateMissedCallStatus( int num_missed_calls );
    virtual void updateSysTrayStatus();
    virtual void updateMenuStatus();
    virtual void updateDiamondcardMenu();
    virtual void removeDiamondcardAction( int & id );
    virtual void removeDiamondcardMenu( QPopupMenu * & menu );
    virtual void phoneRegister();
    virtual void do_phoneRegister( list<t_user *> user_list );
    virtual void phoneDeregister();
    virtual void do_phoneDeregister( list<t_user *> user_list );
    virtual void phoneDeregisterAll();
    virtual void do_phoneDeregisterAll( list<t_user *> user_list );
    virtual void phoneShowRegistrations();
    virtual void phoneInvite( t_user * user_config, const QString & dest, const QString & subject, bool anonymous );
    virtual void phoneInvite( const QString & dest, const QString & subject, bool anonymous );
    virtual void phoneInvite();
    virtual void do_phoneInvite( t_user * user_config, const QString & display, const t_url & destination, const QString & subject, bool anonymous );
    virtual void phoneRedial( void );
    virtual void phoneAnswer();
    virtual void phoneAnswerFromSystrayPopup();
    virtual void phoneBye();
    virtual void phoneReject();
    virtual void phoneRejectFromSystrayPopup();
    virtual void phoneRedirect( const list<string> & contacts );
    virtual void phoneRedirect();
    virtual void do_phoneRedirect( const list<t_display_url> & destinations );
    virtual void phoneTransfer( const string & dest, t_transfer_type transfer_type );
    virtual void phoneTransfer();
    virtual void do_phoneTransfer( const t_display_url & destination, t_transfer_type transfer_type );
    virtual void do_phoneTransferLine();
    virtual void phoneHold( bool on );
    virtual void phoneConference();
    virtual void phoneMute( bool on );
    virtual void phoneTermCap( const QString & dest );
    virtual void phoneTermCap();
    virtual void do_phoneTermCap( t_user * user_config, const t_url & destination );
    virtual void phoneDTMF();
    virtual void sendDTMF( const QString & digits );
    virtual void startMessageSession( void );
    virtual void startMessageSession( t_buddy * buddy );
    virtual void phoneConfirmZrtpSas( int line );
    virtual void phoneConfirmZrtpSas();
    virtual void phoneResetZrtpSasConfirmation( int line );
    virtual void phoneResetZrtpSasConfirmation();
    virtual void phoneEnableZrtp( bool on );
    virtual void phoneZrtpGoClearOk( unsigned short line );
    virtual void line1rbChangedState( bool on );
    virtual void line2rbChangedState( bool on );
    virtual void actionLine1Toggled( bool on );
    virtual void actionLine2Toggled( bool on );
    virtual void srvDnd( bool on );
    virtual void srvDnd();
    virtual void do_srvDnd_enable( list<t_user *> user_list );
    virtual void do_srvDnd_disable( list<t_user *> user_list );
    virtual void srvAutoAnswer( bool on );
    virtual void srvAutoAnswer();
    virtual void do_srvAutoAnswer_enable( list<t_user *> user_list );
    virtual void do_srvAutoAnswer_disable( list<t_user *> user_list );
    virtual void srvRedirect();
    virtual void do_srvRedirect( t_user * user_config, const list<t_display_url> & always, const list<t_display_url> & busy, const list<t_display_url> & noanswer );
    virtual void about();
    virtual void aboutQt();
    virtual void manual();
    virtual void editUserProfile();
    virtual void editSysSettings();
    virtual void selectProfile();
    virtual void newUsers( const list<string> & profiles );
    virtual void updateUserComboBox();
    virtual void updateSipUdpPort();
    virtual void updateRtpPorts();
    virtual void updateStunSettings( t_user * user_config );
    virtual void updateAuthCache( t_user * user_config, const string & realm );
    virtual void unsubscribeMWI( t_user * user_config );
    virtual void subscribeMWI( t_user * user_config );
    virtual void viewLog();
    virtual void updateLog( bool log_zapped );
    virtual void viewHistory();
    virtual void updateCallHistory();
    virtual void quickCall();
    virtual void addToCallComboBox( const QString & destination );
    virtual void showAddressBook();
    virtual void selectedAddress( const QString & address );
    virtual void enableCallOptions( bool enable );
    virtual void keyPressEvent( QKeyEvent * e );
    virtual void mouseReleaseEvent( QMouseEvent * e );
    virtual void processLeftMouseButtonRelease( QMouseEvent * e );
    virtual void processRightMouseButtonRelease( QMouseEvent * e );
    virtual void processCryptLabelClick( int line );
    virtual void popupMenuVoiceMail( const QPoint & pos );
    virtual void popupMenuVoiceMail( void );
    virtual void showDisplay( bool on );
    virtual void showBuddyList( bool on );
    virtual void showCompactLineStatus( bool on );
    virtual void populateBuddyList();
    virtual void showBuddyListPopupMenu( QListViewItem * item, const QPoint & pos );
    virtual void doCallBuddy();
    virtual void doMessageBuddy( QListViewItem * qitem );
    virtual void doMessageBuddy();
    virtual void doEditBuddy();
    virtual void doDeleteBuddy();
    virtual void doAddBuddy();
    virtual void doAvailabilityOffline();
    virtual void doAvailabilityOnline();
    virtual void DiamondcardSignUp();
    virtual void newDiamondcardUser( const QString & filename );
    virtual void DiamondcardAction( t_dc_action action, int userIdx );
    virtual void DiamondcardRecharge( int userIdx );
    virtual void DiamondcardBalanceHistory( int userIdx );
    virtual void DiamondcardCallHistory( int userIdx );
    virtual void DiamondcardAdminCenter( int userIdx );

protected:
    QGridLayout* MphoneFormLayout;
    QVBoxLayout* layout13;
    QGridLayout* layout76;
    QHBoxLayout* layout71;
    QHBoxLayout* layout75;
    QHBoxLayout* layout74;
    QVBoxLayout* displayGroupBoxLayout;
    QVBoxLayout* lineButtonGroupLayout;
    QHBoxLayout* layout20;
    QVBoxLayout* layout27;
    QVBoxLayout* layout19;
    QHBoxLayout* layout17;
    QHBoxLayout* layout22;
    QVBoxLayout* layout31;
    QVBoxLayout* layout21;
    QHBoxLayout* layout18;

protected slots:
    virtual void languageChange();

private:
    QTimer tmrFlashMWI;
    GetAddressForm *getAddressForm;
    SelectProfileForm *selectProfileForm;
    SelectUserForm *selectUserForm;
    HistoryForm *historyForm;
    TransferForm *transferForm;
    UserProfileForm *userProfileForm;
    SrvRedirectForm *srvRedirectForm;
    TermCapForm *termCapForm;
    RedirectForm *redirectForm;
    InviteForm *inviteForm;
    DtmfForm *dtmfForm;
    SysSettingsForm *sysSettingsForm;
    QStringList displayContents;
    LogViewForm *logViewForm;
    t_twinkle_sys_tray *sysTray;
    QTimer *lineTimer1;
    QTimer *lineTimer2;
    QTimer *hideLineTimer1;
    QTimer *hideLineTimer2;
    bool viewDisplay;
    bool viewCompactLineStatus;
    bool mwiFlashStatus;
    QPopupMenu *buddyPopupMenu;
    QPopupMenu *buddyListPopupMenu;
    QPopupMenu *changeAvailabilityPopupMenu;
    QToolTip *buddyToolTip;
    bool viewBuddyList;

    void init();
    void destroy();
    virtual QString lineSubstate2str( int line );

};

#endif // MPHONEFORM_H
