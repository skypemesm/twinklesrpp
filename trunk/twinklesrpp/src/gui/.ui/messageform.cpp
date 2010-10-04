/****************************************************************************
** Form implementation generated from reading ui file 'messageform.ui'
**
** Created: Sun Oct 3 21:30:59 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "messageform.h"

#include <qvariant.h>
#include <textbrowsernoautolink.h>
#include <qpushbutton.h>
#include <qlabel.h>
#include <qcombobox.h>
#include <qlineedit.h>
#include <qtoolbutton.h>
#include <qgroupbox.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qaction.h>
#include <qmenubar.h>
#include <qpopupmenu.h>
#include <qtoolbar.h>
#include <qimage.h>
#include <qpixmap.h>

#include "gui.h"
#include "sockets/url.h"
#include "qstylesheet.h"
#include "audits/memman.h"
#include "util.h"
#include "qpixmap.h"
#include "qcursor.h"
#include "qfiledialog.h"
#include "utils/file_utils.h"
#include "qfile.h"
#include "sendfileform.h"
#include "qstatusbar.h"
#include "qframe.h"
#include "../messageform.ui.h"
/*
 *  Constructs a MessageForm as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 */
MessageForm::MessageForm( QWidget* parent, const char* name, WFlags fl )
    : QMainWindow( parent, name, fl )
{
    (void)statusBar();
    if ( !name )
	setName( "MessageForm" );
    setCentralWidget( new QWidget( this, "qt_central_widget" ) );
    MessageFormLayout = new QVBoxLayout( centralWidget(), 11, 6, "MessageFormLayout"); 

    layout154 = new QGridLayout( 0, 1, 1, 0, 6, "layout154"); 

    toTextLabel = new QLabel( centralWidget(), "toTextLabel" );

    layout154->addWidget( toTextLabel, 1, 0 );

    fromComboBox = new QComboBox( FALSE, centralWidget(), "fromComboBox" );

    layout154->addWidget( fromComboBox, 0, 1 );

    layout152 = new QHBoxLayout( 0, 0, 6, "layout152"); 

    toLineEdit = new QLineEdit( centralWidget(), "toLineEdit" );
    layout152->addWidget( toLineEdit );

    addressToolButton = new QToolButton( centralWidget(), "addressToolButton" );
    addressToolButton->setFocusPolicy( QToolButton::TabFocus );
    addressToolButton->setIconSet( QIconSet( QPixmap::fromMimeSource( "kontact_contacts.png" ) ) );
    layout152->addWidget( addressToolButton );

    layout154->addLayout( layout152, 1, 1 );

    profileTextLabel = new QLabel( centralWidget(), "profileTextLabel" );

    layout154->addWidget( profileTextLabel, 0, 0 );
    MessageFormLayout->addLayout( layout154 );

    conversationGroupBox = new QGroupBox( centralWidget(), "conversationGroupBox" );
    conversationGroupBox->setColumnLayout(0, Qt::Vertical );
    conversationGroupBox->layout()->setSpacing( 6 );
    conversationGroupBox->layout()->setMargin( 11 );
    conversationGroupBoxLayout = new QGridLayout( conversationGroupBox->layout() );
    conversationGroupBoxLayout->setAlignment( Qt::AlignTop );

    conversationBrowser = new TextBrowserNoAutoLink( conversationGroupBox, "conversationBrowser" );

    conversationGroupBoxLayout->addWidget( conversationBrowser, 0, 0 );
    MessageFormLayout->addWidget( conversationGroupBox );

    layout158 = new QHBoxLayout( 0, 0, 6, "layout158"); 

    msgLineEdit = new QLineEdit( centralWidget(), "msgLineEdit" );
    layout158->addWidget( msgLineEdit );

    sendPushButton = new QPushButton( centralWidget(), "sendPushButton" );
    sendPushButton->setAutoDefault( FALSE );
    sendPushButton->setDefault( TRUE );
    layout158->addWidget( sendPushButton );
    MessageFormLayout->addLayout( layout158 );

    // actions
    sendFileAction = new QAction( this, "sendFileAction" );
    sendFileAction->setIconSet( QIconSet( QPixmap::fromMimeSource( "attach.png" ) ) );


    // toolbars
    Toolbar = new QToolBar( QString(""), this, DockTop ); 

    Toolbar->setHorizontallyStretchable( FALSE );
    sendFileAction->addTo( Toolbar );

    languageChange();
    resize( QSize(578, 356).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( sendPushButton, SIGNAL( clicked() ), this, SLOT( sendMessage() ) );
    connect( addressToolButton, SIGNAL( clicked() ), this, SLOT( showAddressBook() ) );
    connect( conversationBrowser, SIGNAL( linkClicked(const QString&) ), this, SLOT( showAttachmentPopupMenu(const QString&) ) );
    connect( sendFileAction, SIGNAL( activated() ), this, SLOT( chooseFileToSend() ) );
    connect( toLineEdit, SIGNAL( textChanged(const QString&) ), this, SLOT( toAddressChanged(const QString&) ) );
    connect( msgLineEdit, SIGNAL( textChanged(const QString&) ), this, SLOT( showMessageSize() ) );

    // buddies
    toTextLabel->setBuddy( toLineEdit );
    profileTextLabel->setBuddy( fromComboBox );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
MessageForm::~MessageForm()
{
    destroy();
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void MessageForm::languageChange()
{
    setCaption( tr( "Twinkle - Instant message" ) );
    toTextLabel->setText( tr( "&To:" ) );
    QWhatsThis::add( fromComboBox, tr( "The user that will send the message." ) );
    QWhatsThis::add( toLineEdit, tr( "The address of the user that you want to send a message. This can be a full SIP address like <b>sip:example@example.com</b> or just the user part or telephone number of the full address. When you do not specify a full address, then Twinkle will complete the address by using the domain value of your user profile." ) );
    addressToolButton->setText( QString::null );
    addressToolButton->setAccel( QKeySequence( tr( "F10" ) ) );
    QToolTip::add( addressToolButton, tr( "Address book" ) );
    QWhatsThis::add( addressToolButton, tr( "Select an address from the address book." ) );
    profileTextLabel->setText( tr( "&User profile:" ) );
    conversationGroupBox->setTitle( tr( "Conversation" ) );
    QWhatsThis::add( msgLineEdit, tr( "Type your message here and then press \"send\" to send it." ) );
    sendPushButton->setText( tr( "&Send" ) );
    sendPushButton->setAccel( QKeySequence( tr( "Alt+S" ) ) );
    QWhatsThis::add( sendPushButton, tr( "Send the message." ) );
    sendFileAction->setText( tr( "Send file..." ) );
    sendFileAction->setToolTip( tr( "Send file" ) );
    Toolbar->setLabel( tr( "Instant message toolbar" ) );
}

