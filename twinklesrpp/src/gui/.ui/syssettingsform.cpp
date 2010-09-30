/****************************************************************************
** Form implementation generated from reading ui file 'syssettingsform.ui'
**
** Created: Wed Sep 29 18:53:40 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "syssettingsform.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qlistbox.h>
#include <qwidgetstack.h>
#include <qwidget.h>
#include <qlabel.h>
#include <qgroupbox.h>
#include <qcombobox.h>
#include <qlineedit.h>
#include <qcheckbox.h>
#include <qspinbox.h>
#include <qheader.h>
#include <qlistview.h>
#include <qbuttongroup.h>
#include <qradiobutton.h>
#include <qtoolbutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

#include "qlistbox.h"
#include "qcombobox.h"
#include "gui.h"
#include "sockets/interfaces.h"
#include "selectprofileform.h"
#include "qstringlist.h"
#include "audits/memman.h"
#include "qlistview.h"
#include "qspinbox.h"
#include "qfiledialog.h"
#include "qfileinfo.h"
#include "twinkle_config.h"
#include "qregexp.h"
#include "qvalidator.h"
#include "../syssettingsform.ui.h"
/*
 *  Constructs a SysSettingsForm as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
SysSettingsForm::SysSettingsForm( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "SysSettingsForm" );
    SysSettingsFormLayout = new QGridLayout( this, 1, 1, 11, 6, "SysSettingsFormLayout"); 

    categoryListBox = new QListBox( this, "categoryListBox" );
    categoryListBox->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)7, 0, 0, categoryListBox->sizePolicy().hasHeightForWidth() ) );

    SysSettingsFormLayout->addWidget( categoryListBox, 0, 0 );

    layout38 = new QHBoxLayout( 0, 0, 6, "layout38"); 
    spacer98 = new QSpacerItem( 321, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout38->addItem( spacer98 );

    okPushButton = new QPushButton( this, "okPushButton" );
    okPushButton->setDefault( TRUE );
    layout38->addWidget( okPushButton );

    cancelPushButton = new QPushButton( this, "cancelPushButton" );
    layout38->addWidget( cancelPushButton );

    SysSettingsFormLayout->addMultiCellLayout( layout38, 1, 1, 0, 1 );

    settingsWidgetStack = new QWidgetStack( this, "settingsWidgetStack" );
    settingsWidgetStack->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)7, (QSizePolicy::SizeType)5, 0, 0, settingsWidgetStack->sizePolicy().hasHeightForWidth() ) );
    settingsWidgetStack->setFrameShape( QWidgetStack::Box );

    pageAudio = new QWidget( settingsWidgetStack, "pageAudio" );
    pageAudioLayout = new QVBoxLayout( pageAudio, 11, 6, "pageAudioLayout"); 

    audioTitleTextLabel = new QLabel( pageAudio, "audioTitleTextLabel" );
    audioTitleTextLabel->setPaletteBackgroundColor( QColor( 150, 150, 150 ) );
    QFont audioTitleTextLabel_font(  audioTitleTextLabel->font() );
    audioTitleTextLabel_font.setPointSize( 21 );
    audioTitleTextLabel->setFont( audioTitleTextLabel_font ); 
    audioTitleTextLabel->setFrameShape( QLabel::Box );
    audioTitleTextLabel->setIndent( 10 );
    pageAudioLayout->addWidget( audioTitleTextLabel );

    soundcardGroupBox = new QGroupBox( pageAudio, "soundcardGroupBox" );
    soundcardGroupBox->setColumnLayout(0, Qt::Vertical );
    soundcardGroupBox->layout()->setSpacing( 6 );
    soundcardGroupBox->layout()->setMargin( 11 );
    soundcardGroupBoxLayout = new QGridLayout( soundcardGroupBox->layout() );
    soundcardGroupBoxLayout->setAlignment( Qt::AlignTop );

    ringtoneComboBox = new QComboBox( FALSE, soundcardGroupBox, "ringtoneComboBox" );
    ringtoneComboBox->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)7, (QSizePolicy::SizeType)0, 0, 0, ringtoneComboBox->sizePolicy().hasHeightForWidth() ) );

    soundcardGroupBoxLayout->addWidget( ringtoneComboBox, 0, 1 );

    micComboBox = new QComboBox( FALSE, soundcardGroupBox, "micComboBox" );
    micComboBox->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)7, (QSizePolicy::SizeType)0, 0, 0, micComboBox->sizePolicy().hasHeightForWidth() ) );

    soundcardGroupBoxLayout->addWidget( micComboBox, 4, 1 );

    speakerComboBox = new QComboBox( FALSE, soundcardGroupBox, "speakerComboBox" );
    speakerComboBox->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)7, (QSizePolicy::SizeType)0, 0, 0, speakerComboBox->sizePolicy().hasHeightForWidth() ) );

    soundcardGroupBoxLayout->addWidget( speakerComboBox, 2, 1 );

    speakerTextLabel = new QLabel( soundcardGroupBox, "speakerTextLabel" );

    soundcardGroupBoxLayout->addWidget( speakerTextLabel, 2, 0 );

    ringtoneTextLabel = new QLabel( soundcardGroupBox, "ringtoneTextLabel" );

    soundcardGroupBoxLayout->addWidget( ringtoneTextLabel, 0, 0 );

    otherRingtoneTextLabel = new QLabel( soundcardGroupBox, "otherRingtoneTextLabel" );

    soundcardGroupBoxLayout->addWidget( otherRingtoneTextLabel, 1, 0 );

    otherSpeakerTextLabel = new QLabel( soundcardGroupBox, "otherSpeakerTextLabel" );

    soundcardGroupBoxLayout->addWidget( otherSpeakerTextLabel, 3, 0 );

    otherMicTextLabel = new QLabel( soundcardGroupBox, "otherMicTextLabel" );

    soundcardGroupBoxLayout->addWidget( otherMicTextLabel, 5, 0 );

    micTextLabel = new QLabel( soundcardGroupBox, "micTextLabel" );

    soundcardGroupBoxLayout->addWidget( micTextLabel, 4, 0 );

    otherRingtoneLineEdit = new QLineEdit( soundcardGroupBox, "otherRingtoneLineEdit" );

    soundcardGroupBoxLayout->addWidget( otherRingtoneLineEdit, 1, 1 );

    otherMicLineEdit = new QLineEdit( soundcardGroupBox, "otherMicLineEdit" );

    soundcardGroupBoxLayout->addWidget( otherMicLineEdit, 5, 1 );

    otherSpeakerLineEdit = new QLineEdit( soundcardGroupBox, "otherSpeakerLineEdit" );

    soundcardGroupBoxLayout->addWidget( otherSpeakerLineEdit, 3, 1 );

    validateAudioCheckBox = new QCheckBox( soundcardGroupBox, "validateAudioCheckBox" );

    soundcardGroupBoxLayout->addMultiCellWidget( validateAudioCheckBox, 7, 7, 0, 1 );
    pageAudioLayout->addWidget( soundcardGroupBox );

    advancedSoundGroupBox = new QGroupBox( pageAudio, "advancedSoundGroupBox" );
    advancedSoundGroupBox->setColumnLayout(0, Qt::Vertical );
    advancedSoundGroupBox->layout()->setSpacing( 6 );
    advancedSoundGroupBox->layout()->setMargin( 11 );
    advancedSoundGroupBoxLayout = new QHBoxLayout( advancedSoundGroupBox->layout() );
    advancedSoundGroupBoxLayout->setAlignment( Qt::AlignTop );

    layout31 = new QGridLayout( 0, 1, 1, 0, 6, "layout31"); 

    ossFragmnetTextLabel = new QLabel( advancedSoundGroupBox, "ossFragmnetTextLabel" );

    layout31->addWidget( ossFragmnetTextLabel, 0, 0 );

    alsaPlayPeriodComboBox = new QComboBox( FALSE, advancedSoundGroupBox, "alsaPlayPeriodComboBox" );

    layout31->addWidget( alsaPlayPeriodComboBox, 1, 1 );

    alsaPlayPeriodTextLabel = new QLabel( advancedSoundGroupBox, "alsaPlayPeriodTextLabel" );

    layout31->addWidget( alsaPlayPeriodTextLabel, 1, 0 );

    alsaCapturePeriosTextLabel = new QLabel( advancedSoundGroupBox, "alsaCapturePeriosTextLabel" );

    layout31->addWidget( alsaCapturePeriosTextLabel, 2, 0 );

    ossFragmentComboBox = new QComboBox( FALSE, advancedSoundGroupBox, "ossFragmentComboBox" );

    layout31->addWidget( ossFragmentComboBox, 0, 1 );

    alsaCapturePeriodComboBox = new QComboBox( FALSE, advancedSoundGroupBox, "alsaCapturePeriodComboBox" );

    layout31->addWidget( alsaCapturePeriodComboBox, 2, 1 );
    advancedSoundGroupBoxLayout->addLayout( layout31 );
    spacer27 = new QSpacerItem( 121, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    advancedSoundGroupBoxLayout->addItem( spacer27 );
    pageAudioLayout->addWidget( advancedSoundGroupBox );
    spacer97 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    pageAudioLayout->addItem( spacer97 );
    settingsWidgetStack->addWidget( pageAudio, 0 );

    pageLog = new QWidget( settingsWidgetStack, "pageLog" );
    pageLogLayout = new QVBoxLayout( pageLog, 11, 6, "pageLogLayout"); 

    logTitleTextLabel = new QLabel( pageLog, "logTitleTextLabel" );
    logTitleTextLabel->setPaletteBackgroundColor( QColor( 150, 150, 150 ) );
    QFont logTitleTextLabel_font(  logTitleTextLabel->font() );
    logTitleTextLabel_font.setPointSize( 21 );
    logTitleTextLabel->setFont( logTitleTextLabel_font ); 
    logTitleTextLabel->setFrameShape( QLabel::Box );
    logTitleTextLabel->setIndent( 10 );
    pageLogLayout->addWidget( logTitleTextLabel );

    layout8 = new QHBoxLayout( 0, 0, 6, "layout8"); 

    logMaxSizeTextLabel = new QLabel( pageLog, "logMaxSizeTextLabel" );
    layout8->addWidget( logMaxSizeTextLabel );

    logMaxSizeSpinBox = new QSpinBox( pageLog, "logMaxSizeSpinBox" );
    logMaxSizeSpinBox->setMaxValue( 100 );
    logMaxSizeSpinBox->setMinValue( 1 );
    logMaxSizeSpinBox->setLineStep( 5 );
    logMaxSizeSpinBox->setValue( 5 );
    layout8->addWidget( logMaxSizeSpinBox );

    logSizeMbTextLabel = new QLabel( pageLog, "logSizeMbTextLabel" );
    layout8->addWidget( logSizeMbTextLabel );
    spacer7 = new QSpacerItem( 211, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout8->addItem( spacer7 );
    pageLogLayout->addLayout( layout8 );

    logDebugCheckBox = new QCheckBox( pageLog, "logDebugCheckBox" );
    pageLogLayout->addWidget( logDebugCheckBox );

    logSipCheckBox = new QCheckBox( pageLog, "logSipCheckBox" );
    pageLogLayout->addWidget( logSipCheckBox );

    logStunCheckBox = new QCheckBox( pageLog, "logStunCheckBox" );
    pageLogLayout->addWidget( logStunCheckBox );

    logMemoryCheckBox = new QCheckBox( pageLog, "logMemoryCheckBox" );
    pageLogLayout->addWidget( logMemoryCheckBox );
    spacer6 = new QSpacerItem( 20, 61, QSizePolicy::Minimum, QSizePolicy::Expanding );
    pageLogLayout->addItem( spacer6 );
    settingsWidgetStack->addWidget( pageLog, 1 );

    pageGeneral = new QWidget( settingsWidgetStack, "pageGeneral" );
    pageGeneralLayout = new QVBoxLayout( pageGeneral, 11, 6, "pageGeneralLayout"); 

    generalTitleTextLabel = new QLabel( pageGeneral, "generalTitleTextLabel" );
    generalTitleTextLabel->setPaletteBackgroundColor( QColor( 150, 150, 150 ) );
    QFont generalTitleTextLabel_font(  generalTitleTextLabel->font() );
    generalTitleTextLabel_font.setPointSize( 21 );
    generalTitleTextLabel->setFont( generalTitleTextLabel_font ); 
    generalTitleTextLabel->setFrameShape( QLabel::Box );
    generalTitleTextLabel->setIndent( 10 );
    pageGeneralLayout->addWidget( generalTitleTextLabel );

    systrayGroupBox = new QGroupBox( pageGeneral, "systrayGroupBox" );
    systrayGroupBox->setColumnLayout(0, Qt::Vertical );
    systrayGroupBox->layout()->setSpacing( 6 );
    systrayGroupBox->layout()->setMargin( 11 );
    systrayGroupBoxLayout = new QVBoxLayout( systrayGroupBox->layout() );
    systrayGroupBoxLayout->setAlignment( Qt::AlignTop );

    guiUseSystrayCheckBox = new QCheckBox( systrayGroupBox, "guiUseSystrayCheckBox" );
    systrayGroupBoxLayout->addWidget( guiUseSystrayCheckBox );

    guiHideCheckBox = new QCheckBox( systrayGroupBox, "guiHideCheckBox" );
    systrayGroupBoxLayout->addWidget( guiHideCheckBox );
    pageGeneralLayout->addWidget( systrayGroupBox );

    startupGroupBox = new QGroupBox( pageGeneral, "startupGroupBox" );
    startupGroupBox->setColumnLayout(0, Qt::Vertical );
    startupGroupBox->layout()->setSpacing( 6 );
    startupGroupBox->layout()->setMargin( 11 );
    startupGroupBoxLayout = new QGridLayout( startupGroupBox->layout() );
    startupGroupBoxLayout->setAlignment( Qt::AlignTop );

    startHiddenCheckBox = new QCheckBox( startupGroupBox, "startHiddenCheckBox" );

    startupGroupBoxLayout->addMultiCellWidget( startHiddenCheckBox, 0, 0, 0, 1 );

    profileListView = new QListView( startupGroupBox, "profileListView" );
    profileListView->addColumn( tr( "Default user profiles" ) );
    profileListView->setSelectionMode( QListView::NoSelection );
    profileListView->setResizeMode( QListView::LastColumn );

    startupGroupBoxLayout->addMultiCellWidget( profileListView, 1, 1, 0, 1 );
    pageGeneralLayout->addWidget( startupGroupBox );

    srvGroupBox = new QGroupBox( pageGeneral, "srvGroupBox" );
    srvGroupBox->setColumnLayout(0, Qt::Vertical );
    srvGroupBox->layout()->setSpacing( 6 );
    srvGroupBox->layout()->setMargin( 11 );
    srvGroupBoxLayout = new QVBoxLayout( srvGroupBox->layout() );
    srvGroupBoxLayout->setAlignment( Qt::AlignTop );

    callWaitingCheckBox = new QCheckBox( srvGroupBox, "callWaitingCheckBox" );
    srvGroupBoxLayout->addWidget( callWaitingCheckBox );

    hangupBothCheckBox = new QCheckBox( srvGroupBox, "hangupBothCheckBox" );
    srvGroupBoxLayout->addWidget( hangupBothCheckBox );
    pageGeneralLayout->addWidget( srvGroupBox );

    layout23 = new QHBoxLayout( 0, 0, 6, "layout23"); 

    histSizeTextLabel = new QLabel( pageGeneral, "histSizeTextLabel" );
    layout23->addWidget( histSizeTextLabel );

    histSizeSpinBox = new QSpinBox( pageGeneral, "histSizeSpinBox" );
    histSizeSpinBox->setMaxValue( 1000 );
    histSizeSpinBox->setLineStep( 10 );
    layout23->addWidget( histSizeSpinBox );
    spacer73 = new QSpacerItem( 191, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout23->addItem( spacer73 );
    pageGeneralLayout->addLayout( layout23 );

    layout21 = new QHBoxLayout( 0, 0, 6, "layout21"); 

    autoShowCheckBox = new QCheckBox( pageGeneral, "autoShowCheckBox" );
    layout21->addWidget( autoShowCheckBox );

    autoShowTimeoutSpinBox = new QSpinBox( pageGeneral, "autoShowTimeoutSpinBox" );
    autoShowTimeoutSpinBox->setMaxValue( 60 );
    layout21->addWidget( autoShowTimeoutSpinBox );

    secAutoShowTextLabel = new QLabel( pageGeneral, "secAutoShowTextLabel" );
    layout21->addWidget( secAutoShowTextLabel );
    spacer14 = new QSpacerItem( 29, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout21->addItem( spacer14 );
    pageGeneralLayout->addLayout( layout21 );

    layout34 = new QHBoxLayout( 0, 0, 6, "layout34"); 

    browserTextLabel = new QLabel( pageGeneral, "browserTextLabel" );
    layout34->addWidget( browserTextLabel );

    browserLineEdit = new QLineEdit( pageGeneral, "browserLineEdit" );
    layout34->addWidget( browserLineEdit );
    pageGeneralLayout->addLayout( layout34 );
    settingsWidgetStack->addWidget( pageGeneral, 2 );

    pageNetwork = new QWidget( settingsWidgetStack, "pageNetwork" );
    pageNetworkLayout = new QGridLayout( pageNetwork, 1, 1, 11, 6, "pageNetworkLayout"); 

    networkTitleTextLabel = new QLabel( pageNetwork, "networkTitleTextLabel" );
    networkTitleTextLabel->setPaletteBackgroundColor( QColor( 150, 150, 150 ) );
    QFont networkTitleTextLabel_font(  networkTitleTextLabel->font() );
    networkTitleTextLabel_font.setPointSize( 21 );
    networkTitleTextLabel->setFont( networkTitleTextLabel_font ); 
    networkTitleTextLabel->setFrameShape( QLabel::Box );
    networkTitleTextLabel->setIndent( 10 );

    pageNetworkLayout->addMultiCellWidget( networkTitleTextLabel, 0, 0, 0, 3 );
    spacer9 = new QSpacerItem( 20, 230, QSizePolicy::Minimum, QSizePolicy::Expanding );
    pageNetworkLayout->addItem( spacer9, 5, 3 );
    spacer8 = new QSpacerItem( 314, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    pageNetworkLayout->addMultiCell( spacer8, 2, 2, 2, 3 );

    maxUdpSizeLineEdit = new QLineEdit( pageNetwork, "maxUdpSizeLineEdit" );

    pageNetworkLayout->addWidget( maxUdpSizeLineEdit, 3, 3 );

    sipUdpPortTextLabel = new QLabel( pageNetwork, "sipUdpPortTextLabel" );

    pageNetworkLayout->addWidget( sipUdpPortTextLabel, 1, 0 );

    rtpPortTextLabel = new QLabel( pageNetwork, "rtpPortTextLabel" );

    pageNetworkLayout->addWidget( rtpPortTextLabel, 2, 0 );

    maxTcpSizeTextLabel = new QLabel( pageNetwork, "maxTcpSizeTextLabel" );

    pageNetworkLayout->addMultiCellWidget( maxTcpSizeTextLabel, 4, 4, 0, 2 );
    spacer7_2 = new QSpacerItem( 314, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    pageNetworkLayout->addMultiCell( spacer7_2, 1, 1, 2, 3 );

    sipUdpPortSpinBox = new QSpinBox( pageNetwork, "sipUdpPortSpinBox" );
    sipUdpPortSpinBox->setMaxValue( 65535 );
    sipUdpPortSpinBox->setMinValue( 1025 );
    sipUdpPortSpinBox->setValue( 5060 );

    pageNetworkLayout->addWidget( sipUdpPortSpinBox, 1, 1 );

    maxUdpSizeTextLabel = new QLabel( pageNetwork, "maxUdpSizeTextLabel" );

    pageNetworkLayout->addMultiCellWidget( maxUdpSizeTextLabel, 3, 3, 0, 2 );

    maxTcpSizeLineEdit = new QLineEdit( pageNetwork, "maxTcpSizeLineEdit" );

    pageNetworkLayout->addWidget( maxTcpSizeLineEdit, 4, 3 );

    rtpPortSpinBox = new QSpinBox( pageNetwork, "rtpPortSpinBox" );
    rtpPortSpinBox->setMaxValue( 65535 );
    rtpPortSpinBox->setMinValue( 1025 );
    rtpPortSpinBox->setLineStep( 2 );
    rtpPortSpinBox->setValue( 8000 );

    pageNetworkLayout->addWidget( rtpPortSpinBox, 2, 1 );
    settingsWidgetStack->addWidget( pageNetwork, 3 );

    pageRingtones = new QWidget( settingsWidgetStack, "pageRingtones" );
    pageRingtonesLayout = new QVBoxLayout( pageRingtones, 11, 6, "pageRingtonesLayout"); 

    ringtonesTitleTextLabel = new QLabel( pageRingtones, "ringtonesTitleTextLabel" );
    ringtonesTitleTextLabel->setPaletteBackgroundColor( QColor( 150, 150, 150 ) );
    QFont ringtonesTitleTextLabel_font(  ringtonesTitleTextLabel->font() );
    ringtonesTitleTextLabel_font.setPointSize( 21 );
    ringtonesTitleTextLabel->setFont( ringtonesTitleTextLabel_font ); 
    ringtonesTitleTextLabel->setFrameShape( QLabel::Box );
    ringtonesTitleTextLabel->setIndent( 10 );
    pageRingtonesLayout->addWidget( ringtonesTitleTextLabel );

    ringtoneButtonGroup = new QButtonGroup( pageRingtones, "ringtoneButtonGroup" );
    ringtoneButtonGroup->setColumnLayout(0, Qt::Vertical );
    ringtoneButtonGroup->layout()->setSpacing( 6 );
    ringtoneButtonGroup->layout()->setMargin( 11 );
    ringtoneButtonGroupLayout = new QVBoxLayout( ringtoneButtonGroup->layout() );
    ringtoneButtonGroupLayout->setAlignment( Qt::AlignTop );

    playRingtoneCheckBox = new QCheckBox( ringtoneButtonGroup, "playRingtoneCheckBox" );
    ringtoneButtonGroupLayout->addWidget( playRingtoneCheckBox );

    defaultRingtoneRadioButton = new QRadioButton( ringtoneButtonGroup, "defaultRingtoneRadioButton" );
    defaultRingtoneRadioButton->setChecked( TRUE );
    ringtoneButtonGroupLayout->addWidget( defaultRingtoneRadioButton );

    customRingtoneRadioButton = new QRadioButton( ringtoneButtonGroup, "customRingtoneRadioButton" );
    ringtoneButtonGroupLayout->addWidget( customRingtoneRadioButton );

    layout16 = new QHBoxLayout( 0, 0, 6, "layout16"); 
    spacer21 = new QSpacerItem( 20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum );
    layout16->addItem( spacer21 );

    ringtoneLineEdit = new QLineEdit( ringtoneButtonGroup, "ringtoneLineEdit" );
    layout16->addWidget( ringtoneLineEdit );

    openRingtoneToolButton = new QToolButton( ringtoneButtonGroup, "openRingtoneToolButton" );
    openRingtoneToolButton->setFocusPolicy( QToolButton::TabFocus );
    openRingtoneToolButton->setIconSet( QIconSet( QPixmap::fromMimeSource( "fileopen.png" ) ) );
    layout16->addWidget( openRingtoneToolButton );
    ringtoneButtonGroupLayout->addLayout( layout16 );
    pageRingtonesLayout->addWidget( ringtoneButtonGroup );

    ringbackButtonGroup = new QButtonGroup( pageRingtones, "ringbackButtonGroup" );
    ringbackButtonGroup->setColumnLayout(0, Qt::Vertical );
    ringbackButtonGroup->layout()->setSpacing( 6 );
    ringbackButtonGroup->layout()->setMargin( 11 );
    ringbackButtonGroupLayout = new QVBoxLayout( ringbackButtonGroup->layout() );
    ringbackButtonGroupLayout->setAlignment( Qt::AlignTop );

    playRingbackCheckBox = new QCheckBox( ringbackButtonGroup, "playRingbackCheckBox" );
    ringbackButtonGroupLayout->addWidget( playRingbackCheckBox );

    defaultRingbackRadioButton = new QRadioButton( ringbackButtonGroup, "defaultRingbackRadioButton" );
    defaultRingbackRadioButton->setChecked( TRUE );
    ringbackButtonGroupLayout->addWidget( defaultRingbackRadioButton );

    customRingbackRadioButton = new QRadioButton( ringbackButtonGroup, "customRingbackRadioButton" );
    ringbackButtonGroupLayout->addWidget( customRingbackRadioButton );

    layout16_2 = new QHBoxLayout( 0, 0, 6, "layout16_2"); 
    spacer21_2 = new QSpacerItem( 20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum );
    layout16_2->addItem( spacer21_2 );

    ringbackLineEdit = new QLineEdit( ringbackButtonGroup, "ringbackLineEdit" );
    layout16_2->addWidget( ringbackLineEdit );

    openRingbackToolButton = new QToolButton( ringbackButtonGroup, "openRingbackToolButton" );
    openRingbackToolButton->setFocusPolicy( QToolButton::TabFocus );
    openRingbackToolButton->setIconSet( QIconSet( QPixmap::fromMimeSource( "fileopen.png" ) ) );
    layout16_2->addWidget( openRingbackToolButton );
    ringbackButtonGroupLayout->addLayout( layout16_2 );
    pageRingtonesLayout->addWidget( ringbackButtonGroup );
    spacer23 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    pageRingtonesLayout->addItem( spacer23 );
    settingsWidgetStack->addWidget( pageRingtones, 4 );

    pageAddressBook = new QWidget( settingsWidgetStack, "pageAddressBook" );
    pageAddressBookLayout = new QVBoxLayout( pageAddressBook, 11, 6, "pageAddressBookLayout"); 

    ringtonesTitleTextLabel_2 = new QLabel( pageAddressBook, "ringtonesTitleTextLabel_2" );
    ringtonesTitleTextLabel_2->setPaletteBackgroundColor( QColor( 150, 150, 150 ) );
    QFont ringtonesTitleTextLabel_2_font(  ringtonesTitleTextLabel_2->font() );
    ringtonesTitleTextLabel_2_font.setPointSize( 21 );
    ringtonesTitleTextLabel_2->setFont( ringtonesTitleTextLabel_2_font ); 
    ringtonesTitleTextLabel_2->setFrameShape( QLabel::Box );
    ringtonesTitleTextLabel_2->setIndent( 10 );
    pageAddressBookLayout->addWidget( ringtonesTitleTextLabel_2 );

    abLookupNameCheckBox = new QCheckBox( pageAddressBook, "abLookupNameCheckBox" );
    pageAddressBookLayout->addWidget( abLookupNameCheckBox );

    abOverrideDisplayCheckBox = new QCheckBox( pageAddressBook, "abOverrideDisplayCheckBox" );
    pageAddressBookLayout->addWidget( abOverrideDisplayCheckBox );

    abLookupPhotoCheckBox = new QCheckBox( pageAddressBook, "abLookupPhotoCheckBox" );
    pageAddressBookLayout->addWidget( abLookupPhotoCheckBox );
    spacer61 = new QSpacerItem( 20, 121, QSizePolicy::Minimum, QSizePolicy::Expanding );
    pageAddressBookLayout->addItem( spacer61 );
    settingsWidgetStack->addWidget( pageAddressBook, 5 );

    SysSettingsFormLayout->addWidget( settingsWidgetStack, 0, 1 );
    languageChange();
    resize( QSize(765, 624).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( okPushButton, SIGNAL( clicked() ), this, SLOT( validate() ) );
    connect( cancelPushButton, SIGNAL( clicked() ), this, SLOT( reject() ) );
    connect( categoryListBox, SIGNAL( highlighted(int) ), this, SLOT( showCategory(int) ) );
    connect( guiUseSystrayCheckBox, SIGNAL( toggled(bool) ), guiHideCheckBox, SLOT( setEnabled(bool) ) );
    connect( guiUseSystrayCheckBox, SIGNAL( toggled(bool) ), guiHideCheckBox, SLOT( setChecked(bool) ) );
    connect( guiUseSystrayCheckBox, SIGNAL( toggled(bool) ), startHiddenCheckBox, SLOT( setEnabled(bool) ) );
    connect( playRingtoneCheckBox, SIGNAL( toggled(bool) ), customRingtoneRadioButton, SLOT( setEnabled(bool) ) );
    connect( playRingtoneCheckBox, SIGNAL( toggled(bool) ), defaultRingtoneRadioButton, SLOT( setEnabled(bool) ) );
    connect( playRingtoneCheckBox, SIGNAL( toggled(bool) ), this, SLOT( playRingToneCheckBoxToggles(bool) ) );
    connect( playRingtoneCheckBox, SIGNAL( toggled(bool) ), openRingtoneToolButton, SLOT( setEnabled(bool) ) );
    connect( playRingbackCheckBox, SIGNAL( toggled(bool) ), customRingbackRadioButton, SLOT( setEnabled(bool) ) );
    connect( playRingbackCheckBox, SIGNAL( toggled(bool) ), defaultRingbackRadioButton, SLOT( setEnabled(bool) ) );
    connect( playRingbackCheckBox, SIGNAL( toggled(bool) ), this, SLOT( playRingBackToneCheckBoxToggles(bool) ) );
    connect( playRingbackCheckBox, SIGNAL( toggled(bool) ), openRingbackToolButton, SLOT( setEnabled(bool) ) );
    connect( openRingtoneToolButton, SIGNAL( clicked() ), this, SLOT( chooseRingtone() ) );
    connect( openRingbackToolButton, SIGNAL( clicked() ), this, SLOT( chooseRingback() ) );
    connect( customRingtoneRadioButton, SIGNAL( toggled(bool) ), ringtoneLineEdit, SLOT( setEnabled(bool) ) );
    connect( customRingtoneRadioButton, SIGNAL( toggled(bool) ), openRingtoneToolButton, SLOT( setEnabled(bool) ) );
    connect( customRingbackRadioButton, SIGNAL( toggled(bool) ), ringbackLineEdit, SLOT( setEnabled(bool) ) );
    connect( customRingbackRadioButton, SIGNAL( toggled(bool) ), openRingbackToolButton, SLOT( setEnabled(bool) ) );
    connect( abLookupNameCheckBox, SIGNAL( toggled(bool) ), abOverrideDisplayCheckBox, SLOT( setEnabled(bool) ) );
    connect( ringtoneComboBox, SIGNAL( activated(int) ), this, SLOT( devRingtoneSelected(int) ) );
    connect( speakerComboBox, SIGNAL( activated(int) ), this, SLOT( devSpeakerSelected(int) ) );
    connect( micComboBox, SIGNAL( activated(int) ), this, SLOT( devMicSelected(int) ) );

    // tab order
    setTabOrder( categoryListBox, guiUseSystrayCheckBox );
    setTabOrder( guiUseSystrayCheckBox, guiHideCheckBox );
    setTabOrder( guiHideCheckBox, startHiddenCheckBox );
    setTabOrder( startHiddenCheckBox, profileListView );
    setTabOrder( profileListView, callWaitingCheckBox );
    setTabOrder( callWaitingCheckBox, hangupBothCheckBox );
    setTabOrder( hangupBothCheckBox, histSizeSpinBox );
    setTabOrder( histSizeSpinBox, autoShowCheckBox );
    setTabOrder( autoShowCheckBox, autoShowTimeoutSpinBox );
    setTabOrder( autoShowTimeoutSpinBox, ringtoneComboBox );
    setTabOrder( ringtoneComboBox, otherRingtoneLineEdit );
    setTabOrder( otherRingtoneLineEdit, speakerComboBox );
    setTabOrder( speakerComboBox, otherSpeakerLineEdit );
    setTabOrder( otherSpeakerLineEdit, micComboBox );
    setTabOrder( micComboBox, otherMicLineEdit );
    setTabOrder( otherMicLineEdit, validateAudioCheckBox );
    setTabOrder( validateAudioCheckBox, ossFragmentComboBox );
    setTabOrder( ossFragmentComboBox, alsaPlayPeriodComboBox );
    setTabOrder( alsaPlayPeriodComboBox, alsaCapturePeriodComboBox );
    setTabOrder( alsaCapturePeriodComboBox, playRingtoneCheckBox );
    setTabOrder( playRingtoneCheckBox, defaultRingtoneRadioButton );
    setTabOrder( defaultRingtoneRadioButton, ringtoneLineEdit );
    setTabOrder( ringtoneLineEdit, openRingtoneToolButton );
    setTabOrder( openRingtoneToolButton, playRingbackCheckBox );
    setTabOrder( playRingbackCheckBox, defaultRingbackRadioButton );
    setTabOrder( defaultRingbackRadioButton, ringbackLineEdit );
    setTabOrder( ringbackLineEdit, openRingbackToolButton );
    setTabOrder( openRingbackToolButton, abLookupNameCheckBox );
    setTabOrder( abLookupNameCheckBox, abOverrideDisplayCheckBox );
    setTabOrder( abOverrideDisplayCheckBox, abLookupPhotoCheckBox );
    setTabOrder( abLookupPhotoCheckBox, sipUdpPortSpinBox );
    setTabOrder( sipUdpPortSpinBox, rtpPortSpinBox );
    setTabOrder( rtpPortSpinBox, maxUdpSizeLineEdit );
    setTabOrder( maxUdpSizeLineEdit, maxTcpSizeLineEdit );
    setTabOrder( maxTcpSizeLineEdit, logMaxSizeSpinBox );
    setTabOrder( logMaxSizeSpinBox, logDebugCheckBox );
    setTabOrder( logDebugCheckBox, logSipCheckBox );
    setTabOrder( logSipCheckBox, logStunCheckBox );
    setTabOrder( logStunCheckBox, logMemoryCheckBox );
    setTabOrder( logMemoryCheckBox, okPushButton );
    setTabOrder( okPushButton, cancelPushButton );
    setTabOrder( cancelPushButton, customRingtoneRadioButton );
    setTabOrder( customRingtoneRadioButton, customRingbackRadioButton );

    // buddies
    speakerTextLabel->setBuddy( speakerComboBox );
    ringtoneTextLabel->setBuddy( ringtoneComboBox );
    otherRingtoneTextLabel->setBuddy( otherRingtoneLineEdit );
    otherSpeakerTextLabel->setBuddy( otherSpeakerLineEdit );
    otherMicTextLabel->setBuddy( otherMicLineEdit );
    micTextLabel->setBuddy( micComboBox );
    ossFragmnetTextLabel->setBuddy( ossFragmentComboBox );
    alsaPlayPeriodTextLabel->setBuddy( alsaPlayPeriodComboBox );
    alsaCapturePeriosTextLabel->setBuddy( alsaCapturePeriodComboBox );
    logMaxSizeTextLabel->setBuddy( logMaxSizeSpinBox );
    histSizeTextLabel->setBuddy( histSizeSpinBox );
    browserTextLabel->setBuddy( browserLineEdit );
    sipUdpPortTextLabel->setBuddy( sipUdpPortSpinBox );
    rtpPortTextLabel->setBuddy( rtpPortSpinBox );
    maxTcpSizeTextLabel->setBuddy( maxTcpSizeLineEdit );
    maxUdpSizeTextLabel->setBuddy( maxUdpSizeLineEdit );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
SysSettingsForm::~SysSettingsForm()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void SysSettingsForm::languageChange()
{
    setCaption( tr( "Twinkle - System Settings" ) );
    categoryListBox->clear();
    categoryListBox->insertItem( QPixmap::fromMimeSource( "twinkle32.png" ), tr( "General" ) );
    categoryListBox->insertItem( QPixmap::fromMimeSource( "kmix.png" ), tr( "Audio" ) );
    categoryListBox->insertItem( QPixmap::fromMimeSource( "knotify.png" ), tr( "Ring tones" ) );
    categoryListBox->insertItem( QPixmap::fromMimeSource( "kontact_contacts32.png" ), tr( "Address book" ) );
    categoryListBox->insertItem( QPixmap::fromMimeSource( "network.png" ), tr( "Network" ) );
    categoryListBox->insertItem( QPixmap::fromMimeSource( "log.png" ), tr( "Log" ) );
    QWhatsThis::add( categoryListBox, tr( "Select a category for which you want to see or modify the settings." ) );
    okPushButton->setText( tr( "&OK" ) );
    okPushButton->setAccel( QKeySequence( tr( "Alt+O" ) ) );
    QWhatsThis::add( okPushButton, tr( "Accept and save your changes." ) );
    cancelPushButton->setText( tr( "&Cancel" ) );
    cancelPushButton->setAccel( QKeySequence( tr( "Alt+C" ) ) );
    QWhatsThis::add( cancelPushButton, tr( "Undo all your changes and close the window." ) );
    audioTitleTextLabel->setText( tr( "Audio" ) );
    soundcardGroupBox->setTitle( tr( "Sound Card" ) );
    QWhatsThis::add( ringtoneComboBox, tr( "Select the sound card for playing the ring tone for incoming calls." ) );
    QWhatsThis::add( micComboBox, tr( "Select the sound card to which your microphone is connected." ) );
    QWhatsThis::add( speakerComboBox, tr( "Select the sound card for the speaker function during a call." ) );
    speakerTextLabel->setText( tr( "&Speaker:" ) );
    ringtoneTextLabel->setText( tr( "&Ring tone:" ) );
    otherRingtoneTextLabel->setText( tr( "Other device:" ) );
    otherSpeakerTextLabel->setText( tr( "Other device:" ) );
    otherMicTextLabel->setText( tr( "Other device:" ) );
    micTextLabel->setText( tr( "&Microphone:" ) );
    validateAudioCheckBox->setText( tr( "&Validate devices before usage" ) );
    validateAudioCheckBox->setAccel( QKeySequence( tr( "Alt+V" ) ) );
    QWhatsThis::add( validateAudioCheckBox, tr( "<p>\n"
"Twinkle validates the audio devices before usage to avoid an established call without an audio channel.\n"
"<p>\n"
"On startup of Twinkle a warning is given if an audio device is inaccessible.\n"
"<p>\n"
"If before making a call, the microphone or speaker appears to be invalid, a warning is given and no call can be made.\n"
"<p>\n"
"If before answering a call, the microphone or speaker appears to be invalid, a warning is given and the call will not be answered." ) );
    advancedSoundGroupBox->setTitle( tr( "Advanced" ) );
    ossFragmnetTextLabel->setText( tr( "OSS &fragment size:" ) );
    alsaPlayPeriodComboBox->clear();
    alsaPlayPeriodComboBox->insertItem( tr( "16" ) );
    alsaPlayPeriodComboBox->insertItem( tr( "32" ) );
    alsaPlayPeriodComboBox->insertItem( tr( "64" ) );
    alsaPlayPeriodComboBox->insertItem( tr( "128" ) );
    alsaPlayPeriodComboBox->insertItem( tr( "256" ) );
    QWhatsThis::add( alsaPlayPeriodComboBox, tr( "The ALSA play period size influences the real time behaviour of your soundcard for playing sound. If your sound frequently drops while using ALSA, you might try a different value here." ) );
    alsaPlayPeriodTextLabel->setText( tr( "ALSA &play period size:" ) );
    alsaCapturePeriosTextLabel->setText( tr( "&ALSA capture period size:" ) );
    ossFragmentComboBox->clear();
    ossFragmentComboBox->insertItem( tr( "16" ) );
    ossFragmentComboBox->insertItem( tr( "32" ) );
    ossFragmentComboBox->insertItem( tr( "64" ) );
    ossFragmentComboBox->insertItem( tr( "128" ) );
    ossFragmentComboBox->insertItem( tr( "256" ) );
    QWhatsThis::add( ossFragmentComboBox, tr( "The OSS fragment size influences the real time behaviour of your soundcard. If your sound frequently drops while using OSS, you might try a different value here." ) );
    alsaCapturePeriodComboBox->clear();
    alsaCapturePeriodComboBox->insertItem( tr( "16" ) );
    alsaCapturePeriodComboBox->insertItem( tr( "32" ) );
    alsaCapturePeriodComboBox->insertItem( tr( "64" ) );
    alsaCapturePeriodComboBox->insertItem( tr( "128" ) );
    alsaCapturePeriodComboBox->insertItem( tr( "256" ) );
    QWhatsThis::add( alsaCapturePeriodComboBox, tr( "The ALSA capture period size influences the real time behaviour of your soundcard for capturing sound. If the other side of your call complains about frequently dropping sound, you might try a different value here." ) );
    logTitleTextLabel->setText( tr( "Log" ) );
    logMaxSizeTextLabel->setText( tr( "&Max log size:" ) );
    QWhatsThis::add( logMaxSizeSpinBox, tr( "The maximum size of a log file in MB. When the log file exceeds this size, a backup of the log file is created and the current log file is zapped. Only one backup log file will be kept." ) );
    logSizeMbTextLabel->setText( tr( "MB" ) );
    logDebugCheckBox->setText( tr( "Log &debug reports" ) );
    logDebugCheckBox->setAccel( QKeySequence( tr( "Alt+D" ) ) );
    QWhatsThis::add( logDebugCheckBox, tr( "Indicates if reports marked as \"debug\" will be logged." ) );
    logSipCheckBox->setText( tr( "Log &SIP reports" ) );
    logSipCheckBox->setAccel( QKeySequence( tr( "Alt+S" ) ) );
    QWhatsThis::add( logSipCheckBox, tr( "Indicates if SIP messages will be logged." ) );
    logStunCheckBox->setText( tr( "Log S&TUN reports" ) );
    logStunCheckBox->setAccel( QKeySequence( tr( "Alt+T" ) ) );
    QWhatsThis::add( logStunCheckBox, tr( "Indicates if STUN messages will be logged." ) );
    logMemoryCheckBox->setText( tr( "Log m&emory reports" ) );
    logMemoryCheckBox->setAccel( QKeySequence( tr( "Alt+E" ) ) );
    QWhatsThis::add( logMemoryCheckBox, tr( "Indicates if reports concerning memory management will be logged." ) );
    generalTitleTextLabel->setText( tr( "General" ) );
    systrayGroupBox->setTitle( tr( "System tray" ) );
    guiUseSystrayCheckBox->setText( tr( "Create &system tray icon on startup" ) );
    guiUseSystrayCheckBox->setAccel( QKeySequence( tr( "Alt+S" ) ) );
    QWhatsThis::add( guiUseSystrayCheckBox, tr( "Enable this option if you want a system tray icon for Twinkle. The system tray icon is created when you start Twinkle." ) );
    guiHideCheckBox->setText( tr( "&Hide in system tray when closing main window" ) );
    guiHideCheckBox->setAccel( QKeySequence( tr( "Alt+H" ) ) );
    QWhatsThis::add( guiHideCheckBox, tr( "Enable this option if you want Twinkle to hide in the system tray when you close the main window." ) );
    startupGroupBox->setTitle( tr( "Startup" ) );
    startHiddenCheckBox->setText( tr( "S&tartup hidden in system tray" ) );
    startHiddenCheckBox->setAccel( QKeySequence( tr( "Alt+T" ) ) );
    QWhatsThis::add( startHiddenCheckBox, tr( "Next time you start Twinkle it will immediately hide in the system tray. This works best when you also select a default user profile." ) );
    profileListView->header()->setLabel( 0, tr( "Default user profiles" ) );
    QWhatsThis::add( profileListView, tr( "If you always use the same profile(s), then you can mark these profiles as default here. The next time you start Twinkle, you will not be asked to select which profiles to run. The default profiles will automatically run." ) );
    srvGroupBox->setTitle( tr( "Services" ) );
    callWaitingCheckBox->setText( tr( "Call &waiting" ) );
    callWaitingCheckBox->setAccel( QKeySequence( tr( "Alt+W" ) ) );
    QWhatsThis::add( callWaitingCheckBox, tr( "With call waiting an incoming call is accepted when only one line is busy. When you disable call waiting an incoming call will be rejected when one line is busy." ) );
    hangupBothCheckBox->setText( tr( "Hang up &both lines when ending a 3-way conference call." ) );
    hangupBothCheckBox->setAccel( QKeySequence( tr( "Alt+B" ) ) );
    QWhatsThis::add( hangupBothCheckBox, tr( "Hang up both lines when you press bye to end a 3-way conference call. When this option is disabled, only the active line will be hung up and you can continue talking with the party on the other line." ) );
    histSizeTextLabel->setText( tr( "&Maximum calls in call history:" ) );
    QWhatsThis::add( histSizeSpinBox, tr( "The maximum number of calls that will be kept in the call history." ) );
    autoShowCheckBox->setText( tr( "&Auto show main window on incoming call after" ) );
    autoShowCheckBox->setAccel( QKeySequence( tr( "Alt+A" ) ) );
    QWhatsThis::add( autoShowCheckBox, tr( "When the main window is hidden, it will be automatically shown on an incoming call after the number of specified seconds." ) );
    QWhatsThis::add( autoShowTimeoutSpinBox, tr( "Number of seconds after which the main window should be shown." ) );
    secAutoShowTextLabel->setText( tr( "secs" ) );
    browserTextLabel->setText( tr( "W&eb browser command:" ) );
    QWhatsThis::add( browserLineEdit, tr( "Command to start your web browser. If you leave this field empty Twinkle will try to figure out your default web browser." ) );
    networkTitleTextLabel->setText( tr( "Network" ) );
    QWhatsThis::add( maxUdpSizeLineEdit, tr( "Maximum allowed size (0-65535) in bytes of an incoming SIP message over UDP." ) );
    sipUdpPortTextLabel->setText( tr( "&SIP port:" ) );
    rtpPortTextLabel->setText( tr( "&RTP port:" ) );
    maxTcpSizeTextLabel->setText( tr( "Max. SIP message size (&TCP):" ) );
    QWhatsThis::add( sipUdpPortSpinBox, tr( "The UDP/TCP port used for sending and receiving SIP messages." ) );
    maxUdpSizeTextLabel->setText( tr( "Max. SIP message size (&UDP):" ) );
    QWhatsThis::add( maxTcpSizeLineEdit, tr( "Maximum allowed size (0-4294967295) in bytes of an incoming SIP message over TCP." ) );
    QWhatsThis::add( rtpPortSpinBox, tr( "The UDP port used for sending and receiving RTP for the first line. The UDP port for the second line is 2 higher. E.g. if port 8000 is used for the first line, then the second line uses port 8002. When you use call transfer then the next even port (eg. 8004) is also used." ) );
    ringtonesTitleTextLabel->setText( tr( "Ring tones" ) );
    ringtoneButtonGroup->setTitle( tr( "Ring tone" ) );
    playRingtoneCheckBox->setText( tr( "&Play ring tone on incoming call" ) );
    playRingtoneCheckBox->setAccel( QKeySequence( tr( "Alt+P" ) ) );
    QWhatsThis::add( playRingtoneCheckBox, tr( "Indicates if a ring tone should be played when a call comes in." ) );
    defaultRingtoneRadioButton->setText( tr( "&Default ring tone" ) );
    defaultRingtoneRadioButton->setAccel( QKeySequence( tr( "Alt+D" ) ) );
    QWhatsThis::add( defaultRingtoneRadioButton, tr( "Play the default ring tone when a call comes in." ) );
    customRingtoneRadioButton->setText( tr( "C&ustom ring tone" ) );
    customRingtoneRadioButton->setAccel( QKeySequence( tr( "Alt+U" ) ) );
    QWhatsThis::add( customRingtoneRadioButton, tr( "Play a custom ring tone when a call comes in." ) );
    QWhatsThis::add( ringtoneLineEdit, tr( "Specify the file name of a .wav file that you want to be played as ring tone." ) );
    openRingtoneToolButton->setText( QString::null );
    QWhatsThis::add( openRingtoneToolButton, tr( "Select ring tone file." ) );
    ringbackButtonGroup->setTitle( tr( "Ring back tone" ) );
    playRingbackCheckBox->setText( tr( "P&lay ring back tone when network does not play ring back tone" ) );
    playRingbackCheckBox->setAccel( QKeySequence( tr( "Alt+L" ) ) );
    QWhatsThis::add( playRingbackCheckBox, tr( "<p>\n"
"Play ring back tone while you are waiting for the far-end to answer your call.\n"
"</p>\n"
"<p>\n"
"Depending on your SIP provider the network might provide ring back tone or an announcement.\n"
"</p>" ) );
    defaultRingbackRadioButton->setText( tr( "D&efault ring back tone" ) );
    defaultRingbackRadioButton->setAccel( QKeySequence( tr( "Alt+E" ) ) );
    QWhatsThis::add( defaultRingbackRadioButton, tr( "Play the default ring back tone." ) );
    customRingbackRadioButton->setText( tr( "Cu&stom ring back tone" ) );
    customRingbackRadioButton->setAccel( QKeySequence( tr( "Alt+S" ) ) );
    QWhatsThis::add( customRingbackRadioButton, tr( "Play a custom ring back tone." ) );
    QWhatsThis::add( ringbackLineEdit, tr( "Specify the file name of a .wav file that you want to be played as ring back tone." ) );
    openRingbackToolButton->setText( QString::null );
    QWhatsThis::add( openRingbackToolButton, tr( "Select ring back tone file." ) );
    ringtonesTitleTextLabel_2->setText( tr( "Address book" ) );
    abLookupNameCheckBox->setText( tr( "&Lookup name for incoming call" ) );
    abLookupNameCheckBox->setAccel( QKeySequence( tr( "Alt+L" ) ) );
    QWhatsThis::add( abLookupNameCheckBox, tr( "On an incoming call, Twinkle will try to find the name belonging to the incoming SIP address in your address book. This name will be displayed." ) );
    abOverrideDisplayCheckBox->setText( tr( "Ove&rride received display name" ) );
    abOverrideDisplayCheckBox->setAccel( QKeySequence( tr( "Alt+R" ) ) );
    QWhatsThis::add( abOverrideDisplayCheckBox, tr( "The caller may have provided a display name already. Tick this box if you want to override that name with the name you have in your address book." ) );
    abLookupPhotoCheckBox->setText( tr( "Lookup &photo for incoming call" ) );
    abLookupPhotoCheckBox->setAccel( QKeySequence( tr( "Alt+P" ) ) );
    QWhatsThis::add( abLookupPhotoCheckBox, tr( "Lookup the photo of a caller in your address book and display it on an incoming call." ) );
}

