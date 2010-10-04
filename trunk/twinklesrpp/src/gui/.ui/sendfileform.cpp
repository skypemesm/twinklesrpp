/****************************************************************************
** Form implementation generated from reading ui file 'sendfileform.ui'
**
** Created: Sun Oct 3 21:31:06 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "sendfileform.h"

#include <qvariant.h>
#include <qtoolbutton.h>
#include <qlabel.h>
#include <qlineedit.h>
#include <qpushbutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

#include "audits/memman.h"
#include "gui.h"
#include "qfile.h"
#include "qfiledialog.h"
#include "../sendfileform.ui.h"
/*
 *  Constructs a SendFileForm as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
SendFileForm::SendFileForm( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "SendFileForm" );
    SendFileFormLayout = new QVBoxLayout( this, 11, 6, "SendFileFormLayout"); 

    layout166 = new QGridLayout( 0, 1, 1, 0, 6, "layout166"); 

    fileToolButton = new QToolButton( this, "fileToolButton" );
    fileToolButton->setFocusPolicy( QToolButton::TabFocus );
    fileToolButton->setIconSet( QIconSet( QPixmap::fromMimeSource( "fileopen.png" ) ) );

    layout166->addWidget( fileToolButton, 1, 2 );
    spacer62 = new QSpacerItem( 28, 20, QSizePolicy::Minimum, QSizePolicy::Minimum );
    layout166->addItem( spacer62, 0, 2 );

    fileTextLabel = new QLabel( this, "fileTextLabel" );

    layout166->addWidget( fileTextLabel, 1, 0 );

    subjectTextLabel = new QLabel( this, "subjectTextLabel" );

    layout166->addWidget( subjectTextLabel, 0, 0 );

    fileLineEdit = new QLineEdit( this, "fileLineEdit" );

    layout166->addWidget( fileLineEdit, 1, 1 );

    subjectLineEdit = new QLineEdit( this, "subjectLineEdit" );

    layout166->addWidget( subjectLineEdit, 0, 1 );
    SendFileFormLayout->addLayout( layout166 );
    spacer66 = new QSpacerItem( 20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding );
    SendFileFormLayout->addItem( spacer66 );

    layout59 = new QHBoxLayout( 0, 0, 6, "layout59"); 
    spacer65 = new QSpacerItem( 141, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout59->addItem( spacer65 );

    okPushButton = new QPushButton( this, "okPushButton" );
    layout59->addWidget( okPushButton );

    cancelPushButton = new QPushButton( this, "cancelPushButton" );
    layout59->addWidget( cancelPushButton );
    SendFileFormLayout->addLayout( layout59 );
    languageChange();
    resize( QSize(461, 127).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( cancelPushButton, SIGNAL( clicked() ), this, SLOT( reject() ) );
    connect( okPushButton, SIGNAL( clicked() ), this, SLOT( signalSelectedInfo() ) );
    connect( fileToolButton, SIGNAL( clicked() ), this, SLOT( chooseFile() ) );

    // tab order
    setTabOrder( subjectLineEdit, fileLineEdit );
    setTabOrder( fileLineEdit, okPushButton );
    setTabOrder( okPushButton, cancelPushButton );

    // buddies
    fileTextLabel->setBuddy( fileLineEdit );
    subjectTextLabel->setBuddy( subjectLineEdit );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
SendFileForm::~SendFileForm()
{
    destroy();
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void SendFileForm::languageChange()
{
    setCaption( tr( "Twinkle - Send File" ) );
    fileToolButton->setText( QString::null );
    QWhatsThis::add( fileToolButton, tr( "Select file to send." ) );
    fileTextLabel->setText( tr( "&File:" ) );
    subjectTextLabel->setText( tr( "&Subject:" ) );
    okPushButton->setText( tr( "&OK" ) );
    okPushButton->setAccel( QKeySequence( tr( "Alt+O" ) ) );
    cancelPushButton->setText( tr( "&Cancel" ) );
    cancelPushButton->setAccel( QKeySequence( tr( "Alt+C" ) ) );
}

