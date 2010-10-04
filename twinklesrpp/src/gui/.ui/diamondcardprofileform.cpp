/****************************************************************************
** Form implementation generated from reading ui file 'diamondcardprofileform.ui'
**
** Created: Sun Oct 3 21:31:09 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "diamondcardprofileform.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qlabel.h>
#include <qlineedit.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

#include "qregexp.h"
#include "qvalidator.h"
#include "gui.h"
#include "diamondcard.h"
#include "getprofilenameform.h"
#include "audits/memman.h"
#include "../diamondcardprofileform.ui.h"
/*
 *  Constructs a DiamondcardProfileForm as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
DiamondcardProfileForm::DiamondcardProfileForm( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "DiamondcardProfileForm" );
    setCursor( QCursor( 0 ) );
    DiamondcardProfileFormLayout = new QVBoxLayout( this, 11, 6, "DiamondcardProfileFormLayout"); 

    explainTextLabel = new QLabel( this, "explainTextLabel" );
    explainTextLabel->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)5, 0, 0, explainTextLabel->sizePolicy().hasHeightForWidth() ) );
    explainTextLabel->setTextFormat( QLabel::RichText );
    DiamondcardProfileFormLayout->addWidget( explainTextLabel );
    spacer35 = new QSpacerItem( 20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding );
    DiamondcardProfileFormLayout->addItem( spacer35 );

    layout193 = new QGridLayout( 0, 1, 1, 0, 6, "layout193"); 

    accountIdLineEdit = new QLineEdit( this, "accountIdLineEdit" );

    layout193->addWidget( accountIdLineEdit, 1, 1 );

    nameLineEdit = new QLineEdit( this, "nameLineEdit" );

    layout193->addWidget( nameLineEdit, 0, 1 );

    accountIdTextLabel = new QLabel( this, "accountIdTextLabel" );

    layout193->addWidget( accountIdTextLabel, 1, 0 );

    pinCodeTextLabel = new QLabel( this, "pinCodeTextLabel" );

    layout193->addWidget( pinCodeTextLabel, 2, 0 );

    nameTextLabel = new QLabel( this, "nameTextLabel" );

    layout193->addWidget( nameTextLabel, 0, 0 );

    pinCodeLineEdit = new QLineEdit( this, "pinCodeLineEdit" );
    pinCodeLineEdit->setEchoMode( QLineEdit::Password );

    layout193->addWidget( pinCodeLineEdit, 2, 1 );
    DiamondcardProfileFormLayout->addLayout( layout193 );
    spacer27 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    DiamondcardProfileFormLayout->addItem( spacer27 );

    layout63 = new QHBoxLayout( 0, 0, 6, "layout63"); 

    signUpTextLabel = new QLabel( this, "signUpTextLabel" );
    signUpTextLabel->setBackgroundMode( QLabel::PaletteBackground );
    signUpTextLabel->setPaletteForegroundColor( QColor( 0, 0, 205 ) );
    signUpTextLabel->setCursor( QCursor( 13 ) );
    signUpTextLabel->setAlignment( int( QLabel::AlignVCenter ) );
    layout63->addWidget( signUpTextLabel );
    DiamondcardProfileFormLayout->addLayout( layout63 );
    spacer28 = new QSpacerItem( 20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding );
    DiamondcardProfileFormLayout->addItem( spacer28 );

    layout64 = new QHBoxLayout( 0, 0, 6, "layout64"); 
    spacer21 = new QSpacerItem( 61, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout64->addItem( spacer21 );

    okPushButton = new QPushButton( this, "okPushButton" );
    okPushButton->setDefault( TRUE );
    layout64->addWidget( okPushButton );

    cancelPushButton = new QPushButton( this, "cancelPushButton" );
    layout64->addWidget( cancelPushButton );
    DiamondcardProfileFormLayout->addLayout( layout64 );
    languageChange();
    resize( QSize(541, 433).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( okPushButton, SIGNAL( clicked() ), this, SLOT( validate() ) );
    connect( cancelPushButton, SIGNAL( clicked() ), this, SLOT( reject() ) );

    // tab order
    setTabOrder( nameLineEdit, accountIdLineEdit );
    setTabOrder( accountIdLineEdit, pinCodeLineEdit );
    setTabOrder( pinCodeLineEdit, okPushButton );
    setTabOrder( okPushButton, cancelPushButton );

    // buddies
    accountIdTextLabel->setBuddy( accountIdLineEdit );
    pinCodeTextLabel->setBuddy( pinCodeLineEdit );
    nameTextLabel->setBuddy( nameLineEdit );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
DiamondcardProfileForm::~DiamondcardProfileForm()
{
    destroy();
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void DiamondcardProfileForm::languageChange()
{
    setCaption( tr( "Twinkle - Diamondcard User Profile" ) );
    explainTextLabel->setText( tr( "<p>With a Diamondcard account you can make worldwide calls to regular and cell phones and send SMS messages. To sign up for a Diamondcard account click on the \"sign up\" link below. Once you have signed up you receive an account ID and PIN code. Enter the account ID and PIN code below to create a Twinkle user profile for your Diamondcard account.</p>\n"
"<p>For call rates see the sign up web page that will be shown to you when you click on the \"sign up\" link.</p>" ) );
    QWhatsThis::add( accountIdLineEdit, tr( "Your Diamondcard account ID." ) );
    QWhatsThis::add( nameLineEdit, tr( "This is just your full name, e.g. John Doe. It is used as a display name. When you make a call, this display name might be shown to the called party." ) );
    accountIdTextLabel->setText( tr( "&Account ID:" ) );
    pinCodeTextLabel->setText( tr( "&PIN code:" ) );
    nameTextLabel->setText( tr( "&Your name:" ) );
    QWhatsThis::add( pinCodeLineEdit, tr( "Your Diamondcard PIN code." ) );
    signUpTextLabel->setText( tr( "<p align=\"center\"><u>Sign up for a Diamondcard account</u></p>" ) );
    okPushButton->setText( tr( "&OK" ) );
    okPushButton->setAccel( QKeySequence( tr( "Alt+O" ) ) );
    cancelPushButton->setText( tr( "&Cancel" ) );
    cancelPushButton->setAccel( QKeySequence( tr( "Alt+C" ) ) );
}

