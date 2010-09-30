/****************************************************************************
** Form implementation generated from reading ui file 'dtmfform.ui'
**
** Created: Wed Sep 29 18:52:37 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "dtmfform.h"

#include <qvariant.h>
#include <qgroupbox.h>
#include <qpushbutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

#include "qregexp.h"
#include "qvalidator.h"
#include "qlineedit.h"
#include "../dtmfform.ui.h"
/*
 *  Constructs a DtmfForm as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
DtmfForm::DtmfForm( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "DtmfForm" );
    setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)5, 0, 0, sizePolicy().hasHeightForWidth() ) );
    DtmfFormLayout = new QVBoxLayout( this, 11, 6, "DtmfFormLayout"); 

    keypadGroupBox = new QGroupBox( this, "keypadGroupBox" );
    keypadGroupBox->setColumnLayout(0, Qt::Vertical );
    keypadGroupBox->layout()->setSpacing( 6 );
    keypadGroupBox->layout()->setMargin( 11 );
    keypadGroupBoxLayout = new QGridLayout( keypadGroupBox->layout() );
    keypadGroupBoxLayout->setAlignment( Qt::AlignTop );

    twoPushButton = new QPushButton( keypadGroupBox, "twoPushButton" );
    QFont twoPushButton_font(  twoPushButton->font() );
    twoPushButton_font.setPointSize( 10 );
    twoPushButton->setFont( twoPushButton_font ); 
    twoPushButton->setPixmap( QPixmap::fromMimeSource( "dtmf-2.png" ) );

    keypadGroupBoxLayout->addWidget( twoPushButton, 0, 1 );

    threePushButton = new QPushButton( keypadGroupBox, "threePushButton" );
    QFont threePushButton_font(  threePushButton->font() );
    threePushButton_font.setPointSize( 10 );
    threePushButton->setFont( threePushButton_font ); 
    threePushButton->setPixmap( QPixmap::fromMimeSource( "dtmf-3.png" ) );

    keypadGroupBoxLayout->addWidget( threePushButton, 0, 2 );

    aPushButton = new QPushButton( keypadGroupBox, "aPushButton" );
    aPushButton->setPaletteBackgroundColor( QColor( 194, 202, 210 ) );
    aPushButton->setPixmap( QPixmap::fromMimeSource( "dtmf-a.png" ) );

    keypadGroupBoxLayout->addWidget( aPushButton, 0, 3 );

    fourPushButton = new QPushButton( keypadGroupBox, "fourPushButton" );
    fourPushButton->setPixmap( QPixmap::fromMimeSource( "dtmf-4.png" ) );

    keypadGroupBoxLayout->addWidget( fourPushButton, 1, 0 );

    fivePushButton = new QPushButton( keypadGroupBox, "fivePushButton" );
    fivePushButton->setPixmap( QPixmap::fromMimeSource( "dtmf-5.png" ) );

    keypadGroupBoxLayout->addWidget( fivePushButton, 1, 1 );

    sixPushButton = new QPushButton( keypadGroupBox, "sixPushButton" );
    sixPushButton->setPixmap( QPixmap::fromMimeSource( "dtmf-6.png" ) );

    keypadGroupBoxLayout->addWidget( sixPushButton, 1, 2 );

    bPushButton = new QPushButton( keypadGroupBox, "bPushButton" );
    bPushButton->setPaletteBackgroundColor( QColor( 194, 202, 210 ) );
    bPushButton->setPixmap( QPixmap::fromMimeSource( "dtmf-b.png" ) );

    keypadGroupBoxLayout->addWidget( bPushButton, 1, 3 );

    sevenPushButton = new QPushButton( keypadGroupBox, "sevenPushButton" );
    sevenPushButton->setPixmap( QPixmap::fromMimeSource( "dtmf-7.png" ) );

    keypadGroupBoxLayout->addWidget( sevenPushButton, 2, 0 );

    eightPushButton = new QPushButton( keypadGroupBox, "eightPushButton" );
    eightPushButton->setPixmap( QPixmap::fromMimeSource( "dtmf-8.png" ) );

    keypadGroupBoxLayout->addWidget( eightPushButton, 2, 1 );

    ninePushButton = new QPushButton( keypadGroupBox, "ninePushButton" );
    ninePushButton->setPixmap( QPixmap::fromMimeSource( "dtmf-9.png" ) );

    keypadGroupBoxLayout->addWidget( ninePushButton, 2, 2 );

    cPushButton = new QPushButton( keypadGroupBox, "cPushButton" );
    cPushButton->setPaletteBackgroundColor( QColor( 194, 202, 210 ) );
    cPushButton->setPixmap( QPixmap::fromMimeSource( "dtmf-c.png" ) );

    keypadGroupBoxLayout->addWidget( cPushButton, 2, 3 );

    starPushButton = new QPushButton( keypadGroupBox, "starPushButton" );
    starPushButton->setPixmap( QPixmap::fromMimeSource( "dtmf-star.png" ) );

    keypadGroupBoxLayout->addWidget( starPushButton, 3, 0 );

    zeroPushButton = new QPushButton( keypadGroupBox, "zeroPushButton" );
    zeroPushButton->setPixmap( QPixmap::fromMimeSource( "dtmf-0.png" ) );

    keypadGroupBoxLayout->addWidget( zeroPushButton, 3, 1 );

    poundPushButton = new QPushButton( keypadGroupBox, "poundPushButton" );
    poundPushButton->setPixmap( QPixmap::fromMimeSource( "dtmf-pound.png" ) );

    keypadGroupBoxLayout->addWidget( poundPushButton, 3, 2 );

    dPushButton = new QPushButton( keypadGroupBox, "dPushButton" );
    dPushButton->setPaletteBackgroundColor( QColor( 194, 202, 210 ) );
    dPushButton->setPixmap( QPixmap::fromMimeSource( "dtmf-d.png" ) );

    keypadGroupBoxLayout->addWidget( dPushButton, 3, 3 );

    onePushButton = new QPushButton( keypadGroupBox, "onePushButton" );
    QFont onePushButton_font(  onePushButton->font() );
    onePushButton_font.setPointSize( 10 );
    onePushButton->setFont( onePushButton_font ); 
    onePushButton->setPixmap( QPixmap::fromMimeSource( "dtmf-1.png" ) );
    onePushButton->setAutoDefault( TRUE );

    keypadGroupBoxLayout->addWidget( onePushButton, 0, 0 );
    DtmfFormLayout->addWidget( keypadGroupBox );

    layout24 = new QHBoxLayout( 0, 0, 6, "layout24"); 
    spacer20 = new QSpacerItem( 291, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout24->addItem( spacer20 );

    closePushButton = new QPushButton( this, "closePushButton" );
    closePushButton->setDefault( TRUE );
    layout24->addWidget( closePushButton );
    DtmfFormLayout->addLayout( layout24 );
    languageChange();
    resize( QSize(350, 302).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( closePushButton, SIGNAL( clicked() ), this, SLOT( accept() ) );
    connect( onePushButton, SIGNAL( clicked() ), this, SLOT( dtmf1() ) );
    connect( twoPushButton, SIGNAL( clicked() ), this, SLOT( dtmf2() ) );
    connect( threePushButton, SIGNAL( clicked() ), this, SLOT( dtmf3() ) );
    connect( fourPushButton, SIGNAL( clicked() ), this, SLOT( dtmf4() ) );
    connect( fivePushButton, SIGNAL( clicked() ), this, SLOT( dtmf5() ) );
    connect( sixPushButton, SIGNAL( clicked() ), this, SLOT( dtmf6() ) );
    connect( sevenPushButton, SIGNAL( clicked() ), this, SLOT( dtmf7() ) );
    connect( eightPushButton, SIGNAL( clicked() ), this, SLOT( dtmf8() ) );
    connect( ninePushButton, SIGNAL( clicked() ), this, SLOT( dtmf9() ) );
    connect( zeroPushButton, SIGNAL( clicked() ), this, SLOT( dtmf0() ) );
    connect( starPushButton, SIGNAL( clicked() ), this, SLOT( dtmfStar() ) );
    connect( poundPushButton, SIGNAL( clicked() ), this, SLOT( dtmfPound() ) );
    connect( aPushButton, SIGNAL( clicked() ), this, SLOT( dtmfA() ) );
    connect( bPushButton, SIGNAL( clicked() ), this, SLOT( dtmfB() ) );
    connect( cPushButton, SIGNAL( clicked() ), this, SLOT( dtmfC() ) );
    connect( dPushButton, SIGNAL( clicked() ), this, SLOT( dtmfD() ) );

    // tab order
    setTabOrder( onePushButton, twoPushButton );
    setTabOrder( twoPushButton, threePushButton );
    setTabOrder( threePushButton, aPushButton );
    setTabOrder( aPushButton, fourPushButton );
    setTabOrder( fourPushButton, fivePushButton );
    setTabOrder( fivePushButton, sixPushButton );
    setTabOrder( sixPushButton, bPushButton );
    setTabOrder( bPushButton, sevenPushButton );
    setTabOrder( sevenPushButton, eightPushButton );
    setTabOrder( eightPushButton, ninePushButton );
    setTabOrder( ninePushButton, cPushButton );
    setTabOrder( cPushButton, starPushButton );
    setTabOrder( starPushButton, zeroPushButton );
    setTabOrder( zeroPushButton, poundPushButton );
    setTabOrder( poundPushButton, dPushButton );
    setTabOrder( dPushButton, closePushButton );
}

/*
 *  Destroys the object and frees any allocated resources
 */
DtmfForm::~DtmfForm()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void DtmfForm::languageChange()
{
    setCaption( tr( "Twinkle - DTMF" ) );
    keypadGroupBox->setTitle( tr( "Keypad" ) );
    twoPushButton->setText( QString::null );
    QWhatsThis::add( twoPushButton, tr( "2" ) );
    threePushButton->setText( QString::null );
    QWhatsThis::add( threePushButton, tr( "3" ) );
    aPushButton->setText( QString::null );
    QWhatsThis::add( aPushButton, tr( "Over decadic A. Normally not needed." ) );
    fourPushButton->setText( QString::null );
    QWhatsThis::add( fourPushButton, tr( "4" ) );
    fivePushButton->setText( QString::null );
    QWhatsThis::add( fivePushButton, tr( "5" ) );
    sixPushButton->setText( QString::null );
    QWhatsThis::add( sixPushButton, tr( "6" ) );
    bPushButton->setText( QString::null );
    QWhatsThis::add( bPushButton, tr( "Over decadic B. Normally not needed." ) );
    sevenPushButton->setText( QString::null );
    QWhatsThis::add( sevenPushButton, tr( "7" ) );
    eightPushButton->setText( QString::null );
    QWhatsThis::add( eightPushButton, tr( "8" ) );
    ninePushButton->setText( QString::null );
    QWhatsThis::add( ninePushButton, tr( "9" ) );
    cPushButton->setText( QString::null );
    QWhatsThis::add( cPushButton, tr( "Over decadic C. Normally not needed." ) );
    starPushButton->setText( QString::null );
    QWhatsThis::add( starPushButton, tr( "Star (*)" ) );
    zeroPushButton->setText( QString::null );
    QWhatsThis::add( zeroPushButton, tr( "0" ) );
    poundPushButton->setText( QString::null );
    QWhatsThis::add( poundPushButton, tr( "Pound (#)" ) );
    dPushButton->setText( QString::null );
    QWhatsThis::add( dPushButton, tr( "Over decadic D. Normally not needed." ) );
    onePushButton->setText( QString::null );
    QWhatsThis::add( onePushButton, tr( "1" ) );
    closePushButton->setText( tr( "&Close" ) );
    closePushButton->setAccel( QKeySequence( tr( "Alt+C" ) ) );
}

