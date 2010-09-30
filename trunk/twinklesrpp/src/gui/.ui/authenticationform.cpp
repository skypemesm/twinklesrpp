/****************************************************************************
** Form implementation generated from reading ui file 'authenticationform.ui'
**
** Created: Wed Sep 29 18:52:51 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "authenticationform.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qlabel.h>
#include <qlineedit.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

#include "../authenticationform.ui.h"
/*
 *  Constructs a AuthenticationForm as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
AuthenticationForm::AuthenticationForm( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "AuthenticationForm" );
    AuthenticationFormLayout = new QGridLayout( this, 1, 1, 11, 6, "AuthenticationFormLayout"); 

    layout33 = new QVBoxLayout( 0, 0, 6, "layout33"); 

    authIconTextLabel = new QLabel( this, "authIconTextLabel" );
    authIconTextLabel->setPixmap( QPixmap::fromMimeSource( "password.png" ) );
    layout33->addWidget( authIconTextLabel );
    spacer46 = new QSpacerItem( 20, 51, QSizePolicy::Minimum, QSizePolicy::Expanding );
    layout33->addItem( spacer46 );

    AuthenticationFormLayout->addMultiCellLayout( layout33, 0, 4, 0, 0 );

    layout9 = new QGridLayout( 0, 1, 1, 0, 6, "layout9"); 

    userValueTextLabel = new QLabel( this, "userValueTextLabel" );
    userValueTextLabel->setPaletteForegroundColor( QColor( 0, 85, 255 ) );

    layout9->addWidget( userValueTextLabel, 1, 1 );

    profileValueTextLabel = new QLabel( this, "profileValueTextLabel" );
    profileValueTextLabel->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)7, (QSizePolicy::SizeType)0, 0, 0, profileValueTextLabel->sizePolicy().hasHeightForWidth() ) );
    profileValueTextLabel->setPaletteForegroundColor( QColor( 0, 85, 255 ) );

    layout9->addWidget( profileValueTextLabel, 0, 1 );

    profileTextLabel = new QLabel( this, "profileTextLabel" );

    layout9->addWidget( profileTextLabel, 0, 0 );

    userTextLabel = new QLabel( this, "userTextLabel" );

    layout9->addWidget( userTextLabel, 1, 0 );

    AuthenticationFormLayout->addLayout( layout9, 0, 1 );

    layout10 = new QGridLayout( 0, 1, 1, 0, 6, "layout10"); 

    passwordTextLabel = new QLabel( this, "passwordTextLabel" );

    layout10->addWidget( passwordTextLabel, 1, 0 );

    passwordLineEdit = new QLineEdit( this, "passwordLineEdit" );
    passwordLineEdit->setMinimumSize( QSize( 200, 0 ) );
    passwordLineEdit->setEchoMode( QLineEdit::Password );

    layout10->addWidget( passwordLineEdit, 1, 1 );

    usernameLineEdit = new QLineEdit( this, "usernameLineEdit" );
    usernameLineEdit->setMinimumSize( QSize( 200, 0 ) );

    layout10->addWidget( usernameLineEdit, 0, 1 );

    usernameTextLabel = new QLabel( this, "usernameTextLabel" );

    layout10->addWidget( usernameTextLabel, 0, 0 );

    AuthenticationFormLayout->addLayout( layout10, 2, 1 );
    spacer13 = new QSpacerItem( 20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding );
    AuthenticationFormLayout->addItem( spacer13, 3, 1 );

    layout22 = new QHBoxLayout( 0, 0, 6, "layout22"); 
    spacer12 = new QSpacerItem( 101, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout22->addItem( spacer12 );

    okPushButton = new QPushButton( this, "okPushButton" );
    okPushButton->setDefault( TRUE );
    layout22->addWidget( okPushButton );

    cancelPushButton = new QPushButton( this, "cancelPushButton" );
    layout22->addWidget( cancelPushButton );

    AuthenticationFormLayout->addLayout( layout22, 4, 1 );

    layout13 = new QHBoxLayout( 0, 0, 6, "layout13"); 

    authTextLabel = new QLabel( this, "authTextLabel" );
    authTextLabel->setMaximumSize( QSize( 32767, 32767 ) );
    layout13->addWidget( authTextLabel );

    realmTextLabel = new QLabel( this, "realmTextLabel" );
    realmTextLabel->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)7, (QSizePolicy::SizeType)0, 0, 0, realmTextLabel->sizePolicy().hasHeightForWidth() ) );
    realmTextLabel->setPaletteForegroundColor( QColor( 0, 85, 255 ) );
    layout13->addWidget( realmTextLabel );

    AuthenticationFormLayout->addLayout( layout13, 1, 1 );
    languageChange();
    resize( QSize(582, 198).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( okPushButton, SIGNAL( clicked() ), this, SLOT( accept() ) );
    connect( cancelPushButton, SIGNAL( clicked() ), this, SLOT( reject() ) );

    // tab order
    setTabOrder( usernameLineEdit, passwordLineEdit );
    setTabOrder( passwordLineEdit, okPushButton );
    setTabOrder( okPushButton, cancelPushButton );

    // buddies
    passwordTextLabel->setBuddy( passwordLineEdit );
    usernameTextLabel->setBuddy( usernameLineEdit );
}

/*
 *  Destroys the object and frees any allocated resources
 */
AuthenticationForm::~AuthenticationForm()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void AuthenticationForm::languageChange()
{
    setCaption( tr( "Twinkle - Authentication" ) );
    authIconTextLabel->setText( QString::null );
    userValueTextLabel->setText( tr( "user", "No need to translate" ) );
    QWhatsThis::add( userValueTextLabel, tr( "The user for which authentication is requested." ) );
    profileValueTextLabel->setText( tr( "profile", "No need to translate" ) );
    QWhatsThis::add( profileValueTextLabel, tr( "The user profile of the user for which authentication is requested." ) );
    profileTextLabel->setText( tr( "User profile:" ) );
    userTextLabel->setText( tr( "User:" ) );
    passwordTextLabel->setText( tr( "&Password:" ) );
    QWhatsThis::add( passwordLineEdit, tr( "Your password for authentication." ) );
    QWhatsThis::add( usernameLineEdit, tr( "Your SIP authentication name. Quite often this is the same as your SIP user name. It can be a different name though." ) );
    usernameTextLabel->setText( tr( "&User name:" ) );
    okPushButton->setText( tr( "&OK" ) );
    cancelPushButton->setText( tr( "&Cancel" ) );
    authTextLabel->setText( tr( "Login required for realm:" ) );
    realmTextLabel->setText( tr( "realm", "No need to translate" ) );
    QWhatsThis::add( realmTextLabel, tr( "The realm for which you need to authenticate." ) );
}

