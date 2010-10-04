/****************************************************************************
** Form interface generated from reading ui file 'selectprofileform.ui'
**
** Created: Sun Oct 3 21:28:47 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef SELECTPROFILEFORM_H
#define SELECTPROFILEFORM_H

#include <qvariant.h>
#include <qdialog.h>
#include <list>
#include <string>
#include "phone.h"
#include "qmainwindow.h"

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QLabel;
class QListView;
class QListViewItem;
class QGroupBox;
class QPushButton;
extern t_phone *phone;

class SelectProfileForm : public QDialog
{
    Q_OBJECT

public:
    SelectProfileForm( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~SelectProfileForm();

    QLabel* selectTextLabel;
    QListView* profileListView;
    QGroupBox* newProfileGroupBox;
    QPushButton* newPushButton;
    QPushButton* wizardPushButton;
    QPushButton* diamondcardPushButton;
    QGroupBox* modifyProfileGroupBox;
    QPushButton* editPushButton;
    QPushButton* deletePushButton;
    QPushButton* renamePushButton;
    QGroupBox* startupProfileGroupBox;
    QPushButton* defaultPushButton;
    QPushButton* runPushButton;
    QPushButton* sysPushButton;
    QPushButton* cancelPushButton;

    std::list<std::string> selectedProfiles;

    virtual int execForm();
    static bool getUserProfiles( QStringList & profiles, QString & error );

public slots:
    virtual void showForm( QMainWindow * _mainWindow );
    virtual void runProfile();
    virtual void editProfile();
    virtual void newProfile();
    virtual void newProfile( bool exec_mode );
    virtual void newProfileCreated();
    virtual void deleteProfile();
    virtual void renameProfile();
    virtual void setAsDefault();
    virtual void wizardProfile();
    virtual void wizardProfile( bool exec_mode );
    virtual void diamondcardProfile();
    virtual void diamondcardProfile( bool exec_mode );
    virtual void sysSettings();
    virtual void fillProfileListView( const QStringList & profiles );
    virtual void toggleItem( QListViewItem * item );

signals:
    void selection(const list<string> &);
    void profileRenamed();

protected:
    QGridLayout* SelectProfileFormLayout;
    QVBoxLayout* layout78;
    QSpacerItem* spacer17;
    QVBoxLayout* newProfileGroupBoxLayout;
    QVBoxLayout* modifyProfileGroupBoxLayout;
    QVBoxLayout* startupProfileGroupBoxLayout;

protected slots:
    virtual void languageChange();

private:
    bool defaultSet;
    t_user *user_config;
    QMainWindow *mainWindow;

    void init();
    void destroy();

};

#endif // SELECTPROFILEFORM_H
