/****************************************************************************
** Form implementation generated from reading ui file 'mphoneform.ui'
**
** Created: Sun Oct 3 21:29:22 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "mphoneform.h"

#include <qvariant.h>
#include <sys/time.h>
#include <qpushbutton.h>
#include <qsplitter.h>
#include <qheader.h>
#include <qlistview.h>
#include <qlabel.h>
#include <qcombobox.h>
#include <qtoolbutton.h>
#include <qgroupbox.h>
#include <qtextedit.h>
#include <qbuttongroup.h>
#include <qradiobutton.h>
#include <qlineedit.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qaction.h>
#include <qmenubar.h>
#include <qpopupmenu.h>
#include <qtoolbar.h>
#include <qimage.h>
#include <qpixmap.h>

#include "user.h"
#include "qtextedit.h"
#include "qcheckbox.h"
#include "qapplication.h"
#include "gui.h"
#include "qpixmap.h"
#include "qiconset.h"
#include "qmessagebox.h"
#include "audits/memman.h"
#include "line.h"
#include "stun/stun_transaction.h"
#include "log.h"
#include "qprogressdialog.h"
#include "util.h"
#include "qtimer.h"
#include "qframe.h"
#include "qcursor.h"
#include "qregexp.h"
#include "qvalidator.h"
#include "buddyform.h"
#include "diamondcardprofileform.h"
#include "../mphoneform.ui.h"
/*
 *  Constructs a MphoneForm as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 */
MphoneForm::MphoneForm( QWidget* parent, const char* name, WFlags fl )
    : QMainWindow( parent, name, fl )
{
    (void)statusBar();
    if ( !name )
	setName( "MphoneForm" );
    setEnabled( TRUE );
    setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)5, 0, 0, sizePolicy().hasHeightForWidth() ) );
    setMinimumSize( QSize( 714, 693 ) );
    setIcon( QPixmap::fromMimeSource( "twinkle16.png" ) );
    setRightJustification( FALSE );
    setUsesBigPixmaps( FALSE );
    setUsesTextLabel( TRUE );
    setCentralWidget( new QWidget( this, "qt_central_widget" ) );
    MphoneFormLayout = new QGridLayout( centralWidget(), 1, 1, 11, 6, "MphoneFormLayout"); 

    splitter2 = new QSplitter( centralWidget(), "splitter2" );
    splitter2->setOrientation( QSplitter::Horizontal );

    buddyListView = new QListView( splitter2, "buddyListView" );
    buddyListView->addColumn( tr( "Buddy list" ) );
    buddyListView->header()->setClickEnabled( FALSE, buddyListView->header()->count() - 1 );
    buddyListView->header()->setResizeEnabled( FALSE, buddyListView->header()->count() - 1 );
    buddyListView->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)7, (QSizePolicy::SizeType)7, 150, 0, buddyListView->sizePolicy().hasHeightForWidth() ) );
    buddyListView->setMinimumSize( QSize( 0, 0 ) );
    buddyListView->setRootIsDecorated( TRUE );
    buddyListView->setResizeMode( QListView::LastColumn );

    QWidget* privateLayoutWidget = new QWidget( splitter2, "layout13" );
    layout13 = new QVBoxLayout( privateLayoutWidget, 11, 6, "layout13"); 

    layout76 = new QGridLayout( 0, 1, 1, 0, 6, "layout76"); 

    callTextLabel = new QLabel( privateLayoutWidget, "callTextLabel" );

    layout76->addWidget( callTextLabel, 1, 0 );

    layout71 = new QHBoxLayout( 0, 0, 6, "layout71"); 

    callComboBox = new QComboBox( FALSE, privateLayoutWidget, "callComboBox" );
    callComboBox->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)3, (QSizePolicy::SizeType)0, 0, 0, callComboBox->sizePolicy().hasHeightForWidth() ) );
    callComboBox->setEditable( TRUE );
    callComboBox->setMaxCount( 10 );
    callComboBox->setInsertionPolicy( QComboBox::NoInsertion );
    callComboBox->setAutoCompletion( TRUE );
    layout71->addWidget( callComboBox );

    addressToolButton = new QToolButton( privateLayoutWidget, "addressToolButton" );
    addressToolButton->setFocusPolicy( QToolButton::TabFocus );
    addressToolButton->setIconSet( QIconSet( QPixmap::fromMimeSource( "kontact_contacts.png" ) ) );
    layout71->addWidget( addressToolButton );

    callPushButton = new QPushButton( privateLayoutWidget, "callPushButton" );
    callPushButton->setDefault( TRUE );
    layout71->addWidget( callPushButton );

    layout76->addLayout( layout71, 1, 1 );

    userLabel = new QLabel( privateLayoutWidget, "userLabel" );

    layout76->addWidget( userLabel, 0, 0 );

    layout75 = new QHBoxLayout( 0, 0, 6, "layout75"); 

    userComboBox = new QComboBox( FALSE, privateLayoutWidget, "userComboBox" );
    userComboBox->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)3, (QSizePolicy::SizeType)0, 0, 0, userComboBox->sizePolicy().hasHeightForWidth() ) );
    layout75->addWidget( userComboBox );

    layout74 = new QHBoxLayout( 0, 0, 6, "layout74"); 

    statAaLabel = new QLabel( privateLayoutWidget, "statAaLabel" );
    statAaLabel->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)0, 0, 0, statAaLabel->sizePolicy().hasHeightForWidth() ) );
    statAaLabel->setCursor( QCursor( 13 ) );
    statAaLabel->setFrameShadow( QLabel::Plain );
    statAaLabel->setPixmap( QPixmap::fromMimeSource( "auto_answer.png" ) );
    layout74->addWidget( statAaLabel );

    statCfLabel = new QLabel( privateLayoutWidget, "statCfLabel" );
    statCfLabel->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)0, 0, 0, statCfLabel->sizePolicy().hasHeightForWidth() ) );
    statCfLabel->setCursor( QCursor( 13 ) );
    statCfLabel->setPixmap( QPixmap::fromMimeSource( "cf.png" ) );
    layout74->addWidget( statCfLabel );

    statDndLabel = new QLabel( privateLayoutWidget, "statDndLabel" );
    statDndLabel->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)0, 0, 0, statDndLabel->sizePolicy().hasHeightForWidth() ) );
    statDndLabel->setCursor( QCursor( 13 ) );
    statDndLabel->setPixmap( QPixmap::fromMimeSource( "cancel.png" ) );
    layout74->addWidget( statDndLabel );

    statMWILabel = new QLabel( privateLayoutWidget, "statMWILabel" );
    statMWILabel->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)0, 0, 0, statMWILabel->sizePolicy().hasHeightForWidth() ) );
    statMWILabel->setCursor( QCursor( 13 ) );
    statMWILabel->setFrameShadow( QLabel::Plain );
    statMWILabel->setPixmap( QPixmap::fromMimeSource( "mwi_none16.png" ) );
    layout74->addWidget( statMWILabel );

    statMissedLabel = new QLabel( privateLayoutWidget, "statMissedLabel" );
    statMissedLabel->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)0, 0, 0, statMissedLabel->sizePolicy().hasHeightForWidth() ) );
    statMissedLabel->setCursor( QCursor( 13 ) );
    statMissedLabel->setPixmap( QPixmap::fromMimeSource( "missed.png" ) );
    layout74->addWidget( statMissedLabel );

    statRegLabel = new QLabel( privateLayoutWidget, "statRegLabel" );
    statRegLabel->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)0, 0, 0, statRegLabel->sizePolicy().hasHeightForWidth() ) );
    statRegLabel->setCursor( QCursor( 13 ) );
    statRegLabel->setPixmap( QPixmap::fromMimeSource( "twinkle16.png" ) );
    layout74->addWidget( statRegLabel );
    layout75->addLayout( layout74 );

    layout76->addLayout( layout75, 0, 1 );
    layout13->addLayout( layout76 );

    displayGroupBox = new QGroupBox( privateLayoutWidget, "displayGroupBox" );
    displayGroupBox->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)5, 0, 0, displayGroupBox->sizePolicy().hasHeightForWidth() ) );
    displayGroupBox->setColumnLayout(0, Qt::Vertical );
    displayGroupBox->layout()->setSpacing( 6 );
    displayGroupBox->layout()->setMargin( 11 );
    displayGroupBoxLayout = new QVBoxLayout( displayGroupBox->layout() );
    displayGroupBoxLayout->setAlignment( Qt::AlignTop );

    displayTextEdit = new QTextEdit( displayGroupBox, "displayTextEdit" );
    displayTextEdit->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)7, (QSizePolicy::SizeType)3, 0, 0, displayTextEdit->sizePolicy().hasHeightForWidth() ) );
    displayTextEdit->setVScrollBarMode( QTextEdit::AlwaysOn );
    displayTextEdit->setTextFormat( QTextEdit::PlainText );
    displayTextEdit->setWordWrap( QTextEdit::NoWrap );
    displayTextEdit->setReadOnly( TRUE );
    displayTextEdit->setAutoFormatting( int( QTextEdit::AutoAll ) );
    displayGroupBoxLayout->addWidget( displayTextEdit );
    layout13->addWidget( displayGroupBox );

    lineButtonGroup = new QButtonGroup( privateLayoutWidget, "lineButtonGroup" );
    lineButtonGroup->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)5, 0, 0, lineButtonGroup->sizePolicy().hasHeightForWidth() ) );
    lineButtonGroup->setExclusive( TRUE );
    lineButtonGroup->setColumnLayout(0, Qt::Vertical );
    lineButtonGroup->layout()->setSpacing( 6 );
    lineButtonGroup->layout()->setMargin( 11 );
    lineButtonGroupLayout = new QVBoxLayout( lineButtonGroup->layout() );
    lineButtonGroupLayout->setAlignment( Qt::AlignTop );

    layout20 = new QHBoxLayout( 0, 0, 6, "layout20"); 

    layout27 = new QVBoxLayout( 0, 0, 6, "layout27"); 

    line1RadioButton = new QRadioButton( lineButtonGroup, "line1RadioButton" );
    line1RadioButton->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)0, 0, 0, line1RadioButton->sizePolicy().hasHeightForWidth() ) );
    line1RadioButton->setChecked( TRUE );
    layout27->addWidget( line1RadioButton );

    fromhead1Label = new QLabel( lineButtonGroup, "fromhead1Label" );
    fromhead1Label->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)5, 0, 0, fromhead1Label->sizePolicy().hasHeightForWidth() ) );
    fromhead1Label->setIndent( 21 );
    layout27->addWidget( fromhead1Label );

    tohead1Label = new QLabel( lineButtonGroup, "tohead1Label" );
    tohead1Label->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)5, 0, 0, tohead1Label->sizePolicy().hasHeightForWidth() ) );
    tohead1Label->setIndent( 21 );
    layout27->addWidget( tohead1Label );

    subjecthead1Label = new QLabel( lineButtonGroup, "subjecthead1Label" );
    subjecthead1Label->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)5, 0, 0, subjecthead1Label->sizePolicy().hasHeightForWidth() ) );
    subjecthead1Label->setIndent( 21 );
    layout27->addWidget( subjecthead1Label );
    layout20->addLayout( layout27 );

    layout19 = new QVBoxLayout( 0, 0, 6, "layout19"); 

    layout17 = new QHBoxLayout( 0, 0, 6, "layout17"); 

    line1StatLabel = new QLabel( lineButtonGroup, "line1StatLabel" );
    line1StatLabel->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)5, 0, 0, line1StatLabel->sizePolicy().hasHeightForWidth() ) );
    line1StatLabel->setCursor( QCursor( 0 ) );
    line1StatLabel->setFrameShape( QLabel::NoFrame );
    line1StatLabel->setFrameShadow( QLabel::Plain );
    line1StatLabel->setLineWidth( 1 );
    line1StatLabel->setPixmap( QPixmap::fromMimeSource( "stat_ringing.png" ) );
    layout17->addWidget( line1StatLabel );

    status1TextLabel = new QLabel( lineButtonGroup, "status1TextLabel" );
    status1TextLabel->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)5, 0, 0, status1TextLabel->sizePolicy().hasHeightForWidth() ) );
    status1TextLabel->setPaletteForegroundColor( QColor( 85, 0, 255 ) );
    status1TextLabel->setTextFormat( QLabel::RichText );
    layout17->addWidget( status1TextLabel );

    line1HoldLabel = new QLabel( lineButtonGroup, "line1HoldLabel" );
    line1HoldLabel->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)5, 0, 0, line1HoldLabel->sizePolicy().hasHeightForWidth() ) );
    line1HoldLabel->setCursor( QCursor( 0 ) );
    line1HoldLabel->setFrameShape( QLabel::NoFrame );
    line1HoldLabel->setFrameShadow( QLabel::Plain );
    line1HoldLabel->setLineWidth( 1 );
    line1HoldLabel->setPixmap( QPixmap::fromMimeSource( "hold.png" ) );
    layout17->addWidget( line1HoldLabel );

    line1MuteLabel = new QLabel( lineButtonGroup, "line1MuteLabel" );
    line1MuteLabel->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)5, 0, 0, line1MuteLabel->sizePolicy().hasHeightForWidth() ) );
    line1MuteLabel->setCursor( QCursor( 0 ) );
    line1MuteLabel->setFrameShape( QLabel::NoFrame );
    line1MuteLabel->setFrameShadow( QLabel::Plain );
    line1MuteLabel->setLineWidth( 1 );
    line1MuteLabel->setPixmap( QPixmap::fromMimeSource( "stat_mute.png" ) );
    layout17->addWidget( line1MuteLabel );

    line1ConfLabel = new QLabel( lineButtonGroup, "line1ConfLabel" );
    line1ConfLabel->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)5, 0, 0, line1ConfLabel->sizePolicy().hasHeightForWidth() ) );
    line1ConfLabel->setCursor( QCursor( 0 ) );
    line1ConfLabel->setFrameShape( QLabel::NoFrame );
    line1ConfLabel->setFrameShadow( QLabel::Plain );
    line1ConfLabel->setLineWidth( 1 );
    line1ConfLabel->setPixmap( QPixmap::fromMimeSource( "stat_conference.png" ) );
    layout17->addWidget( line1ConfLabel );

    line1ReferLabel = new QLabel( lineButtonGroup, "line1ReferLabel" );
    line1ReferLabel->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)5, 0, 0, line1ReferLabel->sizePolicy().hasHeightForWidth() ) );
    line1ReferLabel->setCursor( QCursor( 0 ) );
    line1ReferLabel->setFrameShape( QLabel::NoFrame );
    line1ReferLabel->setFrameShadow( QLabel::Plain );
    line1ReferLabel->setLineWidth( 1 );
    line1ReferLabel->setPixmap( QPixmap::fromMimeSource( "cf.png" ) );
    layout17->addWidget( line1ReferLabel );

    crypt1Label = new QLabel( lineButtonGroup, "crypt1Label" );
    crypt1Label->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)5, 0, 0, crypt1Label->sizePolicy().hasHeightForWidth() ) );
    crypt1Label->setCursor( QCursor( 13 ) );
    crypt1Label->setFrameShape( QLabel::Panel );
    crypt1Label->setFrameShadow( QLabel::Raised );
    crypt1Label->setLineWidth( 1 );
    crypt1Label->setPixmap( QPixmap::fromMimeSource( "encrypted.png" ) );
    layout17->addWidget( crypt1Label );

    line1SasLabel = new QLabel( lineButtonGroup, "line1SasLabel" );
    line1SasLabel->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)5, 0, 0, line1SasLabel->sizePolicy().hasHeightForWidth() ) );
    layout17->addWidget( line1SasLabel );

    codec1TextLabel = new QLabel( lineButtonGroup, "codec1TextLabel" );
    codec1TextLabel->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)5, 0, 0, codec1TextLabel->sizePolicy().hasHeightForWidth() ) );
    codec1TextLabel->setPaletteForegroundColor( QColor( 0, 170, 127 ) );
    codec1TextLabel->setAlignment( int( QLabel::AlignVCenter | QLabel::AlignRight ) );
    layout17->addWidget( codec1TextLabel );

    timer1TextLabel = new QLabel( lineButtonGroup, "timer1TextLabel" );
    timer1TextLabel->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)5, 0, 0, timer1TextLabel->sizePolicy().hasHeightForWidth() ) );
    QFont timer1TextLabel_font(  timer1TextLabel->font() );
    timer1TextLabel_font.setFamily( "Courier New" );
    timer1TextLabel->setFont( timer1TextLabel_font ); 
    layout17->addWidget( timer1TextLabel );
    layout19->addLayout( layout17 );

    from1Label = new QLineEdit( lineButtonGroup, "from1Label" );
    from1Label->setPaletteForegroundColor( QColor( 85, 0, 255 ) );
    from1Label->setPaletteBackgroundColor( QColor( 238, 234, 238 ) );
    from1Label->setFocusPolicy( QLineEdit::NoFocus );
    from1Label->setFrameShape( QLineEdit::NoFrame );
    from1Label->setAlignment( int( QLineEdit::AlignAuto ) );
    from1Label->setReadOnly( TRUE );
    layout19->addWidget( from1Label );

    to1Label = new QLineEdit( lineButtonGroup, "to1Label" );
    to1Label->setPaletteForegroundColor( QColor( 85, 0, 255 ) );
    to1Label->setPaletteBackgroundColor( QColor( 238, 234, 238 ) );
    to1Label->setFocusPolicy( QLineEdit::NoFocus );
    to1Label->setFrameShape( QLineEdit::NoFrame );
    to1Label->setReadOnly( TRUE );
    layout19->addWidget( to1Label );

    subject1Label = new QLineEdit( lineButtonGroup, "subject1Label" );
    subject1Label->setPaletteForegroundColor( QColor( 85, 0, 255 ) );
    subject1Label->setPaletteBackgroundColor( QColor( 238, 234, 238 ) );
    subject1Label->setFocusPolicy( QLineEdit::NoFocus );
    subject1Label->setFrameShape( QLineEdit::NoFrame );
    subject1Label->setReadOnly( TRUE );
    layout19->addWidget( subject1Label );
    layout20->addLayout( layout19 );

    photo1Label = new QLabel( lineButtonGroup, "photo1Label" );
    photo1Label->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)0, 0, 0, photo1Label->sizePolicy().hasHeightForWidth() ) );
    photo1Label->setMinimumSize( QSize( 70, 98 ) );
    photo1Label->setMaximumSize( QSize( 70, 98 ) );
    photo1Label->setFrameShape( QLabel::Box );
    layout20->addWidget( photo1Label );
    lineButtonGroupLayout->addLayout( layout20 );

    layout22 = new QHBoxLayout( 0, 0, 6, "layout22"); 

    layout31 = new QVBoxLayout( 0, 0, 6, "layout31"); 

    line2RadioButton = new QRadioButton( lineButtonGroup, "line2RadioButton" );
    line2RadioButton->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)0, 0, 0, line2RadioButton->sizePolicy().hasHeightForWidth() ) );
    layout31->addWidget( line2RadioButton );

    fromhead2Label = new QLabel( lineButtonGroup, "fromhead2Label" );
    fromhead2Label->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)5, 0, 0, fromhead2Label->sizePolicy().hasHeightForWidth() ) );
    fromhead2Label->setIndent( 21 );
    layout31->addWidget( fromhead2Label );

    tohead2Label = new QLabel( lineButtonGroup, "tohead2Label" );
    tohead2Label->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)5, 0, 0, tohead2Label->sizePolicy().hasHeightForWidth() ) );
    tohead2Label->setIndent( 21 );
    layout31->addWidget( tohead2Label );

    subjecthead2Label = new QLabel( lineButtonGroup, "subjecthead2Label" );
    subjecthead2Label->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)5, 0, 0, subjecthead2Label->sizePolicy().hasHeightForWidth() ) );
    subjecthead2Label->setIndent( 21 );
    layout31->addWidget( subjecthead2Label );
    layout22->addLayout( layout31 );

    layout21 = new QVBoxLayout( 0, 0, 6, "layout21"); 

    layout18 = new QHBoxLayout( 0, 0, 6, "layout18"); 

    line2StatLabel = new QLabel( lineButtonGroup, "line2StatLabel" );
    line2StatLabel->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)5, 0, 0, line2StatLabel->sizePolicy().hasHeightForWidth() ) );
    line2StatLabel->setCursor( QCursor( 0 ) );
    line2StatLabel->setFrameShape( QLabel::NoFrame );
    line2StatLabel->setFrameShadow( QLabel::Plain );
    line2StatLabel->setLineWidth( 1 );
    line2StatLabel->setPixmap( QPixmap::fromMimeSource( "stat_ringing.png" ) );
    layout18->addWidget( line2StatLabel );

    status2TextLabel = new QLabel( lineButtonGroup, "status2TextLabel" );
    status2TextLabel->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)5, 0, 0, status2TextLabel->sizePolicy().hasHeightForWidth() ) );
    status2TextLabel->setPaletteForegroundColor( QColor( 85, 0, 255 ) );
    status2TextLabel->setTextFormat( QLabel::RichText );
    layout18->addWidget( status2TextLabel );

    line2HoldLabel = new QLabel( lineButtonGroup, "line2HoldLabel" );
    line2HoldLabel->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)5, 0, 0, line2HoldLabel->sizePolicy().hasHeightForWidth() ) );
    line2HoldLabel->setCursor( QCursor( 0 ) );
    line2HoldLabel->setFrameShape( QLabel::NoFrame );
    line2HoldLabel->setFrameShadow( QLabel::Plain );
    line2HoldLabel->setLineWidth( 1 );
    line2HoldLabel->setPixmap( QPixmap::fromMimeSource( "hold.png" ) );
    layout18->addWidget( line2HoldLabel );

    line2MuteLabel = new QLabel( lineButtonGroup, "line2MuteLabel" );
    line2MuteLabel->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)5, 0, 0, line2MuteLabel->sizePolicy().hasHeightForWidth() ) );
    line2MuteLabel->setCursor( QCursor( 0 ) );
    line2MuteLabel->setFrameShape( QLabel::NoFrame );
    line2MuteLabel->setFrameShadow( QLabel::Plain );
    line2MuteLabel->setLineWidth( 1 );
    line2MuteLabel->setPixmap( QPixmap::fromMimeSource( "stat_mute.png" ) );
    layout18->addWidget( line2MuteLabel );

    line2ConfLabel = new QLabel( lineButtonGroup, "line2ConfLabel" );
    line2ConfLabel->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)5, 0, 0, line2ConfLabel->sizePolicy().hasHeightForWidth() ) );
    line2ConfLabel->setCursor( QCursor( 0 ) );
    line2ConfLabel->setFrameShape( QLabel::NoFrame );
    line2ConfLabel->setFrameShadow( QLabel::Plain );
    line2ConfLabel->setLineWidth( 1 );
    line2ConfLabel->setPixmap( QPixmap::fromMimeSource( "stat_conference.png" ) );
    layout18->addWidget( line2ConfLabel );

    line2ReferLabel = new QLabel( lineButtonGroup, "line2ReferLabel" );
    line2ReferLabel->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)5, 0, 0, line2ReferLabel->sizePolicy().hasHeightForWidth() ) );
    line2ReferLabel->setCursor( QCursor( 0 ) );
    line2ReferLabel->setFrameShape( QLabel::NoFrame );
    line2ReferLabel->setFrameShadow( QLabel::Plain );
    line2ReferLabel->setLineWidth( 1 );
    line2ReferLabel->setPixmap( QPixmap::fromMimeSource( "cf.png" ) );
    layout18->addWidget( line2ReferLabel );

    crypt2Label = new QLabel( lineButtonGroup, "crypt2Label" );
    crypt2Label->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)5, 0, 0, crypt2Label->sizePolicy().hasHeightForWidth() ) );
    crypt2Label->setCursor( QCursor( 13 ) );
    crypt2Label->setFrameShape( QLabel::Panel );
    crypt2Label->setFrameShadow( QLabel::Raised );
    crypt2Label->setLineWidth( 1 );
    crypt2Label->setPixmap( QPixmap::fromMimeSource( "encrypted.png" ) );
    layout18->addWidget( crypt2Label );

    line2SasLabel = new QLabel( lineButtonGroup, "line2SasLabel" );
    line2SasLabel->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)5, 0, 0, line2SasLabel->sizePolicy().hasHeightForWidth() ) );
    layout18->addWidget( line2SasLabel );

    codec2TextLabel = new QLabel( lineButtonGroup, "codec2TextLabel" );
    codec2TextLabel->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)5, 0, 0, codec2TextLabel->sizePolicy().hasHeightForWidth() ) );
    codec2TextLabel->setPaletteForegroundColor( QColor( 0, 170, 127 ) );
    codec2TextLabel->setAlignment( int( QLabel::AlignVCenter | QLabel::AlignRight ) );
    layout18->addWidget( codec2TextLabel );

    timer2TextLabel = new QLabel( lineButtonGroup, "timer2TextLabel" );
    timer2TextLabel->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)5, 0, 0, timer2TextLabel->sizePolicy().hasHeightForWidth() ) );
    QFont timer2TextLabel_font(  timer2TextLabel->font() );
    timer2TextLabel_font.setFamily( "Courier New" );
    timer2TextLabel->setFont( timer2TextLabel_font ); 
    layout18->addWidget( timer2TextLabel );
    layout21->addLayout( layout18 );

    from2Label = new QLineEdit( lineButtonGroup, "from2Label" );
    from2Label->setPaletteForegroundColor( QColor( 85, 0, 255 ) );
    from2Label->setPaletteBackgroundColor( QColor( 238, 234, 238 ) );
    from2Label->setFocusPolicy( QLineEdit::NoFocus );
    from2Label->setFrameShape( QLineEdit::NoFrame );
    from2Label->setReadOnly( TRUE );
    layout21->addWidget( from2Label );

    to2Label = new QLineEdit( lineButtonGroup, "to2Label" );
    to2Label->setPaletteForegroundColor( QColor( 85, 0, 255 ) );
    to2Label->setPaletteBackgroundColor( QColor( 238, 234, 238 ) );
    to2Label->setFocusPolicy( QLineEdit::NoFocus );
    to2Label->setFrameShape( QLineEdit::NoFrame );
    to2Label->setReadOnly( TRUE );
    layout21->addWidget( to2Label );

    subject2Label = new QLineEdit( lineButtonGroup, "subject2Label" );
    subject2Label->setPaletteForegroundColor( QColor( 85, 0, 255 ) );
    subject2Label->setPaletteBackgroundColor( QColor( 238, 234, 238 ) );
    subject2Label->setFocusPolicy( QLineEdit::NoFocus );
    subject2Label->setFrameShape( QLineEdit::NoFrame );
    subject2Label->setReadOnly( TRUE );
    layout21->addWidget( subject2Label );
    layout22->addLayout( layout21 );

    photo2Label = new QLabel( lineButtonGroup, "photo2Label" );
    photo2Label->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)0, 0, 0, photo2Label->sizePolicy().hasHeightForWidth() ) );
    photo2Label->setMinimumSize( QSize( 70, 98 ) );
    photo2Label->setMaximumSize( QSize( 70, 98 ) );
    photo2Label->setFrameShape( QLabel::Box );
    layout22->addWidget( photo2Label );
    lineButtonGroupLayout->addLayout( layout22 );
    layout13->addWidget( lineButtonGroup );

    MphoneFormLayout->addWidget( splitter2, 0, 0 );

    // actions
    fileExitAction = new QAction( this, "fileExitAction" );
    fileExitAction->setIconSet( QIconSet( QPixmap::fromMimeSource( "exit.png" ) ) );
    helpAboutAction = new QAction( this, "helpAboutAction" );
    helpAboutAction->setIconSet( QIconSet( QPixmap::fromMimeSource( "twinkle16.png" ) ) );
    callInvite = new QAction( this, "callInvite" );
    callInvite->setIconSet( QIconSet( QPixmap::fromMimeSource( "invite.png" ) ) );
    callAnswer = new QAction( this, "callAnswer" );
    callAnswer->setIconSet( QIconSet( QPixmap::fromMimeSource( "answer.png" ) ) );
    callBye = new QAction( this, "callBye" );
    callBye->setIconSet( QIconSet( QPixmap::fromMimeSource( "bye.png" ) ) );
    callReject = new QAction( this, "callReject" );
    callReject->setIconSet( QIconSet( QPixmap::fromMimeSource( "reject.png" ) ) );
    callHold = new QAction( this, "callHold" );
    callHold->setToggleAction( TRUE );
    callHold->setIconSet( QIconSet( QPixmap::fromMimeSource( "hold.png" ) ) );
    callRedirect = new QAction( this, "callRedirect" );
    callRedirect->setIconSet( QIconSet( QPixmap::fromMimeSource( "redirect.png" ) ) );
    callDTMF = new QAction( this, "callDTMF" );
    callDTMF->setIconSet( QIconSet( QPixmap::fromMimeSource( "dtmf.png" ) ) );
    regRegister = new QAction( this, "regRegister" );
    regRegister->setIconSet( QIconSet( QPixmap::fromMimeSource( "twinkle16.png" ) ) );
    regDeregister = new QAction( this, "regDeregister" );
    regDeregister->setIconSet( QIconSet( QPixmap::fromMimeSource( "twinkle16-disabled.png" ) ) );
    regShow = new QAction( this, "regShow" );
    regShow->setIconSet( QIconSet( QPixmap::fromMimeSource( "reg-query.png" ) ) );
    callTermCap = new QAction( this, "callTermCap" );
    serviceDnd = new QAction( this, "serviceDnd" );
    serviceDnd->setToggleAction( TRUE );
    serviceDnd->setIconSet( QIconSet( QPixmap::fromMimeSource( "cancel.png" ) ) );
    serviceRedirection = new QAction( this, "serviceRedirection" );
    serviceRedirection->setIconSet( QIconSet( QPixmap::fromMimeSource( "cf.png" ) ) );
    callRedial = new QAction( this, "callRedial" );
    callRedial->setIconSet( QIconSet( QPixmap::fromMimeSource( "redial.png" ) ) );
    helpAboutQtAction = new QAction( this, "helpAboutQtAction" );
    helpAboutQtAction->setIconSet( QIconSet( QPixmap::fromMimeSource( "qt-logo.png" ) ) );
    editUserProfileAction = new QAction( this, "editUserProfileAction" );
    editUserProfileAction->setIconSet( QIconSet( QPixmap::fromMimeSource( "penguin-small.png" ) ) );
    callConference = new QAction( this, "callConference" );
    callConference->setIconSet( QIconSet( QPixmap::fromMimeSource( "conf.png" ) ) );
    callMute = new QAction( this, "callMute" );
    callMute->setToggleAction( TRUE );
    callMute->setIconSet( QIconSet( QPixmap::fromMimeSource( "mute.png" ) ) );
    callTransfer = new QAction( this, "callTransfer" );
    callTransfer->setToggleAction( TRUE );
    callTransfer->setIconSet( QIconSet( QPixmap::fromMimeSource( "transfer.png" ) ) );
    editSysSettingsAction = new QAction( this, "editSysSettingsAction" );
    editSysSettingsAction->setIconSet( QIconSet( QPixmap::fromMimeSource( "settings.png" ) ) );
    registrationAction = new QAction( this, "registrationAction" );
    regDeregisterAll = new QAction( this, "regDeregisterAll" );
    regDeregisterAll->setIconSet( QIconSet( QPixmap::fromMimeSource( "twinkle16-disabled.png" ) ) );
    serviceAutoAnswer = new QAction( this, "serviceAutoAnswer" );
    serviceAutoAnswer->setToggleAction( TRUE );
    serviceAutoAnswer->setIconSet( QIconSet( QPixmap::fromMimeSource( "auto_answer.png" ) ) );
    viewLogAction = new QAction( this, "viewLogAction" );
    viewLogAction->setIconSet( QIconSet( QPixmap::fromMimeSource( "log_small.png" ) ) );
    viewCall_HistoryAction = new QAction( this, "viewCall_HistoryAction" );
    viewCall_HistoryAction->setIconSet( QIconSet( QPixmap::fromMimeSource( "missed.png" ) ) );
    fileChangeUserAction = new QAction( this, "fileChangeUserAction" );
    fileChangeUserAction->setIconSet( QIconSet( QPixmap::fromMimeSource( "penguin-small.png" ) ) );
    helpWhats_ThisAction = new QAction( this, "helpWhats_ThisAction" );
    helpWhats_ThisAction->setIconSet( QIconSet( QPixmap::fromMimeSource( "contexthelp.png" ) ) );
    actgrActivateLine = new QActionGroup( this, "actgrActivateLine" );
    actgrActivateLine->setOn( FALSE );
    actgrActivateLine->setUsesDropDown( FALSE );
    actionLine1 = new QAction( actgrActivateLine, "actionLine1" );
    actionLine1->setToggleAction( TRUE );
    actionLine1->setOn( TRUE );
    actionLine2 = new QAction( actgrActivateLine, "actionLine2" );
    actionLine2->setToggleAction( TRUE );
    callActivate_LineAction = new QAction( this, "callActivate_LineAction" );
    callActivate_LineAction->setOn( FALSE );
    viewDisplayAction = new QAction( this, "viewDisplayAction" );
    viewDisplayAction->setToggleAction( TRUE );
    viewDisplayAction->setOn( TRUE );
    servicesVoice_mailAction = new QAction( this, "servicesVoice_mailAction" );
    servicesVoice_mailAction->setIconSet( QIconSet( QPixmap::fromMimeSource( "mwi_none16.png" ) ) );
    actionSendMsg = new QAction( this, "actionSendMsg" );
    actionSendMsg->setIconSet( QIconSet( QPixmap::fromMimeSource( "message.png" ) ) );
    viewBuddyListAction = new QAction( this, "viewBuddyListAction" );
    viewBuddyListAction->setToggleAction( TRUE );
    viewBuddyListAction->setOn( TRUE );
    helpManualAction = new QAction( this, "helpManualAction" );
    diamondcardSign_upAction = new QAction( this, "diamondcardSign_upAction" );


    // toolbars
    callToolbar = new QToolBar( QString(""), this, DockTop ); 

    callToolbar->setResizeEnabled( FALSE );
    callToolbar->setMovingEnabled( TRUE );
    callToolbar->setHorizontallyStretchable( TRUE );
    callToolbar->setVerticallyStretchable( TRUE );
    callInvite->addTo( callToolbar );
    callAnswer->addTo( callToolbar );
    callBye->addTo( callToolbar );
    callReject->addTo( callToolbar );
    callRedirect->addTo( callToolbar );
    callTransfer->addTo( callToolbar );
    callHold->addTo( callToolbar );
    callConference->addTo( callToolbar );
    callMute->addTo( callToolbar );
    callDTMF->addTo( callToolbar );
    callRedial->addTo( callToolbar );
    actionSendMsg->addTo( callToolbar );


    // menubar
    menubar = new QMenuBar( this, "menubar" );


    fileMenu = new QPopupMenu( this );
    fileChangeUserAction->addTo( fileMenu );
    fileMenu->insertSeparator();
    fileExitAction->addTo( fileMenu );
    menubar->insertItem( QString(""), fileMenu, 1 );

    Edit = new QPopupMenu( this );
    editUserProfileAction->addTo( Edit );
    editSysSettingsAction->addTo( Edit );
    menubar->insertItem( QString(""), Edit, 2 );

    Call = new QPopupMenu( this );
    callInvite->addTo( Call );
    callAnswer->addTo( Call );
    callBye->addTo( Call );
    callReject->addTo( Call );
    callRedirect->addTo( Call );
    callTransfer->addTo( Call );
    callHold->addTo( Call );
    callConference->addTo( Call );
    callMute->addTo( Call );
    callDTMF->addTo( Call );
    callRedial->addTo( Call );
    Call->insertSeparator();
    callTermCap->addTo( Call );
    popupMenu_19 = new QPopupMenu( this );
    Call->insertItem( callActivate_LineAction->iconSet(), tr( "Activate line" ), popupMenu_19 );
    actionLine1->addTo( popupMenu_19 );
    actionLine2->addTo( popupMenu_19 );
    menubar->insertItem( QString(""), Call, 3 );

    Message = new QPopupMenu( this );
    actionSendMsg->addTo( Message );
    menubar->insertItem( QString(""), Message, 4 );

    PopupMenu_2 = new QPopupMenu( this );
    regRegister->addTo( PopupMenu_2 );
    regDeregister->addTo( PopupMenu_2 );
    regDeregisterAll->addTo( PopupMenu_2 );
    regShow->addTo( PopupMenu_2 );
    menubar->insertItem( QString(""), PopupMenu_2, 5 );

    PopupMenu_3 = new QPopupMenu( this );
    serviceDnd->addTo( PopupMenu_3 );
    serviceRedirection->addTo( PopupMenu_3 );
    serviceAutoAnswer->addTo( PopupMenu_3 );
    servicesVoice_mailAction->addTo( PopupMenu_3 );
    menubar->insertItem( QString(""), PopupMenu_3, 6 );

    View = new QPopupMenu( this );
    viewCall_HistoryAction->addTo( View );
    viewLogAction->addTo( View );
    viewDisplayAction->addTo( View );
    viewBuddyListAction->addTo( View );
    menubar->insertItem( QString(""), View, 7 );

    Diamondcard = new QPopupMenu( this );
    diamondcardSign_upAction->addTo( Diamondcard );
    menubar->insertItem( QString(""), Diamondcard, 8 );

    helpMenu = new QPopupMenu( this );
    helpWhats_ThisAction->addTo( helpMenu );
    helpMenu->insertSeparator();
    helpManualAction->addTo( helpMenu );
    helpAboutAction->addTo( helpMenu );
    helpAboutQtAction->addTo( helpMenu );
    menubar->insertItem( QString(""), helpMenu, 9 );

    menubar->insertSeparator( 10 );

    languageChange();
    resize( QSize(739, 693).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( helpWhats_ThisAction, SIGNAL( activated() ), this, SLOT( whatsThis() ) );
    connect( addressToolButton, SIGNAL( clicked() ), this, SLOT( showAddressBook() ) );
    connect( callPushButton, SIGNAL( clicked() ), this, SLOT( quickCall() ) );
    connect( fileChangeUserAction, SIGNAL( activated() ), this, SLOT( selectProfile() ) );
    connect( viewCall_HistoryAction, SIGNAL( activated() ), this, SLOT( viewHistory() ) );
    connect( viewLogAction, SIGNAL( activated() ), this, SLOT( viewLog() ) );
    connect( regDeregisterAll, SIGNAL( activated() ), this, SLOT( phoneDeregisterAll() ) );
    connect( editSysSettingsAction, SIGNAL( activated() ), this, SLOT( editSysSettings() ) );
    connect( callMute, SIGNAL( toggled(bool) ), this, SLOT( phoneMute(bool) ) );
    connect( callConference, SIGNAL( activated() ), this, SLOT( phoneConference() ) );
    connect( editUserProfileAction, SIGNAL( activated() ), this, SLOT( editUserProfile() ) );
    connect( helpAboutQtAction, SIGNAL( activated() ), this, SLOT( aboutQt() ) );
    connect( helpAboutAction, SIGNAL( activated() ), this, SLOT( about() ) );
    connect( callRedial, SIGNAL( activated() ), this, SLOT( phoneRedial() ) );
    connect( serviceRedirection, SIGNAL( activated() ), this, SLOT( srvRedirect() ) );
    connect( regShow, SIGNAL( activated() ), this, SLOT( phoneShowRegistrations() ) );
    connect( regDeregister, SIGNAL( activated() ), this, SLOT( phoneDeregister() ) );
    connect( regRegister, SIGNAL( activated() ), this, SLOT( phoneRegister() ) );
    connect( callHold, SIGNAL( toggled(bool) ), this, SLOT( phoneHold(bool) ) );
    connect( callReject, SIGNAL( activated() ), this, SLOT( phoneReject() ) );
    connect( callRedirect, SIGNAL( activated() ), this, SLOT( phoneRedirect() ) );
    connect( callInvite, SIGNAL( activated() ), this, SLOT( phoneInvite() ) );
    connect( callDTMF, SIGNAL( activated() ), this, SLOT( phoneDTMF() ) );
    connect( callBye, SIGNAL( activated() ), this, SLOT( phoneBye() ) );
    connect( callAnswer, SIGNAL( activated() ), this, SLOT( phoneAnswer() ) );
    connect( callTermCap, SIGNAL( activated() ), this, SLOT( phoneTermCap() ) );
    connect( line2RadioButton, SIGNAL( toggled(bool) ), this, SLOT( line2rbChangedState(bool) ) );
    connect( line1RadioButton, SIGNAL( toggled(bool) ), this, SLOT( line1rbChangedState(bool) ) );
    connect( fileExitAction, SIGNAL( activated() ), this, SLOT( fileExit() ) );
    connect( actionLine1, SIGNAL( toggled(bool) ), this, SLOT( actionLine1Toggled(bool) ) );
    connect( actionLine2, SIGNAL( toggled(bool) ), this, SLOT( actionLine2Toggled(bool) ) );
    connect( viewDisplayAction, SIGNAL( toggled(bool) ), this, SLOT( showDisplay(bool) ) );
    connect( callTransfer, SIGNAL( activated() ), this, SLOT( phoneTransfer() ) );
    connect( servicesVoice_mailAction, SIGNAL( activated() ), this, SLOT( popupMenuVoiceMail() ) );
    connect( actionSendMsg, SIGNAL( activated() ), this, SLOT( startMessageSession() ) );
    connect( buddyListView, SIGNAL( rightButtonPressed(QListViewItem*,const QPoint&,int) ), this, SLOT( showBuddyListPopupMenu(QListViewItem*,const QPoint&) ) );
    connect( buddyListView, SIGNAL( doubleClicked(QListViewItem*) ), this, SLOT( doMessageBuddy(QListViewItem*) ) );
    connect( viewBuddyListAction, SIGNAL( toggled(bool) ), this, SLOT( showBuddyList(bool) ) );
    connect( helpManualAction, SIGNAL( activated() ), this, SLOT( manual() ) );
    connect( diamondcardSign_upAction, SIGNAL( activated() ), this, SLOT( DiamondcardSignUp() ) );

    // tab order
    setTabOrder( callComboBox, addressToolButton );
    setTabOrder( addressToolButton, callPushButton );
    setTabOrder( callPushButton, displayTextEdit );
    setTabOrder( displayTextEdit, line1RadioButton );
    setTabOrder( line1RadioButton, line2RadioButton );
    setTabOrder( line2RadioButton, userComboBox );
    setTabOrder( userComboBox, from1Label );
    setTabOrder( from1Label, subject1Label );
    setTabOrder( subject1Label, to1Label );
    setTabOrder( to1Label, subject2Label );
    setTabOrder( subject2Label, from2Label );
    setTabOrder( from2Label, to2Label );

    // buddies
    callTextLabel->setBuddy( callComboBox );
    userLabel->setBuddy( userComboBox );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
MphoneForm::~MphoneForm()
{
    destroy();
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void MphoneForm::languageChange()
{
    setCaption( tr( "Twinkle" ) );
    buddyListView->header()->setLabel( 0, tr( "Buddy list" ) );
    QWhatsThis::add( buddyListView, tr( "You can create a separate buddy list for each user profile. You can only see availability of your buddies and publish your own availability if your provider offers a presence server." ) );
    callTextLabel->setText( tr( "&Call:", "Label in front of combobox to enter address" ) );
    QWhatsThis::add( callComboBox, tr( "The address that you want to call. This can be a full SIP address like <b>sip:example@example.com</b> or just the user part or telephone number of the full address. When you do not specify a full address, then Twinkle will complete the address by using the domain value of your user profile." ) );
    addressToolButton->setText( QString::null );
    addressToolButton->setAccel( QKeySequence( tr( "F10" ) ) );
    QToolTip::add( addressToolButton, tr( "Address book" ) );
    QWhatsThis::add( addressToolButton, tr( "Select an address from the address book." ) );
    callPushButton->setText( tr( "Dial" ) );
    QWhatsThis::add( callPushButton, tr( "Dial the address." ) );
    userLabel->setText( tr( "&User:" ) );
    QWhatsThis::add( userComboBox, tr( "The user that will make the call." ) );
    statAaLabel->setText( QString::null );
    QWhatsThis::add( statAaLabel, tr( "Auto answer indication." ) );
    statCfLabel->setText( QString::null );
    QWhatsThis::add( statCfLabel, tr( "Call redirect indication." ) );
    statDndLabel->setText( QString::null );
    QWhatsThis::add( statDndLabel, tr( "Do not disturb indication." ) );
    statMWILabel->setText( QString::null );
    QWhatsThis::add( statMWILabel, tr( "Message waiting indication." ) );
    statMissedLabel->setText( QString::null );
    QWhatsThis::add( statMissedLabel, tr( "Missed call indication." ) );
    statRegLabel->setText( QString::null );
    QWhatsThis::add( statRegLabel, tr( "Registration status." ) );
    displayGroupBox->setTitle( tr( "Display" ) );
    displayTextEdit->setText( QString::null );
    lineButtonGroup->setTitle( tr( "Line status" ) );
    line1RadioButton->setText( tr( "Line &1:" ) );
    line1RadioButton->setAccel( QKeySequence( tr( "Alt+1" ) ) );
    QWhatsThis::add( line1RadioButton, tr( "Click to switch to line 1." ) );
    fromhead1Label->setText( tr( "From:" ) );
    tohead1Label->setText( tr( "To:" ) );
    subjecthead1Label->setText( tr( "Subject:" ) );
    line1StatLabel->setText( QString::null );
    QWhatsThis::add( line1StatLabel, tr( "Visual indication of line state." ) );
    status1TextLabel->setText( tr( "idle", "No need to translate" ) );
    line1HoldLabel->setText( QString::null );
    QToolTip::add( line1HoldLabel, tr( "Call is on hold" ) );
    line1MuteLabel->setText( QString::null );
    QToolTip::add( line1MuteLabel, tr( "Voice is muted" ) );
    line1ConfLabel->setText( QString::null );
    QToolTip::add( line1ConfLabel, tr( "Conference call" ) );
    line1ReferLabel->setText( QString::null );
    QToolTip::add( line1ReferLabel, tr( "Transferring call" ) );
    crypt1Label->setText( QString::null );
    QWhatsThis::add( crypt1Label, tr( "<p>\n"
"The padlock indicates that your voice is encrypted during transport over the network.\n"
"</p>\n"
"<h3>SAS - Short Authentication String</h3>\n"
"<p>\n"
"Both ends of an encrypted voice channel receive the same SAS on the first call. If the SAS is different at each end, your voice channel may be compromised by a man-in-the-middle attack (MitM).\n"
"</p>\n"
"<p>\n"
"If the SAS is equal at both ends, then you should confirm it by clicking this padlock for stronger security of future calls to the same destination. For subsequent calls to the same destination, you don't have to confirm the SAS again. The padlock will show a check symbol when the SAS has been confirmed.\n"
"</p>" ) );
    line1SasLabel->setText( tr( "sas", "No need to translate" ) );
    QWhatsThis::add( line1SasLabel, tr( "Short authentication string" ) );
    codec1TextLabel->setText( tr( "g711a/g711a", "No need to translate" ) );
    QWhatsThis::add( codec1TextLabel, tr( "Audio codec" ) );
    timer1TextLabel->setText( tr( "0:00:00" ) );
    QWhatsThis::add( timer1TextLabel, tr( "Call duration" ) );
    from1Label->setText( tr( "sip:from", "No need to translate" ) );
    to1Label->setText( tr( "sip:to", "No need to translate" ) );
    subject1Label->setText( tr( "subject", "No need to translate" ) );
    photo1Label->setText( tr( "photo", "No need to translate" ) );
    line2RadioButton->setText( tr( "Line &2:" ) );
    line2RadioButton->setAccel( QKeySequence( tr( "Alt+2" ) ) );
    QWhatsThis::add( line2RadioButton, tr( "Click to switch to line 2." ) );
    fromhead2Label->setText( tr( "From:" ) );
    tohead2Label->setText( tr( "To:" ) );
    subjecthead2Label->setText( tr( "Subject:" ) );
    line2StatLabel->setText( QString::null );
    QWhatsThis::add( line2StatLabel, tr( "Visual indication of line state." ) );
    status2TextLabel->setText( tr( "idle", "No need to translate" ) );
    line2HoldLabel->setText( QString::null );
    QToolTip::add( line2HoldLabel, tr( "Call is on hold" ) );
    line2MuteLabel->setText( QString::null );
    QToolTip::add( line2MuteLabel, tr( "Voice is muted" ) );
    line2ConfLabel->setText( QString::null );
    QToolTip::add( line2ConfLabel, tr( "Conference call" ) );
    line2ReferLabel->setText( QString::null );
    QToolTip::add( line2ReferLabel, tr( "Transferring call" ) );
    crypt2Label->setText( QString::null );
    QWhatsThis::add( crypt2Label, tr( "<p>\n"
"The padlock indicates that your voice is encrypted during transport over the network.\n"
"</p>\n"
"<h3>SAS - Short Authentication String</h3>\n"
"<p>\n"
"Both ends of an encrypted voice channel receive the same SAS on the first call. If the SAS is different at each end, your voice channel may be compromised by a man-in-the-middle attack (MitM).\n"
"</p>\n"
"<p>\n"
"If the SAS is equal at both ends, then you should confirm it by clicking this padlock for stronger security of future calls to the same destination. For subsequent calls to the same destination, you don't have to confirm the SAS again. The padlock will show a check symbol when the SAS has been confirmed.\n"
"</p>" ) );
    line2SasLabel->setText( tr( "sas", "No need to translate" ) );
    QWhatsThis::add( line2SasLabel, tr( "Short authentication string" ) );
    codec2TextLabel->setText( tr( "g711a/g711a", "No need to translate" ) );
    QWhatsThis::add( codec2TextLabel, tr( "Audio codec" ) );
    timer2TextLabel->setText( tr( "0:00:00" ) );
    QWhatsThis::add( timer2TextLabel, tr( "Call duration" ) );
    from2Label->setText( tr( "sip:from", "No need to translate" ) );
    to2Label->setText( tr( "sip:to", "No need to translate" ) );
    subject2Label->setText( tr( "subject", "No need to translate" ) );
    photo2Label->setText( tr( "photo", "No need to translate" ) );
    fileExitAction->setText( tr( "Quit" ) );
    fileExitAction->setMenuText( tr( "&Quit" ) );
    fileExitAction->setAccel( tr( "Ctrl+Q" ) );
    helpAboutAction->setText( tr( "About Twinkle" ) );
    helpAboutAction->setMenuText( tr( "&About Twinkle" ) );
    helpAboutAction->setAccel( QString::null );
    callInvite->setText( tr( "Call", "toolbar text" ) );
    callInvite->setMenuText( tr( "&Call...", "call menu text" ) );
    callInvite->setToolTip( tr( "Call someone" ) );
    callInvite->setAccel( tr( "F5" ) );
    callAnswer->setText( tr( "Answer", "toolbar text" ) );
    callAnswer->setMenuText( tr( "&Answer", "menu text" ) );
    callAnswer->setToolTip( tr( "Answer incoming call" ) );
    callAnswer->setAccel( tr( "F6" ) );
    callBye->setText( tr( "Bye", "toolbar text" ) );
    callBye->setMenuText( tr( "&Bye", "menu text" ) );
    callBye->setToolTip( tr( "Release call" ) );
    callBye->setAccel( tr( "Esc" ) );
    callReject->setText( tr( "Reject", "toolbar text" ) );
    callReject->setMenuText( tr( "&Reject", "menu text" ) );
    callReject->setToolTip( tr( "Reject incoming call" ) );
    callReject->setAccel( tr( "F8" ) );
    callHold->setText( tr( "Hold", "toolbar text" ) );
    callHold->setMenuText( tr( "&Hold", "menu text" ) );
    callHold->setToolTip( tr( "Put a call on hold, or retrieve a held call" ) );
    callRedirect->setText( tr( "Redirect", "toolbar text" ) );
    callRedirect->setMenuText( tr( "R&edirect...", "menu text" ) );
    callRedirect->setToolTip( tr( "Redirect incoming call without answering" ) );
    callDTMF->setText( tr( "Dtmf", "toolbar text" ) );
    callDTMF->setMenuText( tr( "&Dtmf...", "menu text" ) );
    callDTMF->setToolTip( tr( "Open keypad to enter digits for voice menu's" ) );
    regRegister->setText( tr( "Register" ) );
    regRegister->setMenuText( tr( "&Register" ) );
    regDeregister->setText( tr( "Deregister" ) );
    regDeregister->setMenuText( tr( "&Deregister" ) );
    regDeregister->setToolTip( tr( "Deregister this device" ) );
    regShow->setText( tr( "Show registrations" ) );
    regShow->setMenuText( tr( "&Show registrations" ) );
    callTermCap->setText( tr( "Terminal capabilities" ) );
    callTermCap->setMenuText( tr( "&Terminal capabilities...", "menu text" ) );
    callTermCap->setToolTip( tr( "Request terminal capabilities from someone" ) );
    serviceDnd->setText( tr( "Do not disturb" ) );
    serviceDnd->setMenuText( tr( "&Do not disturb" ) );
    serviceRedirection->setText( tr( "Call redirection" ) );
    serviceRedirection->setMenuText( tr( "Call &redirection..." ) );
    callRedial->setText( tr( "Redial", "toolbar text" ) );
    callRedial->setMenuText( tr( "&Redial", "menu text" ) );
    callRedial->setToolTip( tr( "Repeat last call" ) );
    callRedial->setAccel( tr( "F12" ) );
    helpAboutQtAction->setText( tr( "About Qt" ) );
    helpAboutQtAction->setMenuText( tr( "About &Qt" ) );
    editUserProfileAction->setText( tr( "User profile" ) );
    editUserProfileAction->setMenuText( tr( "&User profile..." ) );
    callConference->setText( tr( "Conf", "toolbar text" ) );
    callConference->setMenuText( tr( "&Conference", "menu text" ) );
    callConference->setToolTip( tr( "Join two calls in a 3-way conference" ) );
    callMute->setText( tr( "Mute", "toolbar text" ) );
    callMute->setMenuText( tr( "&Mute", "menu text" ) );
    callMute->setToolTip( tr( "Mute a call" ) );
    callTransfer->setText( tr( "Xfer", "toolbar text" ) );
    callTransfer->setMenuText( tr( "Trans&fer...", "menu text" ) );
    callTransfer->setToolTip( tr( "Transfer call" ) );
    editSysSettingsAction->setText( tr( "System settings" ) );
    editSysSettingsAction->setMenuText( tr( "&System settings..." ) );
    registrationAction->setText( QString::null );
    registrationAction->setMenuText( QString::null );
    regDeregisterAll->setText( tr( "Deregister all" ) );
    regDeregisterAll->setMenuText( tr( "Deregister &all" ) );
    regDeregisterAll->setToolTip( tr( "Deregister all your registered devices" ) );
    serviceAutoAnswer->setText( tr( "Auto answer" ) );
    serviceAutoAnswer->setMenuText( tr( "&Auto answer" ) );
    viewLogAction->setText( tr( "Log" ) );
    viewLogAction->setMenuText( tr( "&Log..." ) );
    viewCall_HistoryAction->setText( tr( "Call history" ) );
    viewCall_HistoryAction->setMenuText( tr( "Call &history..." ) );
    viewCall_HistoryAction->setAccel( tr( "F9" ) );
    fileChangeUserAction->setText( tr( "Change user ..." ) );
    fileChangeUserAction->setMenuText( tr( "&Change user ..." ) );
    fileChangeUserAction->setToolTip( tr( "Activate or de-activate users" ) );
    helpWhats_ThisAction->setText( tr( "What's This?" ) );
    helpWhats_ThisAction->setMenuText( tr( "What's &This?" ) );
    helpWhats_ThisAction->setAccel( tr( "Shift+F1" ) );
    actgrActivateLine->setText( tr( "Activate line" ) );
    actionLine1->setText( tr( "Line 1" ) );
    actionLine2->setText( tr( "Line 2" ) );
    callActivate_LineAction->setText( tr( "Activate line" ) );
    callActivate_LineAction->setMenuText( tr( "Activate line" ) );
    viewDisplayAction->setText( tr( "Display" ) );
    viewDisplayAction->setMenuText( tr( "&Display" ) );
    servicesVoice_mailAction->setText( tr( "Voice mail" ) );
    servicesVoice_mailAction->setMenuText( tr( "&Voice mail" ) );
    servicesVoice_mailAction->setToolTip( tr( "Access voice mail" ) );
    servicesVoice_mailAction->setAccel( tr( "F11" ) );
    actionSendMsg->setText( tr( "Msg" ) );
    actionSendMsg->setMenuText( tr( "Instant &message..." ) );
    actionSendMsg->setToolTip( tr( "Instant message" ) );
    viewBuddyListAction->setText( tr( "Buddy list" ) );
    viewBuddyListAction->setMenuText( tr( "&Buddy list" ) );
    viewBuddyListAction->setToolTip( tr( "Buddy list" ) );
    helpManualAction->setText( tr( "Manual" ) );
    helpManualAction->setMenuText( tr( "&Manual" ) );
    diamondcardSign_upAction->setText( tr( "Sign up" ) );
    diamondcardSign_upAction->setMenuText( tr( "&Sign up..." ) );
    diamondcardSign_upAction->setToolTip( tr( "Sign up" ) );
    callToolbar->setLabel( tr( "Call Toolbar" ) );
    if (menubar->findItem(1))
        menubar->findItem(1)->setText( tr( "&File" ) );
    if (menubar->findItem(2))
        menubar->findItem(2)->setText( tr( "&Edit" ) );
    Call->changeItem( Call->idAt( 13 ), tr( "Activate line" ) );
    if (menubar->findItem(3))
        menubar->findItem(3)->setText( tr( "C&all" ) );
    if (menubar->findItem(4))
        menubar->findItem(4)->setText( tr( "&Message" ) );
    if (menubar->findItem(5))
        menubar->findItem(5)->setText( tr( "&Registration" ) );
    if (menubar->findItem(6))
        menubar->findItem(6)->setText( tr( "&Services" ) );
    if (menubar->findItem(7))
        menubar->findItem(7)->setText( tr( "&View" ) );
    if (menubar->findItem(8))
        menubar->findItem(8)->setText( tr( "Diamondcard" ) );
    if (menubar->findItem(9))
        menubar->findItem(9)->setText( tr( "&Help" ) );
}

