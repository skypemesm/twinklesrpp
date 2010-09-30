/****************************************************************************
** Form implementation generated from reading ui file 'logviewform.ui'
**
** Created: Wed Sep 29 18:53:48 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "logviewform.h"

#include <qvariant.h>
#include <qtextedit.h>
#include <qpushbutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

#include "log.h"
#include "qdialog.h"
#include "qstring.h"
#include "audits/memman.h"
#include "../logviewform.ui.h"
/*
 *  Constructs a LogViewForm as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
LogViewForm::LogViewForm( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "LogViewForm" );
    LogViewFormLayout = new QGridLayout( this, 1, 1, 11, 6, "LogViewFormLayout"); 

    logTextEdit = new QTextEdit( this, "logTextEdit" );
    logTextEdit->setTextFormat( QTextEdit::PlainText );
    logTextEdit->setWordWrap( QTextEdit::NoWrap );
    logTextEdit->setReadOnly( TRUE );

    LogViewFormLayout->addMultiCellWidget( logTextEdit, 0, 0, 0, 2 );

    closePushButton = new QPushButton( this, "closePushButton" );

    LogViewFormLayout->addWidget( closePushButton, 1, 2 );
    spacer23 = new QSpacerItem( 360, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    LogViewFormLayout->addItem( spacer23, 1, 0 );

    clearPushButton = new QPushButton( this, "clearPushButton" );

    LogViewFormLayout->addWidget( clearPushButton, 1, 1 );
    languageChange();
    resize( QSize(599, 472).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( closePushButton, SIGNAL( clicked() ), this, SLOT( close() ) );
    connect( clearPushButton, SIGNAL( clicked() ), this, SLOT( clear() ) );

    // tab order
    setTabOrder( logTextEdit, clearPushButton );
    setTabOrder( clearPushButton, closePushButton );
}

/*
 *  Destroys the object and frees any allocated resources
 */
LogViewForm::~LogViewForm()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void LogViewForm::languageChange()
{
    setCaption( tr( "Twinkle - Log" ) );
    QWhatsThis::add( logTextEdit, tr( "Contents of the current log file (~/.twinkle/twinkle.log)" ) );
    closePushButton->setText( tr( "&Close" ) );
    closePushButton->setAccel( QKeySequence( tr( "Alt+C" ) ) );
    clearPushButton->setText( tr( "C&lear" ) );
    clearPushButton->setAccel( QKeySequence( tr( "Alt+L" ) ) );
    QWhatsThis::add( clearPushButton, tr( "Clear the log window. This does <b>not</b> clear the log file itself." ) );
}

