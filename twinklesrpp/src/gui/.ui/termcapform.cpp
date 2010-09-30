/****************************************************************************
** Form implementation generated from reading ui file 'termcapform.ui'
**
** Created: Wed Sep 29 18:52:34 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "termcapform.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qlabel.h>
#include <qcombobox.h>
#include <qgroupbox.h>
#include <qlineedit.h>
#include <qtoolbutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

#include "gui.h"
#include "audits/memman.h"
#include "../termcapform.ui.h"
/*
 *  Constructs a TermCapForm as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
TermCapForm::TermCapForm( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "TermCapForm" );
    setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)5, 0, 0, sizePolicy().hasHeightForWidth() ) );
    TermCapFormLayout = new QVBoxLayout( this, 11, 6, "TermCapFormLayout"); 

    layout53 = new QHBoxLayout( 0, 0, 6, "layout53"); 

    fromTextLabel = new QLabel( this, "fromTextLabel" );
    layout53->addWidget( fromTextLabel );

    fromComboBox = new QComboBox( FALSE, this, "fromComboBox" );
    fromComboBox->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)7, (QSizePolicy::SizeType)0, 0, 0, fromComboBox->sizePolicy().hasHeightForWidth() ) );
    layout53->addWidget( fromComboBox );
    TermCapFormLayout->addLayout( layout53 );

    termCapGroupBox = new QGroupBox( this, "termCapGroupBox" );
    termCapGroupBox->setColumnLayout(0, Qt::Vertical );
    termCapGroupBox->layout()->setSpacing( 6 );
    termCapGroupBox->layout()->setMargin( 11 );
    termCapGroupBoxLayout = new QHBoxLayout( termCapGroupBox->layout() );
    termCapGroupBoxLayout->setAlignment( Qt::AlignTop );

    partyTextLabel = new QLabel( termCapGroupBox, "partyTextLabel" );
    termCapGroupBoxLayout->addWidget( partyTextLabel );

    partyLineEdit = new QLineEdit( termCapGroupBox, "partyLineEdit" );
    termCapGroupBoxLayout->addWidget( partyLineEdit );

    addressToolButton = new QToolButton( termCapGroupBox, "addressToolButton" );
    addressToolButton->setFocusPolicy( QToolButton::TabFocus );
    addressToolButton->setIconSet( QIconSet( QPixmap::fromMimeSource( "kontact_contacts.png" ) ) );
    termCapGroupBoxLayout->addWidget( addressToolButton );
    TermCapFormLayout->addWidget( termCapGroupBox );
    spacer13 = new QSpacerItem( 20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding );
    TermCapFormLayout->addItem( spacer13 );

    layout15 = new QHBoxLayout( 0, 0, 6, "layout15"); 
    spacer12 = new QSpacerItem( 131, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout15->addItem( spacer12 );

    okPushButton = new QPushButton( this, "okPushButton" );
    okPushButton->setDefault( TRUE );
    layout15->addWidget( okPushButton );

    cancelPushButton = new QPushButton( this, "cancelPushButton" );
    layout15->addWidget( cancelPushButton );
    TermCapFormLayout->addLayout( layout15 );
    languageChange();
    resize( QSize(581, 168).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( cancelPushButton, SIGNAL( clicked() ), this, SLOT( reject() ) );
    connect( okPushButton, SIGNAL( clicked() ), this, SLOT( validate() ) );
    connect( addressToolButton, SIGNAL( clicked() ), this, SLOT( showAddressBook() ) );

    // tab order
    setTabOrder( partyLineEdit, addressToolButton );
    setTabOrder( addressToolButton, okPushButton );
    setTabOrder( okPushButton, cancelPushButton );
    setTabOrder( cancelPushButton, fromComboBox );

    // buddies
    fromTextLabel->setBuddy( fromComboBox );
    partyTextLabel->setBuddy( partyLineEdit );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
TermCapForm::~TermCapForm()
{
    destroy();
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void TermCapForm::languageChange()
{
    setCaption( tr( "Twinkle - Terminal Capabilities" ) );
    fromTextLabel->setText( tr( "&From:" ) );
    termCapGroupBox->setTitle( tr( "Get terminal capabilities of" ) );
    partyTextLabel->setText( tr( "&To:" ) );
    QWhatsThis::add( partyLineEdit, tr( "The address that you want to query for capabilities (OPTION request). This can be a full SIP address like <b>sip:example@example.com</b> or just the user part or telephone number of the full address. When you do not specify a full address, then Twinkle will complete the address by using the domain value of your user profile." ) );
    addressToolButton->setText( QString::null );
    addressToolButton->setAccel( QKeySequence( tr( "F10" ) ) );
    QToolTip::add( addressToolButton, tr( "Address book" ) );
    QWhatsThis::add( addressToolButton, tr( "Select an address from the address book." ) );
    okPushButton->setText( tr( "&OK" ) );
    cancelPushButton->setText( tr( "&Cancel" ) );
}

