/****************************************************************************
** Form implementation generated from reading ui file 'redirectform.ui'
**
** Created: Wed Sep 29 18:52:30 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "redirectform.h"

#include <qvariant.h>
#include <qgroupbox.h>
#include <qlineedit.h>
#include <qlabel.h>
#include <qtoolbutton.h>
#include <qpushbutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

#include "gui.h"
#include "audits/memman.h"
#include "../redirectform.ui.h"
/*
 *  Constructs a RedirectForm as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
RedirectForm::RedirectForm( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "RedirectForm" );
    setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)5, 0, 0, sizePolicy().hasHeightForWidth() ) );
    RedirectFormLayout = new QVBoxLayout( this, 11, 6, "RedirectFormLayout"); 

    redirectGroupBox = new QGroupBox( this, "redirectGroupBox" );
    redirectGroupBox->setColumnLayout(0, Qt::Vertical );
    redirectGroupBox->layout()->setSpacing( 6 );
    redirectGroupBox->layout()->setMargin( 11 );
    redirectGroupBoxLayout = new QGridLayout( redirectGroupBox->layout() );
    redirectGroupBoxLayout->setAlignment( Qt::AlignTop );

    contact3LineEdit = new QLineEdit( redirectGroupBox, "contact3LineEdit" );

    redirectGroupBoxLayout->addWidget( contact3LineEdit, 2, 1 );

    contact3TextLabel = new QLabel( redirectGroupBox, "contact3TextLabel" );

    redirectGroupBoxLayout->addWidget( contact3TextLabel, 2, 0 );

    contact2TextLabel = new QLabel( redirectGroupBox, "contact2TextLabel" );

    redirectGroupBoxLayout->addWidget( contact2TextLabel, 1, 0 );

    contact2LineEdit = new QLineEdit( redirectGroupBox, "contact2LineEdit" );

    redirectGroupBoxLayout->addWidget( contact2LineEdit, 1, 1 );

    contact1LineEdit = new QLineEdit( redirectGroupBox, "contact1LineEdit" );

    redirectGroupBoxLayout->addWidget( contact1LineEdit, 0, 1 );

    contact1TextLabel = new QLabel( redirectGroupBox, "contact1TextLabel" );

    redirectGroupBoxLayout->addWidget( contact1TextLabel, 0, 0 );

    address1ToolButton = new QToolButton( redirectGroupBox, "address1ToolButton" );
    address1ToolButton->setFocusPolicy( QToolButton::TabFocus );
    address1ToolButton->setIconSet( QIconSet( QPixmap::fromMimeSource( "kontact_contacts.png" ) ) );

    redirectGroupBoxLayout->addWidget( address1ToolButton, 0, 2 );

    address3ToolButton = new QToolButton( redirectGroupBox, "address3ToolButton" );
    address3ToolButton->setFocusPolicy( QToolButton::TabFocus );
    address3ToolButton->setIconSet( QIconSet( QPixmap::fromMimeSource( "kontact_contacts.png" ) ) );

    redirectGroupBoxLayout->addWidget( address3ToolButton, 2, 2 );

    address2ToolButton = new QToolButton( redirectGroupBox, "address2ToolButton" );
    address2ToolButton->setFocusPolicy( QToolButton::TabFocus );
    address2ToolButton->setIconSet( QIconSet( QPixmap::fromMimeSource( "kontact_contacts.png" ) ) );

    redirectGroupBoxLayout->addWidget( address2ToolButton, 1, 2 );
    RedirectFormLayout->addWidget( redirectGroupBox );
    spacer14 = new QSpacerItem( 20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding );
    RedirectFormLayout->addItem( spacer14 );

    layout15 = new QHBoxLayout( 0, 0, 6, "layout15"); 
    spacer11 = new QSpacerItem( 361, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout15->addItem( spacer11 );

    okPushButton = new QPushButton( this, "okPushButton" );
    okPushButton->setDefault( TRUE );
    layout15->addWidget( okPushButton );

    cancelPushButton = new QPushButton( this, "cancelPushButton" );
    layout15->addWidget( cancelPushButton );
    RedirectFormLayout->addLayout( layout15 );
    languageChange();
    resize( QSize(588, 190).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( cancelPushButton, SIGNAL( clicked() ), this, SLOT( reject() ) );
    connect( okPushButton, SIGNAL( clicked() ), this, SLOT( validate() ) );
    connect( address1ToolButton, SIGNAL( clicked() ), this, SLOT( showAddressBook1() ) );
    connect( address2ToolButton, SIGNAL( clicked() ), this, SLOT( showAddressBook2() ) );
    connect( address3ToolButton, SIGNAL( clicked() ), this, SLOT( showAddressBook3() ) );

    // tab order
    setTabOrder( contact1LineEdit, contact2LineEdit );
    setTabOrder( contact2LineEdit, contact3LineEdit );
    setTabOrder( contact3LineEdit, address1ToolButton );
    setTabOrder( address1ToolButton, address2ToolButton );
    setTabOrder( address2ToolButton, address3ToolButton );
    setTabOrder( address3ToolButton, okPushButton );
    setTabOrder( okPushButton, cancelPushButton );

    // buddies
    contact3TextLabel->setBuddy( contact3LineEdit );
    contact2TextLabel->setBuddy( contact2LineEdit );
    contact1TextLabel->setBuddy( contact1LineEdit );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
RedirectForm::~RedirectForm()
{
    destroy();
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void RedirectForm::languageChange()
{
    setCaption( tr( "Twinkle - Redirect" ) );
    redirectGroupBox->setTitle( tr( "Redirect incoming call to" ) );
    QWhatsThis::add( contact3LineEdit, tr( "You can specify up to 3 destinations to which you want to redirect the call. If the first destination does not answer the call, the second destination will be tried and so on." ) );
    contact3TextLabel->setText( tr( "&3rd choice destination:" ) );
    contact2TextLabel->setText( tr( "&2nd choice destination:" ) );
    QWhatsThis::add( contact2LineEdit, tr( "You can specify up to 3 destinations to which you want to redirect the call. If the first destination does not answer the call, the second destination will be tried and so on." ) );
    QWhatsThis::add( contact1LineEdit, tr( "You can specify up to 3 destinations to which you want to redirect the call. If the first destination does not answer the call, the second destination will be tried and so on." ) );
    contact1TextLabel->setText( tr( "&1st choice destination:" ) );
    address1ToolButton->setText( QString::null );
    address1ToolButton->setAccel( QKeySequence( tr( "F10" ) ) );
    QToolTip::add( address1ToolButton, tr( "Address book" ) );
    QWhatsThis::add( address1ToolButton, tr( "Select an address from the address book." ) );
    address3ToolButton->setText( QString::null );
    address3ToolButton->setAccel( QKeySequence( tr( "F12" ) ) );
    QToolTip::add( address3ToolButton, tr( "Address book" ) );
    QWhatsThis::add( address3ToolButton, tr( "Select an address from the address book." ) );
    address2ToolButton->setText( QString::null );
    address2ToolButton->setAccel( QKeySequence( tr( "F11" ) ) );
    QToolTip::add( address2ToolButton, tr( "Address book" ) );
    QWhatsThis::add( address2ToolButton, tr( "Select an address from the address book." ) );
    okPushButton->setText( tr( "&OK" ) );
    cancelPushButton->setText( tr( "&Cancel" ) );
}

