/****************************************************************************
** Form interface generated from reading ui file 'syssettingsform.ui'
**
** Created: Sun Oct 3 21:28:47 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef SYSSETTINGSFORM_H
#define SYSSETTINGSFORM_H

#include <qvariant.h>
#include <qdialog.h>
#include "sys_settings.h"

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QListBox;
class QListBoxItem;
class QPushButton;
class QWidgetStack;
class QWidget;
class QLabel;
class QGroupBox;
class QComboBox;
class QLineEdit;
class QCheckBox;
class QSpinBox;
class QListView;
class QListViewItem;
class QButtonGroup;
class QRadioButton;
class QToolButton;

class SysSettingsForm : public QDialog
{
    Q_OBJECT

public:
    SysSettingsForm( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~SysSettingsForm();

    QListBox* categoryListBox;
    QPushButton* okPushButton;
    QPushButton* cancelPushButton;
    QWidgetStack* settingsWidgetStack;
    QWidget* pageAudio;
    QLabel* audioTitleTextLabel;
    QGroupBox* soundcardGroupBox;
    QComboBox* ringtoneComboBox;
    QComboBox* micComboBox;
    QComboBox* speakerComboBox;
    QLabel* speakerTextLabel;
    QLabel* ringtoneTextLabel;
    QLabel* otherRingtoneTextLabel;
    QLabel* otherSpeakerTextLabel;
    QLabel* otherMicTextLabel;
    QLabel* micTextLabel;
    QLineEdit* otherRingtoneLineEdit;
    QLineEdit* otherMicLineEdit;
    QLineEdit* otherSpeakerLineEdit;
    QCheckBox* validateAudioCheckBox;
    QGroupBox* advancedSoundGroupBox;
    QLabel* ossFragmnetTextLabel;
    QComboBox* alsaPlayPeriodComboBox;
    QLabel* alsaPlayPeriodTextLabel;
    QLabel* alsaCapturePeriosTextLabel;
    QComboBox* ossFragmentComboBox;
    QComboBox* alsaCapturePeriodComboBox;
    QWidget* pageLog;
    QLabel* logTitleTextLabel;
    QLabel* logMaxSizeTextLabel;
    QSpinBox* logMaxSizeSpinBox;
    QLabel* logSizeMbTextLabel;
    QCheckBox* logDebugCheckBox;
    QCheckBox* logSipCheckBox;
    QCheckBox* logStunCheckBox;
    QCheckBox* logMemoryCheckBox;
    QWidget* pageGeneral;
    QLabel* generalTitleTextLabel;
    QGroupBox* systrayGroupBox;
    QCheckBox* guiUseSystrayCheckBox;
    QCheckBox* guiHideCheckBox;
    QGroupBox* startupGroupBox;
    QCheckBox* startHiddenCheckBox;
    QListView* profileListView;
    QGroupBox* srvGroupBox;
    QCheckBox* callWaitingCheckBox;
    QCheckBox* hangupBothCheckBox;
    QLabel* histSizeTextLabel;
    QSpinBox* histSizeSpinBox;
    QCheckBox* autoShowCheckBox;
    QSpinBox* autoShowTimeoutSpinBox;
    QLabel* secAutoShowTextLabel;
    QLabel* browserTextLabel;
    QLineEdit* browserLineEdit;
    QWidget* pageNetwork;
    QLabel* networkTitleTextLabel;
    QLineEdit* maxUdpSizeLineEdit;
    QLabel* sipUdpPortTextLabel;
    QLabel* rtpPortTextLabel;
    QLabel* maxTcpSizeTextLabel;
    QSpinBox* sipUdpPortSpinBox;
    QLabel* maxUdpSizeTextLabel;
    QLineEdit* maxTcpSizeLineEdit;
    QSpinBox* rtpPortSpinBox;
    QWidget* pageRingtones;
    QLabel* ringtonesTitleTextLabel;
    QButtonGroup* ringtoneButtonGroup;
    QCheckBox* playRingtoneCheckBox;
    QRadioButton* defaultRingtoneRadioButton;
    QRadioButton* customRingtoneRadioButton;
    QLineEdit* ringtoneLineEdit;
    QToolButton* openRingtoneToolButton;
    QButtonGroup* ringbackButtonGroup;
    QCheckBox* playRingbackCheckBox;
    QRadioButton* defaultRingbackRadioButton;
    QRadioButton* customRingbackRadioButton;
    QLineEdit* ringbackLineEdit;
    QToolButton* openRingbackToolButton;
    QWidget* pageAddressBook;
    QLabel* ringtonesTitleTextLabel_2;
    QCheckBox* abLookupNameCheckBox;
    QCheckBox* abOverrideDisplayCheckBox;
    QCheckBox* abLookupPhotoCheckBox;

    virtual string comboItem2audio_dev( QString item, QLineEdit * qleOther, bool playback );

public slots:
    virtual void showCategory( int index );
    virtual void populateComboBox( QComboBox * cb, const QString & s );
    virtual void populate();
    virtual void validate();
    virtual void show();
    virtual int exec();
    virtual void chooseRingtone();
    virtual void chooseRingback();
    virtual void devRingtoneSelected( int idx );
    virtual void devSpeakerSelected( int idx );
    virtual void devMicSelected( int idx );
    virtual void playRingToneCheckBoxToggles( bool on );
    virtual void playRingBackToneCheckBoxToggles( bool on );

signals:
    void sipUdpPortChanged();
    void rtpPortChanged();

protected:
    QGridLayout* SysSettingsFormLayout;
    QHBoxLayout* layout38;
    QSpacerItem* spacer98;
    QVBoxLayout* pageAudioLayout;
    QSpacerItem* spacer97;
    QGridLayout* soundcardGroupBoxLayout;
    QHBoxLayout* advancedSoundGroupBoxLayout;
    QSpacerItem* spacer27;
    QGridLayout* layout31;
    QVBoxLayout* pageLogLayout;
    QSpacerItem* spacer6;
    QHBoxLayout* layout8;
    QSpacerItem* spacer7;
    QVBoxLayout* pageGeneralLayout;
    QVBoxLayout* systrayGroupBoxLayout;
    QGridLayout* startupGroupBoxLayout;
    QVBoxLayout* srvGroupBoxLayout;
    QHBoxLayout* layout23;
    QSpacerItem* spacer73;
    QHBoxLayout* layout21;
    QSpacerItem* spacer14;
    QHBoxLayout* layout34;
    QGridLayout* pageNetworkLayout;
    QSpacerItem* spacer9;
    QSpacerItem* spacer8;
    QSpacerItem* spacer7_2;
    QVBoxLayout* pageRingtonesLayout;
    QSpacerItem* spacer23;
    QVBoxLayout* ringtoneButtonGroupLayout;
    QHBoxLayout* layout16;
    QSpacerItem* spacer21;
    QVBoxLayout* ringbackButtonGroupLayout;
    QHBoxLayout* layout16_2;
    QSpacerItem* spacer21_2;
    QVBoxLayout* pageAddressBookLayout;
    QSpacerItem* spacer61;

protected slots:
    virtual void languageChange();

private:
    int idxOtherCaptureDevOss;
    int idxOtherCaptureDevAlsa;
    int idxOtherPlaybackDevOss;
    int idxOtherPlaybackDevAlsa;
    list<t_audio_device> list_audio_playback_dev;
    list<t_audio_device> list_audio_capture_dev;

    void init();

};

#endif // SYSSETTINGSFORM_H
