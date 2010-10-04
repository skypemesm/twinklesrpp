/****************************************************************************
** Form implementation generated from reading ui file 'historyform.ui'
**
** Created: Sun Oct 3 21:30:46 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "historyform.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qheader.h>
#include <qlistview.h>
#include <qgroupbox.h>
#include <qtextedit.h>
#include <qcheckbox.h>
#include <qlabel.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

#include "call_history.h"
#include "util.h"
#include "gui.h"
#include "qlistview.h"
#include "historylistview.h"
#include "qiconset.h"
#include "audits/memman.h"
#include "../historyform.ui.h"
/*
 *  Constructs a HistoryForm as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
HistoryForm::HistoryForm( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "HistoryForm" );
    HistoryFormLayout = new QGridLayout( this, 1, 1, 11, 6, "HistoryFormLayout"); 

    historyListView = new QListView( this, "historyListView" );
    historyListView->addColumn( tr( "Time" ) );
    historyListView->addColumn( tr( "In/Out" ) );
    historyListView->addColumn( tr( "From/To" ) );
    historyListView->addColumn( tr( "Subject" ) );
    historyListView->addColumn( tr( "Status" ) );
    historyListView->setAllColumnsShowFocus( TRUE );
    historyListView->setShowSortIndicator( TRUE );
    historyListView->setResizeMode( QListView::LastColumn );

    HistoryFormLayout->addWidget( historyListView, 0, 0 );

    layout37 = new QHBoxLayout( 0, 0, 6, "layout37"); 

    cdrGroupBox = new QGroupBox( this, "cdrGroupBox" );
    cdrGroupBox->setColumnLayout(0, Qt::Vertical );
    cdrGroupBox->layout()->setSpacing( 6 );
    cdrGroupBox->layout()->setMargin( 11 );
    cdrGroupBoxLayout = new QGridLayout( cdrGroupBox->layout() );
    cdrGroupBoxLayout->setAlignment( Qt::AlignTop );

    cdrTextEdit = new QTextEdit( cdrGroupBox, "cdrTextEdit" );
    cdrTextEdit->setTextFormat( QTextEdit::RichText );
    cdrTextEdit->setWordWrap( QTextEdit::NoWrap );
    cdrTextEdit->setReadOnly( TRUE );
    cdrTextEdit->setAutoFormatting( int( QTextEdit::AutoAll ) );

    cdrGroupBoxLayout->addWidget( cdrTextEdit, 0, 0 );
    layout37->addWidget( cdrGroupBox );

    viewGroupBox = new QGroupBox( this, "viewGroupBox" );
    viewGroupBox->setColumnLayout(0, Qt::Vertical );
    viewGroupBox->layout()->setSpacing( 6 );
    viewGroupBox->layout()->setMargin( 11 );
    viewGroupBoxLayout = new QVBoxLayout( viewGroupBox->layout() );
    viewGroupBoxLayout->setAlignment( Qt::AlignTop );

    inCheckBox = new QCheckBox( viewGroupBox, "inCheckBox" );
    viewGroupBoxLayout->addWidget( inCheckBox );

    outCheckBox = new QCheckBox( viewGroupBox, "outCheckBox" );
    viewGroupBoxLayout->addWidget( outCheckBox );

    successCheckBox = new QCheckBox( viewGroupBox, "successCheckBox" );
    viewGroupBoxLayout->addWidget( successCheckBox );

    missedCheckBox = new QCheckBox( viewGroupBox, "missedCheckBox" );
    viewGroupBoxLayout->addWidget( missedCheckBox );

    profileCheckBox = new QCheckBox( viewGroupBox, "profileCheckBox" );
    viewGroupBoxLayout->addWidget( profileCheckBox );
    layout37->addWidget( viewGroupBox );

    HistoryFormLayout->addLayout( layout37, 1, 0 );

    layout39 = new QHBoxLayout( 0, 0, 6, "layout39"); 

    clearPushButton = new QPushButton( this, "clearPushButton" );
    layout39->addWidget( clearPushButton );
    spacer28 = new QSpacerItem( 540, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout39->addItem( spacer28 );

    closePushButton = new QPushButton( this, "closePushButton" );
    closePushButton->setDefault( FALSE );
    layout39->addWidget( closePushButton );

    callPushButton = new QPushButton( this, "callPushButton" );
    callPushButton->setDefault( TRUE );
    layout39->addWidget( callPushButton );

    HistoryFormLayout->addLayout( layout39, 3, 0 );

    layout6 = new QHBoxLayout( 0, 0, 6, "layout6"); 

    numberlCallsTtextLabel = new QLabel( this, "numberlCallsTtextLabel" );
    layout6->addWidget( numberlCallsTtextLabel );

    numberCallsValueTextLabel = new QLabel( this, "numberCallsValueTextLabel" );
    layout6->addWidget( numberCallsValueTextLabel );

    totalDurationTextLabel = new QLabel( this, "totalDurationTextLabel" );
    layout6->addWidget( totalDurationTextLabel );

    totalDurationValueTextLabel = new QLabel( this, "totalDurationValueTextLabel" );
    layout6->addWidget( totalDurationValueTextLabel );
    spacer11 = new QSpacerItem( 460, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout6->addItem( spacer11 );

    HistoryFormLayout->addLayout( layout6, 2, 0 );
    languageChange();
    resize( QSize(872, 647).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( closePushButton, SIGNAL( clicked() ), this, SLOT( close() ) );
    connect( historyListView, SIGNAL( currentChanged(QListViewItem*) ), this, SLOT( showCallDetails(QListViewItem*) ) );
    connect( inCheckBox, SIGNAL( toggled(bool) ), this, SLOT( loadHistory() ) );
    connect( missedCheckBox, SIGNAL( toggled(bool) ), this, SLOT( loadHistory() ) );
    connect( outCheckBox, SIGNAL( toggled(bool) ), this, SLOT( loadHistory() ) );
    connect( profileCheckBox, SIGNAL( toggled(bool) ), this, SLOT( loadHistory() ) );
    connect( successCheckBox, SIGNAL( toggled(bool) ), this, SLOT( loadHistory() ) );
    connect( historyListView, SIGNAL( rightButtonPressed(QListViewItem*,const QPoint&,int) ), this, SLOT( popupMenu(QListViewItem*,const QPoint&) ) );
    connect( historyListView, SIGNAL( doubleClicked(QListViewItem*,const QPoint&,int) ), this, SLOT( call(QListViewItem*) ) );
    connect( clearPushButton, SIGNAL( clicked() ), this, SLOT( clearHistory() ) );
    connect( callPushButton, SIGNAL( clicked() ), this, SLOT( call() ) );

    // tab order
    setTabOrder( historyListView, cdrTextEdit );
    setTabOrder( cdrTextEdit, inCheckBox );
    setTabOrder( inCheckBox, outCheckBox );
    setTabOrder( outCheckBox, successCheckBox );
    setTabOrder( successCheckBox, missedCheckBox );
    setTabOrder( missedCheckBox, profileCheckBox );
    setTabOrder( profileCheckBox, clearPushButton );
    setTabOrder( clearPushButton, closePushButton );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
HistoryForm::~HistoryForm()
{
    destroy();
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void HistoryForm::languageChange()
{
    setCaption( tr( "Twinkle - Call History" ) );
    historyListView->header()->setLabel( 0, tr( "Time" ) );
    historyListView->header()->setLabel( 1, tr( "In/Out" ) );
    historyListView->header()->setLabel( 2, tr( "From/To" ) );
    historyListView->header()->setLabel( 3, tr( "Subject" ) );
    historyListView->header()->setLabel( 4, tr( "Status" ) );
    cdrGroupBox->setTitle( tr( "Call details" ) );
    QWhatsThis::add( cdrTextEdit, tr( "Details of the selected call record." ) );
    viewGroupBox->setTitle( tr( "View" ) );
    inCheckBox->setText( tr( "&Incoming calls" ) );
    inCheckBox->setAccel( QKeySequence( tr( "Alt+I" ) ) );
    QWhatsThis::add( inCheckBox, tr( "Check this option to show incoming calls." ) );
    outCheckBox->setText( tr( "&Outgoing calls" ) );
    outCheckBox->setAccel( QKeySequence( tr( "Alt+O" ) ) );
    QWhatsThis::add( outCheckBox, tr( "Check this option to show outgoing calls." ) );
    successCheckBox->setText( tr( "&Answered calls" ) );
    successCheckBox->setAccel( QKeySequence( tr( "Alt+A" ) ) );
    QWhatsThis::add( successCheckBox, tr( "Check this option to show answered calls." ) );
    missedCheckBox->setText( tr( "&Missed calls" ) );
    missedCheckBox->setAccel( QKeySequence( tr( "Alt+M" ) ) );
    QWhatsThis::add( missedCheckBox, tr( "Check this option to show missed calls." ) );
    profileCheckBox->setText( tr( "Current &user profiles only" ) );
    profileCheckBox->setAccel( QKeySequence( tr( "Alt+U" ) ) );
    QWhatsThis::add( profileCheckBox, tr( "Check this option to show only calls associated with this user profile." ) );
    clearPushButton->setText( tr( "C&lear" ) );
    clearPushButton->setAccel( QKeySequence( tr( "Alt+L" ) ) );
    QWhatsThis::add( clearPushButton, tr( "<p>Clear the complete call history.</p>\n"
"<p><b>Note:</b> this will clear <b>all</b> records, also records not shown depending on the checked view options.</p>" ) );
    closePushButton->setText( tr( "Clo&se" ) );
    closePushButton->setAccel( QKeySequence( tr( "Alt+S" ) ) );
    QWhatsThis::add( closePushButton, tr( "Close this window." ) );
    callPushButton->setText( tr( "&Call" ) );
    callPushButton->setAccel( QKeySequence( tr( "Alt+C" ) ) );
    QWhatsThis::add( callPushButton, tr( "Call selected address." ) );
    numberlCallsTtextLabel->setText( tr( "Number of calls:" ) );
    numberCallsValueTextLabel->setText( tr( "###" ) );
    totalDurationTextLabel->setText( tr( "Total call duration:" ) );
    totalDurationValueTextLabel->setText( tr( "###" ) );
}

