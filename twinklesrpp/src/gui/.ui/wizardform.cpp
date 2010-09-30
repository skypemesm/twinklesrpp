/****************************************************************************
** Form implementation generated from reading ui file 'wizardform.ui'
**
** Created: Wed Sep 29 18:53:49 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "wizardform.h"

#include <qvariant.h>
#include <qlineedit.h>
#include <qlabel.h>
#include <qcombobox.h>
#include <qpushbutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

#include "qregexp.h"
#include "qlineedit.h"
#include "qlabel.h"
#include "qvalidator.h"
#include "qcombobox.h"
#include "gui.h"
#include "qfile.h"
#include "../wizardform.ui.h"
/*
 *  Constructs a WizardForm as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
WizardForm::WizardForm( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "WizardForm" );
    WizardFormLayout = new QVBoxLayout( this, 11, 6, "WizardFormLayout"); 

    layout15 = new QGridLayout( 0, 1, 1, 0, 6, "layout15"); 

    stunServerLineEdit = new QLineEdit( this, "stunServerLineEdit" );

    layout15->addMultiCellWidget( stunServerLineEdit, 8, 8, 1, 2 );

    stunServerTextLabel = new QLabel( this, "stunServerTextLabel" );

    layout15->addWidget( stunServerTextLabel, 8, 0 );

    usernameLineEdit = new QLineEdit( this, "usernameLineEdit" );

    layout15->addMultiCellWidget( usernameLineEdit, 2, 2, 1, 2 );

    domainTextLabel = new QLabel( this, "domainTextLabel" );

    layout15->addWidget( domainTextLabel, 3, 0 );

    serviceProviderComboBox = new QComboBox( FALSE, this, "serviceProviderComboBox" );

    layout15->addWidget( serviceProviderComboBox, 0, 1 );

    authNameTextLabel = new QLabel( this, "authNameTextLabel" );

    layout15->addWidget( authNameTextLabel, 4, 0 );

    dislpayTextLabel = new QLabel( this, "dislpayTextLabel" );

    layout15->addWidget( dislpayTextLabel, 1, 0 );

    authNameLineEdit = new QLineEdit( this, "authNameLineEdit" );

    layout15->addMultiCellWidget( authNameLineEdit, 4, 4, 1, 2 );
    spacer22 = new QSpacerItem( 206, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout15->addItem( spacer22, 0, 2 );

    domainLineEdit = new QLineEdit( this, "domainLineEdit" );

    layout15->addMultiCellWidget( domainLineEdit, 3, 3, 1, 2 );

    displayLineEdit = new QLineEdit( this, "displayLineEdit" );

    layout15->addMultiCellWidget( displayLineEdit, 1, 1, 1, 2 );

    proxyTextLabel = new QLabel( this, "proxyTextLabel" );
    proxyTextLabel->setEnabled( TRUE );

    layout15->addMultiCellWidget( proxyTextLabel, 6, 7, 0, 0 );

    proxyLineEdit = new QLineEdit( this, "proxyLineEdit" );
    proxyLineEdit->setEnabled( TRUE );

    layout15->addMultiCellWidget( proxyLineEdit, 7, 7, 1, 2 );

    serviceProviderTextLabel = new QLabel( this, "serviceProviderTextLabel" );

    layout15->addWidget( serviceProviderTextLabel, 0, 0 );

    authPasswordTextLabel = new QLabel( this, "authPasswordTextLabel" );

    layout15->addWidget( authPasswordTextLabel, 5, 0 );

    usernameTextLabel = new QLabel( this, "usernameTextLabel" );

    layout15->addWidget( usernameTextLabel, 2, 0 );

    authPasswordLineEdit = new QLineEdit( this, "authPasswordLineEdit" );
    authPasswordLineEdit->setEchoMode( QLineEdit::Password );

    layout15->addMultiCellWidget( authPasswordLineEdit, 5, 6, 1, 2 );
    WizardFormLayout->addLayout( layout15 );
    spacer23 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    WizardFormLayout->addItem( spacer23 );

    layout14 = new QHBoxLayout( 0, 0, 6, "layout14"); 
    spacer20 = new QSpacerItem( 371, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout14->addItem( spacer20 );

    okPushButton = new QPushButton( this, "okPushButton" );
    okPushButton->setDefault( TRUE );
    layout14->addWidget( okPushButton );

    cancelPushButton = new QPushButton( this, "cancelPushButton" );
    layout14->addWidget( cancelPushButton );
    WizardFormLayout->addLayout( layout14 );
    languageChange();
    resize( QSize(596, 321).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( okPushButton, SIGNAL( clicked() ), this, SLOT( validate() ) );
    connect( cancelPushButton, SIGNAL( clicked() ), this, SLOT( reject() ) );
    connect( usernameLineEdit, SIGNAL( textChanged(const QString&) ), this, SLOT( updateAuthName(const QString&) ) );
    connect( serviceProviderComboBox, SIGNAL( activated(const QString&) ), this, SLOT( update(const QString&) ) );
    connect( authNameLineEdit, SIGNAL( lostFocus() ), this, SLOT( disableSuggestAuthName() ) );

    // tab order
    setTabOrder( serviceProviderComboBox, displayLineEdit );
    setTabOrder( displayLineEdit, usernameLineEdit );
    setTabOrder( usernameLineEdit, domainLineEdit );
    setTabOrder( domainLineEdit, authNameLineEdit );
    setTabOrder( authNameLineEdit, authPasswordLineEdit );
    setTabOrder( authPasswordLineEdit, proxyLineEdit );
    setTabOrder( proxyLineEdit, stunServerLineEdit );
    setTabOrder( stunServerLineEdit, okPushButton );
    setTabOrder( okPushButton, cancelPushButton );

    // buddies
    stunServerTextLabel->setBuddy( stunServerLineEdit );
    domainTextLabel->setBuddy( domainLineEdit );
    authNameTextLabel->setBuddy( authNameLineEdit );
    dislpayTextLabel->setBuddy( displayLineEdit );
    proxyTextLabel->setBuddy( proxyLineEdit );
    serviceProviderTextLabel->setBuddy( serviceProviderComboBox );
    authPasswordTextLabel->setBuddy( authPasswordLineEdit );
    usernameTextLabel->setBuddy( usernameLineEdit );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
WizardForm::~WizardForm()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void WizardForm::languageChange()
{
    setCaption( tr( "Twinkle - Wizard" ) );
    QWhatsThis::add( stunServerLineEdit, tr( "The hostname, domain name or IP address of the STUN server." ) );
    stunServerTextLabel->setText( tr( "S&TUN server:" ) );
    QWhatsThis::add( usernameLineEdit, tr( "The SIP user name given to you by your provider. It is the user part in your SIP address, <b>username</b>@domain.com This could be a telephone number.\n"
"<br><br>\n"
"This field is mandatory." ) );
    domainTextLabel->setText( tr( "&Domain*:" ) );
    QWhatsThis::add( serviceProviderComboBox, tr( "Choose your SIP service provider. If your SIP service provider is not in the list, then select <b>Other</b> and fill in the settings you received from your provider.<br><br>\n"
"If you select one of the predefined SIP service providers then you only have to fill in your name, user name, authentication name and password." ) );
    authNameTextLabel->setText( tr( "&Authentication name:" ) );
    dislpayTextLabel->setText( tr( "&Your name:" ) );
    QWhatsThis::add( authNameLineEdit, tr( "Your SIP authentication name. Quite often this is the same as your SIP user name. It can be a different name though." ) );
    QWhatsThis::add( domainLineEdit, tr( "The domain part of your SIP address, username@<b>domain.com</b>. Instead of a real domain this could also be the hostname or IP address of your <b>SIP proxy</b>. If you want direct IP phone to IP phone communications then you fill in the hostname or IP address of your computer.\n"
"<br><br>\n"
"This field is mandatory." ) );
    QWhatsThis::add( displayLineEdit, tr( "This is just your full name, e.g. John Doe. It is used as a display name. When you make a call, this display name might be shown to the called party." ) );
    proxyTextLabel->setText( tr( "SIP pro&xy:" ) );
    QWhatsThis::add( proxyLineEdit, tr( "The hostname, domain name or IP address of your SIP proxy. If this is the same value as your domain, you may leave this field empty." ) );
    serviceProviderTextLabel->setText( tr( "&SIP service provider:" ) );
    authPasswordTextLabel->setText( tr( "&Password:" ) );
    usernameTextLabel->setText( tr( "&User name*:" ) );
    QWhatsThis::add( authPasswordLineEdit, tr( "Your password for authentication." ) );
    okPushButton->setText( tr( "&OK" ) );
    okPushButton->setAccel( QKeySequence( tr( "Alt+O" ) ) );
    cancelPushButton->setText( tr( "&Cancel" ) );
    cancelPushButton->setAccel( QKeySequence( tr( "Alt+C" ) ) );
}

