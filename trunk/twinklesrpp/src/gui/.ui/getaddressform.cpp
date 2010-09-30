/****************************************************************************
** Form implementation generated from reading ui file 'getaddressform.ui'
**
** Created: Wed Sep 29 18:53:53 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "getaddressform.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qtabwidget.h>
#include <qwidget.h>
#include <qheader.h>
#include <qlistview.h>
#include <qcheckbox.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

#include "qlistview.h"
#include "qstring.h"
#include "qmessagebox.h"
#include "protocol.h"
#include "sys_settings.h"
#include "util.h"
#include "qregexp.h"
#include "sockets/url.h"
#include "gui.h"
#include "address_book.h"
#include "addresslistviewitem.h"
#include "addresscardform.h"
#include "../getaddressform.ui.h"
/*
 *  Constructs a GetAddressForm as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
GetAddressForm::GetAddressForm( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "GetAddressForm" );
    GetAddressFormLayout = new QVBoxLayout( this, 11, 6, "GetAddressFormLayout"); 

    addressTabWidget = new QTabWidget( this, "addressTabWidget" );
    addressTabWidget->setTabShape( QTabWidget::Rounded );

    tabKABC = new QWidget( addressTabWidget, "tabKABC" );
    tabKABCLayout = new QVBoxLayout( tabKABC, 11, 6, "tabKABCLayout"); 

    addressListView = new QListView( tabKABC, "addressListView" );
    addressListView->addColumn( tr( "Name" ) );
    addressListView->addColumn( tr( "Type" ) );
    addressListView->addColumn( tr( "Phone" ) );
    addressListView->setResizePolicy( QScrollView::Manual );
    addressListView->setAllColumnsShowFocus( TRUE );
    addressListView->setShowSortIndicator( TRUE );
    addressListView->setItemMargin( 1 );
    addressListView->setResizeMode( QListView::LastColumn );
    tabKABCLayout->addWidget( addressListView );

    layout17 = new QHBoxLayout( 0, 0, 6, "layout17"); 

    sipOnlyCheckBox = new QCheckBox( tabKABC, "sipOnlyCheckBox" );
    layout17->addWidget( sipOnlyCheckBox );
    spacer16 = new QSpacerItem( 201, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout17->addItem( spacer16 );
    tabKABCLayout->addLayout( layout17 );

    layout69 = new QHBoxLayout( 0, 0, 6, "layout69"); 

    reloadPushButton = new QPushButton( tabKABC, "reloadPushButton" );
    layout69->addWidget( reloadPushButton );
    spacer59 = new QSpacerItem( 491, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout69->addItem( spacer59 );
    tabKABCLayout->addLayout( layout69 );
    addressTabWidget->insertTab( tabKABC, QString::fromLatin1("") );

    tabLocal = new QWidget( addressTabWidget, "tabLocal" );
    tabLocalLayout = new QVBoxLayout( tabLocal, 11, 6, "tabLocalLayout"); 

    localListView = new QListView( tabLocal, "localListView" );
    localListView->addColumn( tr( "Name" ) );
    localListView->addColumn( tr( "Phone" ) );
    localListView->addColumn( tr( "Remark" ) );
    localListView->setAllColumnsShowFocus( TRUE );
    localListView->setShowSortIndicator( TRUE );
    localListView->setResizeMode( QListView::LastColumn );
    tabLocalLayout->addWidget( localListView );

    layout67 = new QHBoxLayout( 0, 0, 6, "layout67"); 

    addPushButton = new QPushButton( tabLocal, "addPushButton" );
    layout67->addWidget( addPushButton );

    deletePushButton = new QPushButton( tabLocal, "deletePushButton" );
    layout67->addWidget( deletePushButton );

    editPushButton = new QPushButton( tabLocal, "editPushButton" );
    layout67->addWidget( editPushButton );
    spacer97 = new QSpacerItem( 161, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout67->addItem( spacer97 );
    tabLocalLayout->addLayout( layout67 );
    addressTabWidget->insertTab( tabLocal, QString::fromLatin1("") );
    GetAddressFormLayout->addWidget( addressTabWidget );

    layout68 = new QHBoxLayout( 0, 0, 6, "layout68"); 
    spacer5 = new QSpacerItem( 378, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout68->addItem( spacer5 );

    okPushButton = new QPushButton( this, "okPushButton" );
    okPushButton->setDefault( TRUE );
    layout68->addWidget( okPushButton );

    cancelPushButton = new QPushButton( this, "cancelPushButton" );
    layout68->addWidget( cancelPushButton );
    GetAddressFormLayout->addLayout( layout68 );
    languageChange();
    resize( QSize(655, 474).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( okPushButton, SIGNAL( clicked() ), this, SLOT( selectAddress() ) );
    connect( cancelPushButton, SIGNAL( clicked() ), this, SLOT( reject() ) );
    connect( addressListView, SIGNAL( doubleClicked(QListViewItem*) ), this, SLOT( selectKABCAddress() ) );
    connect( sipOnlyCheckBox, SIGNAL( toggled(bool) ), this, SLOT( toggleSipOnly(bool) ) );
    connect( reloadPushButton, SIGNAL( clicked() ), this, SLOT( reload() ) );
    connect( localListView, SIGNAL( doubleClicked(QListViewItem*) ), this, SLOT( selectLocalAddress() ) );
    connect( addPushButton, SIGNAL( clicked() ), this, SLOT( addLocalAddress() ) );
    connect( deletePushButton, SIGNAL( clicked() ), this, SLOT( deleteLocalAddress() ) );
    connect( editPushButton, SIGNAL( clicked() ), this, SLOT( editLocalAddress() ) );

    // tab order
    setTabOrder( addressListView, sipOnlyCheckBox );
    setTabOrder( sipOnlyCheckBox, reloadPushButton );
    setTabOrder( reloadPushButton, addressTabWidget );
    setTabOrder( addressTabWidget, localListView );
    setTabOrder( localListView, addPushButton );
    setTabOrder( addPushButton, deletePushButton );
    setTabOrder( deletePushButton, editPushButton );
    setTabOrder( editPushButton, okPushButton );
    setTabOrder( okPushButton, cancelPushButton );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
GetAddressForm::~GetAddressForm()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void GetAddressForm::languageChange()
{
    setCaption( tr( "Twinkle - Select address" ) );
    addressListView->header()->setLabel( 0, tr( "Name" ) );
    addressListView->header()->setLabel( 1, tr( "Type" ) );
    addressListView->header()->setLabel( 2, tr( "Phone" ) );
    QWhatsThis::add( addressListView, tr( "This list of addresses is taken from <b>KAddressBook</b>. Contacts for which you did not provide a phone number are not shown here. To add, delete or modify address information you have to use KAddressBook." ) );
    sipOnlyCheckBox->setText( tr( "&Show only SIP addresses" ) );
    sipOnlyCheckBox->setAccel( QKeySequence( tr( "Alt+S" ) ) );
    QWhatsThis::add( sipOnlyCheckBox, tr( "Check this option when you only want to see contacts with SIP addresses, i.e. starting with \"<b>sip:</b>\"." ) );
    reloadPushButton->setText( tr( "&Reload" ) );
    reloadPushButton->setAccel( QKeySequence( tr( "Alt+R" ) ) );
    QWhatsThis::add( reloadPushButton, tr( "Reload the list of addresses from KAddressbook." ) );
    addressTabWidget->changeTab( tabKABC, tr( "&KAddressBook" ) );
    localListView->header()->setLabel( 0, tr( "Name" ) );
    localListView->header()->setLabel( 1, tr( "Phone" ) );
    localListView->header()->setLabel( 2, tr( "Remark" ) );
    QWhatsThis::add( localListView, tr( "Contacts in the local address book of Twinkle." ) );
    addPushButton->setText( tr( "&Add" ) );
    addPushButton->setAccel( QKeySequence( tr( "Alt+A" ) ) );
    QWhatsThis::add( addPushButton, tr( "Add a new contact to the local address book." ) );
    deletePushButton->setText( tr( "&Delete" ) );
    deletePushButton->setAccel( QKeySequence( tr( "Alt+D" ) ) );
    QWhatsThis::add( deletePushButton, tr( "Delete a contact from the local address book." ) );
    editPushButton->setText( tr( "&Edit" ) );
    editPushButton->setAccel( QKeySequence( tr( "Alt+E" ) ) );
    QWhatsThis::add( editPushButton, tr( "Edit a contact from the local address book." ) );
    addressTabWidget->changeTab( tabLocal, tr( "&Local address book" ) );
    okPushButton->setText( tr( "&OK" ) );
    okPushButton->setAccel( QKeySequence( tr( "Alt+O" ) ) );
    cancelPushButton->setText( tr( "&Cancel" ) );
    cancelPushButton->setAccel( QKeySequence( tr( "Alt+C" ) ) );
}

