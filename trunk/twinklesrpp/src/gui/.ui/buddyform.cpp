/****************************************************************************
** Form implementation generated from reading ui file 'buddyform.ui'
**
** Created: Sun Oct 3 21:31:03 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "buddyform.h"

#include <qvariant.h>
#include <qtoolbutton.h>
#include <qlabel.h>
#include <qlineedit.h>
#include <qcheckbox.h>
#include <qpushbutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

#include "gui.h"
#include "sockets/url.h"
#include "buddylistview.h"
#include "audits/memman.h"
#include "../buddyform.ui.h"
/*
 *  Constructs a BuddyForm as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
BuddyForm::BuddyForm( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "BuddyForm" );
    BuddyFormLayout = new QVBoxLayout( this, 11, 6, "BuddyFormLayout"); 

    layout12 = new QGridLayout( 0, 1, 1, 0, 6, "layout12"); 
    spacer25 = new QSpacerItem( 20, 47, QSizePolicy::Minimum, QSizePolicy::Expanding );
    layout12->addMultiCell( spacer25, 1, 2, 2, 2 );

    addressToolButton = new QToolButton( this, "addressToolButton" );
    addressToolButton->setFocusPolicy( QToolButton::TabFocus );
    addressToolButton->setIconSet( QIconSet( QPixmap::fromMimeSource( "kontact_contacts.png" ) ) );

    layout12->addWidget( addressToolButton, 0, 2 );

    phoneTextLabel = new QLabel( this, "phoneTextLabel" );

    layout12->addWidget( phoneTextLabel, 1, 0 );

    nameLineEdit = new QLineEdit( this, "nameLineEdit" );

    layout12->addWidget( nameLineEdit, 0, 1 );

    subscribeCheckBox = new QCheckBox( this, "subscribeCheckBox" );
    subscribeCheckBox->setChecked( TRUE );

    layout12->addMultiCellWidget( subscribeCheckBox, 2, 2, 0, 1 );

    nameTextLabel = new QLabel( this, "nameTextLabel" );

    layout12->addWidget( nameTextLabel, 0, 0 );

    phoneLineEdit = new QLineEdit( this, "phoneLineEdit" );

    layout12->addWidget( phoneLineEdit, 1, 1 );
    BuddyFormLayout->addLayout( layout12 );
    spacer14 = new QSpacerItem( 20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding );
    BuddyFormLayout->addItem( spacer14 );

    layout54 = new QHBoxLayout( 0, 0, 6, "layout54"); 
    spacer13 = new QSpacerItem( 131, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout54->addItem( spacer13 );

    okPushButton = new QPushButton( this, "okPushButton" );
    okPushButton->setDefault( TRUE );
    layout54->addWidget( okPushButton );

    cancelPushButton = new QPushButton( this, "cancelPushButton" );
    layout54->addWidget( cancelPushButton );
    BuddyFormLayout->addLayout( layout54 );
    languageChange();
    resize( QSize(484, 154).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( okPushButton, SIGNAL( clicked() ), this, SLOT( validate() ) );
    connect( cancelPushButton, SIGNAL( clicked() ), this, SLOT( reject() ) );
    connect( addressToolButton, SIGNAL( clicked() ), this, SLOT( showAddressBook() ) );

    // tab order
    setTabOrder( nameLineEdit, phoneLineEdit );
    setTabOrder( phoneLineEdit, subscribeCheckBox );
    setTabOrder( subscribeCheckBox, addressToolButton );
    setTabOrder( addressToolButton, okPushButton );
    setTabOrder( okPushButton, cancelPushButton );

    // buddies
    phoneTextLabel->setBuddy( phoneLineEdit );
    nameTextLabel->setBuddy( nameLineEdit );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
BuddyForm::~BuddyForm()
{
    destroy();
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void BuddyForm::languageChange()
{
    setCaption( tr( "Twinkle - Buddy" ) );
    addressToolButton->setText( QString::null );
    QToolTip::add( addressToolButton, tr( "Address book" ) );
    QWhatsThis::add( addressToolButton, tr( "Select an address from the address book." ) );
    phoneTextLabel->setText( tr( "&Phone:" ) );
    QWhatsThis::add( nameLineEdit, tr( "Name of your buddy." ) );
    subscribeCheckBox->setText( tr( "&Show availability" ) );
    subscribeCheckBox->setAccel( QKeySequence( tr( "Alt+S" ) ) );
    QWhatsThis::add( subscribeCheckBox, tr( "Check this option if you want to see the availability of your buddy. This will only work if your provider offers a presence agent." ) );
    nameTextLabel->setText( tr( "&Name:" ) );
    QWhatsThis::add( phoneLineEdit, tr( "SIP address your buddy." ) );
    okPushButton->setText( tr( "&OK" ) );
    okPushButton->setAccel( QKeySequence( tr( "Alt+O" ) ) );
    cancelPushButton->setText( tr( "&Cancel" ) );
    cancelPushButton->setAccel( QKeySequence( tr( "Alt+C" ) ) );
}

