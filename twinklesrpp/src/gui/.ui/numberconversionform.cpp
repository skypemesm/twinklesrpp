/****************************************************************************
** Form implementation generated from reading ui file 'numberconversionform.ui'
**
** Created: Sun Oct 3 21:30:54 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "numberconversionform.h"

#include <qvariant.h>
#include <qlabel.h>
#include <qlineedit.h>
#include <qpushbutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

#include "qstring.h"
#include "gui.h"
#include "boost/regex.hpp"
#include "qregexp.h"
#include "qvalidator.h"
#include "../numberconversionform.ui.h"
/*
 *  Constructs a NumberConversionForm as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
NumberConversionForm::NumberConversionForm( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "NumberConversionForm" );
    NumberConversionFormLayout = new QVBoxLayout( this, 11, 6, "NumberConversionFormLayout"); 

    layout43 = new QGridLayout( 0, 1, 1, 0, 6, "layout43"); 

    exprTextLabel = new QLabel( this, "exprTextLabel" );

    layout43->addWidget( exprTextLabel, 0, 0 );

    replaceTextLabel = new QLabel( this, "replaceTextLabel" );

    layout43->addWidget( replaceTextLabel, 1, 0 );

    replaceLineEdit = new QLineEdit( this, "replaceLineEdit" );

    layout43->addWidget( replaceLineEdit, 1, 1 );

    exprLineEdit = new QLineEdit( this, "exprLineEdit" );

    layout43->addWidget( exprLineEdit, 0, 1 );
    NumberConversionFormLayout->addLayout( layout43 );
    spacer62 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    NumberConversionFormLayout->addItem( spacer62 );

    layout44 = new QHBoxLayout( 0, 0, 6, "layout44"); 
    spacer61 = new QSpacerItem( 71, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout44->addItem( spacer61 );

    okPushButton = new QPushButton( this, "okPushButton" );
    layout44->addWidget( okPushButton );

    cancelPushButton = new QPushButton( this, "cancelPushButton" );
    layout44->addWidget( cancelPushButton );
    NumberConversionFormLayout->addLayout( layout44 );
    languageChange();
    resize( QSize(436, 122).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( cancelPushButton, SIGNAL( clicked() ), this, SLOT( reject() ) );
    connect( okPushButton, SIGNAL( clicked() ), this, SLOT( validate() ) );

    // tab order
    setTabOrder( exprLineEdit, replaceLineEdit );
    setTabOrder( replaceLineEdit, okPushButton );
    setTabOrder( okPushButton, cancelPushButton );

    // buddies
    exprTextLabel->setBuddy( exprLineEdit );
    replaceTextLabel->setBuddy( replaceLineEdit );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
NumberConversionForm::~NumberConversionForm()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void NumberConversionForm::languageChange()
{
    setCaption( tr( "Twinkle - Number conversion" ) );
    exprTextLabel->setText( tr( "&Match expression:" ) );
    replaceTextLabel->setText( tr( "&Replace:" ) );
    QWhatsThis::add( replaceLineEdit, tr( "Perl style format string for the replacement number." ) );
    QWhatsThis::add( exprLineEdit, tr( "Perl style regular expression matching the number format you want to modify." ) );
    okPushButton->setText( tr( "&OK" ) );
    okPushButton->setAccel( QKeySequence( tr( "Alt+O" ) ) );
    cancelPushButton->setText( tr( "&Cancel" ) );
    cancelPushButton->setAccel( QKeySequence( tr( "Alt+C" ) ) );
}

