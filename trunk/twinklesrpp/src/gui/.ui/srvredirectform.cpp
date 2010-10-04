/****************************************************************************
** Form implementation generated from reading ui file 'srvredirectform.ui'
**
** Created: Sun Oct 3 21:29:52 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "srvredirectform.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qlabel.h>
#include <qcombobox.h>
#include <qtabwidget.h>
#include <qwidget.h>
#include <qcheckbox.h>
#include <qgroupbox.h>
#include <qlineedit.h>
#include <qtoolbutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

#include "phone.h"
#include "qgroupbox.h"
#include "qcheckbox.h"
#include "gui.h"
#include "audits/memman.h"
#include "../srvredirectform.ui.h"
/*
 *  Constructs a SrvRedirectForm as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
SrvRedirectForm::SrvRedirectForm( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "SrvRedirectForm" );
    SrvRedirectFormLayout = new QVBoxLayout( this, 11, 6, "SrvRedirectFormLayout"); 

    layout114 = new QHBoxLayout( 0, 0, 6, "layout114"); 

    userTextLabel = new QLabel( this, "userTextLabel" );
    layout114->addWidget( userTextLabel );

    userComboBox = new QComboBox( FALSE, this, "userComboBox" );
    userComboBox->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)7, (QSizePolicy::SizeType)0, 0, 0, userComboBox->sizePolicy().hasHeightForWidth() ) );
    layout114->addWidget( userComboBox );
    SrvRedirectFormLayout->addLayout( layout114 );

    cfTabWidget = new QTabWidget( this, "cfTabWidget" );
    cfTabWidget->setEnabled( TRUE );

    tab = new QWidget( cfTabWidget, "tab" );
    tabLayout = new QGridLayout( tab, 1, 1, 11, 6, "tabLayout"); 

    cfAlwaysCheckBox = new QCheckBox( tab, "cfAlwaysCheckBox" );

    tabLayout->addWidget( cfAlwaysCheckBox, 0, 0 );

    cfAlwaysGroupBox = new QGroupBox( tab, "cfAlwaysGroupBox" );
    cfAlwaysGroupBox->setEnabled( TRUE );
    cfAlwaysGroupBox->setColumnLayout(0, Qt::Vertical );
    cfAlwaysGroupBox->layout()->setSpacing( 6 );
    cfAlwaysGroupBox->layout()->setMargin( 11 );
    cfAlwaysGroupBoxLayout = new QGridLayout( cfAlwaysGroupBox->layout() );
    cfAlwaysGroupBoxLayout->setAlignment( Qt::AlignTop );

    cfAlwaysDst1LineEdit = new QLineEdit( cfAlwaysGroupBox, "cfAlwaysDst1LineEdit" );
    cfAlwaysDst1LineEdit->setEnabled( TRUE );
    cfAlwaysDst1LineEdit->setFrameShape( QLineEdit::LineEditPanel );
    cfAlwaysDst1LineEdit->setFrameShadow( QLineEdit::Sunken );

    cfAlwaysGroupBoxLayout->addWidget( cfAlwaysDst1LineEdit, 0, 1 );

    cfAlwaysDst2LineEdit = new QLineEdit( cfAlwaysGroupBox, "cfAlwaysDst2LineEdit" );
    cfAlwaysDst2LineEdit->setEnabled( TRUE );

    cfAlwaysGroupBoxLayout->addWidget( cfAlwaysDst2LineEdit, 1, 1 );

    cfAlwaysDst3TextLabel = new QLabel( cfAlwaysGroupBox, "cfAlwaysDst3TextLabel" );
    cfAlwaysDst3TextLabel->setEnabled( TRUE );

    cfAlwaysGroupBoxLayout->addWidget( cfAlwaysDst3TextLabel, 2, 0 );

    cfAlwaysDst3LineEdit = new QLineEdit( cfAlwaysGroupBox, "cfAlwaysDst3LineEdit" );
    cfAlwaysDst3LineEdit->setEnabled( TRUE );

    cfAlwaysGroupBoxLayout->addWidget( cfAlwaysDst3LineEdit, 2, 1 );

    cfAlwaysDst2TextLabel = new QLabel( cfAlwaysGroupBox, "cfAlwaysDst2TextLabel" );

    cfAlwaysGroupBoxLayout->addWidget( cfAlwaysDst2TextLabel, 1, 0 );

    cfAlwaysDst1TextLabel = new QLabel( cfAlwaysGroupBox, "cfAlwaysDst1TextLabel" );

    cfAlwaysGroupBoxLayout->addWidget( cfAlwaysDst1TextLabel, 0, 0 );

    addrAlways1ToolButton = new QToolButton( cfAlwaysGroupBox, "addrAlways1ToolButton" );
    addrAlways1ToolButton->setFocusPolicy( QToolButton::TabFocus );
    addrAlways1ToolButton->setIconSet( QIconSet( QPixmap::fromMimeSource( "kontact_contacts.png" ) ) );

    cfAlwaysGroupBoxLayout->addWidget( addrAlways1ToolButton, 0, 2 );

    addrAlways2ToolButton = new QToolButton( cfAlwaysGroupBox, "addrAlways2ToolButton" );
    addrAlways2ToolButton->setFocusPolicy( QToolButton::TabFocus );
    addrAlways2ToolButton->setIconSet( QIconSet( QPixmap::fromMimeSource( "kontact_contacts.png" ) ) );

    cfAlwaysGroupBoxLayout->addWidget( addrAlways2ToolButton, 1, 2 );

    addrAlways3ToolButton = new QToolButton( cfAlwaysGroupBox, "addrAlways3ToolButton" );
    addrAlways3ToolButton->setFocusPolicy( QToolButton::TabFocus );
    addrAlways3ToolButton->setIconSet( QIconSet( QPixmap::fromMimeSource( "kontact_contacts.png" ) ) );

    cfAlwaysGroupBoxLayout->addWidget( addrAlways3ToolButton, 2, 2 );

    tabLayout->addWidget( cfAlwaysGroupBox, 1, 0 );
    cfTabWidget->insertTab( tab, QString::fromLatin1("") );

    tab_2 = new QWidget( cfTabWidget, "tab_2" );
    tabLayout_2 = new QGridLayout( tab_2, 1, 1, 11, 6, "tabLayout_2"); 

    cfBusyCheckBox = new QCheckBox( tab_2, "cfBusyCheckBox" );

    tabLayout_2->addWidget( cfBusyCheckBox, 0, 0 );

    cfBusyGroupBox = new QGroupBox( tab_2, "cfBusyGroupBox" );
    cfBusyGroupBox->setEnabled( TRUE );
    cfBusyGroupBox->setColumnLayout(0, Qt::Vertical );
    cfBusyGroupBox->layout()->setSpacing( 6 );
    cfBusyGroupBox->layout()->setMargin( 11 );
    cfBusyGroupBoxLayout = new QGridLayout( cfBusyGroupBox->layout() );
    cfBusyGroupBoxLayout->setAlignment( Qt::AlignTop );

    cfBusyDst2LineEdit = new QLineEdit( cfBusyGroupBox, "cfBusyDst2LineEdit" );
    cfBusyDst2LineEdit->setEnabled( TRUE );

    cfBusyGroupBoxLayout->addWidget( cfBusyDst2LineEdit, 1, 1 );

    cfBusyDst3TextLabel = new QLabel( cfBusyGroupBox, "cfBusyDst3TextLabel" );

    cfBusyGroupBoxLayout->addWidget( cfBusyDst3TextLabel, 2, 0 );

    cfBusyDst3LineEdit = new QLineEdit( cfBusyGroupBox, "cfBusyDst3LineEdit" );
    cfBusyDst3LineEdit->setEnabled( TRUE );

    cfBusyGroupBoxLayout->addWidget( cfBusyDst3LineEdit, 2, 1 );

    cfBusyDst2TextLabel = new QLabel( cfBusyGroupBox, "cfBusyDst2TextLabel" );

    cfBusyGroupBoxLayout->addWidget( cfBusyDst2TextLabel, 1, 0 );

    cfBusyDst1TextLabel = new QLabel( cfBusyGroupBox, "cfBusyDst1TextLabel" );

    cfBusyGroupBoxLayout->addWidget( cfBusyDst1TextLabel, 0, 0 );

    cfBusyDst1LineEdit = new QLineEdit( cfBusyGroupBox, "cfBusyDst1LineEdit" );
    cfBusyDst1LineEdit->setEnabled( TRUE );

    cfBusyGroupBoxLayout->addWidget( cfBusyDst1LineEdit, 0, 1 );

    addrBusy1ToolButton = new QToolButton( cfBusyGroupBox, "addrBusy1ToolButton" );
    addrBusy1ToolButton->setIconSet( QIconSet( QPixmap::fromMimeSource( "kontact_contacts.png" ) ) );

    cfBusyGroupBoxLayout->addWidget( addrBusy1ToolButton, 0, 2 );

    addrBusy2ToolButton = new QToolButton( cfBusyGroupBox, "addrBusy2ToolButton" );
    addrBusy2ToolButton->setIconSet( QIconSet( QPixmap::fromMimeSource( "kontact_contacts.png" ) ) );

    cfBusyGroupBoxLayout->addWidget( addrBusy2ToolButton, 1, 2 );

    addrBusy3ToolButton = new QToolButton( cfBusyGroupBox, "addrBusy3ToolButton" );
    addrBusy3ToolButton->setIconSet( QIconSet( QPixmap::fromMimeSource( "kontact_contacts.png" ) ) );

    cfBusyGroupBoxLayout->addWidget( addrBusy3ToolButton, 2, 2 );

    tabLayout_2->addWidget( cfBusyGroupBox, 1, 0 );
    cfTabWidget->insertTab( tab_2, QString::fromLatin1("") );

    tab_3 = new QWidget( cfTabWidget, "tab_3" );
    tabLayout_3 = new QGridLayout( tab_3, 1, 1, 11, 6, "tabLayout_3"); 

    cfNoanswerCheckBox = new QCheckBox( tab_3, "cfNoanswerCheckBox" );

    tabLayout_3->addWidget( cfNoanswerCheckBox, 0, 0 );

    cfNoanswerGroupBox = new QGroupBox( tab_3, "cfNoanswerGroupBox" );
    cfNoanswerGroupBox->setEnabled( TRUE );
    cfNoanswerGroupBox->setColumnLayout(0, Qt::Vertical );
    cfNoanswerGroupBox->layout()->setSpacing( 6 );
    cfNoanswerGroupBox->layout()->setMargin( 11 );
    cfNoanswerGroupBoxLayout = new QGridLayout( cfNoanswerGroupBox->layout() );
    cfNoanswerGroupBoxLayout->setAlignment( Qt::AlignTop );

    cfNoanswerDst2LineEdit = new QLineEdit( cfNoanswerGroupBox, "cfNoanswerDst2LineEdit" );
    cfNoanswerDst2LineEdit->setEnabled( TRUE );

    cfNoanswerGroupBoxLayout->addWidget( cfNoanswerDst2LineEdit, 1, 1 );

    cfNoanswerDst3TextLabel = new QLabel( cfNoanswerGroupBox, "cfNoanswerDst3TextLabel" );

    cfNoanswerGroupBoxLayout->addWidget( cfNoanswerDst3TextLabel, 2, 0 );

    cfNoanswerDst2TextLabel = new QLabel( cfNoanswerGroupBox, "cfNoanswerDst2TextLabel" );

    cfNoanswerGroupBoxLayout->addWidget( cfNoanswerDst2TextLabel, 1, 0 );

    cfNoanswerDst1TextLabel = new QLabel( cfNoanswerGroupBox, "cfNoanswerDst1TextLabel" );

    cfNoanswerGroupBoxLayout->addWidget( cfNoanswerDst1TextLabel, 0, 0 );

    cfNoanswerDst1LineEdit = new QLineEdit( cfNoanswerGroupBox, "cfNoanswerDst1LineEdit" );
    cfNoanswerDst1LineEdit->setEnabled( TRUE );

    cfNoanswerGroupBoxLayout->addWidget( cfNoanswerDst1LineEdit, 0, 1 );

    cfNoanswerDst3LineEdit = new QLineEdit( cfNoanswerGroupBox, "cfNoanswerDst3LineEdit" );
    cfNoanswerDst3LineEdit->setEnabled( TRUE );

    cfNoanswerGroupBoxLayout->addWidget( cfNoanswerDst3LineEdit, 2, 1 );

    addrNoanswer1ToolButton = new QToolButton( cfNoanswerGroupBox, "addrNoanswer1ToolButton" );
    addrNoanswer1ToolButton->setIconSet( QIconSet( QPixmap::fromMimeSource( "kontact_contacts.png" ) ) );

    cfNoanswerGroupBoxLayout->addWidget( addrNoanswer1ToolButton, 0, 2 );

    addrNoanswer2ToolButton = new QToolButton( cfNoanswerGroupBox, "addrNoanswer2ToolButton" );
    addrNoanswer2ToolButton->setIconSet( QIconSet( QPixmap::fromMimeSource( "kontact_contacts.png" ) ) );

    cfNoanswerGroupBoxLayout->addWidget( addrNoanswer2ToolButton, 1, 2 );

    addrNoanswer3ToolButton = new QToolButton( cfNoanswerGroupBox, "addrNoanswer3ToolButton" );
    addrNoanswer3ToolButton->setIconSet( QIconSet( QPixmap::fromMimeSource( "kontact_contacts.png" ) ) );

    cfNoanswerGroupBoxLayout->addWidget( addrNoanswer3ToolButton, 2, 2 );

    tabLayout_3->addWidget( cfNoanswerGroupBox, 1, 0 );
    cfTabWidget->insertTab( tab_3, QString::fromLatin1("") );
    SrvRedirectFormLayout->addWidget( cfTabWidget );
    spacer14 = new QSpacerItem( 20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding );
    SrvRedirectFormLayout->addItem( spacer14 );

    layout23 = new QHBoxLayout( 0, 0, 6, "layout23"); 
    spacer13 = new QSpacerItem( 261, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout23->addItem( spacer13 );

    okPushButton = new QPushButton( this, "okPushButton" );
    okPushButton->setDefault( TRUE );
    layout23->addWidget( okPushButton );

    cancelPushButton = new QPushButton( this, "cancelPushButton" );
    layout23->addWidget( cancelPushButton );
    SrvRedirectFormLayout->addLayout( layout23 );
    languageChange();
    resize( QSize(648, 315).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( cancelPushButton, SIGNAL( clicked() ), this, SLOT( reject() ) );
    connect( okPushButton, SIGNAL( clicked() ), this, SLOT( validate() ) );
    connect( cfAlwaysCheckBox, SIGNAL( toggled(bool) ), this, SLOT( toggleAlways(bool) ) );
    connect( cfBusyCheckBox, SIGNAL( toggled(bool) ), this, SLOT( toggleBusy(bool) ) );
    connect( cfNoanswerCheckBox, SIGNAL( toggled(bool) ), this, SLOT( toggleNoanswer(bool) ) );
    connect( addrAlways1ToolButton, SIGNAL( clicked() ), this, SLOT( showAddressBook1() ) );
    connect( addrAlways2ToolButton, SIGNAL( clicked() ), this, SLOT( showAddressBook2() ) );
    connect( addrAlways3ToolButton, SIGNAL( clicked() ), this, SLOT( showAddressBook3() ) );
    connect( addrBusy1ToolButton, SIGNAL( clicked() ), this, SLOT( showAddressBook4() ) );
    connect( addrBusy2ToolButton, SIGNAL( clicked() ), this, SLOT( showAddressBook5() ) );
    connect( addrBusy3ToolButton, SIGNAL( clicked() ), this, SLOT( showAddressBook6() ) );
    connect( addrNoanswer1ToolButton, SIGNAL( clicked() ), this, SLOT( showAddressBook7() ) );
    connect( addrNoanswer2ToolButton, SIGNAL( clicked() ), this, SLOT( showAddressBook8() ) );
    connect( addrNoanswer3ToolButton, SIGNAL( clicked() ), this, SLOT( showAddressBook9() ) );
    connect( userComboBox, SIGNAL( activated(const QString&) ), this, SLOT( changedUser(const QString&) ) );

    // tab order
    setTabOrder( cfTabWidget, cfAlwaysCheckBox );
    setTabOrder( cfAlwaysCheckBox, cfAlwaysDst1LineEdit );
    setTabOrder( cfAlwaysDst1LineEdit, cfAlwaysDst2LineEdit );
    setTabOrder( cfAlwaysDst2LineEdit, cfAlwaysDst3LineEdit );
    setTabOrder( cfAlwaysDst3LineEdit, cfBusyCheckBox );
    setTabOrder( cfBusyCheckBox, cfBusyDst1LineEdit );
    setTabOrder( cfBusyDst1LineEdit, cfBusyDst2LineEdit );
    setTabOrder( cfBusyDst2LineEdit, cfBusyDst3LineEdit );
    setTabOrder( cfBusyDst3LineEdit, cfNoanswerCheckBox );
    setTabOrder( cfNoanswerCheckBox, cfNoanswerDst1LineEdit );
    setTabOrder( cfNoanswerDst1LineEdit, cfNoanswerDst2LineEdit );
    setTabOrder( cfNoanswerDst2LineEdit, cfNoanswerDst3LineEdit );
    setTabOrder( cfNoanswerDst3LineEdit, okPushButton );
    setTabOrder( okPushButton, cancelPushButton );

    // buddies
    userTextLabel->setBuddy( userComboBox );
    cfAlwaysDst3TextLabel->setBuddy( cfAlwaysDst3LineEdit );
    cfAlwaysDst2TextLabel->setBuddy( cfAlwaysDst2LineEdit );
    cfAlwaysDst1TextLabel->setBuddy( cfAlwaysDst1LineEdit );
    cfBusyDst3TextLabel->setBuddy( cfAlwaysDst3LineEdit );
    cfBusyDst2TextLabel->setBuddy( cfAlwaysDst2LineEdit );
    cfBusyDst1TextLabel->setBuddy( cfAlwaysDst1LineEdit );
    cfNoanswerDst3TextLabel->setBuddy( cfAlwaysDst3LineEdit );
    cfNoanswerDst2TextLabel->setBuddy( cfAlwaysDst2LineEdit );
    cfNoanswerDst1TextLabel->setBuddy( cfAlwaysDst1LineEdit );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
SrvRedirectForm::~SrvRedirectForm()
{
    destroy();
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void SrvRedirectForm::languageChange()
{
    setCaption( tr( "Twinkle - Call Redirection" ) );
    userTextLabel->setText( tr( "User:" ) );
    QWhatsThis::add( cfTabWidget, tr( "There are 3 redirect services:<p>\n"
"<b>Unconditional:</b> redirect all calls\n"
"</p>\n"
"<p>\n"
"<b>Busy:</b> redirect a call if both lines are busy\n"
"</p>\n"
"<p>\n"
"<b>No answer:</b> redirect a call when the no-answer timer expires\n"
"</p>" ) );
    cfAlwaysCheckBox->setText( tr( "&Redirect all calls" ) );
    cfAlwaysCheckBox->setAccel( QKeySequence( tr( "Alt+R" ) ) );
    QWhatsThis::add( cfAlwaysCheckBox, tr( "Activate the unconditional redirection service." ) );
    cfAlwaysGroupBox->setTitle( tr( "Redirect to" ) );
    QWhatsThis::add( cfAlwaysDst1LineEdit, tr( "You can specify up to 3 destinations to which you want to redirect the call. If the first destination does not answer the call, the second destination will be tried and so on." ) );
    QWhatsThis::add( cfAlwaysDst2LineEdit, tr( "You can specify up to 3 destinations to which you want to redirect the call. If the first destination does not answer the call, the second destination will be tried and so on." ) );
    cfAlwaysDst3TextLabel->setText( tr( "&3rd choice destination:" ) );
    QWhatsThis::add( cfAlwaysDst3LineEdit, tr( "You can specify up to 3 destinations to which you want to redirect the call. If the first destination does not answer the call, the second destination will be tried and so on." ) );
    cfAlwaysDst2TextLabel->setText( tr( "&2nd choice destination:" ) );
    cfAlwaysDst1TextLabel->setText( tr( "&1st choice destination:" ) );
    addrAlways1ToolButton->setText( QString::null );
    addrAlways1ToolButton->setAccel( QKeySequence( tr( "F10" ) ) );
    QToolTip::add( addrAlways1ToolButton, tr( "Address book" ) );
    addrAlways2ToolButton->setText( QString::null );
    addrAlways2ToolButton->setAccel( QKeySequence( tr( "F11" ) ) );
    QToolTip::add( addrAlways2ToolButton, tr( "Address book" ) );
    QWhatsThis::add( addrAlways2ToolButton, tr( "Select an address from the address book." ) );
    addrAlways3ToolButton->setText( QString::null );
    addrAlways3ToolButton->setAccel( QKeySequence( tr( "F12" ) ) );
    QToolTip::add( addrAlways3ToolButton, tr( "Address book" ) );
    QWhatsThis::add( addrAlways3ToolButton, tr( "Select an address from the address book." ) );
    cfTabWidget->changeTab( tab, tr( "&Unconditional" ) );
    cfBusyCheckBox->setText( tr( "&Redirect calls when I am busy" ) );
    cfBusyCheckBox->setAccel( QKeySequence( tr( "Alt+R" ) ) );
    QWhatsThis::add( cfBusyCheckBox, tr( "Activate the redirection when busy service." ) );
    cfBusyGroupBox->setTitle( tr( "Redirect to" ) );
    QWhatsThis::add( cfBusyDst2LineEdit, tr( "You can specify up to 3 destinations to which you want to redirect the call. If the first destination does not answer the call, the second destination will be tried and so on." ) );
    cfBusyDst3TextLabel->setText( tr( "&3rd choice destination:" ) );
    QWhatsThis::add( cfBusyDst3LineEdit, tr( "You can specify up to 3 destinations to which you want to redirect the call. If the first destination does not answer the call, the second destination will be tried and so on." ) );
    cfBusyDst2TextLabel->setText( tr( "&2nd choice destination:" ) );
    cfBusyDst1TextLabel->setText( tr( "&1st choice destination:" ) );
    QWhatsThis::add( cfBusyDst1LineEdit, tr( "You can specify up to 3 destinations to which you want to redirect the call. If the first destination does not answer the call, the second destination will be tried and so on." ) );
    addrBusy1ToolButton->setText( QString::null );
    QToolTip::add( addrBusy1ToolButton, tr( "Address book" ) );
    QWhatsThis::add( addrBusy1ToolButton, tr( "Select an address from the address book." ) );
    addrBusy2ToolButton->setText( QString::null );
    QToolTip::add( addrBusy2ToolButton, tr( "Address book" ) );
    QWhatsThis::add( addrBusy2ToolButton, tr( "Select an address from the address book." ) );
    addrBusy3ToolButton->setText( QString::null );
    QToolTip::add( addrBusy3ToolButton, tr( "Address book" ) );
    QWhatsThis::add( addrBusy3ToolButton, tr( "Select an address from the address book." ) );
    cfTabWidget->changeTab( tab_2, tr( "&Busy" ) );
    cfNoanswerCheckBox->setText( tr( "&Redirect calls when I do not answer" ) );
    cfNoanswerCheckBox->setAccel( QKeySequence( tr( "Alt+R" ) ) );
    QWhatsThis::add( cfNoanswerCheckBox, tr( "Activate the redirection on no answer service." ) );
    cfNoanswerGroupBox->setTitle( tr( "Redirect to" ) );
    QWhatsThis::add( cfNoanswerDst2LineEdit, tr( "You can specify up to 3 destinations to which you want to redirect the call. If the first destination does not answer the call, the second destination will be tried and so on." ) );
    cfNoanswerDst3TextLabel->setText( tr( "&3rd choice destination:" ) );
    cfNoanswerDst2TextLabel->setText( tr( "&2nd choice destination:" ) );
    cfNoanswerDst1TextLabel->setText( tr( "&1st choice destination:" ) );
    QWhatsThis::add( cfNoanswerDst1LineEdit, tr( "You can specify up to 3 destinations to which you want to redirect the call. If the first destination does not answer the call, the second destination will be tried and so on." ) );
    QWhatsThis::add( cfNoanswerDst3LineEdit, tr( "You can specify up to 3 destinations to which you want to redirect the call. If the first destination does not answer the call, the second destination will be tried and so on." ) );
    addrNoanswer1ToolButton->setText( QString::null );
    QToolTip::add( addrNoanswer1ToolButton, tr( "Address book" ) );
    QWhatsThis::add( addrNoanswer1ToolButton, tr( "Select an address from the address book." ) );
    addrNoanswer2ToolButton->setText( QString::null );
    QToolTip::add( addrNoanswer2ToolButton, tr( "Address book" ) );
    QWhatsThis::add( addrNoanswer2ToolButton, tr( "Select an address from the address book." ) );
    addrNoanswer3ToolButton->setText( QString::null );
    QToolTip::add( addrNoanswer3ToolButton, tr( "Address book" ) );
    QWhatsThis::add( addrNoanswer3ToolButton, tr( "Select an address from the address book." ) );
    cfTabWidget->changeTab( tab_3, tr( "&No answer" ) );
    okPushButton->setText( tr( "&OK" ) );
    okPushButton->setAccel( QKeySequence( tr( "Alt+O" ) ) );
    QWhatsThis::add( okPushButton, tr( "Accept and save all changes." ) );
    cancelPushButton->setText( tr( "&Cancel" ) );
    cancelPushButton->setAccel( QKeySequence( tr( "Alt+C" ) ) );
    QWhatsThis::add( cancelPushButton, tr( "Undo your changes and close the window." ) );
}

