/****************************************************************************
** Form implementation generated from reading ui file 'selectprofileform.ui'
**
** Created: Wed Sep 29 18:53:21 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "selectprofileform.h"

#include <qvariant.h>
#include <cstring>
#include <qpushbutton.h>
#include <qlabel.h>
#include <qheader.h>
#include <qlistview.h>
#include <qgroupbox.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

#include "qdir.h"
#include "user.h"
#include "qstringlist.h"
#include "qmessagebox.h"
#include "protocol.h"
#include "gui.h"
#include "userprofileform.h"
#include "getprofilenameform.h"
#include "audits/memman.h"
#include "wizardform.h"
#include "syssettingsform.h"
#include "qlistview.h"
#include "service.h"
#include "presence/buddy.h"
#include "diamondcardprofileform.h"
#include "../selectprofileform.ui.h"
/*
 *  Constructs a SelectProfileForm as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
SelectProfileForm::SelectProfileForm( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "SelectProfileForm" );
    SelectProfileFormLayout = new QGridLayout( this, 1, 1, 11, 6, "SelectProfileFormLayout"); 

    selectTextLabel = new QLabel( this, "selectTextLabel" );
    selectTextLabel->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)0, 0, 0, selectTextLabel->sizePolicy().hasHeightForWidth() ) );
    selectTextLabel->setAlignment( int( QLabel::WordBreak | QLabel::AlignVCenter ) );

    SelectProfileFormLayout->addWidget( selectTextLabel, 0, 0 );

    profileListView = new QListView( this, "profileListView" );
    profileListView->addColumn( tr( "User profile" ) );
    profileListView->setResizeMode( QListView::LastColumn );

    SelectProfileFormLayout->addWidget( profileListView, 1, 0 );

    layout78 = new QVBoxLayout( 0, 0, 6, "layout78"); 
    spacer17 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    layout78->addItem( spacer17 );

    newProfileGroupBox = new QGroupBox( this, "newProfileGroupBox" );
    newProfileGroupBox->setColumnLayout(0, Qt::Vertical );
    newProfileGroupBox->layout()->setSpacing( 6 );
    newProfileGroupBox->layout()->setMargin( 11 );
    newProfileGroupBoxLayout = new QVBoxLayout( newProfileGroupBox->layout() );
    newProfileGroupBoxLayout->setAlignment( Qt::AlignTop );

    newPushButton = new QPushButton( newProfileGroupBox, "newPushButton" );
    newProfileGroupBoxLayout->addWidget( newPushButton );

    wizardPushButton = new QPushButton( newProfileGroupBox, "wizardPushButton" );
    newProfileGroupBoxLayout->addWidget( wizardPushButton );

    diamondcardPushButton = new QPushButton( newProfileGroupBox, "diamondcardPushButton" );
    newProfileGroupBoxLayout->addWidget( diamondcardPushButton );
    layout78->addWidget( newProfileGroupBox );

    modifyProfileGroupBox = new QGroupBox( this, "modifyProfileGroupBox" );
    modifyProfileGroupBox->setColumnLayout(0, Qt::Vertical );
    modifyProfileGroupBox->layout()->setSpacing( 6 );
    modifyProfileGroupBox->layout()->setMargin( 11 );
    modifyProfileGroupBoxLayout = new QVBoxLayout( modifyProfileGroupBox->layout() );
    modifyProfileGroupBoxLayout->setAlignment( Qt::AlignTop );

    editPushButton = new QPushButton( modifyProfileGroupBox, "editPushButton" );
    modifyProfileGroupBoxLayout->addWidget( editPushButton );

    deletePushButton = new QPushButton( modifyProfileGroupBox, "deletePushButton" );
    modifyProfileGroupBoxLayout->addWidget( deletePushButton );

    renamePushButton = new QPushButton( modifyProfileGroupBox, "renamePushButton" );
    modifyProfileGroupBoxLayout->addWidget( renamePushButton );
    layout78->addWidget( modifyProfileGroupBox );

    startupProfileGroupBox = new QGroupBox( this, "startupProfileGroupBox" );
    startupProfileGroupBox->setColumnLayout(0, Qt::Vertical );
    startupProfileGroupBox->layout()->setSpacing( 6 );
    startupProfileGroupBox->layout()->setMargin( 11 );
    startupProfileGroupBoxLayout = new QVBoxLayout( startupProfileGroupBox->layout() );
    startupProfileGroupBoxLayout->setAlignment( Qt::AlignTop );

    defaultPushButton = new QPushButton( startupProfileGroupBox, "defaultPushButton" );
    startupProfileGroupBoxLayout->addWidget( defaultPushButton );

    runPushButton = new QPushButton( startupProfileGroupBox, "runPushButton" );
    runPushButton->setDefault( TRUE );
    startupProfileGroupBoxLayout->addWidget( runPushButton );
    layout78->addWidget( startupProfileGroupBox );

    sysPushButton = new QPushButton( this, "sysPushButton" );
    layout78->addWidget( sysPushButton );

    cancelPushButton = new QPushButton( this, "cancelPushButton" );
    layout78->addWidget( cancelPushButton );

    SelectProfileFormLayout->addMultiCellLayout( layout78, 0, 1, 1, 1 );
    languageChange();
    resize( QSize(501, 513).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( cancelPushButton, SIGNAL( clicked() ), this, SLOT( reject() ) );
    connect( runPushButton, SIGNAL( clicked() ), this, SLOT( runProfile() ) );
    connect( editPushButton, SIGNAL( clicked() ), this, SLOT( editProfile() ) );
    connect( newPushButton, SIGNAL( clicked() ), this, SLOT( newProfile() ) );
    connect( deletePushButton, SIGNAL( clicked() ), this, SLOT( deleteProfile() ) );
    connect( renamePushButton, SIGNAL( clicked() ), this, SLOT( renameProfile() ) );
    connect( wizardPushButton, SIGNAL( clicked() ), this, SLOT( wizardProfile() ) );
    connect( defaultPushButton, SIGNAL( clicked() ), this, SLOT( setAsDefault() ) );
    connect( sysPushButton, SIGNAL( clicked() ), this, SLOT( sysSettings() ) );
    connect( profileListView, SIGNAL( doubleClicked(QListViewItem*) ), this, SLOT( toggleItem(QListViewItem*) ) );
    connect( diamondcardPushButton, SIGNAL( clicked() ), this, SLOT( diamondcardProfile() ) );

    // tab order
    setTabOrder( profileListView, newPushButton );
    setTabOrder( newPushButton, wizardPushButton );
    setTabOrder( wizardPushButton, diamondcardPushButton );
    setTabOrder( diamondcardPushButton, editPushButton );
    setTabOrder( editPushButton, deletePushButton );
    setTabOrder( deletePushButton, renamePushButton );
    setTabOrder( renamePushButton, defaultPushButton );
    setTabOrder( defaultPushButton, runPushButton );
    setTabOrder( runPushButton, sysPushButton );
    setTabOrder( sysPushButton, cancelPushButton );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
SelectProfileForm::~SelectProfileForm()
{
    destroy();
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void SelectProfileForm::languageChange()
{
    setCaption( tr( "Twinkle - Select user profile" ) );
    selectTextLabel->setText( tr( "Select user profile(s) to run:" ) );
    profileListView->header()->setLabel( 0, tr( "User profile" ) );
    QWhatsThis::add( profileListView, tr( "Tick the check boxes of the user profiles that you want to run and press run." ) );
    newProfileGroupBox->setTitle( tr( "Create profile" ) );
    newPushButton->setText( tr( "Ed&itor" ) );
    newPushButton->setAccel( QKeySequence( tr( "Alt+I" ) ) );
    QWhatsThis::add( newPushButton, tr( "Create a new profile with the profile editor." ) );
    wizardPushButton->setText( tr( "&Wizard" ) );
    wizardPushButton->setAccel( QKeySequence( tr( "Alt+W" ) ) );
    QWhatsThis::add( wizardPushButton, tr( "Create a new profile with the wizard." ) );
    diamondcardPushButton->setText( tr( "Dia&mondcard" ) );
    diamondcardPushButton->setAccel( QKeySequence( tr( "Alt+M" ) ) );
    QWhatsThis::add( diamondcardPushButton, tr( "Create a profile for a Diamondcard account. With a Diamondcard account you can make worldwide calls to regular and cell phones and send SMS messages." ) );
    modifyProfileGroupBox->setTitle( tr( "Modify profile" ) );
    editPushButton->setText( tr( "&Edit" ) );
    editPushButton->setAccel( QKeySequence( tr( "Alt+E" ) ) );
    QWhatsThis::add( editPushButton, tr( "Edit the highlighted profile." ) );
    deletePushButton->setText( tr( "&Delete" ) );
    deletePushButton->setAccel( QKeySequence( tr( "Alt+D" ) ) );
    QWhatsThis::add( deletePushButton, tr( "Delete the highlighted profile." ) );
    renamePushButton->setText( tr( "Ren&ame" ) );
    renamePushButton->setAccel( QKeySequence( tr( "Alt+A" ) ) );
    QWhatsThis::add( renamePushButton, tr( "Rename the highlighted profile." ) );
    startupProfileGroupBox->setTitle( tr( "Startup profile" ) );
    defaultPushButton->setText( tr( "&Set as default" ) );
    defaultPushButton->setAccel( QKeySequence( tr( "Alt+S" ) ) );
    QWhatsThis::add( defaultPushButton, tr( "Make the selected profiles the default profiles. The next time you start Twinkle, these profiles will be automatically run." ) );
    runPushButton->setText( tr( "&Run" ) );
    runPushButton->setAccel( QKeySequence( tr( "Alt+R" ) ) );
    QWhatsThis::add( runPushButton, tr( "Run Twinkle with the selected profiles." ) );
    sysPushButton->setText( tr( "S&ystem settings" ) );
    sysPushButton->setAccel( QKeySequence( tr( "Alt+Y" ) ) );
    QWhatsThis::add( sysPushButton, tr( "Edit the system settings." ) );
    cancelPushButton->setText( tr( "&Cancel" ) );
    cancelPushButton->setAccel( QKeySequence( tr( "Alt+C" ) ) );
}

