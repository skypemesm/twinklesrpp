/****************************************************************************
** Form implementation generated from reading ui file 'transferform.ui'
**
** Created: Wed Sep 29 18:53:37 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "transferform.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qgroupbox.h>
#include <qlabel.h>
#include <qlineedit.h>
#include <qtoolbutton.h>
#include <qbuttongroup.h>
#include <qradiobutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

#include "gui.h"
#include "audits/memman.h"
#include "../transferform.ui.h"
/*
 *  Constructs a TransferForm as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
TransferForm::TransferForm( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "TransferForm" );
    TransferFormLayout = new QVBoxLayout( this, 11, 6, "TransferFormLayout"); 

    transferGroupBox = new QGroupBox( this, "transferGroupBox" );
    transferGroupBox->setColumnLayout(0, Qt::Vertical );
    transferGroupBox->layout()->setSpacing( 6 );
    transferGroupBox->layout()->setMargin( 11 );
    transferGroupBoxLayout = new QHBoxLayout( transferGroupBox->layout() );
    transferGroupBoxLayout->setAlignment( Qt::AlignTop );

    toLabel = new QLabel( transferGroupBox, "toLabel" );
    transferGroupBoxLayout->addWidget( toLabel );

    toLineEdit = new QLineEdit( transferGroupBox, "toLineEdit" );
    transferGroupBoxLayout->addWidget( toLineEdit );

    addressToolButton = new QToolButton( transferGroupBox, "addressToolButton" );
    addressToolButton->setFocusPolicy( QToolButton::TabFocus );
    addressToolButton->setIconSet( QIconSet( QPixmap::fromMimeSource( "kontact_contacts.png" ) ) );
    transferGroupBoxLayout->addWidget( addressToolButton );
    TransferFormLayout->addWidget( transferGroupBox );

    typeButtonGroup2 = new QButtonGroup( this, "typeButtonGroup2" );
    typeButtonGroup2->setColumnLayout(0, Qt::Vertical );
    typeButtonGroup2->layout()->setSpacing( 6 );
    typeButtonGroup2->layout()->setMargin( 11 );
    typeButtonGroup2Layout = new QVBoxLayout( typeButtonGroup2->layout() );
    typeButtonGroup2Layout->setAlignment( Qt::AlignTop );

    basicRadioButton = new QRadioButton( typeButtonGroup2, "basicRadioButton" );
    basicRadioButton->setChecked( TRUE );
    typeButtonGroup2Layout->addWidget( basicRadioButton );

    consultRadioButton = new QRadioButton( typeButtonGroup2, "consultRadioButton" );
    typeButtonGroup2Layout->addWidget( consultRadioButton );

    otherLineRadioButton = new QRadioButton( typeButtonGroup2, "otherLineRadioButton" );
    typeButtonGroup2Layout->addWidget( otherLineRadioButton );
    TransferFormLayout->addWidget( typeButtonGroup2 );
    spacer24 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    TransferFormLayout->addItem( spacer24 );

    layout28 = new QHBoxLayout( 0, 0, 6, "layout28"); 
    spacer23 = new QSpacerItem( 121, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout28->addItem( spacer23 );

    okPushButton = new QPushButton( this, "okPushButton" );
    okPushButton->setDefault( TRUE );
    layout28->addWidget( okPushButton );

    cancelPushButton = new QPushButton( this, "cancelPushButton" );
    layout28->addWidget( cancelPushButton );
    TransferFormLayout->addLayout( layout28 );
    languageChange();
    resize( QSize(532, 251).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( okPushButton, SIGNAL( clicked() ), this, SLOT( validate() ) );
    connect( cancelPushButton, SIGNAL( clicked() ), this, SLOT( reject() ) );
    connect( addressToolButton, SIGNAL( clicked() ), this, SLOT( showAddressBook() ) );
    connect( otherLineRadioButton, SIGNAL( toggled(bool) ), this, SLOT( setOtherLineAddress(bool) ) );

    // buddies
    toLabel->setBuddy( toLineEdit );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
TransferForm::~TransferForm()
{
    destroy();
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void TransferForm::languageChange()
{
    setCaption( tr( "Twinkle - Transfer" ) );
    transferGroupBox->setTitle( tr( "Transfer call to" ) );
    toLabel->setText( tr( "&To:" ) );
    QWhatsThis::add( toLineEdit, tr( "The address of the person you want to transfer the call to. This can be a full SIP address like <b>sip:example@example.com</b> or just the user part or telephone number of the full address. When you do not specify a full address, then Twinkle will complete the address by using the domain value of your user profile." ) );
    addressToolButton->setText( QString::null );
    addressToolButton->setAccel( QKeySequence( tr( "F10" ) ) );
    QToolTip::add( addressToolButton, tr( "Address book" ) );
    QWhatsThis::add( addressToolButton, tr( "Select an address from the address book." ) );
    typeButtonGroup2->setTitle( tr( "Type of transfer" ) );
    basicRadioButton->setText( tr( "&Blind transfer" ) );
    basicRadioButton->setAccel( QKeySequence( tr( "Alt+B" ) ) );
    QWhatsThis::add( basicRadioButton, tr( "Transfer the call to a third party without contacting that third party yourself." ) );
    consultRadioButton->setText( tr( "T&ransfer with consultation" ) );
    consultRadioButton->setAccel( QKeySequence( tr( "Alt+R" ) ) );
    QWhatsThis::add( consultRadioButton, tr( "Before transferring the call to a third party, first consult the party yourself." ) );
    otherLineRadioButton->setText( tr( "Transfer to other &line" ) );
    otherLineRadioButton->setAccel( QKeySequence( tr( "Alt+L" ) ) );
    QWhatsThis::add( otherLineRadioButton, tr( "Connect the remote party on the active line with the remote party on the other line." ) );
    okPushButton->setText( tr( "&OK" ) );
    okPushButton->setAccel( QKeySequence( tr( "Alt+O" ) ) );
    cancelPushButton->setText( tr( "&Cancel" ) );
}

