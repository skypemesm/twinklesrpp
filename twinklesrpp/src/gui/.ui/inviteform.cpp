/****************************************************************************
** Form implementation generated from reading ui file 'inviteform.ui'
**
** Created: Sun Oct 3 21:29:39 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "inviteform.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qlabel.h>
#include <qlineedit.h>
#include <qtoolbutton.h>
#include <qcombobox.h>
#include <qcheckbox.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

#include "gui.h"
#include "util.h"
#include "audits/memman.h"
#include "sys_settings.h"
#include "qregexp.h"
#include "qvalidator.h"
#include "../inviteform.ui.h"
/*
 *  Constructs a InviteForm as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
InviteForm::InviteForm( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "InviteForm" );
    setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)5, 0, 0, sizePolicy().hasHeightForWidth() ) );
    InviteFormLayout = new QVBoxLayout( this, 11, 6, "InviteFormLayout"); 

    layout40 = new QGridLayout( 0, 1, 1, 0, 6, "layout40"); 

    inviteTextLabel = new QLabel( this, "inviteTextLabel" );

    layout40->addWidget( inviteTextLabel, 1, 0 );
    spacer3 = new QSpacerItem( 20, 23, QSizePolicy::Minimum, QSizePolicy::Expanding );
    layout40->addItem( spacer3, 2, 2 );

    subjectLineEdit = new QLineEdit( this, "subjectLineEdit" );

    layout40->addWidget( subjectLineEdit, 2, 1 );

    addressToolButton = new QToolButton( this, "addressToolButton" );
    addressToolButton->setFocusPolicy( QToolButton::TabFocus );
    addressToolButton->setIconSet( QIconSet( QPixmap::fromMimeSource( "kontact_contacts.png" ) ) );

    layout40->addWidget( addressToolButton, 1, 2 );
    spacer24 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    layout40->addItem( spacer24, 0, 2 );

    inviteComboBox = new QComboBox( FALSE, this, "inviteComboBox" );
    inviteComboBox->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)7, (QSizePolicy::SizeType)0, 0, 0, inviteComboBox->sizePolicy().hasHeightForWidth() ) );
    inviteComboBox->setEditable( TRUE );
    inviteComboBox->setMaxCount( 10 );
    inviteComboBox->setInsertionPolicy( QComboBox::NoInsertion );
    inviteComboBox->setAutoCompletion( TRUE );

    layout40->addWidget( inviteComboBox, 1, 1 );

    fromComboBox = new QComboBox( FALSE, this, "fromComboBox" );
    fromComboBox->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)7, (QSizePolicy::SizeType)0, 0, 0, fromComboBox->sizePolicy().hasHeightForWidth() ) );

    layout40->addWidget( fromComboBox, 0, 1 );

    subjectTextLabel = new QLabel( this, "subjectTextLabel" );

    layout40->addWidget( subjectTextLabel, 2, 0 );

    fromTextLabel = new QLabel( this, "fromTextLabel" );

    layout40->addWidget( fromTextLabel, 0, 0 );
    InviteFormLayout->addLayout( layout40 );

    layout13 = new QHBoxLayout( 0, 0, 6, "layout13"); 

    hideUserCheckBox = new QCheckBox( this, "hideUserCheckBox" );
    layout13->addWidget( hideUserCheckBox );
    spacer5 = new QSpacerItem( 181, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout13->addItem( spacer5 );
    InviteFormLayout->addLayout( layout13 );
    spacer12 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    InviteFormLayout->addItem( spacer12 );

    layout20 = new QHBoxLayout( 0, 0, 6, "layout20"); 
    spacer11 = new QSpacerItem( 91, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout20->addItem( spacer11 );

    okPushButton = new QPushButton( this, "okPushButton" );
    okPushButton->setDefault( TRUE );
    layout20->addWidget( okPushButton );

    cancelPushButton = new QPushButton( this, "cancelPushButton" );
    layout20->addWidget( cancelPushButton );
    InviteFormLayout->addLayout( layout20 );
    languageChange();
    resize( QSize(592, 203).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( cancelPushButton, SIGNAL( clicked() ), this, SLOT( reject() ) );
    connect( okPushButton, SIGNAL( clicked() ), this, SLOT( validate() ) );
    connect( addressToolButton, SIGNAL( clicked() ), this, SLOT( showAddressBook() ) );
    connect( hideUserCheckBox, SIGNAL( clicked() ), this, SLOT( warnHideUser() ) );

    // tab order
    setTabOrder( inviteComboBox, subjectLineEdit );
    setTabOrder( subjectLineEdit, hideUserCheckBox );
    setTabOrder( hideUserCheckBox, addressToolButton );
    setTabOrder( addressToolButton, okPushButton );
    setTabOrder( okPushButton, cancelPushButton );
    setTabOrder( cancelPushButton, fromComboBox );

    // buddies
    inviteTextLabel->setBuddy( inviteComboBox );
    subjectTextLabel->setBuddy( subjectLineEdit );
    fromTextLabel->setBuddy( fromComboBox );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
InviteForm::~InviteForm()
{
    destroy();
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void InviteForm::languageChange()
{
    setCaption( tr( "Twinkle - Call" ) );
    inviteTextLabel->setText( tr( "&To:" ) );
    QWhatsThis::add( subjectLineEdit, tr( "Optionally you can provide a subject here. This might be shown to the callee." ) );
    addressToolButton->setText( QString::null );
    addressToolButton->setAccel( QKeySequence( tr( "F10" ) ) );
    QToolTip::add( addressToolButton, tr( "Address book" ) );
    QWhatsThis::add( addressToolButton, tr( "Select an address from the address book." ) );
    QWhatsThis::add( inviteComboBox, tr( "The address that you want to call. This can be a full SIP address like <b>sip:example@example.com</b> or just the user part or telephone number of the full address. When you do not specify a full address, then Twinkle will complete the address by using the domain value of your user profile." ) );
    QWhatsThis::add( fromComboBox, tr( "The user that will make the call." ) );
    subjectTextLabel->setText( tr( "&Subject:" ) );
    fromTextLabel->setText( tr( "&From:" ) );
    hideUserCheckBox->setText( tr( "&Hide identity" ) );
    hideUserCheckBox->setAccel( QKeySequence( tr( "Alt+H" ) ) );
    QWhatsThis::add( hideUserCheckBox, tr( "<p>\n"
"With this option you request your SIP provider to hide your identity from the called party. This will only hide your identity, e.g. your SIP address, telephone number. It does <b>not</b> hide your IP address.\n"
"</p>\n"
"<p>\n"
"<b>Warning:</b> not all providers support identity hiding.\n"
"</p>" ) );
    okPushButton->setText( tr( "&OK" ) );
    cancelPushButton->setText( tr( "&Cancel" ) );
}

