/****************************************************************************
** Form implementation generated from reading ui file 'selectnicform.ui'
**
** Created: Sun Oct 3 21:29:50 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "selectnicform.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qlabel.h>
#include <qlistbox.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

#include "gui.h"
#include "qmessagebox.h"
#include "sys_settings.h"
#include "../selectnicform.ui.h"
/*
 *  Constructs a SelectNicForm as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
SelectNicForm::SelectNicForm( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "SelectNicForm" );
    SelectNicFormLayout = new QGridLayout( this, 1, 1, 11, 6, "SelectNicFormLayout"); 

    nicIconTextLabel = new QLabel( this, "nicIconTextLabel" );
    nicIconTextLabel->setPixmap( QPixmap::fromMimeSource( "kcmpci.png" ) );

    SelectNicFormLayout->addWidget( nicIconTextLabel, 0, 0 );
    spacer53 = new QSpacerItem( 20, 41, QSizePolicy::Minimum, QSizePolicy::Expanding );
    SelectNicFormLayout->addMultiCell( spacer53, 1, 2, 0, 0 );

    layout42 = new QHBoxLayout( 0, 0, 6, "layout42"); 

    selectTextLabel = new QLabel( this, "selectTextLabel" );
    selectTextLabel->setAlignment( int( QLabel::WordBreak | QLabel::AlignTop ) );
    layout42->addWidget( selectTextLabel );

    nicListBox = new QListBox( this, "nicListBox" );
    layout42->addWidget( nicListBox );

    SelectNicFormLayout->addLayout( layout42, 0, 1 );
    spacer9 = new QSpacerItem( 20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding );
    SelectNicFormLayout->addItem( spacer9, 1, 1 );

    layout11 = new QHBoxLayout( 0, 0, 6, "layout11"); 
    spacer7 = new QSpacerItem( 40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout11->addItem( spacer7 );

    defaultIpPushButton = new QPushButton( this, "defaultIpPushButton" );
    layout11->addWidget( defaultIpPushButton );

    defaultNicPushButton = new QPushButton( this, "defaultNicPushButton" );
    layout11->addWidget( defaultNicPushButton );

    okPushButton = new QPushButton( this, "okPushButton" );
    okPushButton->setDefault( TRUE );
    layout11->addWidget( okPushButton );

    SelectNicFormLayout->addLayout( layout11, 2, 1 );
    languageChange();
    resize( QSize(482, 144).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( okPushButton, SIGNAL( clicked() ), this, SLOT( accept() ) );
    connect( nicListBox, SIGNAL( selected(const QString&) ), this, SLOT( accept() ) );
    connect( defaultIpPushButton, SIGNAL( clicked() ), this, SLOT( setAsDefaultIp() ) );
    connect( defaultNicPushButton, SIGNAL( clicked() ), this, SLOT( setAsDefaultNic() ) );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
SelectNicForm::~SelectNicForm()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void SelectNicForm::languageChange()
{
    setCaption( tr( "Twinkle - Select NIC" ) );
    nicIconTextLabel->setText( QString::null );
    selectTextLabel->setText( tr( "Select the network interface/IP address that you want to use:" ) );
    QWhatsThis::add( nicListBox, tr( "You have multiple IP addresses. Here you must select which IP address should be used. This IP address will be used inside the SIP messages." ) );
    defaultIpPushButton->setText( tr( "Set as default &IP" ) );
    defaultIpPushButton->setAccel( QKeySequence( tr( "Alt+I" ) ) );
    QWhatsThis::add( defaultIpPushButton, tr( "Make the selected IP address the default IP address. The next time you start Twinkle, this IP address will be automatically selected." ) );
    defaultNicPushButton->setText( tr( "Set as default &NIC" ) );
    defaultNicPushButton->setAccel( QKeySequence( tr( "Alt+N" ) ) );
    QWhatsThis::add( defaultNicPushButton, tr( "Make the selected network interface the default interface. The next time you start Twinkle, this interface will be automatically selected." ) );
    okPushButton->setText( tr( "&OK" ) );
    okPushButton->setAccel( QKeySequence( tr( "Alt+O" ) ) );
}

