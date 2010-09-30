/****************************************************************************
** Form implementation generated from reading ui file 'selectuserform.ui'
**
** Created: Wed Sep 29 18:54:05 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "selectuserform.h"

#include <qvariant.h>
#include <cassert>
#include <qpushbutton.h>
#include <qlabel.h>
#include <qheader.h>
#include <qlistview.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

#include "qlistview.h"
#include "../selectuserform.ui.h"
/*
 *  Constructs a SelectUserForm as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
SelectUserForm::SelectUserForm( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "SelectUserForm" );
    SelectUserFormLayout = new QGridLayout( this, 1, 1, 11, 6, "SelectUserFormLayout"); 

    cancelPushButton = new QPushButton( this, "cancelPushButton" );

    SelectUserFormLayout->addWidget( cancelPushButton, 1, 4 );

    selectPushButton = new QPushButton( this, "selectPushButton" );

    SelectUserFormLayout->addWidget( selectPushButton, 1, 0 );
    spacer47 = new QSpacerItem( 41, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    SelectUserFormLayout->addItem( spacer47, 1, 2 );

    okPushButton = new QPushButton( this, "okPushButton" );
    okPushButton->setDefault( TRUE );

    SelectUserFormLayout->addWidget( okPushButton, 1, 3 );

    clearPushButton = new QPushButton( this, "clearPushButton" );

    SelectUserFormLayout->addWidget( clearPushButton, 1, 1 );

    layout100 = new QVBoxLayout( 0, 0, 6, "layout100"); 

    purposeTextLabel = new QLabel( this, "purposeTextLabel" );
    purposeTextLabel->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)5, 0, 0, purposeTextLabel->sizePolicy().hasHeightForWidth() ) );
    layout100->addWidget( purposeTextLabel );

    userListView = new QListView( this, "userListView" );
    userListView->addColumn( tr( "User" ) );
    userListView->setResizePolicy( QScrollView::Manual );
    userListView->setSelectionMode( QListView::NoSelection );
    userListView->setResizeMode( QListView::LastColumn );
    layout100->addWidget( userListView );

    SelectUserFormLayout->addMultiCellLayout( layout100, 0, 0, 0, 4 );
    languageChange();
    resize( QSize(584, 228).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( okPushButton, SIGNAL( clicked() ), this, SLOT( validate() ) );
    connect( cancelPushButton, SIGNAL( clicked() ), this, SLOT( reject() ) );
    connect( selectPushButton, SIGNAL( clicked() ), this, SLOT( selectAll() ) );
    connect( clearPushButton, SIGNAL( clicked() ), this, SLOT( clearAll() ) );
    connect( userListView, SIGNAL( doubleClicked(QListViewItem*) ), this, SLOT( toggle(QListViewItem*) ) );

    // tab order
    setTabOrder( userListView, selectPushButton );
    setTabOrder( selectPushButton, clearPushButton );
    setTabOrder( clearPushButton, okPushButton );
    setTabOrder( okPushButton, cancelPushButton );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
SelectUserForm::~SelectUserForm()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void SelectUserForm::languageChange()
{
    setCaption( tr( "Twinkle - Select user" ) );
    cancelPushButton->setText( tr( "&Cancel" ) );
    cancelPushButton->setAccel( QKeySequence( tr( "Alt+C" ) ) );
    selectPushButton->setText( tr( "&Select all" ) );
    selectPushButton->setAccel( QKeySequence( tr( "Alt+S" ) ) );
    okPushButton->setText( tr( "&OK" ) );
    okPushButton->setAccel( QKeySequence( tr( "Alt+O" ) ) );
    clearPushButton->setText( tr( "C&lear all" ) );
    clearPushButton->setAccel( QKeySequence( tr( "Alt+L" ) ) );
    purposeTextLabel->setText( tr( "purpose", "No need to translate" ) );
    userListView->header()->setLabel( 0, tr( "User" ) );
}

