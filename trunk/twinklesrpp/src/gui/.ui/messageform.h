/****************************************************************************
** Form interface generated from reading ui file 'messageform.ui'
**
** Created: Sun Oct 3 21:28:47 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef MESSAGEFORM_H
#define MESSAGEFORM_H

#include <qvariant.h>
#include <qpixmap.h>
#include <qmainwindow.h>
#include "getaddressform.h"
#include "qstring.h"
#include "user.h"
#include "im/msg_session.h"
#include "phone.h"
#include "qpopupmenu.h"
#include "qlabel.h"

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QAction;
class QActionGroup;
class QToolBar;
class QPopupMenu;
class TextBrowserNoAutoLink;
class QLabel;
class QComboBox;
class QLineEdit;
class QToolButton;
class QGroupBox;
class QPushButton;
extern t_phone *phone;

class MessageForm : public QMainWindow
{
    Q_OBJECT

public:
    MessageForm( QWidget* parent = 0, const char* name = 0, WFlags fl = WType_TopLevel );
    ~MessageForm();

    QLabel* toTextLabel;
    QComboBox* fromComboBox;
    QLineEdit* toLineEdit;
    QToolButton* addressToolButton;
    QLabel* profileTextLabel;
    QGroupBox* conversationGroupBox;
    TextBrowserNoAutoLink* conversationBrowser;
    QLineEdit* msgLineEdit;
    QPushButton* sendPushButton;
    QToolBar *Toolbar;
    QAction* sendFileAction;

    virtual bool updateMessageSession();
    virtual bool prepareSendMessage();

public slots:
    virtual void closeEvent( QCloseEvent * e );
    virtual void show();
    virtual void selectUserConfig( t_user * user_config );
    virtual void showAddressBook();
    virtual void selectedAddress( const QString & address );
    virtual void sendMessage();
    virtual void sendFile( const QString & filename, const QString & subject );
    virtual void addMessage( const im::t_msg & msg, const QString & name );
    virtual void displayError( const QString & errorMsg );
    virtual void displayDeliveryNotification( const QString & notification );
    virtual void setRemotePartyCaption( void );
    virtual void showAttachmentPopupMenu( const QString & attachment );
    virtual void attachmentPopupActivated( int id );
    virtual void saveAttachment();
    virtual void chooseFileToSend();
    virtual void setComposingIndication( const QString & name );
    virtual void clearComposingIndication();
    virtual void setLocalComposingIndicationActive();
    virtual void keyPressEvent( QKeyEvent * e );
    virtual void toAddressChanged( const QString & address );
    virtual void showMessageSize();

protected:
    im::t_msg_session *_msgSession;

    QVBoxLayout* MessageFormLayout;
    QGridLayout* layout154;
    QHBoxLayout* layout152;
    QGridLayout* conversationGroupBoxLayout;
    QHBoxLayout* layout158;

protected slots:
    virtual void languageChange();

private:
    QDialog *_saveAsDialog;
    map<string, string> _filenameMap;
    bool _remotePartyComplete;
    GetAddressForm *_getAddressForm;
    QPopupMenu *attachmentPopupMenu;
    QString clickedAttachment;
    void *_serviceMap;
    QLabel *_isComposingLabel;
    QLabel *_msgSizeLabel;

    QPixmap image0;

    void init();
    void destroy();

};

#endif // MESSAGEFORM_H
