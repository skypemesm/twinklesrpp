/****************************************************************************
** Form implementation generated from reading ui file 'userprofileform.ui'
**
** Created: Wed Sep 29 18:52:59 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "userprofileform.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qlabel.h>
#include <qcombobox.h>
#include <qlistbox.h>
#include <qwidgetstack.h>
#include <qwidget.h>
#include <qgroupbox.h>
#include <qlineedit.h>
#include <qspinbox.h>
#include <qcheckbox.h>
#include <qtabwidget.h>
#include <qbuttongroup.h>
#include <qradiobutton.h>
#include <qheader.h>
#include <qlistview.h>
#include <qtoolbutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

#include "qlistbox.h"
#include "qlineedit.h"
#include "qlabel.h"
#include "qcombobox.h"
#include "qspinbox.h"
#include "qregexp.h"
#include "sdp/sdp.h"
#include "qvalidator.h"
#include "protocol.h"
#include "qmessagebox.h"
#include "gui.h"
#include "qfiledialog.h"
#include "qfileinfo.h"
#include "qstringlist.h"
#include "twinkle_config.h"
#include "qlistview.h"
#include "numberconversionform.h"
#include "util.h"
#include "../userprofileform.ui.h"
/*
 *  Constructs a UserProfileForm as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
UserProfileForm::UserProfileForm( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "UserProfileForm" );
    UserProfileFormLayout = new QGridLayout( this, 1, 1, 11, 6, "UserProfileFormLayout"); 

    layout142 = new QHBoxLayout( 0, 0, 6, "layout142"); 

    profileTextLabel = new QLabel( this, "profileTextLabel" );
    layout142->addWidget( profileTextLabel );

    profileComboBox = new QComboBox( FALSE, this, "profileComboBox" );
    profileComboBox->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)7, (QSizePolicy::SizeType)0, 0, 0, profileComboBox->sizePolicy().hasHeightForWidth() ) );
    layout142->addWidget( profileComboBox );

    UserProfileFormLayout->addMultiCellLayout( layout142, 0, 0, 0, 1 );

    categoryListBox = new QListBox( this, "categoryListBox" );
    categoryListBox->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)7, 0, 0, categoryListBox->sizePolicy().hasHeightForWidth() ) );
    categoryListBox->setMinimumSize( QSize( 150, 0 ) );
    categoryListBox->setMidLineWidth( 0 );

    UserProfileFormLayout->addWidget( categoryListBox, 1, 0 );

    layout12 = new QHBoxLayout( 0, 0, 6, "layout12"); 
    spacer8 = new QSpacerItem( 441, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout12->addItem( spacer8 );

    okPushButton = new QPushButton( this, "okPushButton" );
    okPushButton->setDefault( TRUE );
    layout12->addWidget( okPushButton );

    cancelPushButton = new QPushButton( this, "cancelPushButton" );
    layout12->addWidget( cancelPushButton );

    UserProfileFormLayout->addLayout( layout12, 2, 0 );

    settingsWidgetStack = new QWidgetStack( this, "settingsWidgetStack" );
    settingsWidgetStack->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)7, (QSizePolicy::SizeType)5, 0, 0, settingsWidgetStack->sizePolicy().hasHeightForWidth() ) );
    settingsWidgetStack->setFrameShape( QWidgetStack::Box );

    pageUser = new QWidget( settingsWidgetStack, "pageUser" );
    pageUserLayout = new QVBoxLayout( pageUser, 11, 6, "pageUserLayout"); 

    userTitleTextLabel = new QLabel( pageUser, "userTitleTextLabel" );
    userTitleTextLabel->setPaletteBackgroundColor( QColor( 150, 150, 150 ) );
    QFont userTitleTextLabel_font(  userTitleTextLabel->font() );
    userTitleTextLabel_font.setPointSize( 21 );
    userTitleTextLabel->setFont( userTitleTextLabel_font ); 
    userTitleTextLabel->setFrameShape( QLabel::Box );
    userTitleTextLabel->setIndent( 10 );
    pageUserLayout->addWidget( userTitleTextLabel );

    accountGroupBox = new QGroupBox( pageUser, "accountGroupBox" );
    accountGroupBox->setColumnLayout(0, Qt::Vertical );
    accountGroupBox->layout()->setSpacing( 6 );
    accountGroupBox->layout()->setMargin( 11 );
    accountGroupBoxLayout = new QGridLayout( accountGroupBox->layout() );
    accountGroupBoxLayout->setAlignment( Qt::AlignTop );

    usernameTextLabel = new QLabel( accountGroupBox, "usernameTextLabel" );

    accountGroupBoxLayout->addWidget( usernameTextLabel, 1, 0 );

    domainTextLabel = new QLabel( accountGroupBox, "domainTextLabel" );

    accountGroupBoxLayout->addWidget( domainTextLabel, 2, 0 );

    organizationTextLabel = new QLabel( accountGroupBox, "organizationTextLabel" );

    accountGroupBoxLayout->addWidget( organizationTextLabel, 3, 0 );

    usernameLineEdit = new QLineEdit( accountGroupBox, "usernameLineEdit" );

    accountGroupBoxLayout->addWidget( usernameLineEdit, 1, 1 );

    domainLineEdit = new QLineEdit( accountGroupBox, "domainLineEdit" );

    accountGroupBoxLayout->addWidget( domainLineEdit, 2, 1 );

    organizationLineEdit = new QLineEdit( accountGroupBox, "organizationLineEdit" );

    accountGroupBoxLayout->addWidget( organizationLineEdit, 3, 1 );

    displayLineEdit = new QLineEdit( accountGroupBox, "displayLineEdit" );

    accountGroupBoxLayout->addWidget( displayLineEdit, 0, 1 );

    dislpayTextLabel = new QLabel( accountGroupBox, "dislpayTextLabel" );

    accountGroupBoxLayout->addWidget( dislpayTextLabel, 0, 0 );
    pageUserLayout->addWidget( accountGroupBox );

    authenticationGroupBox = new QGroupBox( pageUser, "authenticationGroupBox" );
    authenticationGroupBox->setColumnLayout(0, Qt::Vertical );
    authenticationGroupBox->layout()->setSpacing( 6 );
    authenticationGroupBox->layout()->setMargin( 11 );
    authenticationGroupBoxLayout = new QGridLayout( authenticationGroupBox->layout() );
    authenticationGroupBoxLayout->setAlignment( Qt::AlignTop );

    authRealmTextLabel = new QLabel( authenticationGroupBox, "authRealmTextLabel" );

    authenticationGroupBoxLayout->addWidget( authRealmTextLabel, 0, 0 );

    authNameTextLabel = new QLabel( authenticationGroupBox, "authNameTextLabel" );

    authenticationGroupBoxLayout->addWidget( authNameTextLabel, 1, 0 );

    authRealmLineEdit = new QLineEdit( authenticationGroupBox, "authRealmLineEdit" );

    authenticationGroupBoxLayout->addWidget( authRealmLineEdit, 0, 1 );

    authNameLineEdit = new QLineEdit( authenticationGroupBox, "authNameLineEdit" );

    authenticationGroupBoxLayout->addWidget( authNameLineEdit, 1, 1 );

    authAkaAmfTextLabel = new QLabel( authenticationGroupBox, "authAkaAmfTextLabel" );

    authenticationGroupBoxLayout->addWidget( authAkaAmfTextLabel, 4, 0 );

    authAkaOpTextLabel = new QLabel( authenticationGroupBox, "authAkaOpTextLabel" );

    authenticationGroupBoxLayout->addWidget( authAkaOpTextLabel, 3, 0 );

    authPasswordLineEdit = new QLineEdit( authenticationGroupBox, "authPasswordLineEdit" );
    authPasswordLineEdit->setEchoMode( QLineEdit::Password );

    authenticationGroupBoxLayout->addWidget( authPasswordLineEdit, 2, 1 );

    authPasswordTextLabel = new QLabel( authenticationGroupBox, "authPasswordTextLabel" );

    authenticationGroupBoxLayout->addWidget( authPasswordTextLabel, 2, 0 );

    authAkaAmfLineEdit = new QLineEdit( authenticationGroupBox, "authAkaAmfLineEdit" );

    authenticationGroupBoxLayout->addWidget( authAkaAmfLineEdit, 4, 1 );

    authAkaOpLineEdit = new QLineEdit( authenticationGroupBox, "authAkaOpLineEdit" );

    authenticationGroupBoxLayout->addWidget( authAkaOpLineEdit, 3, 1 );
    pageUserLayout->addWidget( authenticationGroupBox );
    spacer9 = new QSpacerItem( 20, 110, QSizePolicy::Minimum, QSizePolicy::Expanding );
    pageUserLayout->addItem( spacer9 );
    settingsWidgetStack->addWidget( pageUser, 0 );

    pageSipServer = new QWidget( settingsWidgetStack, "pageSipServer" );
    pageSipServerLayout = new QVBoxLayout( pageSipServer, 11, 6, "pageSipServerLayout"); 

    sipServerTitleTextLabel = new QLabel( pageSipServer, "sipServerTitleTextLabel" );
    sipServerTitleTextLabel->setPaletteBackgroundColor( QColor( 150, 150, 150 ) );
    QFont sipServerTitleTextLabel_font(  sipServerTitleTextLabel->font() );
    sipServerTitleTextLabel_font.setPointSize( 21 );
    sipServerTitleTextLabel->setFont( sipServerTitleTextLabel_font ); 
    sipServerTitleTextLabel->setFrameShape( QLabel::Box );
    sipServerTitleTextLabel->setIndent( 10 );
    pageSipServerLayout->addWidget( sipServerTitleTextLabel );

    registrarGroupBox = new QGroupBox( pageSipServer, "registrarGroupBox" );
    registrarGroupBox->setColumnLayout(0, Qt::Vertical );
    registrarGroupBox->layout()->setSpacing( 6 );
    registrarGroupBox->layout()->setMargin( 11 );
    registrarGroupBoxLayout = new QGridLayout( registrarGroupBox->layout() );
    registrarGroupBoxLayout->setAlignment( Qt::AlignTop );

    registrarTextLabel = new QLabel( registrarGroupBox, "registrarTextLabel" );

    registrarGroupBoxLayout->addWidget( registrarTextLabel, 0, 0 );

    registrarLineEdit = new QLineEdit( registrarGroupBox, "registrarLineEdit" );

    registrarGroupBoxLayout->addWidget( registrarLineEdit, 0, 1 );

    expiryTextLabel = new QLabel( registrarGroupBox, "expiryTextLabel" );

    registrarGroupBoxLayout->addWidget( expiryTextLabel, 1, 0 );

    layout22 = new QHBoxLayout( 0, 0, 6, "layout22"); 

    expirySpinBox = new QSpinBox( registrarGroupBox, "expirySpinBox" );
    expirySpinBox->setMinimumSize( QSize( 90, 0 ) );
    expirySpinBox->setMaxValue( 999999 );
    expirySpinBox->setLineStep( 100 );
    layout22->addWidget( expirySpinBox );

    secondsTextLabel = new QLabel( registrarGroupBox, "secondsTextLabel" );
    layout22->addWidget( secondsTextLabel );
    spacer1 = new QSpacerItem( 260, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout22->addItem( spacer1 );

    registrarGroupBoxLayout->addLayout( layout22, 1, 1 );

    regAtStartupCheckBox = new QCheckBox( registrarGroupBox, "regAtStartupCheckBox" );

    registrarGroupBoxLayout->addMultiCellWidget( regAtStartupCheckBox, 2, 2, 0, 1 );

    layout37 = new QHBoxLayout( 0, 0, 6, "layout37"); 

    regAddQvalueCheckBox = new QCheckBox( registrarGroupBox, "regAddQvalueCheckBox" );
    layout37->addWidget( regAddQvalueCheckBox );

    regQvalueLineEdit = new QLineEdit( registrarGroupBox, "regQvalueLineEdit" );
    layout37->addWidget( regQvalueLineEdit );
    spacer48 = new QSpacerItem( 210, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout37->addItem( spacer48 );

    registrarGroupBoxLayout->addMultiCellLayout( layout37, 3, 3, 0, 1 );
    pageSipServerLayout->addWidget( registrarGroupBox );

    outboundProxyGroupBox = new QGroupBox( pageSipServer, "outboundProxyGroupBox" );
    outboundProxyGroupBox->setColumnLayout(0, Qt::Vertical );
    outboundProxyGroupBox->layout()->setSpacing( 6 );
    outboundProxyGroupBox->layout()->setMargin( 11 );
    outboundProxyGroupBoxLayout = new QGridLayout( outboundProxyGroupBox->layout() );
    outboundProxyGroupBoxLayout->setAlignment( Qt::AlignTop );

    useProxyCheckBox = new QCheckBox( outboundProxyGroupBox, "useProxyCheckBox" );

    outboundProxyGroupBoxLayout->addMultiCellWidget( useProxyCheckBox, 0, 0, 0, 1 );

    proxyTextLabel = new QLabel( outboundProxyGroupBox, "proxyTextLabel" );
    proxyTextLabel->setEnabled( TRUE );

    outboundProxyGroupBoxLayout->addWidget( proxyTextLabel, 1, 0 );

    proxyNonResolvableCheckBox = new QCheckBox( outboundProxyGroupBox, "proxyNonResolvableCheckBox" );

    outboundProxyGroupBoxLayout->addMultiCellWidget( proxyNonResolvableCheckBox, 3, 3, 0, 1 );

    proxyLineEdit = new QLineEdit( outboundProxyGroupBox, "proxyLineEdit" );
    proxyLineEdit->setEnabled( TRUE );

    outboundProxyGroupBoxLayout->addWidget( proxyLineEdit, 1, 1 );

    allRequestsCheckBox = new QCheckBox( outboundProxyGroupBox, "allRequestsCheckBox" );

    outboundProxyGroupBoxLayout->addMultiCellWidget( allRequestsCheckBox, 2, 2, 0, 1 );
    pageSipServerLayout->addWidget( outboundProxyGroupBox );
    spacer10 = new QSpacerItem( 20, 100, QSizePolicy::Minimum, QSizePolicy::Expanding );
    pageSipServerLayout->addItem( spacer10 );
    settingsWidgetStack->addWidget( pageSipServer, 1 );

    pageRtpAudio = new QWidget( settingsWidgetStack, "pageRtpAudio" );
    pageRtpAudioLayout = new QVBoxLayout( pageRtpAudio, 11, 6, "pageRtpAudioLayout"); 

    rtpAudioTitleTextLabel = new QLabel( pageRtpAudio, "rtpAudioTitleTextLabel" );
    rtpAudioTitleTextLabel->setPaletteBackgroundColor( QColor( 150, 150, 150 ) );
    QFont rtpAudioTitleTextLabel_font(  rtpAudioTitleTextLabel->font() );
    rtpAudioTitleTextLabel_font.setPointSize( 21 );
    rtpAudioTitleTextLabel->setFont( rtpAudioTitleTextLabel_font ); 
    rtpAudioTitleTextLabel->setFrameShape( QLabel::Box );
    rtpAudioTitleTextLabel->setIndent( 10 );
    pageRtpAudioLayout->addWidget( rtpAudioTitleTextLabel );

    rtpAudioTabWidget = new QTabWidget( pageRtpAudio, "rtpAudioTabWidget" );

    tabCodecs = new QWidget( rtpAudioTabWidget, "tabCodecs" );
    tabCodecsLayout = new QGridLayout( tabCodecs, 1, 1, 11, 6, "tabCodecsLayout"); 

    layout18 = new QHBoxLayout( 0, 0, 6, "layout18"); 

    ptimeTextLabel = new QLabel( tabCodecs, "ptimeTextLabel" );
    layout18->addWidget( ptimeTextLabel );

    ptimeSpinBox = new QSpinBox( tabCodecs, "ptimeSpinBox" );
    ptimeSpinBox->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)0, 0, 0, ptimeSpinBox->sizePolicy().hasHeightForWidth() ) );
    ptimeSpinBox->setMinimumSize( QSize( 46, 0 ) );
    ptimeSpinBox->setMaximumSize( QSize( 32767, 32767 ) );
    ptimeSpinBox->setMaxValue( 50 );
    ptimeSpinBox->setMinValue( 10 );
    ptimeSpinBox->setLineStep( 10 );
    layout18->addWidget( ptimeSpinBox );

    payloadMsTextLabel = new QLabel( tabCodecs, "payloadMsTextLabel" );
    layout18->addWidget( payloadMsTextLabel );
    spacer24 = new QSpacerItem( 121, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout18->addItem( spacer24 );

    tabCodecsLayout->addLayout( layout18, 1, 0 );

    inFarEndCodecPrefCheckBox = new QCheckBox( tabCodecs, "inFarEndCodecPrefCheckBox" );

    tabCodecsLayout->addWidget( inFarEndCodecPrefCheckBox, 2, 0 );

    outFarEndCodecPrefCheckBox = new QCheckBox( tabCodecs, "outFarEndCodecPrefCheckBox" );

    tabCodecsLayout->addWidget( outFarEndCodecPrefCheckBox, 3, 0 );
    spacer38 = new QSpacerItem( 20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding );
    tabCodecsLayout->addItem( spacer38, 4, 0 );

    codecsGroupBox = new QGroupBox( tabCodecs, "codecsGroupBox" );
    codecsGroupBox->setColumnLayout(0, Qt::Vertical );
    codecsGroupBox->layout()->setSpacing( 6 );
    codecsGroupBox->layout()->setMargin( 11 );
    codecsGroupBoxLayout = new QHBoxLayout( codecsGroupBox->layout() );
    codecsGroupBoxLayout->setAlignment( Qt::AlignTop );

    layout19 = new QVBoxLayout( 0, 0, 6, "layout19"); 

    availCodecTextLabel = new QLabel( codecsGroupBox, "availCodecTextLabel" );
    layout19->addWidget( availCodecTextLabel );

    availCodecListBox = new QListBox( codecsGroupBox, "availCodecListBox" );
    availCodecListBox->setResizePolicy( QListBox::Manual );
    availCodecListBox->setHScrollBarMode( QListBox::AlwaysOff );
    layout19->addWidget( availCodecListBox );
    codecsGroupBoxLayout->addLayout( layout19 );

    layout14 = new QVBoxLayout( 0, 0, 6, "layout14"); 
    spacer17_2 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    layout14->addItem( spacer17_2 );

    addCodecPushButton = new QPushButton( codecsGroupBox, "addCodecPushButton" );
    addCodecPushButton->setPixmap( QPixmap::fromMimeSource( "1rightarrow.png" ) );
    layout14->addWidget( addCodecPushButton );

    rmvCodecPushButton = new QPushButton( codecsGroupBox, "rmvCodecPushButton" );
    rmvCodecPushButton->setPixmap( QPixmap::fromMimeSource( "1leftarrow.png" ) );
    layout14->addWidget( rmvCodecPushButton );
    spacer18 = new QSpacerItem( 20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding );
    layout14->addItem( spacer18 );
    codecsGroupBoxLayout->addLayout( layout14 );

    layout20 = new QVBoxLayout( 0, 0, 6, "layout20"); 

    useCodecTextLabel = new QLabel( codecsGroupBox, "useCodecTextLabel" );
    layout20->addWidget( useCodecTextLabel );

    activeCodecListBox = new QListBox( codecsGroupBox, "activeCodecListBox" );
    layout20->addWidget( activeCodecListBox );
    codecsGroupBoxLayout->addLayout( layout20 );

    layout15 = new QVBoxLayout( 0, 0, 6, "layout15"); 
    spacer19_2 = new QSpacerItem( 20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding );
    layout15->addItem( spacer19_2 );

    upCodecPushButton = new QPushButton( codecsGroupBox, "upCodecPushButton" );
    upCodecPushButton->setPixmap( QPixmap::fromMimeSource( "1uparrow.png" ) );
    layout15->addWidget( upCodecPushButton );

    downCodecPushButton = new QPushButton( codecsGroupBox, "downCodecPushButton" );
    downCodecPushButton->setPixmap( QPixmap::fromMimeSource( "1downarrow.png" ) );
    layout15->addWidget( downCodecPushButton );
    spacer20_2 = new QSpacerItem( 20, 31, QSizePolicy::Minimum, QSizePolicy::Expanding );
    layout15->addItem( spacer20_2 );
    codecsGroupBoxLayout->addLayout( layout15 );

    tabCodecsLayout->addWidget( codecsGroupBox, 0, 0 );
    rtpAudioTabWidget->insertTab( tabCodecs, QString::fromLatin1("") );

    tabPreprocessing = new QWidget( rtpAudioTabWidget, "tabPreprocessing" );
    tabPreprocessingLayout = new QVBoxLayout( tabPreprocessing, 11, 6, "tabPreprocessingLayout"); 

    preprocessingGroupBox = new QGroupBox( tabPreprocessing, "preprocessingGroupBox" );
    preprocessingGroupBox->setColumnLayout(0, Qt::Vertical );
    preprocessingGroupBox->layout()->setSpacing( 6 );
    preprocessingGroupBox->layout()->setMargin( 11 );
    preprocessingGroupBoxLayout = new QHBoxLayout( preprocessingGroupBox->layout() );
    preprocessingGroupBoxLayout->setAlignment( Qt::AlignTop );

    layout23 = new QGridLayout( 0, 1, 1, 0, 6, "layout23"); 

    spxDspAgcCheckBox = new QCheckBox( preprocessingGroupBox, "spxDspAgcCheckBox" );

    layout23->addWidget( spxDspAgcCheckBox, 0, 0 );

    spxDspAgcLevelTextLabel = new QLabel( preprocessingGroupBox, "spxDspAgcLevelTextLabel" );
    spxDspAgcLevelTextLabel->setEnabled( TRUE );

    layout23->addWidget( spxDspAgcLevelTextLabel, 0, 1 );

    spxDspAgcLevelSpinBox = new QSpinBox( preprocessingGroupBox, "spxDspAgcLevelSpinBox" );
    spxDspAgcLevelSpinBox->setEnabled( TRUE );
    spxDspAgcLevelSpinBox->setMaxValue( 100 );
    spxDspAgcLevelSpinBox->setMinValue( 1 );

    layout23->addWidget( spxDspAgcLevelSpinBox, 0, 2 );

    spxDspVadCheckBox = new QCheckBox( preprocessingGroupBox, "spxDspVadCheckBox" );

    layout23->addWidget( spxDspVadCheckBox, 1, 0 );

    spxDspNrdCheckBox = new QCheckBox( preprocessingGroupBox, "spxDspNrdCheckBox" );

    layout23->addWidget( spxDspNrdCheckBox, 2, 0 );

    spxDspAecCheckBox = new QCheckBox( preprocessingGroupBox, "spxDspAecCheckBox" );

    layout23->addWidget( spxDspAecCheckBox, 3, 0 );
    preprocessingGroupBoxLayout->addLayout( layout23 );
    spacer24_2 = new QSpacerItem( 31, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    preprocessingGroupBoxLayout->addItem( spacer24_2 );
    tabPreprocessingLayout->addWidget( preprocessingGroupBox );
    spacer25 = new QSpacerItem( 20, 121, QSizePolicy::Minimum, QSizePolicy::Expanding );
    tabPreprocessingLayout->addItem( spacer25 );
    rtpAudioTabWidget->insertTab( tabPreprocessing, QString::fromLatin1("") );

    tabIlbc = new QWidget( rtpAudioTabWidget, "tabIlbc" );
    tabIlbcLayout = new QVBoxLayout( tabIlbc, 11, 6, "tabIlbcLayout"); 

    ilbcGroupBox = new QGroupBox( tabIlbc, "ilbcGroupBox" );
    ilbcGroupBox->setColumnLayout(0, Qt::Vertical );
    ilbcGroupBox->layout()->setSpacing( 6 );
    ilbcGroupBox->layout()->setMargin( 11 );
    ilbcGroupBoxLayout = new QHBoxLayout( ilbcGroupBox->layout() );
    ilbcGroupBoxLayout->setAlignment( Qt::AlignTop );

    layout16 = new QVBoxLayout( 0, 0, 6, "layout16"); 

    ilbcPayloadTextLabel = new QLabel( ilbcGroupBox, "ilbcPayloadTextLabel" );
    layout16->addWidget( ilbcPayloadTextLabel );

    ilbcPayloadSizeTextLabel = new QLabel( ilbcGroupBox, "ilbcPayloadSizeTextLabel" );
    layout16->addWidget( ilbcPayloadSizeTextLabel );
    ilbcGroupBoxLayout->addLayout( layout16 );

    layout17_2 = new QVBoxLayout( 0, 0, 6, "layout17_2"); 

    ilbcPayloadSpinBox = new QSpinBox( ilbcGroupBox, "ilbcPayloadSpinBox" );
    ilbcPayloadSpinBox->setMaxValue( 127 );
    ilbcPayloadSpinBox->setMinValue( 96 );
    layout17_2->addWidget( ilbcPayloadSpinBox );

    ilbcPayloadSizeComboBox = new QComboBox( FALSE, ilbcGroupBox, "ilbcPayloadSizeComboBox" );
    layout17_2->addWidget( ilbcPayloadSizeComboBox );
    ilbcGroupBoxLayout->addLayout( layout17_2 );
    spacer26 = new QSpacerItem( 71, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    ilbcGroupBoxLayout->addItem( spacer26 );
    tabIlbcLayout->addWidget( ilbcGroupBox );
    spacer29_2 = new QSpacerItem( 20, 81, QSizePolicy::Minimum, QSizePolicy::Expanding );
    tabIlbcLayout->addItem( spacer29_2 );
    rtpAudioTabWidget->insertTab( tabIlbc, QString::fromLatin1("") );

    tabSpeex = new QWidget( rtpAudioTabWidget, "tabSpeex" );
    tabSpeexLayout = new QVBoxLayout( tabSpeex, 11, 6, "tabSpeexLayout"); 

    speexGroupBox = new QGroupBox( tabSpeex, "speexGroupBox" );
    speexGroupBox->setColumnLayout(0, Qt::Vertical );
    speexGroupBox->layout()->setSpacing( 6 );
    speexGroupBox->layout()->setMargin( 11 );
    speexGroupBoxLayout = new QHBoxLayout( speexGroupBox->layout() );
    speexGroupBoxLayout->setAlignment( Qt::AlignTop );

    layout17_3 = new QGridLayout( 0, 1, 1, 0, 6, "layout17_3"); 

    spxPenhCheckBox = new QCheckBox( speexGroupBox, "spxPenhCheckBox" );

    layout17_3->addWidget( spxPenhCheckBox, 2, 0 );

    spxUwbPayloadTextLabel = new QLabel( speexGroupBox, "spxUwbPayloadTextLabel" );

    layout17_3->addWidget( spxUwbPayloadTextLabel, 4, 1 );

    spxWbPayloadTextLabel = new QLabel( speexGroupBox, "spxWbPayloadTextLabel" );

    layout17_3->addWidget( spxWbPayloadTextLabel, 3, 1 );

    spxVbrCheckBox = new QCheckBox( speexGroupBox, "spxVbrCheckBox" );

    layout17_3->addWidget( spxVbrCheckBox, 0, 0 );

    spxUwbPayloadSpinBox = new QSpinBox( speexGroupBox, "spxUwbPayloadSpinBox" );
    spxUwbPayloadSpinBox->setMaxValue( 127 );
    spxUwbPayloadSpinBox->setMinValue( 96 );

    layout17_3->addWidget( spxUwbPayloadSpinBox, 4, 2 );

    spxDtxCheckBox = new QCheckBox( speexGroupBox, "spxDtxCheckBox" );

    layout17_3->addWidget( spxDtxCheckBox, 1, 0 );

    spxWbPayloadSpinBox = new QSpinBox( speexGroupBox, "spxWbPayloadSpinBox" );
    spxWbPayloadSpinBox->setMaxValue( 127 );
    spxWbPayloadSpinBox->setMinValue( 96 );

    layout17_3->addWidget( spxWbPayloadSpinBox, 3, 2 );

    spxNbPayloadSpinBox = new QSpinBox( speexGroupBox, "spxNbPayloadSpinBox" );
    spxNbPayloadSpinBox->setMaxValue( 127 );
    spxNbPayloadSpinBox->setMinValue( 96 );

    layout17_3->addWidget( spxNbPayloadSpinBox, 2, 2 );

    spxQualityTextLabel = new QLabel( speexGroupBox, "spxQualityTextLabel" );

    layout17_3->addWidget( spxQualityTextLabel, 0, 1 );

    spxQualitySpinBox = new QSpinBox( speexGroupBox, "spxQualitySpinBox" );
    spxQualitySpinBox->setMaxValue( 10 );
    spxQualitySpinBox->setMinValue( 0 );

    layout17_3->addWidget( spxQualitySpinBox, 0, 2 );

    spxComplexityTextLabel = new QLabel( speexGroupBox, "spxComplexityTextLabel" );

    layout17_3->addWidget( spxComplexityTextLabel, 1, 1 );

    spxComplexitySpinBox = new QSpinBox( speexGroupBox, "spxComplexitySpinBox" );
    spxComplexitySpinBox->setMaxValue( 10 );
    spxComplexitySpinBox->setMinValue( 1 );

    layout17_3->addWidget( spxComplexitySpinBox, 1, 2 );

    spxNbPayloadTextLabel = new QLabel( speexGroupBox, "spxNbPayloadTextLabel" );

    layout17_3->addWidget( spxNbPayloadTextLabel, 2, 1 );
    speexGroupBoxLayout->addLayout( layout17_3 );
    spacer23_2 = new QSpacerItem( 31, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    speexGroupBoxLayout->addItem( spacer23_2 );
    tabSpeexLayout->addWidget( speexGroupBox );
    spacer30_2 = new QSpacerItem( 20, 121, QSizePolicy::Minimum, QSizePolicy::Expanding );
    tabSpeexLayout->addItem( spacer30_2 );
    rtpAudioTabWidget->insertTab( tabSpeex, QString::fromLatin1("") );

    tabG726 = new QWidget( rtpAudioTabWidget, "tabG726" );
    tabG726Layout = new QVBoxLayout( tabG726, 11, 6, "tabG726Layout"); 

    g726GroupBox = new QGroupBox( tabG726, "g726GroupBox" );
    g726GroupBox->setColumnLayout(0, Qt::Vertical );
    g726GroupBox->layout()->setSpacing( 6 );
    g726GroupBox->layout()->setMargin( 11 );
    g726GroupBoxLayout = new QGridLayout( g726GroupBox->layout() );
    g726GroupBoxLayout->setAlignment( Qt::AlignTop );

    layout22_2 = new QGridLayout( 0, 1, 1, 0, 6, "layout22_2"); 

    g72640PayloadTypeTextLabel = new QLabel( g726GroupBox, "g72640PayloadTypeTextLabel" );

    layout22_2->addWidget( g72640PayloadTypeTextLabel, 3, 0 );

    g72640PayloadSpinBox = new QSpinBox( g726GroupBox, "g72640PayloadSpinBox" );
    g72640PayloadSpinBox->setMaxValue( 127 );
    g72640PayloadSpinBox->setMinValue( 96 );

    layout22_2->addWidget( g72640PayloadSpinBox, 3, 1 );

    g72632PayloadSpinBox = new QSpinBox( g726GroupBox, "g72632PayloadSpinBox" );
    g72632PayloadSpinBox->setMaxValue( 127 );
    g72632PayloadSpinBox->setMinValue( 0 );

    layout22_2->addWidget( g72632PayloadSpinBox, 2, 1 );

    g72624PayloadTypeTextLabel = new QLabel( g726GroupBox, "g72624PayloadTypeTextLabel" );

    layout22_2->addWidget( g72624PayloadTypeTextLabel, 1, 0 );

    g72624PayloadSpinBox = new QSpinBox( g726GroupBox, "g72624PayloadSpinBox" );
    g72624PayloadSpinBox->setMaxValue( 127 );
    g72624PayloadSpinBox->setMinValue( 96 );

    layout22_2->addWidget( g72624PayloadSpinBox, 1, 1 );

    g72632PayloadTypeTextLabel = new QLabel( g726GroupBox, "g72632PayloadTypeTextLabel" );

    layout22_2->addWidget( g72632PayloadTypeTextLabel, 2, 0 );

    g72616PayloadSpinBox = new QSpinBox( g726GroupBox, "g72616PayloadSpinBox" );
    g72616PayloadSpinBox->setMaxValue( 127 );
    g72616PayloadSpinBox->setMinValue( 96 );

    layout22_2->addWidget( g72616PayloadSpinBox, 0, 1 );

    g72616PayloadTypeTextLabel = new QLabel( g726GroupBox, "g72616PayloadTypeTextLabel" );

    layout22_2->addWidget( g72616PayloadTypeTextLabel, 0, 0 );

    g726GroupBoxLayout->addLayout( layout22_2, 0, 0 );
    spacer31 = new QSpacerItem( 231, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    g726GroupBoxLayout->addItem( spacer31, 0, 1 );

    layout41 = new QHBoxLayout( 0, 0, 6, "layout41"); 

    g726PackingTextLabel = new QLabel( g726GroupBox, "g726PackingTextLabel" );
    layout41->addWidget( g726PackingTextLabel );

    g726PackComboBox = new QComboBox( FALSE, g726GroupBox, "g726PackComboBox" );
    layout41->addWidget( g726PackComboBox );
    spacer40_2 = new QSpacerItem( 141, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout41->addItem( spacer40_2 );

    g726GroupBoxLayout->addMultiCellLayout( layout41, 1, 1, 0, 1 );
    tabG726Layout->addWidget( g726GroupBox );
    spacer32 = new QSpacerItem( 20, 150, QSizePolicy::Minimum, QSizePolicy::Expanding );
    tabG726Layout->addItem( spacer32 );
    rtpAudioTabWidget->insertTab( tabG726, QString::fromLatin1("") );

    tabDtmf = new QWidget( rtpAudioTabWidget, "tabDtmf" );
    tabDtmfLayout = new QVBoxLayout( tabDtmf, 11, 6, "tabDtmfLayout"); 

    dtmfGroupBox = new QGroupBox( tabDtmf, "dtmfGroupBox" );
    dtmfGroupBox->setColumnLayout(0, Qt::Vertical );
    dtmfGroupBox->layout()->setSpacing( 6 );
    dtmfGroupBox->layout()->setMargin( 11 );
    dtmfGroupBoxLayout = new QGridLayout( dtmfGroupBox->layout() );
    dtmfGroupBoxLayout->setAlignment( Qt::AlignTop );
    spacer17 = new QSpacerItem( 280, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    dtmfGroupBoxLayout->addItem( spacer17, 1, 1 );

    layout8 = new QGridLayout( 0, 1, 1, 0, 6, "layout8"); 

    dtmfPayloadTypeSpinBox = new QSpinBox( dtmfGroupBox, "dtmfPayloadTypeSpinBox" );
    dtmfPayloadTypeSpinBox->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)0, 0, 0, dtmfPayloadTypeSpinBox->sizePolicy().hasHeightForWidth() ) );
    dtmfPayloadTypeSpinBox->setMinimumSize( QSize( 49, 0 ) );
    dtmfPayloadTypeSpinBox->setMaximumSize( QSize( 32767, 32767 ) );
    dtmfPayloadTypeSpinBox->setMaxValue( 127 );
    dtmfPayloadTypeSpinBox->setMinValue( 96 );

    layout8->addWidget( dtmfPayloadTypeSpinBox, 0, 2 );

    dtmfDurationMsTextLabel = new QLabel( dtmfGroupBox, "dtmfDurationMsTextLabel" );

    layout8->addWidget( dtmfDurationMsTextLabel, 1, 3 );

    dtmfVolumeTextLabel = new QLabel( dtmfGroupBox, "dtmfVolumeTextLabel" );

    layout8->addWidget( dtmfVolumeTextLabel, 3, 0 );

    dtmfVolumeSpinBox = new QSpinBox( dtmfGroupBox, "dtmfVolumeSpinBox" );
    dtmfVolumeSpinBox->setMaxValue( 0 );
    dtmfVolumeSpinBox->setMinValue( -63 );
    dtmfVolumeSpinBox->setLineStep( 10 );
    dtmfVolumeSpinBox->setValue( -10 );

    layout8->addWidget( dtmfVolumeSpinBox, 3, 2 );

    dtmfPauseSpinBox = new QSpinBox( dtmfGroupBox, "dtmfPauseSpinBox" );
    dtmfPauseSpinBox->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)0, 0, 0, dtmfPauseSpinBox->sizePolicy().hasHeightForWidth() ) );
    dtmfPauseSpinBox->setMinimumSize( QSize( 49, 0 ) );
    dtmfPauseSpinBox->setMaximumSize( QSize( 32767, 32767 ) );
    dtmfPauseSpinBox->setMaxValue( 100 );
    dtmfPauseSpinBox->setMinValue( 20 );
    dtmfPauseSpinBox->setLineStep( 10 );

    layout8->addWidget( dtmfPauseSpinBox, 2, 2 );

    dtmfDurationTextLabel = new QLabel( dtmfGroupBox, "dtmfDurationTextLabel" );

    layout8->addMultiCellWidget( dtmfDurationTextLabel, 1, 1, 0, 1 );

    dtmfPauseMsTextLabel = new QLabel( dtmfGroupBox, "dtmfPauseMsTextLabel" );

    layout8->addWidget( dtmfPauseMsTextLabel, 2, 3 );

    dtmfPayloadTypeTextLabel = new QLabel( dtmfGroupBox, "dtmfPayloadTypeTextLabel" );

    layout8->addMultiCellWidget( dtmfPayloadTypeTextLabel, 0, 0, 0, 1 );

    dtmfPauseTextLabel = new QLabel( dtmfGroupBox, "dtmfPauseTextLabel" );

    layout8->addMultiCellWidget( dtmfPauseTextLabel, 2, 2, 0, 1 );

    dtmfVolDbmTextLabel = new QLabel( dtmfGroupBox, "dtmfVolDbmTextLabel" );

    layout8->addWidget( dtmfVolDbmTextLabel, 3, 3 );

    dtmfDurationSpinBox = new QSpinBox( dtmfGroupBox, "dtmfDurationSpinBox" );
    dtmfDurationSpinBox->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)0, 0, 0, dtmfDurationSpinBox->sizePolicy().hasHeightForWidth() ) );
    dtmfDurationSpinBox->setMinimumSize( QSize( 49, 0 ) );
    dtmfDurationSpinBox->setMaximumSize( QSize( 32767, 32767 ) );
    dtmfDurationSpinBox->setMaxValue( 500 );
    dtmfDurationSpinBox->setMinValue( 40 );
    dtmfDurationSpinBox->setLineStep( 10 );

    layout8->addWidget( dtmfDurationSpinBox, 1, 2 );

    dtmfGroupBoxLayout->addLayout( layout8, 1, 0 );

    layout15_2 = new QHBoxLayout( 0, 0, 6, "layout15_2"); 

    dtmfTransportTextLabel = new QLabel( dtmfGroupBox, "dtmfTransportTextLabel" );
    layout15_2->addWidget( dtmfTransportTextLabel );

    dtmfTransportComboBox = new QComboBox( FALSE, dtmfGroupBox, "dtmfTransportComboBox" );
    layout15_2->addWidget( dtmfTransportComboBox );
    spacer22_2 = new QSpacerItem( 161, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout15_2->addItem( spacer22_2 );

    dtmfGroupBoxLayout->addMultiCellLayout( layout15_2, 0, 0, 0, 1 );
    tabDtmfLayout->addWidget( dtmfGroupBox );
    spacer23_3 = new QSpacerItem( 20, 120, QSizePolicy::Minimum, QSizePolicy::Expanding );
    tabDtmfLayout->addItem( spacer23_3 );
    rtpAudioTabWidget->insertTab( tabDtmf, QString::fromLatin1("") );
    pageRtpAudioLayout->addWidget( rtpAudioTabWidget );
    settingsWidgetStack->addWidget( pageRtpAudio, 2 );

    pageSipProtocol = new QWidget( settingsWidgetStack, "pageSipProtocol" );
    pageSipProtocolLayout = new QGridLayout( pageSipProtocol, 1, 1, 11, 6, "pageSipProtocolLayout"); 

    sipProtocolTitleTextLabel = new QLabel( pageSipProtocol, "sipProtocolTitleTextLabel" );
    sipProtocolTitleTextLabel->setPaletteBackgroundColor( QColor( 150, 150, 150 ) );
    QFont sipProtocolTitleTextLabel_font(  sipProtocolTitleTextLabel->font() );
    sipProtocolTitleTextLabel_font.setPointSize( 21 );
    sipProtocolTitleTextLabel->setFont( sipProtocolTitleTextLabel_font ); 
    sipProtocolTitleTextLabel->setFrameShape( QLabel::Box );
    sipProtocolTitleTextLabel->setIndent( 10 );

    pageSipProtocolLayout->addWidget( sipProtocolTitleTextLabel, 0, 0 );

    sipProtoclTabWidget = new QTabWidget( pageSipProtocol, "sipProtoclTabWidget" );

    tab = new QWidget( sipProtoclTabWidget, "tab" );
    tabLayout = new QGridLayout( tab, 1, 1, 11, 6, "tabLayout"); 
    spacer24_2_2 = new QSpacerItem( 20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding );
    tabLayout->addItem( spacer24_2_2, 2, 1 );

    optionsGroupBox = new QGroupBox( tab, "optionsGroupBox" );
    optionsGroupBox->setColumnLayout(0, Qt::Vertical );
    optionsGroupBox->layout()->setSpacing( 6 );
    optionsGroupBox->layout()->setMargin( 11 );
    optionsGroupBoxLayout = new QGridLayout( optionsGroupBox->layout() );
    optionsGroupBoxLayout->setAlignment( Qt::AlignTop );

    holdVariantTextLabel = new QLabel( optionsGroupBox, "holdVariantTextLabel" );

    optionsGroupBoxLayout->addWidget( holdVariantTextLabel, 0, 0 );

    holdVariantComboBox = new QComboBox( FALSE, optionsGroupBox, "holdVariantComboBox" );
    holdVariantComboBox->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)0, 0, 0, holdVariantComboBox->sizePolicy().hasHeightForWidth() ) );
    holdVariantComboBox->setMinimumSize( QSize( 110, 0 ) );

    optionsGroupBoxLayout->addWidget( holdVariantComboBox, 0, 1 );
    spacer4 = new QSpacerItem( 70, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    optionsGroupBoxLayout->addItem( spacer4, 0, 2 );

    missingContactCheckBox = new QCheckBox( optionsGroupBox, "missingContactCheckBox" );

    optionsGroupBoxLayout->addMultiCellWidget( missingContactCheckBox, 2, 2, 0, 2 );

    maxForwardsCheckBox = new QCheckBox( optionsGroupBox, "maxForwardsCheckBox" );

    optionsGroupBoxLayout->addMultiCellWidget( maxForwardsCheckBox, 1, 1, 0, 2 );

    regTimeCheckBox = new QCheckBox( optionsGroupBox, "regTimeCheckBox" );

    optionsGroupBoxLayout->addMultiCellWidget( regTimeCheckBox, 3, 3, 0, 2 );

    compactHeadersCheckBox = new QCheckBox( optionsGroupBox, "compactHeadersCheckBox" );

    optionsGroupBoxLayout->addMultiCellWidget( compactHeadersCheckBox, 4, 4, 0, 2 );

    allowSdpChangeCheckBox = new QCheckBox( optionsGroupBox, "allowSdpChangeCheckBox" );

    optionsGroupBoxLayout->addMultiCellWidget( allowSdpChangeCheckBox, 7, 7, 0, 2 );

    useDomainInContactCheckBox = new QCheckBox( optionsGroupBox, "useDomainInContactCheckBox" );

    optionsGroupBoxLayout->addMultiCellWidget( useDomainInContactCheckBox, 6, 6, 0, 2 );

    multiValuesListCheckBox = new QCheckBox( optionsGroupBox, "multiValuesListCheckBox" );

    optionsGroupBoxLayout->addMultiCellWidget( multiValuesListCheckBox, 5, 5, 0, 2 );

    tabLayout->addMultiCellWidget( optionsGroupBox, 0, 0, 0, 1 );

    redirectionGroupBox = new QGroupBox( tab, "redirectionGroupBox" );
    redirectionGroupBox->setColumnLayout(0, Qt::Vertical );
    redirectionGroupBox->layout()->setSpacing( 6 );
    redirectionGroupBox->layout()->setMargin( 11 );
    redirectionGroupBoxLayout = new QGridLayout( redirectionGroupBox->layout() );
    redirectionGroupBoxLayout->setAlignment( Qt::AlignTop );

    allowRedirectionCheckBox = new QCheckBox( redirectionGroupBox, "allowRedirectionCheckBox" );

    redirectionGroupBoxLayout->addMultiCellWidget( allowRedirectionCheckBox, 0, 0, 0, 1 );

    askUserRedirectCheckBox = new QCheckBox( redirectionGroupBox, "askUserRedirectCheckBox" );

    redirectionGroupBoxLayout->addMultiCellWidget( askUserRedirectCheckBox, 1, 1, 0, 2 );

    maxRedirectTextLabel = new QLabel( redirectionGroupBox, "maxRedirectTextLabel" );

    redirectionGroupBoxLayout->addWidget( maxRedirectTextLabel, 2, 0 );

    maxRedirectSpinBox = new QSpinBox( redirectionGroupBox, "maxRedirectSpinBox" );
    maxRedirectSpinBox->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)0, 0, 0, maxRedirectSpinBox->sizePolicy().hasHeightForWidth() ) );
    maxRedirectSpinBox->setMinimumSize( QSize( 46, 0 ) );
    maxRedirectSpinBox->setMaxValue( 5 );
    maxRedirectSpinBox->setMinValue( 1 );

    redirectionGroupBoxLayout->addWidget( maxRedirectSpinBox, 2, 1 );
    spacer5 = new QSpacerItem( 80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    redirectionGroupBoxLayout->addItem( spacer5, 2, 2 );

    tabLayout->addWidget( redirectionGroupBox, 1, 0 );

    sipExtensionsGroupBox = new QGroupBox( tab, "sipExtensionsGroupBox" );
    sipExtensionsGroupBox->setColumnLayout(0, Qt::Vertical );
    sipExtensionsGroupBox->layout()->setSpacing( 6 );
    sipExtensionsGroupBox->layout()->setMargin( 11 );
    sipExtensionsGroupBoxLayout = new QGridLayout( sipExtensionsGroupBox->layout() );
    sipExtensionsGroupBoxLayout->setAlignment( Qt::AlignTop );

    ext100relComboBox = new QComboBox( FALSE, sipExtensionsGroupBox, "ext100relComboBox" );
    ext100relComboBox->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)0, 0, 0, ext100relComboBox->sizePolicy().hasHeightForWidth() ) );
    ext100relComboBox->setMinimumSize( QSize( 120, 0 ) );

    sipExtensionsGroupBoxLayout->addWidget( ext100relComboBox, 0, 1 );

    ext100relTextLabel = new QLabel( sipExtensionsGroupBox, "ext100relTextLabel" );

    sipExtensionsGroupBoxLayout->addWidget( ext100relTextLabel, 0, 0 );

    extReplacesCheckBox = new QCheckBox( sipExtensionsGroupBox, "extReplacesCheckBox" );

    sipExtensionsGroupBoxLayout->addWidget( extReplacesCheckBox, 1, 0 );

    tabLayout->addWidget( sipExtensionsGroupBox, 1, 1 );
    sipProtoclTabWidget->insertTab( tab, QString::fromLatin1("") );

    tab_2 = new QWidget( sipProtoclTabWidget, "tab_2" );
    tabLayout_2 = new QVBoxLayout( tab_2, 11, 6, "tabLayout_2"); 

    referGroupBox = new QGroupBox( tab_2, "referGroupBox" );
    referGroupBox->setColumnLayout(0, Qt::Vertical );
    referGroupBox->layout()->setSpacing( 6 );
    referGroupBox->layout()->setMargin( 11 );
    referGroupBoxLayout = new QVBoxLayout( referGroupBox->layout() );
    referGroupBoxLayout->setAlignment( Qt::AlignTop );

    allowReferCheckBox = new QCheckBox( referGroupBox, "allowReferCheckBox" );
    referGroupBoxLayout->addWidget( allowReferCheckBox );

    askUserReferCheckBox = new QCheckBox( referGroupBox, "askUserReferCheckBox" );
    referGroupBoxLayout->addWidget( askUserReferCheckBox );

    refereeHoldCheckBox = new QCheckBox( referGroupBox, "refereeHoldCheckBox" );
    referGroupBoxLayout->addWidget( refereeHoldCheckBox );

    referrerHoldCheckBox = new QCheckBox( referGroupBox, "referrerHoldCheckBox" );
    referGroupBoxLayout->addWidget( referrerHoldCheckBox );

    refreshReferSubCheckBox = new QCheckBox( referGroupBox, "refreshReferSubCheckBox" );
    referGroupBoxLayout->addWidget( refreshReferSubCheckBox );

    referAorCheckBox = new QCheckBox( referGroupBox, "referAorCheckBox" );
    referGroupBoxLayout->addWidget( referAorCheckBox );

    transferConsultInprogCheckBox = new QCheckBox( referGroupBox, "transferConsultInprogCheckBox" );
    referGroupBoxLayout->addWidget( transferConsultInprogCheckBox );
    tabLayout_2->addWidget( referGroupBox );
    spacer25_2 = new QSpacerItem( 20, 200, QSizePolicy::Minimum, QSizePolicy::Expanding );
    tabLayout_2->addItem( spacer25_2 );
    sipProtoclTabWidget->insertTab( tab_2, QString::fromLatin1("") );

    TabPage = new QWidget( sipProtoclTabWidget, "TabPage" );
    TabPageLayout = new QVBoxLayout( TabPage, 11, 6, "TabPageLayout"); 

    privacyGroupBox = new QGroupBox( TabPage, "privacyGroupBox" );
    privacyGroupBox->setColumnLayout(0, Qt::Vertical );
    privacyGroupBox->layout()->setSpacing( 6 );
    privacyGroupBox->layout()->setMargin( 11 );
    privacyGroupBoxLayout = new QVBoxLayout( privacyGroupBox->layout() );
    privacyGroupBoxLayout->setAlignment( Qt::AlignTop );

    pPreferredIdCheckBox = new QCheckBox( privacyGroupBox, "pPreferredIdCheckBox" );
    privacyGroupBoxLayout->addWidget( pPreferredIdCheckBox );
    TabPageLayout->addWidget( privacyGroupBox );
    spacer40 = new QSpacerItem( 20, 331, QSizePolicy::Minimum, QSizePolicy::Expanding );
    TabPageLayout->addItem( spacer40 );
    sipProtoclTabWidget->insertTab( TabPage, QString::fromLatin1("") );

    pageSipProtocolLayout->addWidget( sipProtoclTabWidget, 1, 0 );
    settingsWidgetStack->addWidget( pageSipProtocol, 3 );

    pageNat = new QWidget( settingsWidgetStack, "pageNat" );
    pageNatLayout = new QVBoxLayout( pageNat, 11, 6, "pageNatLayout"); 

    NatTitleTextLabel = new QLabel( pageNat, "NatTitleTextLabel" );
    NatTitleTextLabel->setPaletteBackgroundColor( QColor( 150, 150, 150 ) );
    QFont NatTitleTextLabel_font(  NatTitleTextLabel->font() );
    NatTitleTextLabel_font.setPointSize( 21 );
    NatTitleTextLabel->setFont( NatTitleTextLabel_font ); 
    NatTitleTextLabel->setFrameShape( QLabel::Box );
    NatTitleTextLabel->setIndent( 10 );
    pageNatLayout->addWidget( NatTitleTextLabel );

    transportGroupBox = new QGroupBox( pageNat, "transportGroupBox" );
    transportGroupBox->setColumnLayout(0, Qt::Vertical );
    transportGroupBox->layout()->setSpacing( 6 );
    transportGroupBox->layout()->setMargin( 11 );
    transportGroupBoxLayout = new QGridLayout( transportGroupBox->layout() );
    transportGroupBoxLayout->setAlignment( Qt::AlignTop );

    sipTransportComboBox = new QComboBox( FALSE, transportGroupBox, "sipTransportComboBox" );

    transportGroupBoxLayout->addMultiCellWidget( sipTransportComboBox, 0, 0, 1, 2 );
    spacer46 = new QSpacerItem( 151, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    transportGroupBoxLayout->addItem( spacer46, 0, 3 );

    sipTransportTextLabel = new QLabel( transportGroupBox, "sipTransportTextLabel" );

    transportGroupBoxLayout->addWidget( sipTransportTextLabel, 0, 0 );

    udpThresholdTextLabel = new QLabel( transportGroupBox, "udpThresholdTextLabel" );

    transportGroupBoxLayout->addWidget( udpThresholdTextLabel, 1, 0 );

    udpThresholdSpinBox = new QSpinBox( transportGroupBox, "udpThresholdSpinBox" );
    udpThresholdSpinBox->setMaxValue( 65535 );
    udpThresholdSpinBox->setLineStep( 100 );
    udpThresholdSpinBox->setValue( 1300 );

    transportGroupBoxLayout->addWidget( udpThresholdSpinBox, 1, 1 );
    spacer47 = new QSpacerItem( 81, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    transportGroupBoxLayout->addMultiCell( spacer47, 1, 1, 2, 3 );
    pageNatLayout->addWidget( transportGroupBox );

    natTraversalButtonGroup_ = new QButtonGroup( pageNat, "natTraversalButtonGroup_" );
    natTraversalButtonGroup_->setColumnLayout(0, Qt::Vertical );
    natTraversalButtonGroup_->layout()->setSpacing( 6 );
    natTraversalButtonGroup_->layout()->setMargin( 11 );
    natTraversalButtonGroup_Layout = new QVBoxLayout( natTraversalButtonGroup_->layout() );
    natTraversalButtonGroup_Layout->setAlignment( Qt::AlignTop );

    natNoneRadioButton = new QRadioButton( natTraversalButtonGroup_, "natNoneRadioButton" );
    natTraversalButtonGroup_Layout->addWidget( natNoneRadioButton );

    natStaticRadioButton = new QRadioButton( natTraversalButtonGroup_, "natStaticRadioButton" );
    natTraversalButtonGroup_Layout->addWidget( natStaticRadioButton );

    layout32 = new QHBoxLayout( 0, 0, 6, "layout32"); 

    publicIPTextLabel = new QLabel( natTraversalButtonGroup_, "publicIPTextLabel" );
    publicIPTextLabel->setIndent( 21 );
    layout32->addWidget( publicIPTextLabel );

    publicIPLineEdit = new QLineEdit( natTraversalButtonGroup_, "publicIPLineEdit" );
    layout32->addWidget( publicIPLineEdit );
    natTraversalButtonGroup_Layout->addLayout( layout32 );

    natStunRadioButton = new QRadioButton( natTraversalButtonGroup_, "natStunRadioButton" );
    natTraversalButtonGroup_Layout->addWidget( natStunRadioButton );

    layout33 = new QHBoxLayout( 0, 0, 6, "layout33"); 

    stunServerTextLabel = new QLabel( natTraversalButtonGroup_, "stunServerTextLabel" );
    stunServerTextLabel->setIndent( 21 );
    layout33->addWidget( stunServerTextLabel );

    stunServerLineEdit = new QLineEdit( natTraversalButtonGroup_, "stunServerLineEdit" );
    layout33->addWidget( stunServerLineEdit );
    natTraversalButtonGroup_Layout->addLayout( layout33 );

    persistentTcpCheckBox = new QCheckBox( natTraversalButtonGroup_, "persistentTcpCheckBox" );
    natTraversalButtonGroup_Layout->addWidget( persistentTcpCheckBox );

    natKeepaliveCheckBox = new QCheckBox( natTraversalButtonGroup_, "natKeepaliveCheckBox" );
    natTraversalButtonGroup_Layout->addWidget( natKeepaliveCheckBox );
    pageNatLayout->addWidget( natTraversalButtonGroup_ );
    spacer19 = new QSpacerItem( 20, 80, QSizePolicy::Minimum, QSizePolicy::Expanding );
    pageNatLayout->addItem( spacer19 );
    settingsWidgetStack->addWidget( pageNat, 4 );

    pageAddressFormat = new QWidget( settingsWidgetStack, "pageAddressFormat" );
    pageAddressFormatLayout = new QVBoxLayout( pageAddressFormat, 11, 6, "pageAddressFormatLayout"); 

    addressFormatTitleTextLabel = new QLabel( pageAddressFormat, "addressFormatTitleTextLabel" );
    addressFormatTitleTextLabel->setPaletteBackgroundColor( QColor( 150, 150, 150 ) );
    QFont addressFormatTitleTextLabel_font(  addressFormatTitleTextLabel->font() );
    addressFormatTitleTextLabel_font.setPointSize( 21 );
    addressFormatTitleTextLabel->setFont( addressFormatTitleTextLabel_font ); 
    addressFormatTitleTextLabel->setFrameShape( QLabel::Box );
    addressFormatTitleTextLabel->setIndent( 10 );
    pageAddressFormatLayout->addWidget( addressFormatTitleTextLabel );

    telNumberGroupBox = new QGroupBox( pageAddressFormat, "telNumberGroupBox" );
    telNumberGroupBox->setColumnLayout(0, Qt::Vertical );
    telNumberGroupBox->layout()->setSpacing( 6 );
    telNumberGroupBox->layout()->setMargin( 11 );
    telNumberGroupBoxLayout = new QGridLayout( telNumberGroupBox->layout() );
    telNumberGroupBoxLayout->setAlignment( Qt::AlignTop );

    displayTelUserCheckBox = new QCheckBox( telNumberGroupBox, "displayTelUserCheckBox" );

    telNumberGroupBoxLayout->addMultiCellWidget( displayTelUserCheckBox, 0, 0, 0, 1 );

    numericalUserIsTelCheckBox = new QCheckBox( telNumberGroupBox, "numericalUserIsTelCheckBox" );

    telNumberGroupBoxLayout->addMultiCellWidget( numericalUserIsTelCheckBox, 1, 1, 0, 1 );

    removeSpecialCheckBox = new QCheckBox( telNumberGroupBox, "removeSpecialCheckBox" );

    telNumberGroupBoxLayout->addMultiCellWidget( removeSpecialCheckBox, 2, 2, 0, 1 );

    useTelUriCheckBox = new QCheckBox( telNumberGroupBox, "useTelUriCheckBox" );

    telNumberGroupBoxLayout->addMultiCellWidget( useTelUriCheckBox, 4, 4, 0, 1 );

    specialTextLabel = new QLabel( telNumberGroupBox, "specialTextLabel" );

    telNumberGroupBoxLayout->addWidget( specialTextLabel, 3, 0 );

    specialLineEdit = new QLineEdit( telNumberGroupBox, "specialLineEdit" );

    telNumberGroupBoxLayout->addWidget( specialLineEdit, 3, 1 );
    pageAddressFormatLayout->addWidget( telNumberGroupBox );

    conversionGroupBox = new QGroupBox( pageAddressFormat, "conversionGroupBox" );
    conversionGroupBox->setColumnLayout(0, Qt::Vertical );
    conversionGroupBox->layout()->setSpacing( 6 );
    conversionGroupBox->layout()->setMargin( 11 );
    conversionGroupBoxLayout = new QVBoxLayout( conversionGroupBox->layout() );
    conversionGroupBoxLayout->setAlignment( Qt::AlignTop );

    layout29 = new QHBoxLayout( 0, 0, 6, "layout29"); 

    conversionListView = new QListView( conversionGroupBox, "conversionListView" );
    conversionListView->addColumn( tr( "Match expression" ) );
    conversionListView->addColumn( tr( "Replace" ) );
    conversionListView->setAllColumnsShowFocus( TRUE );
    conversionListView->setResizeMode( QListView::AllColumns );
    layout29->addWidget( conversionListView );

    layout15_2_2 = new QVBoxLayout( 0, 0, 6, "layout15_2_2"); 
    spacer19_2_2 = new QSpacerItem( 20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding );
    layout15_2_2->addItem( spacer19_2_2 );

    upConversionPushButton = new QPushButton( conversionGroupBox, "upConversionPushButton" );
    upConversionPushButton->setPixmap( QPixmap::fromMimeSource( "1uparrow.png" ) );
    layout15_2_2->addWidget( upConversionPushButton );

    downConversionPushButton = new QPushButton( conversionGroupBox, "downConversionPushButton" );
    downConversionPushButton->setPixmap( QPixmap::fromMimeSource( "1downarrow.png" ) );
    layout15_2_2->addWidget( downConversionPushButton );
    spacer20_2_2 = new QSpacerItem( 20, 31, QSizePolicy::Minimum, QSizePolicy::Expanding );
    layout15_2_2->addItem( spacer20_2_2 );
    layout29->addLayout( layout15_2_2 );
    conversionGroupBoxLayout->addLayout( layout29 );

    layout30 = new QHBoxLayout( 0, 0, 6, "layout30"); 

    addConversionPushButton = new QPushButton( conversionGroupBox, "addConversionPushButton" );
    layout30->addWidget( addConversionPushButton );

    removePushButton = new QPushButton( conversionGroupBox, "removePushButton" );
    layout30->addWidget( removePushButton );

    editConversionPushButton = new QPushButton( conversionGroupBox, "editConversionPushButton" );
    layout30->addWidget( editConversionPushButton );
    spacer38_2 = new QSpacerItem( 291, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout30->addItem( spacer38_2 );
    conversionGroupBoxLayout->addLayout( layout30 );

    layout24 = new QHBoxLayout( 0, 0, 6, "layout24"); 

    testConversionLineEdit = new QLineEdit( conversionGroupBox, "testConversionLineEdit" );
    layout24->addWidget( testConversionLineEdit );

    testConversionPushButton = new QPushButton( conversionGroupBox, "testConversionPushButton" );
    layout24->addWidget( testConversionPushButton );
    conversionGroupBoxLayout->addLayout( layout24 );
    pageAddressFormatLayout->addWidget( conversionGroupBox );
    spacer20 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    pageAddressFormatLayout->addItem( spacer20 );
    settingsWidgetStack->addWidget( pageAddressFormat, 5 );

    pageTimers = new QWidget( settingsWidgetStack, "pageTimers" );
    pageTimersLayout = new QVBoxLayout( pageTimers, 11, 6, "pageTimersLayout"); 

    timersTitleTextLabel = new QLabel( pageTimers, "timersTitleTextLabel" );
    timersTitleTextLabel->setPaletteBackgroundColor( QColor( 150, 150, 150 ) );
    QFont timersTitleTextLabel_font(  timersTitleTextLabel->font() );
    timersTitleTextLabel_font.setPointSize( 21 );
    timersTitleTextLabel->setFont( timersTitleTextLabel_font ); 
    timersTitleTextLabel->setFrameShape( QLabel::Box );
    timersTitleTextLabel->setIndent( 10 );
    pageTimersLayout->addWidget( timersTitleTextLabel );

    layout7 = new QHBoxLayout( 0, 0, 6, "layout7"); 

    layout6 = new QGridLayout( 0, 1, 1, 0, 6, "layout6"); 

    secNoanswerTextLabel = new QLabel( pageTimers, "secNoanswerTextLabel" );

    layout6->addWidget( secNoanswerTextLabel, 0, 2 );

    tmrNatKeepaliveSpinBox = new QSpinBox( pageTimers, "tmrNatKeepaliveSpinBox" );
    tmrNatKeepaliveSpinBox->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)0, 0, 0, tmrNatKeepaliveSpinBox->sizePolicy().hasHeightForWidth() ) );
    tmrNatKeepaliveSpinBox->setMinimumSize( QSize( 55, 0 ) );
    tmrNatKeepaliveSpinBox->setMaximumSize( QSize( 55, 32767 ) );
    tmrNatKeepaliveSpinBox->setMaxValue( 900 );
    tmrNatKeepaliveSpinBox->setMinValue( 10 );
    tmrNatKeepaliveSpinBox->setLineStep( 10 );

    layout6->addWidget( tmrNatKeepaliveSpinBox, 1, 1 );

    tmrNoanswerSpinBox = new QSpinBox( pageTimers, "tmrNoanswerSpinBox" );
    tmrNoanswerSpinBox->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)0, 0, 0, tmrNoanswerSpinBox->sizePolicy().hasHeightForWidth() ) );
    tmrNoanswerSpinBox->setMinimumSize( QSize( 55, 0 ) );
    tmrNoanswerSpinBox->setMaximumSize( QSize( 55, 32767 ) );
    tmrNoanswerSpinBox->setMaxValue( 600 );
    tmrNoanswerSpinBox->setLineStep( 10 );

    layout6->addWidget( tmrNoanswerSpinBox, 0, 1 );

    tmrNatKeepaliveTextLabel = new QLabel( pageTimers, "tmrNatKeepaliveTextLabel" );

    layout6->addWidget( tmrNatKeepaliveTextLabel, 1, 0 );

    tmrNoanswerTextLabel = new QLabel( pageTimers, "tmrNoanswerTextLabel" );

    layout6->addWidget( tmrNoanswerTextLabel, 0, 0 );
    layout7->addLayout( layout6 );
    spacer23 = new QSpacerItem( 270, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout7->addItem( spacer23 );
    pageTimersLayout->addLayout( layout7 );
    spacer22 = new QSpacerItem( 20, 450, QSizePolicy::Minimum, QSizePolicy::Expanding );
    pageTimersLayout->addItem( spacer22 );
    settingsWidgetStack->addWidget( pageTimers, 6 );

    pageRingTones = new QWidget( settingsWidgetStack, "pageRingTones" );
    pageRingTonesLayout = new QVBoxLayout( pageRingTones, 11, 6, "pageRingTonesLayout"); 

    ringtonesTitleTextLabel = new QLabel( pageRingTones, "ringtonesTitleTextLabel" );
    ringtonesTitleTextLabel->setPaletteBackgroundColor( QColor( 150, 150, 150 ) );
    QFont ringtonesTitleTextLabel_font(  ringtonesTitleTextLabel->font() );
    ringtonesTitleTextLabel_font.setPointSize( 21 );
    ringtonesTitleTextLabel->setFont( ringtonesTitleTextLabel_font ); 
    ringtonesTitleTextLabel->setFrameShape( QLabel::Box );
    ringtonesTitleTextLabel->setIndent( 10 );
    pageRingTonesLayout->addWidget( ringtonesTitleTextLabel );

    layout18_2 = new QGridLayout( 0, 1, 1, 0, 6, "layout18_2"); 

    openRingbackToolButton = new QToolButton( pageRingTones, "openRingbackToolButton" );
    openRingbackToolButton->setFocusPolicy( QToolButton::TabFocus );
    openRingbackToolButton->setIconSet( QIconSet( QPixmap::fromMimeSource( "fileopen.png" ) ) );

    layout18_2->addWidget( openRingbackToolButton, 1, 2 );

    openRingtoneToolButton = new QToolButton( pageRingTones, "openRingtoneToolButton" );
    openRingtoneToolButton->setFocusPolicy( QToolButton::TabFocus );
    openRingtoneToolButton->setIconSet( QIconSet( QPixmap::fromMimeSource( "fileopen.png" ) ) );

    layout18_2->addWidget( openRingtoneToolButton, 0, 2 );

    ringbackTextLabel = new QLabel( pageRingTones, "ringbackTextLabel" );

    layout18_2->addWidget( ringbackTextLabel, 1, 0 );

    ringbackLineEdit = new QLineEdit( pageRingTones, "ringbackLineEdit" );

    layout18_2->addWidget( ringbackLineEdit, 1, 1 );

    ringtoneLineEdit = new QLineEdit( pageRingTones, "ringtoneLineEdit" );

    layout18_2->addWidget( ringtoneLineEdit, 0, 1 );

    ringtoneTextLabel = new QLabel( pageRingTones, "ringtoneTextLabel" );

    layout18_2->addWidget( ringtoneTextLabel, 0, 0 );
    pageRingTonesLayout->addLayout( layout18_2 );
    spacer30 = new QSpacerItem( 20, 391, QSizePolicy::Minimum, QSizePolicy::Expanding );
    pageRingTonesLayout->addItem( spacer30 );
    settingsWidgetStack->addWidget( pageRingTones, 7 );

    pageScripts = new QWidget( settingsWidgetStack, "pageScripts" );
    pageScriptsLayout = new QVBoxLayout( pageScripts, 11, 6, "pageScriptsLayout"); 

    scriptsTitleTextLabel = new QLabel( pageScripts, "scriptsTitleTextLabel" );
    scriptsTitleTextLabel->setPaletteBackgroundColor( QColor( 150, 150, 150 ) );
    QFont scriptsTitleTextLabel_font(  scriptsTitleTextLabel->font() );
    scriptsTitleTextLabel_font.setPointSize( 21 );
    scriptsTitleTextLabel->setFont( scriptsTitleTextLabel_font ); 
    scriptsTitleTextLabel->setFrameShape( QLabel::Box );
    scriptsTitleTextLabel->setIndent( 10 );
    pageScriptsLayout->addWidget( scriptsTitleTextLabel );

    layout19_2 = new QGridLayout( 0, 1, 1, 0, 6, "layout19_2"); 

    localReleaseLineEdit = new QLineEdit( pageScripts, "localReleaseLineEdit" );

    layout19_2->addWidget( localReleaseLineEdit, 6, 1 );

    openInCallFailedToolButton = new QToolButton( pageScripts, "openInCallFailedToolButton" );
    openInCallFailedToolButton->setFocusPolicy( QToolButton::TabFocus );
    openInCallFailedToolButton->setIconSet( QIconSet( QPixmap::fromMimeSource( "fileopen.png" ) ) );

    layout19_2->addWidget( openInCallFailedToolButton, 2, 2 );

    openIncomingCallScriptToolButton = new QToolButton( pageScripts, "openIncomingCallScriptToolButton" );
    openIncomingCallScriptToolButton->setFocusPolicy( QToolButton::TabFocus );
    openIncomingCallScriptToolButton->setIconSet( QIconSet( QPixmap::fromMimeSource( "fileopen.png" ) ) );

    layout19_2->addWidget( openIncomingCallScriptToolButton, 0, 2 );

    openOutCallAnsweredToolButton = new QToolButton( pageScripts, "openOutCallAnsweredToolButton" );
    openOutCallAnsweredToolButton->setFocusPolicy( QToolButton::TabFocus );
    openOutCallAnsweredToolButton->setIconSet( QIconSet( QPixmap::fromMimeSource( "fileopen.png" ) ) );

    layout19_2->addWidget( openOutCallAnsweredToolButton, 4, 2 );

    inCallFailedLineEdit = new QLineEdit( pageScripts, "inCallFailedLineEdit" );

    layout19_2->addWidget( inCallFailedLineEdit, 2, 1 );

    openInCallAnsweredToolButton = new QToolButton( pageScripts, "openInCallAnsweredToolButton" );
    openInCallAnsweredToolButton->setFocusPolicy( QToolButton::TabFocus );
    openInCallAnsweredToolButton->setIconSet( QIconSet( QPixmap::fromMimeSource( "fileopen.png" ) ) );

    layout19_2->addWidget( openInCallAnsweredToolButton, 1, 2 );

    remoteReleaseLineEdit = new QLineEdit( pageScripts, "remoteReleaseLineEdit" );

    layout19_2->addWidget( remoteReleaseLineEdit, 7, 1 );

    openOutCallToolButton = new QToolButton( pageScripts, "openOutCallToolButton" );
    openOutCallToolButton->setFocusPolicy( QToolButton::TabFocus );
    openOutCallToolButton->setIconSet( QIconSet( QPixmap::fromMimeSource( "fileopen.png" ) ) );

    layout19_2->addWidget( openOutCallToolButton, 3, 2 );

    incomingCallScriptLineEdit = new QLineEdit( pageScripts, "incomingCallScriptLineEdit" );

    layout19_2->addWidget( incomingCallScriptLineEdit, 0, 1 );

    outCallAnsweredLineEdit = new QLineEdit( pageScripts, "outCallAnsweredLineEdit" );

    layout19_2->addWidget( outCallAnsweredLineEdit, 4, 1 );

    inCallAnsweredLineEdit = new QLineEdit( pageScripts, "inCallAnsweredLineEdit" );

    layout19_2->addWidget( inCallAnsweredLineEdit, 1, 1 );

    localReleaseTextLabel = new QLabel( pageScripts, "localReleaseTextLabel" );

    layout19_2->addWidget( localReleaseTextLabel, 6, 0 );

    openOutCallFailedToolButton = new QToolButton( pageScripts, "openOutCallFailedToolButton" );
    openOutCallFailedToolButton->setFocusPolicy( QToolButton::TabFocus );
    openOutCallFailedToolButton->setIconSet( QIconSet( QPixmap::fromMimeSource( "fileopen.png" ) ) );

    layout19_2->addWidget( openOutCallFailedToolButton, 5, 2 );

    outCallFailedLineEdit = new QLineEdit( pageScripts, "outCallFailedLineEdit" );

    layout19_2->addWidget( outCallFailedLineEdit, 5, 1 );

    outCallLineEdit = new QLineEdit( pageScripts, "outCallLineEdit" );

    layout19_2->addWidget( outCallLineEdit, 3, 1 );

    outCallAnsweredTextLabel = new QLabel( pageScripts, "outCallAnsweredTextLabel" );

    layout19_2->addWidget( outCallAnsweredTextLabel, 4, 0 );

    inCallFailedTextLabel = new QLabel( pageScripts, "inCallFailedTextLabel" );

    layout19_2->addWidget( inCallFailedTextLabel, 2, 0 );

    incomingCallScriptTextLabel = new QLabel( pageScripts, "incomingCallScriptTextLabel" );

    layout19_2->addWidget( incomingCallScriptTextLabel, 0, 0 );

    openLocalReleaseToolButton = new QToolButton( pageScripts, "openLocalReleaseToolButton" );
    openLocalReleaseToolButton->setFocusPolicy( QToolButton::TabFocus );
    openLocalReleaseToolButton->setIconSet( QIconSet( QPixmap::fromMimeSource( "fileopen.png" ) ) );

    layout19_2->addWidget( openLocalReleaseToolButton, 6, 2 );

    remoteReleaseTextLabel = new QLabel( pageScripts, "remoteReleaseTextLabel" );

    layout19_2->addWidget( remoteReleaseTextLabel, 7, 0 );

    inCallAnsweredTextLabel = new QLabel( pageScripts, "inCallAnsweredTextLabel" );

    layout19_2->addWidget( inCallAnsweredTextLabel, 1, 0 );

    openRemoteReleaseToolButton = new QToolButton( pageScripts, "openRemoteReleaseToolButton" );
    openRemoteReleaseToolButton->setFocusPolicy( QToolButton::TabFocus );
    openRemoteReleaseToolButton->setIconSet( QIconSet( QPixmap::fromMimeSource( "fileopen.png" ) ) );

    layout19_2->addWidget( openRemoteReleaseToolButton, 7, 2 );

    outCallTextLabel = new QLabel( pageScripts, "outCallTextLabel" );

    layout19_2->addWidget( outCallTextLabel, 3, 0 );

    outCallFailedTextLabel = new QLabel( pageScripts, "outCallFailedTextLabel" );

    layout19_2->addWidget( outCallFailedTextLabel, 5, 0 );
    pageScriptsLayout->addLayout( layout19_2 );
    spacer29 = new QSpacerItem( 20, 190, QSizePolicy::Minimum, QSizePolicy::Expanding );
    pageScriptsLayout->addItem( spacer29 );
    settingsWidgetStack->addWidget( pageScripts, 8 );

    pageSecurity = new QWidget( settingsWidgetStack, "pageSecurity" );
    pageSecurityLayout = new QVBoxLayout( pageSecurity, 11, 6, "pageSecurityLayout"); 

    securityTitleTextLabel = new QLabel( pageSecurity, "securityTitleTextLabel" );
    securityTitleTextLabel->setPaletteBackgroundColor( QColor( 150, 150, 150 ) );
    QFont securityTitleTextLabel_font(  securityTitleTextLabel->font() );
    securityTitleTextLabel_font.setPointSize( 21 );
    securityTitleTextLabel->setFont( securityTitleTextLabel_font ); 
    securityTitleTextLabel->setFrameShape( QLabel::Box );
    securityTitleTextLabel->setIndent( 10 );
    pageSecurityLayout->addWidget( securityTitleTextLabel );

    zrtpEnabledCheckBox = new QCheckBox( pageSecurity, "zrtpEnabledCheckBox" );
    pageSecurityLayout->addWidget( zrtpEnabledCheckBox );

    zrtpSettingsGroupBox = new QGroupBox( pageSecurity, "zrtpSettingsGroupBox" );
    zrtpSettingsGroupBox->setColumnLayout(0, Qt::Vertical );
    zrtpSettingsGroupBox->layout()->setSpacing( 6 );
    zrtpSettingsGroupBox->layout()->setMargin( 11 );
    zrtpSettingsGroupBoxLayout = new QVBoxLayout( zrtpSettingsGroupBox->layout() );
    zrtpSettingsGroupBoxLayout->setAlignment( Qt::AlignTop );

    zrtpSendIfSupportedCheckBox = new QCheckBox( zrtpSettingsGroupBox, "zrtpSendIfSupportedCheckBox" );
    zrtpSettingsGroupBoxLayout->addWidget( zrtpSendIfSupportedCheckBox );

    zrtpSdpCheckBox = new QCheckBox( zrtpSettingsGroupBox, "zrtpSdpCheckBox" );
    zrtpSettingsGroupBoxLayout->addWidget( zrtpSdpCheckBox );

    zrtpGoClearWarningCheckBox = new QCheckBox( zrtpSettingsGroupBox, "zrtpGoClearWarningCheckBox" );
    zrtpSettingsGroupBoxLayout->addWidget( zrtpGoClearWarningCheckBox );
    pageSecurityLayout->addWidget( zrtpSettingsGroupBox );
    spacer33 = new QSpacerItem( 20, 241, QSizePolicy::Minimum, QSizePolicy::Expanding );
    pageSecurityLayout->addItem( spacer33 );
    settingsWidgetStack->addWidget( pageSecurity, 9 );

    pageVoiceMail = new QWidget( settingsWidgetStack, "pageVoiceMail" );
    pageVoiceMailLayout = new QVBoxLayout( pageVoiceMail, 11, 6, "pageVoiceMailLayout"); 

    voiceMailTextLabel = new QLabel( pageVoiceMail, "voiceMailTextLabel" );
    voiceMailTextLabel->setPaletteBackgroundColor( QColor( 150, 150, 150 ) );
    QFont voiceMailTextLabel_font(  voiceMailTextLabel->font() );
    voiceMailTextLabel_font.setPointSize( 21 );
    voiceMailTextLabel->setFont( voiceMailTextLabel_font ); 
    voiceMailTextLabel->setFrameShape( QLabel::Box );
    voiceMailTextLabel->setIndent( 10 );
    pageVoiceMailLayout->addWidget( voiceMailTextLabel );

    layout39 = new QGridLayout( 0, 1, 1, 0, 6, "layout39"); 

    vmAddressTextLabel = new QLabel( pageVoiceMail, "vmAddressTextLabel" );

    layout39->addWidget( vmAddressTextLabel, 0, 0 );

    vmAddressLineEdit = new QLineEdit( pageVoiceMail, "vmAddressLineEdit" );

    layout39->addWidget( vmAddressLineEdit, 0, 1 );

    layout38 = new QHBoxLayout( 0, 0, 6, "layout38"); 

    mwiTypeComboBox = new QComboBox( FALSE, pageVoiceMail, "mwiTypeComboBox" );
    layout38->addWidget( mwiTypeComboBox );
    spacer39 = new QSpacerItem( 221, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout38->addItem( spacer39 );

    layout39->addLayout( layout38, 1, 1 );

    mwiTypeTextLabel = new QLabel( pageVoiceMail, "mwiTypeTextLabel" );

    layout39->addWidget( mwiTypeTextLabel, 1, 0 );
    pageVoiceMailLayout->addLayout( layout39 );

    mwiSollicitedGroupBox = new QGroupBox( pageVoiceMail, "mwiSollicitedGroupBox" );
    mwiSollicitedGroupBox->setColumnLayout(0, Qt::Vertical );
    mwiSollicitedGroupBox->layout()->setSpacing( 6 );
    mwiSollicitedGroupBox->layout()->setMargin( 11 );
    mwiSollicitedGroupBoxLayout = new QVBoxLayout( mwiSollicitedGroupBox->layout() );
    mwiSollicitedGroupBoxLayout->setAlignment( Qt::AlignTop );

    layout36 = new QGridLayout( 0, 1, 1, 0, 6, "layout36"); 
    spacer35 = new QSpacerItem( 120, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout36->addItem( spacer35, 2, 0 );

    mwiDurationTextLabel = new QLabel( mwiSollicitedGroupBox, "mwiDurationTextLabel" );

    layout36->addWidget( mwiDurationTextLabel, 3, 0 );

    mwiUserTextLabel = new QLabel( mwiSollicitedGroupBox, "mwiUserTextLabel" );

    layout36->addWidget( mwiUserTextLabel, 0, 0 );

    mwiServerLineEdit = new QLineEdit( mwiSollicitedGroupBox, "mwiServerLineEdit" );

    layout36->addWidget( mwiServerLineEdit, 1, 1 );

    layout35 = new QHBoxLayout( 0, 0, 6, "layout35"); 

    mwiDurationSpinBox = new QSpinBox( mwiSollicitedGroupBox, "mwiDurationSpinBox" );
    mwiDurationSpinBox->setMinimumSize( QSize( 90, 0 ) );
    mwiDurationSpinBox->setMaxValue( 999999 );
    mwiDurationSpinBox->setLineStep( 100 );
    layout35->addWidget( mwiDurationSpinBox );

    mwiSecondsTextLabel = new QLabel( mwiSollicitedGroupBox, "mwiSecondsTextLabel" );
    layout35->addWidget( mwiSecondsTextLabel );
    spacer36 = new QSpacerItem( 190, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout35->addItem( spacer36 );

    layout36->addLayout( layout35, 3, 1 );

    mwiUserLineEdit = new QLineEdit( mwiSollicitedGroupBox, "mwiUserLineEdit" );

    layout36->addWidget( mwiUserLineEdit, 0, 1 );

    mwiServerTextLabel = new QLabel( mwiSollicitedGroupBox, "mwiServerTextLabel" );

    layout36->addWidget( mwiServerTextLabel, 1, 0 );

    mwiViaProxyCheckBox = new QCheckBox( mwiSollicitedGroupBox, "mwiViaProxyCheckBox" );

    layout36->addWidget( mwiViaProxyCheckBox, 2, 1 );
    mwiSollicitedGroupBoxLayout->addLayout( layout36 );
    pageVoiceMailLayout->addWidget( mwiSollicitedGroupBox );
    spacer38_3 = new QSpacerItem( 20, 211, QSizePolicy::Minimum, QSizePolicy::Expanding );
    pageVoiceMailLayout->addItem( spacer38_3 );
    settingsWidgetStack->addWidget( pageVoiceMail, 10 );

    pageIM = new QWidget( settingsWidgetStack, "pageIM" );
    pageIMLayout = new QVBoxLayout( pageIM, 11, 6, "pageIMLayout"); 

    imTextLabel = new QLabel( pageIM, "imTextLabel" );
    imTextLabel->setPaletteBackgroundColor( QColor( 150, 150, 150 ) );
    QFont imTextLabel_font(  imTextLabel->font() );
    imTextLabel_font.setPointSize( 21 );
    imTextLabel->setFont( imTextLabel_font ); 
    imTextLabel->setFrameShape( QLabel::Box );
    imTextLabel->setIndent( 10 );
    pageIMLayout->addWidget( imTextLabel );

    layout74 = new QHBoxLayout( 0, 0, 6, "layout74"); 

    imMaxSessionsTextLabel = new QLabel( pageIM, "imMaxSessionsTextLabel" );
    layout74->addWidget( imMaxSessionsTextLabel );

    imMaxSessionsSpinBox = new QSpinBox( pageIM, "imMaxSessionsSpinBox" );
    imMaxSessionsSpinBox->setMaxValue( 65535 );
    layout74->addWidget( imMaxSessionsSpinBox );
    spacer42 = new QSpacerItem( 201, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout74->addItem( spacer42 );
    pageIMLayout->addLayout( layout74 );

    isComposingCheckBox = new QCheckBox( pageIM, "isComposingCheckBox" );
    pageIMLayout->addWidget( isComposingCheckBox );
    spacer40_3 = new QSpacerItem( 20, 350, QSizePolicy::Minimum, QSizePolicy::Expanding );
    pageIMLayout->addItem( spacer40_3 );
    settingsWidgetStack->addWidget( pageIM, 11 );

    pagePresence = new QWidget( settingsWidgetStack, "pagePresence" );
    pagePresenceLayout = new QVBoxLayout( pagePresence, 11, 6, "pagePresenceLayout"); 

    presTextLabel = new QLabel( pagePresence, "presTextLabel" );
    presTextLabel->setPaletteBackgroundColor( QColor( 150, 150, 150 ) );
    QFont presTextLabel_font(  presTextLabel->font() );
    presTextLabel_font.setPointSize( 21 );
    presTextLabel->setFont( presTextLabel_font ); 
    presTextLabel->setFrameShape( QLabel::Box );
    presTextLabel->setIndent( 10 );
    pagePresenceLayout->addWidget( presTextLabel );

    presYourGroupBox = new QGroupBox( pagePresence, "presYourGroupBox" );
    presYourGroupBox->setColumnLayout(0, Qt::Vertical );
    presYourGroupBox->layout()->setSpacing( 6 );
    presYourGroupBox->layout()->setMargin( 11 );
    presYourGroupBoxLayout = new QVBoxLayout( presYourGroupBox->layout() );
    presYourGroupBoxLayout->setAlignment( Qt::AlignTop );

    presPublishCheckBox = new QCheckBox( presYourGroupBox, "presPublishCheckBox" );
    presYourGroupBoxLayout->addWidget( presPublishCheckBox );

    layout75 = new QHBoxLayout( 0, 0, 6, "layout75"); 

    presPublishTimerTextLabel = new QLabel( presYourGroupBox, "presPublishTimerTextLabel" );
    layout75->addWidget( presPublishTimerTextLabel );

    presPublishTimeSpinBox = new QSpinBox( presYourGroupBox, "presPublishTimeSpinBox" );
    presPublishTimeSpinBox->setMaxValue( 999999 );
    presPublishTimeSpinBox->setLineStep( 100 );
    layout75->addWidget( presPublishTimeSpinBox );
    spacer43 = new QSpacerItem( 231, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout75->addItem( spacer43 );
    presYourGroupBoxLayout->addLayout( layout75 );
    pagePresenceLayout->addWidget( presYourGroupBox );

    groupBox25 = new QGroupBox( pagePresence, "groupBox25" );
    groupBox25->setColumnLayout(0, Qt::Vertical );
    groupBox25->layout()->setSpacing( 6 );
    groupBox25->layout()->setMargin( 11 );
    groupBox25Layout = new QVBoxLayout( groupBox25->layout() );
    groupBox25Layout->setAlignment( Qt::AlignTop );

    layout76 = new QHBoxLayout( 0, 0, 6, "layout76"); 

    presSubscribeTimerTextLabel = new QLabel( groupBox25, "presSubscribeTimerTextLabel" );
    layout76->addWidget( presSubscribeTimerTextLabel );

    presSubscribeTimeSpinBox = new QSpinBox( groupBox25, "presSubscribeTimeSpinBox" );
    presSubscribeTimeSpinBox->setMaxValue( 999999 );
    presSubscribeTimeSpinBox->setLineStep( 100 );
    layout76->addWidget( presSubscribeTimeSpinBox );
    spacer44 = new QSpacerItem( 191, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout76->addItem( spacer44 );
    groupBox25Layout->addLayout( layout76 );
    pagePresenceLayout->addWidget( groupBox25 );
    spacer45 = new QSpacerItem( 20, 281, QSizePolicy::Minimum, QSizePolicy::Expanding );
    pagePresenceLayout->addItem( spacer45 );
    settingsWidgetStack->addWidget( pagePresence, 12 );

    UserProfileFormLayout->addMultiCellWidget( settingsWidgetStack, 1, 2, 1, 1 );
    languageChange();
    resize( QSize(783, 594).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( categoryListBox, SIGNAL( highlighted(int) ), this, SLOT( showCategory(int) ) );
    connect( cancelPushButton, SIGNAL( clicked() ), this, SLOT( reject() ) );
    connect( okPushButton, SIGNAL( clicked() ), this, SLOT( validate() ) );
    connect( useProxyCheckBox, SIGNAL( toggled(bool) ), proxyTextLabel, SLOT( setEnabled(bool) ) );
    connect( useProxyCheckBox, SIGNAL( toggled(bool) ), proxyLineEdit, SLOT( setEnabled(bool) ) );
    connect( useProxyCheckBox, SIGNAL( toggled(bool) ), allRequestsCheckBox, SLOT( setEnabled(bool) ) );
    connect( allowRedirectionCheckBox, SIGNAL( toggled(bool) ), askUserRedirectCheckBox, SLOT( setEnabled(bool) ) );
    connect( allowRedirectionCheckBox, SIGNAL( toggled(bool) ), maxRedirectTextLabel, SLOT( setEnabled(bool) ) );
    connect( allowRedirectionCheckBox, SIGNAL( toggled(bool) ), maxRedirectSpinBox, SLOT( setEnabled(bool) ) );
    connect( useProxyCheckBox, SIGNAL( toggled(bool) ), proxyNonResolvableCheckBox, SLOT( setEnabled(bool) ) );
    connect( natStaticRadioButton, SIGNAL( toggled(bool) ), publicIPTextLabel, SLOT( setEnabled(bool) ) );
    connect( natStaticRadioButton, SIGNAL( toggled(bool) ), publicIPLineEdit, SLOT( setEnabled(bool) ) );
    connect( natStunRadioButton, SIGNAL( toggled(bool) ), stunServerTextLabel, SLOT( setEnabled(bool) ) );
    connect( natStunRadioButton, SIGNAL( toggled(bool) ), stunServerLineEdit, SLOT( setEnabled(bool) ) );
    connect( allowReferCheckBox, SIGNAL( toggled(bool) ), askUserReferCheckBox, SLOT( setEnabled(bool) ) );
    connect( allowReferCheckBox, SIGNAL( toggled(bool) ), refereeHoldCheckBox, SLOT( setEnabled(bool) ) );
    connect( profileComboBox, SIGNAL( activated(const QString&) ), this, SLOT( changeProfile(const QString&) ) );
    connect( openRingtoneToolButton, SIGNAL( clicked() ), this, SLOT( chooseRingtone() ) );
    connect( openRingbackToolButton, SIGNAL( clicked() ), this, SLOT( chooseRingback() ) );
    connect( openIncomingCallScriptToolButton, SIGNAL( clicked() ), this, SLOT( chooseIncomingCallScript() ) );
    connect( addCodecPushButton, SIGNAL( clicked() ), this, SLOT( addCodec() ) );
    connect( rmvCodecPushButton, SIGNAL( clicked() ), this, SLOT( removeCodec() ) );
    connect( upCodecPushButton, SIGNAL( clicked() ), this, SLOT( upCodec() ) );
    connect( downCodecPushButton, SIGNAL( clicked() ), this, SLOT( downCodec() ) );
    connect( availCodecListBox, SIGNAL( doubleClicked(QListBoxItem*) ), this, SLOT( addCodec() ) );
    connect( activeCodecListBox, SIGNAL( doubleClicked(QListBoxItem*) ), this, SLOT( removeCodec() ) );
    connect( openInCallAnsweredToolButton, SIGNAL( clicked() ), this, SLOT( chooseInCallAnsweredScript() ) );
    connect( openInCallFailedToolButton, SIGNAL( clicked() ), this, SLOT( chooseInCallFailedScript() ) );
    connect( openLocalReleaseToolButton, SIGNAL( clicked() ), this, SLOT( chooseLocalReleaseScript() ) );
    connect( openOutCallAnsweredToolButton, SIGNAL( clicked() ), this, SLOT( chooseOutCallAnsweredScript() ) );
    connect( openOutCallFailedToolButton, SIGNAL( clicked() ), this, SLOT( chooseOutCallFailedScript() ) );
    connect( openOutCallToolButton, SIGNAL( clicked() ), this, SLOT( chooseOutgoingCallScript() ) );
    connect( openRemoteReleaseToolButton, SIGNAL( clicked() ), this, SLOT( chooseRemoteReleaseScript() ) );
    connect( upConversionPushButton, SIGNAL( clicked() ), this, SLOT( upConversion() ) );
    connect( downConversionPushButton, SIGNAL( clicked() ), this, SLOT( downConversion() ) );
    connect( addConversionPushButton, SIGNAL( clicked() ), this, SLOT( addConversion() ) );
    connect( editConversionPushButton, SIGNAL( clicked() ), this, SLOT( editConversion() ) );
    connect( removePushButton, SIGNAL( clicked() ), this, SLOT( removeConversion() ) );
    connect( testConversionPushButton, SIGNAL( clicked() ), this, SLOT( testConversion() ) );
    connect( zrtpEnabledCheckBox, SIGNAL( toggled(bool) ), zrtpSettingsGroupBox, SLOT( setEnabled(bool) ) );
    connect( mwiTypeComboBox, SIGNAL( activated(int) ), this, SLOT( changeMWIType(int) ) );
    connect( regAddQvalueCheckBox, SIGNAL( toggled(bool) ), regQvalueLineEdit, SLOT( setEnabled(bool) ) );
    connect( sipTransportComboBox, SIGNAL( activated(int) ), this, SLOT( changeSipTransportProtocol(int) ) );
    connect( spxDspAgcCheckBox, SIGNAL( toggled(bool) ), spxDspAgcLevelTextLabel, SLOT( setEnabled(bool) ) );
    connect( spxDspAgcCheckBox, SIGNAL( toggled(bool) ), spxDspAgcLevelSpinBox, SLOT( setEnabled(bool) ) );
    connect( natStunRadioButton, SIGNAL( toggled(bool) ), natKeepaliveCheckBox, SLOT( setDisabled(bool) ) );

    // tab order
    setTabOrder( displayLineEdit, usernameLineEdit );
    setTabOrder( usernameLineEdit, domainLineEdit );
    setTabOrder( domainLineEdit, organizationLineEdit );
    setTabOrder( organizationLineEdit, authRealmLineEdit );
    setTabOrder( authRealmLineEdit, authNameLineEdit );
    setTabOrder( authNameLineEdit, authPasswordLineEdit );
    setTabOrder( authPasswordLineEdit, authAkaOpLineEdit );
    setTabOrder( authAkaOpLineEdit, authAkaAmfLineEdit );
    setTabOrder( authAkaAmfLineEdit, registrarLineEdit );
    setTabOrder( registrarLineEdit, expirySpinBox );
    setTabOrder( expirySpinBox, regAtStartupCheckBox );
    setTabOrder( regAtStartupCheckBox, regAddQvalueCheckBox );
    setTabOrder( regAddQvalueCheckBox, regQvalueLineEdit );
    setTabOrder( regQvalueLineEdit, useProxyCheckBox );
    setTabOrder( useProxyCheckBox, proxyLineEdit );
    setTabOrder( proxyLineEdit, allRequestsCheckBox );
    setTabOrder( allRequestsCheckBox, proxyNonResolvableCheckBox );
    setTabOrder( proxyNonResolvableCheckBox, vmAddressLineEdit );
    setTabOrder( vmAddressLineEdit, mwiTypeComboBox );
    setTabOrder( mwiTypeComboBox, mwiUserLineEdit );
    setTabOrder( mwiUserLineEdit, mwiServerLineEdit );
    setTabOrder( mwiServerLineEdit, mwiViaProxyCheckBox );
    setTabOrder( mwiViaProxyCheckBox, mwiDurationSpinBox );
    setTabOrder( mwiDurationSpinBox, imMaxSessionsSpinBox );
    setTabOrder( imMaxSessionsSpinBox, isComposingCheckBox );
    setTabOrder( isComposingCheckBox, presPublishCheckBox );
    setTabOrder( presPublishCheckBox, presPublishTimeSpinBox );
    setTabOrder( presPublishTimeSpinBox, presSubscribeTimeSpinBox );
    setTabOrder( presSubscribeTimeSpinBox, rtpAudioTabWidget );
    setTabOrder( rtpAudioTabWidget, availCodecListBox );
    setTabOrder( availCodecListBox, addCodecPushButton );
    setTabOrder( addCodecPushButton, rmvCodecPushButton );
    setTabOrder( rmvCodecPushButton, activeCodecListBox );
    setTabOrder( activeCodecListBox, upCodecPushButton );
    setTabOrder( upCodecPushButton, downCodecPushButton );
    setTabOrder( downCodecPushButton, ptimeSpinBox );
    setTabOrder( ptimeSpinBox, inFarEndCodecPrefCheckBox );
    setTabOrder( inFarEndCodecPrefCheckBox, outFarEndCodecPrefCheckBox );
    setTabOrder( outFarEndCodecPrefCheckBox, spxDspAgcCheckBox );
    setTabOrder( spxDspAgcCheckBox, spxDspAgcLevelSpinBox );
    setTabOrder( spxDspAgcLevelSpinBox, spxDspVadCheckBox );
    setTabOrder( spxDspVadCheckBox, spxDspNrdCheckBox );
    setTabOrder( spxDspNrdCheckBox, spxDspAecCheckBox );
    setTabOrder( spxDspAecCheckBox, ilbcPayloadSpinBox );
    setTabOrder( ilbcPayloadSpinBox, ilbcPayloadSizeComboBox );
    setTabOrder( ilbcPayloadSizeComboBox, spxVbrCheckBox );
    setTabOrder( spxVbrCheckBox, spxDtxCheckBox );
    setTabOrder( spxDtxCheckBox, spxPenhCheckBox );
    setTabOrder( spxPenhCheckBox, spxQualitySpinBox );
    setTabOrder( spxQualitySpinBox, spxComplexitySpinBox );
    setTabOrder( spxComplexitySpinBox, spxNbPayloadSpinBox );
    setTabOrder( spxNbPayloadSpinBox, spxWbPayloadSpinBox );
    setTabOrder( spxWbPayloadSpinBox, spxUwbPayloadSpinBox );
    setTabOrder( spxUwbPayloadSpinBox, g72616PayloadSpinBox );
    setTabOrder( g72616PayloadSpinBox, g72624PayloadSpinBox );
    setTabOrder( g72624PayloadSpinBox, g72632PayloadSpinBox );
    setTabOrder( g72632PayloadSpinBox, g72640PayloadSpinBox );
    setTabOrder( g72640PayloadSpinBox, g726PackComboBox );
    setTabOrder( g726PackComboBox, dtmfTransportComboBox );
    setTabOrder( dtmfTransportComboBox, dtmfPayloadTypeSpinBox );
    setTabOrder( dtmfPayloadTypeSpinBox, dtmfDurationSpinBox );
    setTabOrder( dtmfDurationSpinBox, dtmfPauseSpinBox );
    setTabOrder( dtmfPauseSpinBox, dtmfVolumeSpinBox );
    setTabOrder( dtmfVolumeSpinBox, sipProtoclTabWidget );
    setTabOrder( sipProtoclTabWidget, holdVariantComboBox );
    setTabOrder( holdVariantComboBox, maxForwardsCheckBox );
    setTabOrder( maxForwardsCheckBox, missingContactCheckBox );
    setTabOrder( missingContactCheckBox, regTimeCheckBox );
    setTabOrder( regTimeCheckBox, compactHeadersCheckBox );
    setTabOrder( compactHeadersCheckBox, multiValuesListCheckBox );
    setTabOrder( multiValuesListCheckBox, useDomainInContactCheckBox );
    setTabOrder( useDomainInContactCheckBox, allowSdpChangeCheckBox );
    setTabOrder( allowSdpChangeCheckBox, allowRedirectionCheckBox );
    setTabOrder( allowRedirectionCheckBox, askUserRedirectCheckBox );
    setTabOrder( askUserRedirectCheckBox, maxRedirectSpinBox );
    setTabOrder( maxRedirectSpinBox, ext100relComboBox );
    setTabOrder( ext100relComboBox, extReplacesCheckBox );
    setTabOrder( extReplacesCheckBox, allowReferCheckBox );
    setTabOrder( allowReferCheckBox, askUserReferCheckBox );
    setTabOrder( askUserReferCheckBox, refereeHoldCheckBox );
    setTabOrder( refereeHoldCheckBox, referrerHoldCheckBox );
    setTabOrder( referrerHoldCheckBox, refreshReferSubCheckBox );
    setTabOrder( refreshReferSubCheckBox, referAorCheckBox );
    setTabOrder( referAorCheckBox, pPreferredIdCheckBox );
    setTabOrder( pPreferredIdCheckBox, sipTransportComboBox );
    setTabOrder( sipTransportComboBox, udpThresholdSpinBox );
    setTabOrder( udpThresholdSpinBox, natNoneRadioButton );
    setTabOrder( natNoneRadioButton, natStaticRadioButton );
    setTabOrder( natStaticRadioButton, publicIPLineEdit );
    setTabOrder( publicIPLineEdit, natStunRadioButton );
    setTabOrder( natStunRadioButton, stunServerLineEdit );
    setTabOrder( stunServerLineEdit, persistentTcpCheckBox );
    setTabOrder( persistentTcpCheckBox, displayTelUserCheckBox );
    setTabOrder( displayTelUserCheckBox, numericalUserIsTelCheckBox );
    setTabOrder( numericalUserIsTelCheckBox, removeSpecialCheckBox );
    setTabOrder( removeSpecialCheckBox, specialLineEdit );
    setTabOrder( specialLineEdit, useTelUriCheckBox );
    setTabOrder( useTelUriCheckBox, conversionListView );
    setTabOrder( conversionListView, upConversionPushButton );
    setTabOrder( upConversionPushButton, downConversionPushButton );
    setTabOrder( downConversionPushButton, addConversionPushButton );
    setTabOrder( addConversionPushButton, removePushButton );
    setTabOrder( removePushButton, editConversionPushButton );
    setTabOrder( editConversionPushButton, testConversionLineEdit );
    setTabOrder( testConversionLineEdit, testConversionPushButton );
    setTabOrder( testConversionPushButton, tmrNoanswerSpinBox );
    setTabOrder( tmrNoanswerSpinBox, tmrNatKeepaliveSpinBox );
    setTabOrder( tmrNatKeepaliveSpinBox, ringtoneLineEdit );
    setTabOrder( ringtoneLineEdit, ringbackLineEdit );
    setTabOrder( ringbackLineEdit, openRingtoneToolButton );
    setTabOrder( openRingtoneToolButton, openRingbackToolButton );
    setTabOrder( openRingbackToolButton, incomingCallScriptLineEdit );
    setTabOrder( incomingCallScriptLineEdit, openIncomingCallScriptToolButton );
    setTabOrder( openIncomingCallScriptToolButton, inCallAnsweredLineEdit );
    setTabOrder( inCallAnsweredLineEdit, openInCallAnsweredToolButton );
    setTabOrder( openInCallAnsweredToolButton, inCallFailedLineEdit );
    setTabOrder( inCallFailedLineEdit, openInCallFailedToolButton );
    setTabOrder( openInCallFailedToolButton, outCallLineEdit );
    setTabOrder( outCallLineEdit, openOutCallToolButton );
    setTabOrder( openOutCallToolButton, outCallAnsweredLineEdit );
    setTabOrder( outCallAnsweredLineEdit, openOutCallAnsweredToolButton );
    setTabOrder( openOutCallAnsweredToolButton, outCallFailedLineEdit );
    setTabOrder( outCallFailedLineEdit, openOutCallFailedToolButton );
    setTabOrder( openOutCallFailedToolButton, localReleaseLineEdit );
    setTabOrder( localReleaseLineEdit, openLocalReleaseToolButton );
    setTabOrder( openLocalReleaseToolButton, remoteReleaseLineEdit );
    setTabOrder( remoteReleaseLineEdit, openRemoteReleaseToolButton );
    setTabOrder( openRemoteReleaseToolButton, zrtpEnabledCheckBox );
    setTabOrder( zrtpEnabledCheckBox, zrtpSendIfSupportedCheckBox );
    setTabOrder( zrtpSendIfSupportedCheckBox, zrtpSdpCheckBox );
    setTabOrder( zrtpSdpCheckBox, zrtpGoClearWarningCheckBox );
    setTabOrder( zrtpGoClearWarningCheckBox, okPushButton );
    setTabOrder( okPushButton, cancelPushButton );
    setTabOrder( cancelPushButton, profileComboBox );
    setTabOrder( profileComboBox, categoryListBox );

    // buddies
    usernameTextLabel->setBuddy( usernameLineEdit );
    domainTextLabel->setBuddy( domainLineEdit );
    organizationTextLabel->setBuddy( organizationLineEdit );
    dislpayTextLabel->setBuddy( displayLineEdit );
    authRealmTextLabel->setBuddy( authRealmLineEdit );
    authNameTextLabel->setBuddy( authNameLineEdit );
    authAkaAmfTextLabel->setBuddy( authAkaAmfLineEdit );
    authAkaOpTextLabel->setBuddy( authAkaOpLineEdit );
    authPasswordTextLabel->setBuddy( authPasswordLineEdit );
    registrarTextLabel->setBuddy( registrarLineEdit );
    expiryTextLabel->setBuddy( expirySpinBox );
    proxyTextLabel->setBuddy( proxyLineEdit );
    ptimeTextLabel->setBuddy( ptimeSpinBox );
    spxDspAgcLevelTextLabel->setBuddy( spxDspAgcLevelSpinBox );
    ilbcPayloadTextLabel->setBuddy( ilbcPayloadSpinBox );
    ilbcPayloadSizeTextLabel->setBuddy( ilbcPayloadSizeComboBox );
    spxUwbPayloadTextLabel->setBuddy( spxUwbPayloadSpinBox );
    spxWbPayloadTextLabel->setBuddy( spxWbPayloadSpinBox );
    spxQualityTextLabel->setBuddy( spxQualitySpinBox );
    spxComplexityTextLabel->setBuddy( spxComplexitySpinBox );
    spxNbPayloadTextLabel->setBuddy( spxNbPayloadSpinBox );
    g72640PayloadTypeTextLabel->setBuddy( g72640PayloadSpinBox );
    g72624PayloadTypeTextLabel->setBuddy( g72624PayloadSpinBox );
    g72632PayloadTypeTextLabel->setBuddy( g72632PayloadSpinBox );
    g72616PayloadTypeTextLabel->setBuddy( g72616PayloadSpinBox );
    g726PackingTextLabel->setBuddy( g726PackComboBox );
    dtmfVolumeTextLabel->setBuddy( dtmfVolumeSpinBox );
    dtmfDurationTextLabel->setBuddy( dtmfDurationSpinBox );
    dtmfPayloadTypeTextLabel->setBuddy( dtmfPayloadTypeSpinBox );
    dtmfPauseTextLabel->setBuddy( dtmfPauseSpinBox );
    dtmfTransportTextLabel->setBuddy( dtmfTransportComboBox );
    holdVariantTextLabel->setBuddy( holdVariantComboBox );
    maxRedirectTextLabel->setBuddy( maxRedirectSpinBox );
    ext100relTextLabel->setBuddy( ext100relComboBox );
    sipTransportTextLabel->setBuddy( sipTransportComboBox );
    udpThresholdTextLabel->setBuddy( udpThresholdSpinBox );
    publicIPTextLabel->setBuddy( publicIPLineEdit );
    stunServerTextLabel->setBuddy( stunServerLineEdit );
    specialTextLabel->setBuddy( specialLineEdit );
    tmrNatKeepaliveTextLabel->setBuddy( tmrNatKeepaliveSpinBox );
    tmrNoanswerTextLabel->setBuddy( tmrNoanswerSpinBox );
    ringbackTextLabel->setBuddy( ringbackLineEdit );
    ringtoneTextLabel->setBuddy( ringtoneLineEdit );
    localReleaseTextLabel->setBuddy( inCallFailedLineEdit );
    outCallAnsweredTextLabel->setBuddy( inCallAnsweredLineEdit );
    inCallFailedTextLabel->setBuddy( inCallFailedLineEdit );
    incomingCallScriptTextLabel->setBuddy( incomingCallScriptLineEdit );
    remoteReleaseTextLabel->setBuddy( inCallFailedLineEdit );
    inCallAnsweredTextLabel->setBuddy( inCallAnsweredLineEdit );
    outCallTextLabel->setBuddy( incomingCallScriptLineEdit );
    outCallFailedTextLabel->setBuddy( inCallFailedLineEdit );
    vmAddressTextLabel->setBuddy( vmAddressLineEdit );
    mwiTypeTextLabel->setBuddy( mwiTypeComboBox );
    mwiDurationTextLabel->setBuddy( mwiDurationSpinBox );
    mwiUserTextLabel->setBuddy( mwiUserLineEdit );
    mwiServerTextLabel->setBuddy( mwiServerLineEdit );
    imMaxSessionsTextLabel->setBuddy( imMaxSessionsSpinBox );
    presPublishTimerTextLabel->setBuddy( presPublishTimeSpinBox );
    presSubscribeTimerTextLabel->setBuddy( presSubscribeTimeSpinBox );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
UserProfileForm::~UserProfileForm()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void UserProfileForm::languageChange()
{
    setCaption( tr( "Twinkle - User Profile" ) );
    profileTextLabel->setText( tr( "User profile:" ) );
    QWhatsThis::add( profileComboBox, tr( "Select which profile you want to edit." ) );
    categoryListBox->clear();
    categoryListBox->insertItem( QPixmap::fromMimeSource( "penguin.png" ), tr( "User" ) );
    categoryListBox->insertItem( QPixmap::fromMimeSource( "package_network.png" ), tr( "SIP server" ) );
    categoryListBox->insertItem( QPixmap::fromMimeSource( "mwi_none.png" ), tr( "Voice mail" ) );
    categoryListBox->insertItem( QPixmap::fromMimeSource( "message32.png" ), tr( "Instant message" ) );
    categoryListBox->insertItem( QPixmap::fromMimeSource( "presence.png" ), tr( "Presence" ) );
    categoryListBox->insertItem( QPixmap::fromMimeSource( "kmix.png" ), tr( "RTP audio" ) );
    categoryListBox->insertItem( QPixmap::fromMimeSource( "package_system.png" ), tr( "SIP protocol" ) );
    categoryListBox->insertItem( QPixmap::fromMimeSource( "yast_babelfish.png" ), tr( "Transport/NAT" ) );
    categoryListBox->insertItem( QPixmap::fromMimeSource( "yast_PhoneTTOffhook.png" ), tr( "Address format" ) );
    categoryListBox->insertItem( QPixmap::fromMimeSource( "clock.png" ), tr( "Timers" ) );
    categoryListBox->insertItem( QPixmap::fromMimeSource( "knotify.png" ), tr( "Ring tones" ) );
    categoryListBox->insertItem( QPixmap::fromMimeSource( "edit.png" ), tr( "Scripts" ) );
    categoryListBox->insertItem( QPixmap::fromMimeSource( "encrypted32.png" ), tr( "Security" ) );
    QWhatsThis::add( categoryListBox, tr( "Select a category for which you want to see or modify the settings." ) );
    okPushButton->setText( tr( "&OK" ) );
    okPushButton->setAccel( QKeySequence( tr( "Alt+O" ) ) );
    QWhatsThis::add( okPushButton, tr( "Accept and save your changes." ) );
    cancelPushButton->setText( tr( "&Cancel" ) );
    cancelPushButton->setAccel( QKeySequence( tr( "Alt+C" ) ) );
    QWhatsThis::add( cancelPushButton, tr( "Undo all your changes and close the window." ) );
    userTitleTextLabel->setText( tr( "User" ) );
    accountGroupBox->setTitle( tr( "SIP account" ) );
    usernameTextLabel->setText( tr( "&User name*:" ) );
    domainTextLabel->setText( tr( "&Domain*:" ) );
    organizationTextLabel->setText( tr( "Or&ganization:" ) );
    QWhatsThis::add( usernameLineEdit, tr( "The SIP user name given to you by your provider. It is the user part in your SIP address, <b>username</b>@domain.com This could be a telephone number.\n"
"<br><br>\n"
"This field is mandatory." ) );
    QWhatsThis::add( domainLineEdit, tr( "The domain part of your SIP address, username@<b>domain.com</b>. Instead of a real domain this could also be the hostname or IP address of your <b>SIP proxy</b>. If you want direct IP phone to IP phone communications then you fill in the hostname or IP address of your computer.\n"
"<br><br>\n"
"This field is mandatory." ) );
    QWhatsThis::add( organizationLineEdit, tr( "You may fill in the name of your organization. When you make a call, this might be shown to the called party." ) );
    QWhatsThis::add( displayLineEdit, tr( "This is just your full name, e.g. John Doe. It is used as a display name. When you make a call, this display name might be shown to the called party." ) );
    dislpayTextLabel->setText( tr( "&Your name:" ) );
    authenticationGroupBox->setTitle( tr( "SIP authentication" ) );
    authRealmTextLabel->setText( tr( "&Realm:" ) );
    authNameTextLabel->setText( tr( "Authentication &name:" ) );
    QWhatsThis::add( authRealmLineEdit, tr( "The realm for authentication. This value must be provided by your SIP provider. If you leave this field empty, then Twinkle will try the user name and password for any realm that it will be challenged with." ) );
    QWhatsThis::add( authNameLineEdit, tr( "Your SIP authentication name. Quite often this is the same as your SIP user name. It can be a different name though." ) );
    authAkaAmfTextLabel->setText( tr( "AKA AM&F:" ) );
    authAkaOpTextLabel->setText( tr( "A&KA OP:" ) );
    QWhatsThis::add( authPasswordLineEdit, tr( "Your password for authentication." ) );
    authPasswordTextLabel->setText( tr( "&Password:" ) );
    QWhatsThis::add( authAkaAmfLineEdit, tr( "Authentication management field for AKAv1-MD5 authentication." ) );
    QWhatsThis::add( authAkaOpLineEdit, tr( "Operator variant key for AKAv1-MD5 authentication." ) );
    sipServerTitleTextLabel->setText( tr( "SIP server" ) );
    registrarGroupBox->setTitle( tr( "Registrar" ) );
    registrarTextLabel->setText( tr( "&Registrar:" ) );
    QWhatsThis::add( registrarLineEdit, tr( "The hostname, domain name or IP address of your registrar. If you use an outbound proxy that is the same as your registrar, then you may leave this field empty and only fill in the address of the outbound proxy." ) );
    expiryTextLabel->setText( tr( "&Expiry:" ) );
    QWhatsThis::add( expirySpinBox, tr( "The registration expiry time that Twinkle will request." ) );
    secondsTextLabel->setText( tr( "seconds" ) );
    regAtStartupCheckBox->setText( tr( "Re&gister at startup" ) );
    regAtStartupCheckBox->setAccel( QKeySequence( tr( "Alt+G" ) ) );
    QWhatsThis::add( regAtStartupCheckBox, tr( "Indicates if Twinkle should automatically register when you run this user profile. You should disable this when you want to do direct IP phone to IP phone communication without a SIP proxy." ) );
    regAddQvalueCheckBox->setText( tr( "Add q-value to registration" ) );
    QWhatsThis::add( regAddQvalueCheckBox, tr( "The q-value indicates the priority of your registered device. If besides Twinkle you register other SIP devices for this account, then the network may use these values to determine which device to try first when delivering a call." ) );
    QWhatsThis::add( regQvalueLineEdit, tr( "The q-value is a value between 0.000 and 1.000. A higher value means a higher priority." ) );
    outboundProxyGroupBox->setTitle( tr( "Outbound Proxy" ) );
    useProxyCheckBox->setText( tr( "&Use outbound proxy" ) );
    useProxyCheckBox->setAccel( QKeySequence( tr( "Alt+U" ) ) );
    QWhatsThis::add( useProxyCheckBox, tr( "Indicates if Twinkle should use an outbound proxy. If an outbound proxy is used then all SIP requests are sent to this proxy. Without an outbound proxy, Twinkle will try to resolve the SIP address that you type for a call invitation for example to an IP address and send the SIP request there." ) );
    proxyTextLabel->setText( tr( "Outbound &proxy:" ) );
    proxyNonResolvableCheckBox->setText( tr( "&Don't send a request to proxy if its destination can be resolved locally." ) );
    proxyNonResolvableCheckBox->setAccel( QKeySequence( tr( "Alt+D" ) ) );
    QWhatsThis::add( proxyNonResolvableCheckBox, tr( "When you tick this option Twinkle will first try to resolve a SIP address to an IP address itself. If it can, then the SIP request will be sent there. Only when it cannot resolve the address, it will send the SIP request to the proxy (note that an in-dialog request will only be sent to the proxy in this case when you also ticked the previous option.)" ) );
    QWhatsThis::add( proxyLineEdit, tr( "The hostname, domain name or IP address of your outbound proxy." ) );
    allRequestsCheckBox->setText( tr( "&Send in-dialog requests to proxy" ) );
    allRequestsCheckBox->setAccel( QKeySequence( tr( "Alt+S" ) ) );
    QWhatsThis::add( allRequestsCheckBox, tr( "SIP requests within a SIP dialog are normally sent to the address in the contact-headers exchanged during call setup. If you tick this box, that address is ignored and in-dialog request are also sent to the outbound proxy." ) );
    rtpAudioTitleTextLabel->setText( tr( "RTP audio" ) );
    ptimeTextLabel->setText( tr( "&G.711/G.726 payload size:" ) );
    QWhatsThis::add( ptimeSpinBox, tr( "The preferred payload size for the G.711 and G.726 codecs." ) );
    payloadMsTextLabel->setText( tr( "ms" ) );
    inFarEndCodecPrefCheckBox->setText( tr( "&Follow codec preference from far end on incoming calls" ) );
    inFarEndCodecPrefCheckBox->setAccel( QKeySequence( tr( "Alt+F" ) ) );
    QWhatsThis::add( inFarEndCodecPrefCheckBox, tr( "<p>\n"
"For incoming calls, follow the preference from the far-end (SDP offer). Pick the first codec from the SDP offer that is also in the list of active codecs.\n"
"<p>\n"
"If you disable this option, then the first codec from the active codecs that is also in the SDP offer is picked." ) );
    outFarEndCodecPrefCheckBox->setText( tr( "Follow codec &preference from far end on outgoing calls" ) );
    outFarEndCodecPrefCheckBox->setAccel( QKeySequence( tr( "Alt+P" ) ) );
    QWhatsThis::add( outFarEndCodecPrefCheckBox, tr( "<p>\n"
"For outgoing calls, follow the preference from the far-end (SDP answer). Pick the first codec from the SDP answer that is also in the list of active codecs.\n"
"<p>\n"
"If you disable this option, then the first codec from the active codecs that is also in the SDP answer is picked." ) );
    codecsGroupBox->setTitle( tr( "Codecs" ) );
    availCodecTextLabel->setText( tr( "Available codecs:" ) );
    availCodecListBox->clear();
    availCodecListBox->insertItem( tr( "G.711 A-law" ) );
    availCodecListBox->insertItem( tr( "G.711 u-law" ) );
    availCodecListBox->insertItem( tr( "GSM" ) );
    availCodecListBox->insertItem( tr( "speex-nb (8 kHz)" ) );
    availCodecListBox->insertItem( tr( "speex-wb (16 kHz)" ) );
    availCodecListBox->insertItem( tr( "speex-uwb (32 kHz)" ) );
    QWhatsThis::add( availCodecListBox, tr( "List of available codecs." ) );
    addCodecPushButton->setText( QString::null );
    QWhatsThis::add( addCodecPushButton, tr( "Move a codec from the list of available codecs to the list of active codecs." ) );
    rmvCodecPushButton->setText( QString::null );
    QWhatsThis::add( rmvCodecPushButton, tr( "Move a codec from the list of active codecs to the list of available codecs." ) );
    useCodecTextLabel->setText( tr( "Active codecs:" ) );
    QWhatsThis::add( activeCodecListBox, tr( "List of active codecs. These are the codecs that will be used for media negotiation during call setup. The order of the codecs is the order of preference of use." ) );
    upCodecPushButton->setText( QString::null );
    QWhatsThis::add( upCodecPushButton, tr( "Move a codec upwards in the list of active codecs, i.e. increase its preference of use." ) );
    downCodecPushButton->setText( QString::null );
    QWhatsThis::add( downCodecPushButton, tr( "Move a codec downwards in the list of active codecs, i.e. decrease its preference of use." ) );
    rtpAudioTabWidget->changeTab( tabCodecs, tr( "Co&decs" ) );
    preprocessingGroupBox->setTitle( tr( "Preprocessing (improves quality at remote end)" ) );
    spxDspAgcCheckBox->setText( tr( "&Automatic gain control" ) );
    spxDspAgcCheckBox->setAccel( QKeySequence( tr( "Alt+A" ) ) );
    QWhatsThis::add( spxDspAgcCheckBox, tr( "Automatic gain control (AGC) is a feature that deals with the fact that the recording volume may vary by a large amount between different setups. The AGC provides a way to adjust a signal to a reference volume. This is useful because it removes the need for manual adjustment of the microphone gain. A secondary advantage is that by setting the microphone gain to a conservative (low) level, it is easier to avoid clipping." ) );
    spxDspAgcLevelTextLabel->setText( tr( "Automatic gain control &level:" ) );
    QWhatsThis::add( spxDspAgcLevelSpinBox, tr( "Automatic gain control level represents percentual value of automatic gain setting of a microphone. Recommended value is about 25%." ) );
    spxDspVadCheckBox->setText( tr( "&Voice activity detection" ) );
    spxDspVadCheckBox->setAccel( QKeySequence( tr( "Alt+V" ) ) );
    QWhatsThis::add( spxDspVadCheckBox, tr( "When enabled, voice activity detection detects whether the input signal represents a speech or a silence/background noise." ) );
    spxDspNrdCheckBox->setText( tr( "&Noise reduction" ) );
    spxDspNrdCheckBox->setAccel( QKeySequence( tr( "Alt+N" ) ) );
    QWhatsThis::add( spxDspNrdCheckBox, tr( "The noise reduction can be used to reduce the amount of background noise present in the input signal. This provides higher quality speech." ) );
    spxDspAecCheckBox->setText( tr( "Acoustic &Echo Cancellation" ) );
    spxDspAecCheckBox->setAccel( QKeySequence( tr( "Alt+E" ) ) );
    QWhatsThis::add( spxDspAecCheckBox, tr( "In any VoIP communication, if a speech from the remote end is played in the local loudspeaker, then it propagates in the room and is captured by the microphone. If the audio captured from the microphone is sent directly to the remote end, then the remote user hears an echo of his voice. An acoustic echo cancellation is designed to remove the acoustic echo before it is sent to the remote end. It is important to understand that the echo canceller is meant to improve the quality on the remote end." ) );
    rtpAudioTabWidget->changeTab( tabPreprocessing, tr( "Prepr&ocessing" ) );
    ilbcGroupBox->setTitle( tr( "iLBC" ) );
    ilbcPayloadTextLabel->setText( tr( "i&LBC payload type:" ) );
    ilbcPayloadSizeTextLabel->setText( tr( "iLBC &payload size (ms):" ) );
    QWhatsThis::add( ilbcPayloadSpinBox, tr( "The dynamic type value (96 or higher) to be used for iLBC." ) );
    ilbcPayloadSizeComboBox->clear();
    ilbcPayloadSizeComboBox->insertItem( tr( "20" ) );
    ilbcPayloadSizeComboBox->insertItem( tr( "30" ) );
    QWhatsThis::add( ilbcPayloadSizeComboBox, tr( "The preferred payload size for iLBC." ) );
    rtpAudioTabWidget->changeTab( tabIlbc, tr( "&iLBC" ) );
    speexGroupBox->setTitle( tr( "Speex" ) );
    spxPenhCheckBox->setText( tr( "Perceptual &enhancement" ) );
    spxPenhCheckBox->setAccel( QKeySequence( tr( "Alt+E" ) ) );
    QWhatsThis::add( spxPenhCheckBox, tr( "Perceptual enhancement is a part of the decoder which, when turned on, tries to reduce (the perception of) the noise produced by the coding/decoding process. In most cases, perceptual enhancement make the sound further from the original objectively (if you use SNR), but in the end it still sounds better (subjective improvement)." ) );
    spxUwbPayloadTextLabel->setText( tr( "&Ultra wide band payload type:" ) );
    spxWbPayloadTextLabel->setText( tr( "&Wide band payload type:" ) );
    spxVbrCheckBox->setText( tr( "Variable &bit-rate" ) );
    spxVbrCheckBox->setAccel( QKeySequence( tr( "Alt+B" ) ) );
    QWhatsThis::add( spxVbrCheckBox, tr( "Variable bit-rate (VBR) allows a codec to change its bit-rate dynamically to adapt to the \"difficulty\" of the audio being encoded. In the example of Speex, sounds like vowels and high-energy transients require a higher bit-rate to achieve good quality, while fricatives (e.g. s,f sounds) can be coded adequately with less bits. For this reason, VBR can achieve a lower bit-rate for the same quality, or a better quality for a certain bit-rate. Despite its advantages, VBR has two main drawbacks: first, by only specifying quality, there's no guarantee about the final average bit-rate. Second, for some real-time applications like voice over IP (VoIP), what counts is the maximum bit-rate, which must be low enough for the communication channel." ) );
    QWhatsThis::add( spxUwbPayloadSpinBox, tr( "The dynamic type value (96 or higher) to be used for speex wide band." ) );
    spxDtxCheckBox->setText( tr( "Discontinuous &Transmission" ) );
    spxDtxCheckBox->setAccel( QKeySequence( tr( "Alt+T" ) ) );
    QWhatsThis::add( spxDtxCheckBox, tr( "Discontinuous transmission is an addition to VAD/VBR operation, that allows to stop transmitting completely when the background noise is stationary." ) );
    QWhatsThis::add( spxWbPayloadSpinBox, tr( "The dynamic type value (96 or higher) to be used for speex wide band." ) );
    QWhatsThis::add( spxNbPayloadSpinBox, tr( "The dynamic type value (96 or higher) to be used for speex narrow band." ) );
    spxQualityTextLabel->setText( tr( "&Quality:" ) );
    QWhatsThis::add( spxQualitySpinBox, tr( "Speex is a lossy codec, which means that it achives compression at the expense of fidelity of the input speech signal. Unlike some other speech codecs, it is possible to control the tradeoff made between quality and bit-rate. The Speex encoding process is controlled most of the time by a quality parameter that ranges from 0 to 10." ) );
    spxComplexityTextLabel->setText( tr( "Co&mplexity:" ) );
    QWhatsThis::add( spxComplexitySpinBox, tr( "With Speex, it is possible to vary the complexity allowed for the encoder. This is done by controlling how the search is performed with an integer ranging from 1 to 10 in a way that's similar to the -1 to -9 options to gzip and bzip2 compression utilities. For normal use, the noise level at complexity 1 is between 1 and 2 dB higher than at complexity 10, but the CPU requirements for complexity 10 is about 5 times higher than for complexity 1. In practice, the best trade-off is between complexity 2 and 4, though higher settings are often useful when encoding non-speech sounds like DTMF tones." ) );
    spxNbPayloadTextLabel->setText( tr( "&Narrow band payload type:" ) );
    rtpAudioTabWidget->changeTab( tabSpeex, tr( "&Speex" ) );
    g726GroupBox->setTitle( tr( "G.726" ) );
    g72640PayloadTypeTextLabel->setText( tr( "G.726 &40 kbps payload type:" ) );
    QWhatsThis::add( g72640PayloadSpinBox, tr( "The dynamic type value (96 or higher) to be used for G.726 40 kbps." ) );
    QWhatsThis::add( g72632PayloadSpinBox, tr( "The dynamic type value (96 or higher) to be used for G.726 32 kbps." ) );
    g72624PayloadTypeTextLabel->setText( tr( "G.726 &24 kbps payload type:" ) );
    QWhatsThis::add( g72624PayloadSpinBox, tr( "The dynamic type value (96 or higher) to be used for G.726 24 kbps." ) );
    g72632PayloadTypeTextLabel->setText( tr( "G.726 &32 kbps payload type:" ) );
    QWhatsThis::add( g72616PayloadSpinBox, tr( "The dynamic type value (96 or higher) to be used for G.726 16 kbps." ) );
    g72616PayloadTypeTextLabel->setText( tr( "G.726 &16 kbps payload type:" ) );
    g726PackingTextLabel->setText( tr( "Codeword &packing order:" ) );
    g726PackComboBox->clear();
    g726PackComboBox->insertItem( tr( "RFC 3551" ) );
    g726PackComboBox->insertItem( tr( "ATM AAL2" ) );
    QWhatsThis::add( g726PackComboBox, tr( "There are 2 standards to pack the G.726 codewords into an RTP packet. RFC 3551 is the default packing method. Some SIP devices use ATM AAL2 however. If you experience bad quality using G.726 with RFC 3551 packing, then try ATM AAL2 packing." ) );
    rtpAudioTabWidget->changeTab( tabG726, tr( "G.726" ) );
    dtmfGroupBox->setTitle( tr( "DTMF" ) );
    QWhatsThis::add( dtmfPayloadTypeSpinBox, tr( "The dynamic type value (96 or higher) to be used for DTMF events (RFC 2833)." ) );
    dtmfDurationMsTextLabel->setText( tr( "ms" ) );
    dtmfVolumeTextLabel->setText( tr( "DTMF vo&lume:" ) );
    QWhatsThis::add( dtmfVolumeSpinBox, tr( "The power level of the DTMF tone in dB." ) );
    QWhatsThis::add( dtmfPauseSpinBox, tr( "The pause after a DTMF tone." ) );
    dtmfDurationTextLabel->setText( tr( "DTMF &duration:" ) );
    dtmfPauseMsTextLabel->setText( tr( "ms" ) );
    dtmfPayloadTypeTextLabel->setText( tr( "DTMF payload &type:" ) );
    dtmfPauseTextLabel->setText( tr( "DTMF &pause:" ) );
    dtmfVolDbmTextLabel->setText( tr( "dB" ) );
    QWhatsThis::add( dtmfDurationSpinBox, tr( "Duration of a DTMF tone." ) );
    dtmfTransportTextLabel->setText( tr( "DTMF t&ransport:" ) );
    dtmfTransportComboBox->clear();
    dtmfTransportComboBox->insertItem( tr( "Auto" ) );
    dtmfTransportComboBox->insertItem( tr( "RFC 2833" ) );
    dtmfTransportComboBox->insertItem( tr( "Inband" ) );
    dtmfTransportComboBox->insertItem( tr( "Out-of-band (SIP INFO)" ) );
    QWhatsThis::add( dtmfTransportComboBox, tr( "<h2>RFC 2833</h2>\n"
"<p>Send DTMF tones as RFC 2833 telephone events.</p>\n"
"<h2>Inband</h2>\n"
"<p>Send DTMF inband.</p>\n"
"<h2>Auto</h2>\n"
"<p>If the far end of your call supports RFC 2833, then a DTMF tone will be send as RFC 2833 telephone event, otherwise it will be sent inband.\n"
"</p>\n"
"<h2>Out-of-band (SIP INFO)</h2>\n"
"<p>\n"
"Send DTMF out-of-band via a SIP INFO request.\n"
"</p>" ) );
    rtpAudioTabWidget->changeTab( tabDtmf, tr( "DT&MF" ) );
    sipProtocolTitleTextLabel->setText( tr( "SIP protocol" ) );
    optionsGroupBox->setTitle( tr( "Protocol options" ) );
    holdVariantTextLabel->setText( tr( "Call &Hold variant:" ) );
    holdVariantComboBox->clear();
    holdVariantComboBox->insertItem( tr( "RFC 2543" ) );
    holdVariantComboBox->insertItem( tr( "RFC 3264" ) );
    QWhatsThis::add( holdVariantComboBox, tr( "Indicates if RFC 2543 (set media IP address in SDP to 0.0.0.0) or RFC 3264 (use direction attributes in SDP) is used to put a call on-hold." ) );
    missingContactCheckBox->setText( tr( "Allow m&issing Contact header in 200 OK on REGISTER" ) );
    missingContactCheckBox->setAccel( QKeySequence( tr( "Alt+I" ) ) );
    QWhatsThis::add( missingContactCheckBox, tr( "A 200 OK response on a REGISTER request must contain a Contact header. Some registrars however, do not include a Contact header or include a wrong Contact header. This option allows for such a deviation from the specs." ) );
    maxForwardsCheckBox->setText( tr( "&Max-Forwards header is mandatory" ) );
    maxForwardsCheckBox->setAccel( QKeySequence( tr( "Alt+M" ) ) );
    QWhatsThis::add( maxForwardsCheckBox, tr( "According to RFC 3261 the Max-Forwards header is mandatory. But many implementations do not send this header. If you tick this box, Twinkle will reject a SIP request if Max-Forwards is missing." ) );
    regTimeCheckBox->setText( tr( "Put &registration expiry time in contact header" ) );
    regTimeCheckBox->setAccel( QKeySequence( tr( "Alt+R" ) ) );
    QWhatsThis::add( regTimeCheckBox, tr( "In a REGISTER message the expiry time for registration can be put in the Contact header or in the Expires header. If you tick this box it will be put in the Contact header, otherwise it goes in the Expires header." ) );
    compactHeadersCheckBox->setText( tr( "&Use compact header names" ) );
    compactHeadersCheckBox->setAccel( QKeySequence( tr( "Alt+U" ) ) );
    QWhatsThis::add( compactHeadersCheckBox, tr( "Indicates if compact header names should be used for headers that have a compact form." ) );
    allowSdpChangeCheckBox->setText( tr( "Allow SDP change during call setup" ) );
    QWhatsThis::add( allowSdpChangeCheckBox, tr( "<p>A SIP UAS may send SDP in a 1XX response for early media, e.g. ringing tone. When the call is answered the SIP UAS should send the same SDP in the 200 OK response according to RFC 3261. Once SDP has been received, SDP in subsequent responses should be discarded.</p>\n"
"<p>By allowing SDP to change during call setup, Twinkle will not discard SDP in subsequent responses and modify the media stream if the SDP is changed. When the SDP in a response is changed, it must have a new version number in the o= line.</p>" ) );
    useDomainInContactCheckBox->setText( tr( "Use domain &name to create a unique contact header value" ) );
    useDomainInContactCheckBox->setAccel( QKeySequence( tr( "Alt+N" ) ) );
    QWhatsThis::add( useDomainInContactCheckBox, tr( "<p>\n"
"Twinkle creates a unique contact header value by combining the SIP user name and domain:\n"
"</p>\n"
"<p>\n"
"<tt>&nbsp;user_domain@local_ip</tt>\n"
"</p>\n"
"<p>\n"
"This way 2 user profiles, having the same user name but different domain names, have unique contact addresses and hence can be activated simultaneously.\n"
"</p>\n"
"<p>\n"
"Some proxies do not handle a contact header value like this. You can disable this option to get a contact header value like this:\n"
"</p>\n"
"<p>\n"
"<tt>&nbsp;user@local_ip</tt>\n"
"</p>\n"
"<p>\n"
"This format is what most SIP phones use.\n"
"</p>" ) );
    multiValuesListCheckBox->setText( tr( "&Encode Via, Route, Record-Route as list" ) );
    multiValuesListCheckBox->setAccel( QKeySequence( tr( "Alt+E" ) ) );
    QWhatsThis::add( multiValuesListCheckBox, tr( "The Via, Route and Record-Route headers can be encoded as a list of comma separated values or as multiple occurrences of the same header." ) );
    redirectionGroupBox->setTitle( tr( "Redirection" ) );
    allowRedirectionCheckBox->setText( tr( "&Allow redirection" ) );
    allowRedirectionCheckBox->setAccel( QKeySequence( tr( "Alt+A" ) ) );
    QWhatsThis::add( allowRedirectionCheckBox, tr( "Indicates if Twinkle should redirect a request if a 3XX response is received." ) );
    askUserRedirectCheckBox->setText( tr( "Ask user &permission to redirect" ) );
    askUserRedirectCheckBox->setAccel( QKeySequence( tr( "Alt+P" ) ) );
    QWhatsThis::add( askUserRedirectCheckBox, tr( "Indicates if Twinkle should ask the user before redirecting a request when a 3XX response is received." ) );
    maxRedirectTextLabel->setText( tr( "Max re&directions:" ) );
    QWhatsThis::add( maxRedirectSpinBox, tr( "The number of redirect addresses that Twinkle tries at a maximum before it gives up redirecting a request. This prevents a request from getting redirected forever." ) );
    sipExtensionsGroupBox->setTitle( tr( "SIP extensions" ) );
    ext100relComboBox->clear();
    ext100relComboBox->insertItem( tr( "disabled" ) );
    ext100relComboBox->insertItem( tr( "supported" ) );
    ext100relComboBox->insertItem( tr( "required" ) );
    ext100relComboBox->insertItem( tr( "preferred" ) );
    QWhatsThis::add( ext100relComboBox, tr( "Indicates if the 100rel extension (PRACK) is supported:<br><br>\n"
"<b>disabled</b>: 100rel extension is disabled\n"
"<br><br>\n"
"<b>supported</b>: 100rel is supported (it is added in the supported header of an outgoing INVITE). A far-end can now require a PRACK on a 1xx response.\n"
"<br><br>\n"
"<b>required</b>: 100rel is required (it is put in the require header of an outgoing INVITE). If an incoming INVITE indicates that it supports 100rel, then Twinkle will require a PRACK when sending a 1xx response. A call will fail when the far-end does not support 100rel.\n"
"<br><br>\n"
"<b>preferred</b>: Similar to required, but if a call fails because the far-end indicates it does not support 100rel (420 response) then the call will be re-attempted without the 100rel requirement." ) );
    ext100relTextLabel->setText( tr( "&100 rel (PRACK):" ) );
    extReplacesCheckBox->setText( tr( "Replaces" ) );
    QWhatsThis::add( extReplacesCheckBox, tr( "Indicates if the Replaces-extenstion is supported." ) );
    sipProtoclTabWidget->changeTab( tab, tr( "General" ) );
    referGroupBox->setTitle( tr( "Call transfer (REFER)" ) );
    allowReferCheckBox->setText( tr( "Accept call &transfer request (incoming REFER)" ) );
    allowReferCheckBox->setAccel( QKeySequence( tr( "Alt+T" ) ) );
    QWhatsThis::add( allowReferCheckBox, tr( "Indicates if Twinkle should transfer a call if a REFER request is received." ) );
    askUserReferCheckBox->setText( tr( "As&k user permission to transfer" ) );
    askUserReferCheckBox->setAccel( QKeySequence( tr( "Alt+K" ) ) );
    QWhatsThis::add( askUserReferCheckBox, tr( "Indicates if Twinkle should ask the user before transferring a call when a REFER request is received." ) );
    refereeHoldCheckBox->setText( tr( "Hold call &with referrer while setting up call to transfer target" ) );
    refereeHoldCheckBox->setAccel( QKeySequence( tr( "Alt+W" ) ) );
    QWhatsThis::add( refereeHoldCheckBox, tr( "Indicates if Twinkle should put the current call on hold when a REFER request to transfer a call is received." ) );
    referrerHoldCheckBox->setText( tr( "Ho&ld call with referee before sending REFER" ) );
    referrerHoldCheckBox->setAccel( QKeySequence( tr( "Alt+L" ) ) );
    QWhatsThis::add( referrerHoldCheckBox, tr( "Indicates if Twinkle should put the current call on hold when you transfer a call." ) );
    refreshReferSubCheckBox->setText( tr( "Auto re&fresh subscription to refer event while call transfer is not finished" ) );
    refreshReferSubCheckBox->setAccel( QKeySequence( tr( "Alt+F" ) ) );
    QWhatsThis::add( refreshReferSubCheckBox, tr( "While a call is being transferred, the referee sends NOTIFY messages to the referrer about the progress of the transfer. These messages are only sent for a short interval which length is determined by the referee. If you tick this box, the referrer will automatically send a SUBSCRIBE to lengthen this interval if it is about to expire and the transfer has not yet been completed." ) );
    referAorCheckBox->setText( tr( "Attended refer to AoR (Address of Record)" ) );
    QWhatsThis::add( referAorCheckBox, tr( "An attended call transfer should use the contact URI as a refer target. A contact URI may not be globally routable however. Alternatively the AoR (Address of Record) may be used. A disadvantage is that the AoR may route to multiple endpoints in case of forking whereas the contact URI routes to a single endoint." ) );
    transferConsultInprogCheckBox->setText( tr( "Allow call transfer while consultation in progress" ) );
    QWhatsThis::add( transferConsultInprogCheckBox, tr( "When you perform an attended call transfer, you normally transfer the call after you established a consultation call. If you enable this option you can transfer the call while the consultation call is still in progress. This is a non-standard implementation and may not work with all SIP devices." ) );
    sipProtoclTabWidget->changeTab( tab_2, tr( "REFER" ) );
    privacyGroupBox->setTitle( tr( "Privacy options" ) );
    pPreferredIdCheckBox->setText( tr( "&Send P-Preferred-Identity header when hiding user identity" ) );
    pPreferredIdCheckBox->setAccel( QKeySequence( tr( "Alt+S" ) ) );
    QWhatsThis::add( pPreferredIdCheckBox, tr( "Include a P-Preferred-Identity header with your identity in an INVITE request for a call with identity hiding." ) );
    sipProtoclTabWidget->changeTab( TabPage, tr( "Privacy" ) );
    NatTitleTextLabel->setText( tr( "Transport/NAT" ) );
    transportGroupBox->setTitle( tr( "SIP transport" ) );
    sipTransportComboBox->clear();
    sipTransportComboBox->insertItem( tr( "Auto" ) );
    sipTransportComboBox->insertItem( tr( "UDP" ) );
    sipTransportComboBox->insertItem( tr( "TCP" ) );
    QWhatsThis::add( sipTransportComboBox, tr( "Transport mode for SIP. In auto mode, the size of a message determines which transport protocol is used. Messages larger than the UDP threshold are sent via TCP. Smaller messages are sent via UDP." ) );
    sipTransportTextLabel->setText( tr( "T&ransport protocol:" ) );
    udpThresholdTextLabel->setText( tr( "UDP t&hreshold:" ) );
    udpThresholdSpinBox->setSuffix( tr( "bytes" ) );
    QWhatsThis::add( udpThresholdSpinBox, tr( "Messages larger than the threshold are sent via TCP. Smaller messages are sent via UDP." ) );
    natTraversalButtonGroup_->setTitle( tr( "NAT traversal" ) );
    natNoneRadioButton->setText( tr( "&NAT traversal not needed" ) );
    natNoneRadioButton->setAccel( QKeySequence( tr( "Alt+N" ) ) );
    QWhatsThis::add( natNoneRadioButton, tr( "Choose this option when there is no NAT device between you and your SIP proxy or when your SIP provider offers hosted NAT traversal." ) );
    natStaticRadioButton->setText( tr( "&Use statically configured public IP address inside SIP messages" ) );
    natStaticRadioButton->setAccel( QKeySequence( tr( "Alt+U" ) ) );
    QWhatsThis::add( natStaticRadioButton, tr( "Indicates if Twinkle should use the public IP address specified in the next field inside SIP message, i.e. in SIP headers and SDP body instead of the IP address of your network interface.<br><br>\n"
"When you choose this option you have to create static address mappings in your NAT device as well. You have to map the RTP ports on the public IP address to the same ports on the private IP address of your PC." ) );
    publicIPTextLabel->setText( tr( "&Public IP address:" ) );
    QWhatsThis::add( publicIPLineEdit, tr( "The public IP address of your NAT." ) );
    natStunRadioButton->setText( tr( "Use &STUN (does not work for incoming TCP)" ) );
    natStunRadioButton->setAccel( QKeySequence( tr( "Alt+S" ) ) );
    QWhatsThis::add( natStunRadioButton, tr( "Choose this option when your SIP provider offers a STUN server for NAT traversal." ) );
    stunServerTextLabel->setText( tr( "S&TUN server:" ) );
    QWhatsThis::add( stunServerLineEdit, tr( "The hostname, domain name or IP address of the STUN server." ) );
    persistentTcpCheckBox->setText( tr( "P&ersistent TCP connection" ) );
    persistentTcpCheckBox->setAccel( QKeySequence( tr( "Alt+E" ) ) );
    QWhatsThis::add( persistentTcpCheckBox, tr( "Keep the TCP connection established during registration open such that the SIP proxy can reuse this connection to send incoming requests. Application ping packets are sent to test if the connection is still alive." ) );
    natKeepaliveCheckBox->setText( tr( "Enable NAT &keep alive" ) );
    natKeepaliveCheckBox->setAccel( QKeySequence( tr( "Alt+K" ) ) );
    QWhatsThis::add( natKeepaliveCheckBox, tr( "Send UDP NAT keep alive packets." ) );
    addressFormatTitleTextLabel->setText( tr( "Address format" ) );
    telNumberGroupBox->setTitle( tr( "Telephone numbers" ) );
    displayTelUserCheckBox->setText( tr( "Only &display user part of URI for telephone number" ) );
    displayTelUserCheckBox->setAccel( QKeySequence( tr( "Alt+D" ) ) );
    QWhatsThis::add( displayTelUserCheckBox, tr( "If a URI indicates a telephone number, then only display the user part. E.g. if a call comes in from sip:123456@twinklephone.com then display only \"123456\" to the user. A URI indicates a telephone number if it contains the \"user=phone\" parameter or when it has a numerical user part and you ticked the next option." ) );
    numericalUserIsTelCheckBox->setText( tr( "&URI with numerical user part is a telephone number" ) );
    numericalUserIsTelCheckBox->setAccel( QKeySequence( tr( "Alt+U" ) ) );
    QWhatsThis::add( numericalUserIsTelCheckBox, tr( "If you tick this option, then Twinkle considers a SIP address that has a user part that consists of digits, *, #, + and special symbols only as a telephone number. In an outgoing message, Twinkle will add the \"user=phone\" parameter to such a URI." ) );
    removeSpecialCheckBox->setText( tr( "&Remove special symbols from numerical dial strings" ) );
    removeSpecialCheckBox->setAccel( QKeySequence( tr( "Alt+R" ) ) );
    QWhatsThis::add( removeSpecialCheckBox, tr( "Telephone numbers are often written with special symbols like dashes and brackets to make them readable to humans. When you dial such a number the special symbols must not be dialed. To allow you to simply copy/paste such a number into Twinkle, Twinkle can remove these symbols when you hit the dial button." ) );
    useTelUriCheckBox->setText( tr( "Use tel-URI for telephone &number" ) );
    useTelUriCheckBox->setAccel( QKeySequence( tr( "Alt+N" ) ) );
    QWhatsThis::add( useTelUriCheckBox, tr( "Expand a dialed telephone number to a tel-URI instead of a sip-URI." ) );
    specialTextLabel->setText( tr( "&Special symbols:" ) );
    QWhatsThis::add( specialLineEdit, tr( "The special symbols that may be part of a telephone number for nice formatting, but must be removed when dialing." ) );
    conversionGroupBox->setTitle( tr( "Number conversion" ) );
    conversionListView->header()->setLabel( 0, tr( "Match expression" ) );
    conversionListView->header()->setLabel( 1, tr( "Replace" ) );
    QWhatsThis::add( conversionListView, tr( "<p>\n"
"Often the format of the telphone numbers you need to dial is different from the format of the telephone numbers stored in your address book, e.g. your numbers start with a +-symbol followed by a country code, but your provider expects '00' instead of the '+', or you are at the office and all your numbers need to be prefixed with a '9' to access an outside line. Here you can specify number format conversion using Perl style regular expressions and format strings.\n"
"</p>\n"
"<p>\n"
"For each number you dial, Twinkle will try to find a match in the list of match expressions. For the first match it finds, the number will be replaced with the format string. If no match is found, the number stays unchanged.\n"
"</p>\n"
"<p>\n"
"The number conversion rules are also applied to incoming calls, so the numbers are displayed in the format you want.\n"
"</p>\n"
"<h3>Example 1</h3>\n"
"<p>\n"
"Assume your country code is 31 and you have stored all numbers in your address book in full international number format, e.g. +318712345678. For dialling numbers in your own country you want to strip of the '+31' and replace it by a '0'. For dialling numbers abroad you just want to replace the '+' by '00'.\n"
"</p>\n"
"<p>\n"
"The following rules will do the trick:\n"
"</p>\n"
"<blockquote>\n"
"<tt>\n"
"Match expression = \\+31([0-9]*) , Replace =  0$1<br>\n"
"Match expression = \\+([0-9]*) , Replace = 00$1</br>\n"
"</tt>\n"
"</blockquote>\n"
"<h3>Example 2</h3>\n"
"<p>\n"
"You are at work and all telephone numbers starting with a 0 should be prefixed with a 9 for an outside line.\n"
"</p>\n"
"<blockquote>\n"
"<tt>\n"
"Match expression = 0[0-9]* , Replace =  9$&<br>\n"
"</tt>\n"
"</blockquote>" ) );
    upConversionPushButton->setText( QString::null );
    QWhatsThis::add( upConversionPushButton, tr( "Move the selected number conversion rule upwards in the list." ) );
    downConversionPushButton->setText( QString::null );
    QWhatsThis::add( downConversionPushButton, tr( "Move the selected number conversion rule downwards in the list." ) );
    addConversionPushButton->setText( tr( "&Add" ) );
    addConversionPushButton->setAccel( QKeySequence( tr( "Alt+A" ) ) );
    QWhatsThis::add( addConversionPushButton, tr( "Add a number conversion rule." ) );
    removePushButton->setText( tr( "Re&move" ) );
    removePushButton->setAccel( QKeySequence( tr( "Alt+M" ) ) );
    QWhatsThis::add( removePushButton, tr( "Remove the selected number conversion rule." ) );
    editConversionPushButton->setText( tr( "&Edit" ) );
    editConversionPushButton->setAccel( QKeySequence( tr( "Alt+E" ) ) );
    QWhatsThis::add( editConversionPushButton, tr( "Edit the selected number conversion rule." ) );
    QWhatsThis::add( testConversionLineEdit, tr( "Type a telephone number here an press the Test button to see how it is converted by the list of number conversion rules." ) );
    testConversionPushButton->setText( tr( "&Test" ) );
    testConversionPushButton->setAccel( QKeySequence( tr( "Alt+T" ) ) );
    QWhatsThis::add( testConversionPushButton, tr( "Test how a number is converted by the number conversion rules." ) );
    timersTitleTextLabel->setText( tr( "Timers" ) );
    secNoanswerTextLabel->setText( tr( "seconds" ) );
    QWhatsThis::add( tmrNatKeepaliveSpinBox, tr( "If you have enabled STUN or NAT keep alive, then Twinkle will send keep alive packets at this interval rate to keep the address bindings in your NAT device alive." ) );
    QWhatsThis::add( tmrNoanswerSpinBox, tr( "When an incoming call is received, this timer is started. If the user answers the call, the timer is stopped. If the timer expires before the user answers the call, then Twinkle will reject the call with a \"480 User Not Responding\"." ) );
    tmrNatKeepaliveTextLabel->setText( tr( "NAT &keep alive:" ) );
    tmrNoanswerTextLabel->setText( tr( "&No answer:" ) );
    ringtonesTitleTextLabel->setText( tr( "Ring tones" ) );
    openRingbackToolButton->setText( QString::null );
    QWhatsThis::add( openRingbackToolButton, tr( "Select ring back tone file." ) );
    openRingtoneToolButton->setText( QString::null );
    QWhatsThis::add( openRingtoneToolButton, tr( "Select ring tone file." ) );
    ringbackTextLabel->setText( tr( "Ring &back tone:" ) );
    QWhatsThis::add( ringbackLineEdit, tr( "<p>\n"
"Specify the file name of a .wav file that you want to be played as ring back tone for this user.\n"
"</p>\n"
"<p>\n"
"This ring back tone overrides the ring back tone settings in the system settings.\n"
"</p>" ) );
    QWhatsThis::add( ringtoneLineEdit, tr( "<p>\n"
"Specify the file name of a .wav file that you want to be played as ring tone for this user.\n"
"</p>\n"
"<p>\n"
"This ring tone overrides the ring tone settings in the system settings.\n"
"</p>" ) );
    ringtoneTextLabel->setText( tr( "&Ring tone:" ) );
    scriptsTitleTextLabel->setText( tr( "Scripts" ) );
    QWhatsThis::add( localReleaseLineEdit, tr( "<p>\n"
"This script is called when you release a call.\n"
"</p>\n"
"<h2>Environment variables</h2>\n"
"<p>\n"
"The values of all SIP headers of the outgoing SIP BYE request are passed in environment variables to your script.\n"
"</p>\n"
"<p>\n"
"<b>TWINKLE_TRIGGER=local_release</b>. <b>SIPREQUEST_METHOD=BYE</b>. <b>SIPREQUEST_URI</b> contains the request-URI of the BYE.  The name of the user profile will be passed in <b>TWINKLE_USER_PROFILE</b>." ) );
    openInCallFailedToolButton->setText( QString::null );
    QWhatsThis::add( openInCallFailedToolButton, tr( "Select script file." ) );
    openIncomingCallScriptToolButton->setText( QString::null );
    QWhatsThis::add( openIncomingCallScriptToolButton, tr( "Select script file." ) );
    openOutCallAnsweredToolButton->setText( QString::null );
    QWhatsThis::add( openOutCallAnsweredToolButton, tr( "Select script file." ) );
    QWhatsThis::add( inCallFailedLineEdit, tr( "<p>\n"
"This script is called when an incoming call fails.\n"
"</p>\n"
"<h2>Environment variables</h2>\n"
"<p>\n"
"The values of all SIP headers of the outgoing SIP failure response are passed in environment variables to your script.\n"
"</p>\n"
"<p>\n"
"<b>TWINKLE_TRIGGER=in_call_failed</b>. <b>SIPSTATUS_CODE</b> contains the status code of the failure response. <b>SIPSTATUS_REASON</b> contains the reason phrase.  The name of the user profile will be passed in <b>TWINKLE_USER_PROFILE</b>." ) );
    openInCallAnsweredToolButton->setText( QString::null );
    QWhatsThis::add( openInCallAnsweredToolButton, tr( "Select script file." ) );
    QWhatsThis::add( remoteReleaseLineEdit, tr( "<p>\n"
"This script is called when the remote party releases a call.\n"
"</p>\n"
"<h2>Environment variables</h2>\n"
"<p>\n"
"The values of all SIP headers of the incoming SIP BYE request are passed in environment variables to your script.\n"
"</p>\n"
"<p>\n"
"<b>TWINKLE_TRIGGER=remote_release</b>. <b>SIPREQUEST_METHOD=BYE</b>. <b>SIPREQUEST_URI</b> contains the request-URI of the BYE.  The name of the user profile will be passed in <b>TWINKLE_USER_PROFILE</b>." ) );
    openOutCallToolButton->setText( QString::null );
    QWhatsThis::add( openOutCallToolButton, tr( "Select script file." ) );
    QWhatsThis::add( incomingCallScriptLineEdit, tr( "<p>\n"
"You can customize the way Twinkle handles incoming calls. Twinkle can call a script when a call comes in. Based on the ouput of the script Twinkle accepts, rejects or redirects the call. When accepting the call, the ring tone can be customized by the script as well. The script can be any executable program.\n"
"</p>\n"
"<p>\n"
"<b>Note:</b> Twinkle pauses while your script runs. It is recommended that your script does not take more than 200 ms. When you need more time, you can send the parameters followed by <b>end</b> and keep on running. Twinkle will continue when it receives the <b>end</b> parameter.\n"
"</p>\n"
"<p>\n"
"With your script you can customize call handling by outputing one or more of the following parameters to stdout. Each parameter should be on a separate line.\n"
"</p>\n"
"<p>\n"
"<blockquote>\n"
"<tt>\n"
"action=[ continue | reject | dnd | redirect | autoanswer ]<br>\n"
"reason=&lt;string&gt;<br>\n"
"contact=&lt;address to redirect to&gt;<br>\n"
"caller_name=&lt;name of caller to display&gt;<br>\n"
"ringtone=&lt;file name of .wav file&gt;<br>\n"
"display_msg=&lt;message to show on display&gt;<br>\n"
"end<br>\n"
"</tt>\n"
"</blockquote>\n"
"</p>\n"
"<h2>Parameters</h2>\n"
"<h3>action</h3>\n"
"<p>\n"
"<b>continue</b> - continue call handling as usual<br>\n"
"<b>reject</b> - reject call<br>\n"
"<b>dnd</b> - deny call with do not disturb indication<br>\n"
"<b>redirect</b> - redirect call to address specified by <b>contact</b><br>\n"
"<b>autoanswer</b> - automatically answer a call<br>\n"
"</p>\n"
"<p>\n"
"When the script does not write an action to stdout, then the default action is continue.\n"
"</p>\n"
"<p>\n"
"<b>reason: </b>\n"
"With the reason parameter you can set the reason string for reject or dnd. This might be shown to the far-end user.\n"
"</p>\n"
"<p>\n"
"<b>caller_name: </b>\n"
"This parameter will override the display name of the caller.\n"
"</p>\n"
"<p>\n"
"<b>ringtone: </b>\n"
"The ringtone parameter specifies the .wav file that will be played as ring tone when action is continue.\n"
"</p>\n"
"<h2>Environment variables</h2>\n"
"<p>\n"
"The values of all SIP headers in the incoming INVITE message are passed in environment variables to your script. The variable names are formatted as <b>SIP_&lt;HEADER_NAME&gt;</b> E.g. SIP_FROM contains the value of the from header.\n"
"</p>\n"
"<p>\n"
"TWINKLE_TRIGGER=in_call. SIPREQUEST_METHOD=INVITE. The request-URI of the INVITE will be passed in <b>SIPREQUEST_URI</b>. The name of the user profile will be passed in <b>TWINKLE_USER_PROFILE</b>." ) );
    QWhatsThis::add( outCallAnsweredLineEdit, tr( "<p>\n"
"This script is called when the remote party answers your call.\n"
"</p>\n"
"<h2>Environment variables</h2>\n"
"<p>\n"
"The values of all SIP headers of the incoming 200 OK are passed in environment variables to your script.\n"
"</p>\n"
"<p>\n"
"<b>TWINKLE_TRIGGER=out_call_answered</b>. <b>SIPSTATUS_CODE=200</b>. <b>SIPSTATUS_REASON</b> contains the reason phrase.  The name of the user profile will be passed in <b>TWINKLE_USER_PROFILE</b>." ) );
    QWhatsThis::add( inCallAnsweredLineEdit, tr( "<p>\n"
"This script is called when you answer an incoming call.\n"
"</p>\n"
"<h2>Environment variables</h2>\n"
"<p>\n"
"The values of all SIP headers of the outgoing 200 OK are passed in environment variables to your script.\n"
"</p>\n"
"<p>\n"
"<b>TWINKLE_TRIGGER=in_call_answered</b>. <b>SIPSTATUS_CODE=200</b>. <b>SIPSTATUS_REASON</b> contains the reason phrase.  The name of the user profile will be passed in <b>TWINKLE_USER_PROFILE</b>." ) );
    localReleaseTextLabel->setText( tr( "Call released locall&y:" ) );
    openOutCallFailedToolButton->setText( QString::null );
    QWhatsThis::add( openOutCallFailedToolButton, tr( "Select script file." ) );
    QWhatsThis::add( outCallFailedLineEdit, tr( "<p>\n"
"This script is called when an outgoing call fails.\n"
"</p>\n"
"<h2>Environment variables</h2>\n"
"<p>\n"
"The values of all SIP headers of the incoming SIP failure response are passed in environment variables to your script.\n"
"</p>\n"
"<p>\n"
"<b>TWINKLE_TRIGGER=out_call_failed</b>. <b>SIPSTATUS_CODE</b> contains the status code of the failure response. <b>SIPSTATUS_REASON</b> contains the reason phrase.  The name of the user profile will be passed in <b>TWINKLE_USER_PROFILE</b>." ) );
    QWhatsThis::add( outCallLineEdit, tr( "<p>\n"
"This script is called when you make a call.\n"
"</p>\n"
"<h2>Environment variables</h2>\n"
"<p>\n"
"The values of all SIP headers of the outgoing INVITE are passed in environment variables to your script.\n"
"</p>\n"
"<p>\n"
"<b>TWINKLE_TRIGGER=out_call</b>. <b>SIPREQUEST_METHOD=INVITE</b>. <b>SIPREQUEST_URI</b> contains the request-URI of the INVITE.  The name of the user profile will be passed in <b>TWINKLE_USER_PROFILE</b>." ) );
    outCallAnsweredTextLabel->setText( tr( "Outgoing call a&nswered:" ) );
    inCallFailedTextLabel->setText( tr( "Incoming call &failed:" ) );
    incomingCallScriptTextLabel->setText( tr( "&Incoming call:" ) );
    openLocalReleaseToolButton->setText( QString::null );
    QWhatsThis::add( openLocalReleaseToolButton, tr( "Select script file." ) );
    remoteReleaseTextLabel->setText( tr( "Call released &remotely:" ) );
    inCallAnsweredTextLabel->setText( tr( "Incoming call &answered:" ) );
    openRemoteReleaseToolButton->setText( QString::null );
    QWhatsThis::add( openRemoteReleaseToolButton, tr( "Select script file." ) );
    outCallTextLabel->setText( tr( "O&utgoing call:" ) );
    outCallFailedTextLabel->setText( tr( "Out&going call failed:" ) );
    securityTitleTextLabel->setText( tr( "Security" ) );
    zrtpEnabledCheckBox->setText( tr( "&Enable ZRTP/SRTP encryption" ) );
    zrtpEnabledCheckBox->setAccel( QKeySequence( tr( "Alt+E" ) ) );
    QWhatsThis::add( zrtpEnabledCheckBox, tr( "When ZRTP/SRTP is enabled, then Twinkle will try to encrypt the audio of each call you originate or receive. Encryption will only succeed if the remote party has ZRTP/SRTP support enabled. If the remote party does not support ZRTP/SRTP, then the audio channel will stay unecrypted." ) );
    zrtpSettingsGroupBox->setTitle( tr( "ZRTP settings" ) );
    zrtpSendIfSupportedCheckBox->setText( tr( "O&nly encrypt audio if remote party indicated ZRTP support in SDP" ) );
    zrtpSendIfSupportedCheckBox->setAccel( QKeySequence( tr( "Alt+N" ) ) );
    QWhatsThis::add( zrtpSendIfSupportedCheckBox, tr( "A SIP endpoint supporting ZRTP may indicate ZRTP support during call setup in its signalling. Enabling this option will cause Twinkle only to encrypt calls when the remote party indicates ZRTP support." ) );
    zrtpSdpCheckBox->setText( tr( "&Indicate ZRTP support in SDP" ) );
    zrtpSdpCheckBox->setAccel( QKeySequence( tr( "Alt+I" ) ) );
    QWhatsThis::add( zrtpSdpCheckBox, tr( "Twinkle will indicate ZRTP support during call setup in its signalling." ) );
    zrtpGoClearWarningCheckBox->setText( tr( "&Popup warning when remote party disables encryption during call" ) );
    zrtpGoClearWarningCheckBox->setAccel( QKeySequence( tr( "Alt+P" ) ) );
    QWhatsThis::add( zrtpGoClearWarningCheckBox, tr( "A remote party of an encrypted call may send a ZRTP go-clear command to stop encryption. When Twinkle receives this command it will popup a warning if this option is enabled." ) );
    voiceMailTextLabel->setText( tr( "Voice mail" ) );
    vmAddressTextLabel->setText( tr( "&Voice mail address:" ) );
    QWhatsThis::add( vmAddressLineEdit, tr( "The SIP address or telephone number to access your voice mail." ) );
    mwiTypeComboBox->clear();
    mwiTypeComboBox->insertItem( tr( "Unsollicited" ) );
    mwiTypeComboBox->insertItem( tr( "Sollicited" ) );
    QWhatsThis::add( mwiTypeComboBox, tr( "<H2>Message waiting indication type</H2>\n"
"<p>\n"
"If your provider offers the message waiting indication service, then Twinkle can show you when new voice mail messages are waiting. Ask your provider which type of message waiting indication is offered.\n"
"</p>\n"
"<H3>Unsollicited</H3>\n"
"<p>\n"
"Asterisk provides unsollicited message waiting indication.\n"
"</p>\n"
"<H3>Sollicited</H3>\n"
"<p>\n"
"Sollicited message waiting indication as specified by RFC 3842.\n"
"</p>" ) );
    mwiTypeTextLabel->setText( tr( "&MWI type:" ) );
    mwiSollicitedGroupBox->setTitle( tr( "Sollicited MWI" ) );
    mwiDurationTextLabel->setText( tr( "Subscription &duration:" ) );
    mwiUserTextLabel->setText( tr( "Mailbox &user name:" ) );
    QWhatsThis::add( mwiServerLineEdit, tr( "The hostname, domain name or IP address of your voice mailbox server." ) );
    QWhatsThis::add( mwiDurationSpinBox, tr( "For sollicited MWI, an endpoint subscribes to the message status for a limited duration. Just before the duration expires, the endpoint should refresh the subscription." ) );
    mwiSecondsTextLabel->setText( tr( "seconds" ) );
    QWhatsThis::add( mwiUserLineEdit, tr( "Your user name for accessing your voice mailbox." ) );
    mwiServerTextLabel->setText( tr( "Mailbox &server:" ) );
    mwiViaProxyCheckBox->setText( tr( "Via outbound &proxy" ) );
    mwiViaProxyCheckBox->setAccel( QKeySequence( tr( "Alt+P" ) ) );
    QWhatsThis::add( mwiViaProxyCheckBox, tr( "Check this option if Twinkle should send SIP messages to the mailbox server via the outbound proxy." ) );
    imTextLabel->setText( tr( "Instant message" ) );
    imMaxSessionsTextLabel->setText( tr( "&Maximum number of sessions:" ) );
    QWhatsThis::add( imMaxSessionsSpinBox, tr( "When you have this number of instant message sessions open, new incoming message sessions will be rejected." ) );
    isComposingCheckBox->setText( tr( "&Send composing indications when typing a message." ) );
    isComposingCheckBox->setAccel( QKeySequence( tr( "Alt+S" ) ) );
    QWhatsThis::add( isComposingCheckBox, tr( "Twinkle sends a composing indication when you type a message. This way the recipient can see that you are typing." ) );
    presTextLabel->setText( tr( "Presence" ) );
    presYourGroupBox->setTitle( tr( "Your presence" ) );
    presPublishCheckBox->setText( tr( "&Publish availability at startup" ) );
    presPublishCheckBox->setAccel( QKeySequence( tr( "Alt+P" ) ) );
    QWhatsThis::add( presPublishCheckBox, tr( "Publish your availability at startup." ) );
    presPublishTimerTextLabel->setText( tr( "Publication &refresh interval (sec):" ) );
    QWhatsThis::add( presPublishTimeSpinBox, tr( "Refresh rate of presence publications." ) );
    groupBox25->setTitle( tr( "Buddy presence" ) );
    presSubscribeTimerTextLabel->setText( tr( "&Subscription refresh interval (sec):" ) );
    QWhatsThis::add( presSubscribeTimeSpinBox, tr( "Refresh rate of presence subscriptions." ) );
}

