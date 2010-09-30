/****************************************************************************
** Form implementation generated from reading ui file 'addresscardform.ui'
**
** Created: Wed Sep 29 18:54:18 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "addresscardform.h"

#include <qvariant.h>
#include <qlabel.h>
#include <qlineedit.h>
#include <qpushbutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

#include "gui.h"
#include "../addresscardform.ui.h"
/*
 *  Constructs a AddressCardForm as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
AddressCardForm::AddressCardForm( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "AddressCardForm" );
    AddressCardFormLayout = new QVBoxLayout( this, 11, 6, "AddressCardFormLayout"); 

    layout73 = new QGridLayout( 0, 1, 1, 0, 6, "layout73"); 

    remarkTextLabel = new QLabel( this, "remarkTextLabel" );

    layout73->addWidget( remarkTextLabel, 4, 0 );

    infixNameLineEdit = new QLineEdit( this, "infixNameLineEdit" );

    layout73->addWidget( infixNameLineEdit, 1, 1 );

    firstNameLineEdit = new QLineEdit( this, "firstNameLineEdit" );

    layout73->addWidget( firstNameLineEdit, 0, 1 );

    firstNameTextLabel = new QLabel( this, "firstNameTextLabel" );

    layout73->addWidget( firstNameTextLabel, 0, 0 );

    remarkLineEdit = new QLineEdit( this, "remarkLineEdit" );

    layout73->addWidget( remarkLineEdit, 4, 1 );

    phoneTextLabel = new QLabel( this, "phoneTextLabel" );

    layout73->addWidget( phoneTextLabel, 3, 0 );

    infixNameTextLabel = new QLabel( this, "infixNameTextLabel" );

    layout73->addWidget( infixNameTextLabel, 1, 0 );

    phoneLineEdit = new QLineEdit( this, "phoneLineEdit" );

    layout73->addWidget( phoneLineEdit, 3, 1 );

    lastNameLineEdit = new QLineEdit( this, "lastNameLineEdit" );

    layout73->addWidget( lastNameLineEdit, 2, 1 );

    lastNameTextLabel = new QLabel( this, "lastNameTextLabel" );

    layout73->addWidget( lastNameTextLabel, 2, 0 );
    AddressCardFormLayout->addLayout( layout73 );
    spacer100 = new QSpacerItem( 20, 31, QSizePolicy::Minimum, QSizePolicy::Expanding );
    AddressCardFormLayout->addItem( spacer100 );

    layout72 = new QHBoxLayout( 0, 0, 6, "layout72"); 
    spacer99 = new QSpacerItem( 261, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout72->addItem( spacer99 );

    okPushButton = new QPushButton( this, "okPushButton" );
    okPushButton->setDefault( TRUE );
    layout72->addWidget( okPushButton );

    cancelPushButton = new QPushButton( this, "cancelPushButton" );
    layout72->addWidget( cancelPushButton );
    AddressCardFormLayout->addLayout( layout72 );
    languageChange();
    resize( QSize(604, 209).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( okPushButton, SIGNAL( clicked() ), this, SLOT( validate() ) );
    connect( cancelPushButton, SIGNAL( clicked() ), this, SLOT( reject() ) );

    // tab order
    setTabOrder( firstNameLineEdit, infixNameLineEdit );
    setTabOrder( infixNameLineEdit, lastNameLineEdit );
    setTabOrder( lastNameLineEdit, phoneLineEdit );
    setTabOrder( phoneLineEdit, remarkLineEdit );
    setTabOrder( remarkLineEdit, okPushButton );
    setTabOrder( okPushButton, cancelPushButton );

    // buddies
    remarkTextLabel->setBuddy( remarkLineEdit );
    firstNameTextLabel->setBuddy( firstNameLineEdit );
    phoneTextLabel->setBuddy( phoneLineEdit );
    infixNameTextLabel->setBuddy( infixNameLineEdit );
    lastNameTextLabel->setBuddy( lastNameLineEdit );
}

/*
 *  Destroys the object and frees any allocated resources
 */
AddressCardForm::~AddressCardForm()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void AddressCardForm::languageChange()
{
    setCaption( tr( "Twinkle - Address Card" ) );
    remarkTextLabel->setText( tr( "&Remark:" ) );
    QWhatsThis::add( infixNameLineEdit, tr( "Infix name of contact." ) );
    QWhatsThis::add( firstNameLineEdit, tr( "First name of contact." ) );
    firstNameTextLabel->setText( tr( "&First name:" ) );
    QWhatsThis::add( remarkLineEdit, tr( "You may place any remark about the contact here." ) );
    phoneTextLabel->setText( tr( "&Phone:" ) );
    infixNameTextLabel->setText( tr( "&Infix name:" ) );
    QWhatsThis::add( phoneLineEdit, tr( "Phone number or SIP address of contact." ) );
    QWhatsThis::add( lastNameLineEdit, tr( "Last name of contact." ) );
    lastNameTextLabel->setText( tr( "&Last name:" ) );
    okPushButton->setText( tr( "&OK" ) );
    okPushButton->setAccel( QKeySequence( tr( "Alt+O" ) ) );
    cancelPushButton->setText( tr( "&Cancel" ) );
    cancelPushButton->setAccel( QKeySequence( tr( "Alt+C" ) ) );
}

