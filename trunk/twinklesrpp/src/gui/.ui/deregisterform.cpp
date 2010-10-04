/****************************************************************************
** Form implementation generated from reading ui file 'deregisterform.ui'
**
** Created: Sun Oct 3 21:29:42 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "deregisterform.h"

#include <qvariant.h>
#include <qcheckbox.h>
#include <qpushbutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

#include "../deregisterform.ui.h"
/*
 *  Constructs a DeregisterForm as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
DeregisterForm::DeregisterForm( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "DeregisterForm" );
    setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)0, 0, 0, sizePolicy().hasHeightForWidth() ) );
    DeregisterFormLayout = new QVBoxLayout( this, 11, 6, "DeregisterFormLayout"); 

    deregAllCheckBox = new QCheckBox( this, "deregAllCheckBox" );
    DeregisterFormLayout->addWidget( deregAllCheckBox );

    layout21 = new QHBoxLayout( 0, 0, 6, "layout21"); 
    spacer13 = new QSpacerItem( 111, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout21->addItem( spacer13 );

    okPushButton = new QPushButton( this, "okPushButton" );
    okPushButton->setDefault( TRUE );
    layout21->addWidget( okPushButton );

    cancelPushButton = new QPushButton( this, "cancelPushButton" );
    layout21->addWidget( cancelPushButton );
    DeregisterFormLayout->addLayout( layout21 );
    languageChange();
    resize( QSize(287, 82).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( okPushButton, SIGNAL( clicked() ), this, SLOT( accept() ) );
    connect( cancelPushButton, SIGNAL( clicked() ), this, SLOT( reject() ) );
}

/*
 *  Destroys the object and frees any allocated resources
 */
DeregisterForm::~DeregisterForm()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void DeregisterForm::languageChange()
{
    setCaption( tr( "Twinkle - Deregister" ) );
    deregAllCheckBox->setText( tr( "deregister all devices" ) );
    okPushButton->setText( tr( "&OK" ) );
    cancelPushButton->setText( tr( "&Cancel" ) );
}

