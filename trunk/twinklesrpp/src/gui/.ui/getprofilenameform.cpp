/****************************************************************************
** Form implementation generated from reading ui file 'getprofilenameform.ui'
**
** Created: Sun Oct 3 21:30:25 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "getprofilenameform.h"

#include <qvariant.h>
#include <qlabel.h>
#include <qpushbutton.h>
#include <qlineedit.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

#include "qlineedit.h"
#include "qregexp.h"
#include "qvalidator.h"
#include "protocol.h"
#include "qmessagebox.h"
#include "qdir.h"
#include "qfile.h"
#include "user.h"
#include "../getprofilenameform.ui.h"
/*
 *  Constructs a GetProfileNameForm as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
GetProfileNameForm::GetProfileNameForm( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "GetProfileNameForm" );
    GetProfileNameFormLayout = new QGridLayout( this, 1, 1, 11, 6, "GetProfileNameFormLayout"); 

    userIconTextLabel = new QLabel( this, "userIconTextLabel" );
    userIconTextLabel->setBackgroundOrigin( QLabel::WidgetOrigin );
    userIconTextLabel->setPixmap( QPixmap::fromMimeSource( "penguin_big.png" ) );

    GetProfileNameFormLayout->addWidget( userIconTextLabel, 0, 0 );

    layout24 = new QHBoxLayout( 0, 0, 6, "layout24"); 
    spacer41 = new QSpacerItem( 81, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout24->addItem( spacer41 );

    okPushButton = new QPushButton( this, "okPushButton" );
    okPushButton->setDefault( TRUE );
    layout24->addWidget( okPushButton );

    cancelPushButton = new QPushButton( this, "cancelPushButton" );
    layout24->addWidget( cancelPushButton );

    GetProfileNameFormLayout->addMultiCellLayout( layout24, 1, 1, 0, 1 );

    layout26 = new QVBoxLayout( 0, 0, 6, "layout26"); 

    profileTextLabel = new QLabel( this, "profileTextLabel" );
    profileTextLabel->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)0, 0, 0, profileTextLabel->sizePolicy().hasHeightForWidth() ) );
    profileTextLabel->setScaledContents( FALSE );
    profileTextLabel->setAlignment( int( QLabel::AlignVCenter ) );
    layout26->addWidget( profileTextLabel );

    profileLineEdit = new QLineEdit( this, "profileLineEdit" );
    layout26->addWidget( profileLineEdit );

    GetProfileNameFormLayout->addLayout( layout26, 0, 1 );
    languageChange();
    resize( QSize(430, 127).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( cancelPushButton, SIGNAL( clicked() ), this, SLOT( reject() ) );
    connect( okPushButton, SIGNAL( clicked() ), this, SLOT( validate() ) );

    // tab order
    setTabOrder( profileLineEdit, okPushButton );
    setTabOrder( okPushButton, cancelPushButton );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
GetProfileNameForm::~GetProfileNameForm()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void GetProfileNameForm::languageChange()
{
    setCaption( tr( "Twinkle - Profile name" ) );
    userIconTextLabel->setText( QString::null );
    okPushButton->setText( tr( "&OK" ) );
    cancelPushButton->setText( tr( "&Cancel" ) );
    profileTextLabel->setText( tr( "Enter a name for your profile:" ) );
    profileLineEdit->setText( QString::null );
    QWhatsThis::add( profileLineEdit, tr( "<b>The name of your profile</b>\n"
"<br><br>\n"
"A profile contains your user settings, e.g. your user name and password. You have to give each profile a name.\n"
"<br><br>\n"
"If you have multiple SIP accounts, you can create multiple profiles. When you startup Twinkle it will show you the list of profile names from which you can select the profile you want to run.\n"
"<br><br>\n"
"To remember your profiles easily you could use your SIP user name as a profile name, e.g. <b>example@example.com</b>" ) );
}

