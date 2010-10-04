/****************************************************************************
** Form interface generated from reading ui file 'srvredirectform.ui'
**
** Created: Sun Oct 3 21:28:46 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef SRVREDIRECTFORM_H
#define SRVREDIRECTFORM_H

#include <qvariant.h>
#include <qdialog.h>
#include <list>
#include "sockets/url.h"
#include "qlineedit.h"
#include "getaddressform.h"
#include "user.h"
#include "phone.h"

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QLabel;
class QComboBox;
class QTabWidget;
class QWidget;
class QCheckBox;
class QGroupBox;
class QLineEdit;
class QToolButton;
class QPushButton;
extern t_phone *phone;

class SrvRedirectForm : public QDialog
{
    Q_OBJECT

public:
    SrvRedirectForm( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~SrvRedirectForm();

    QLabel* userTextLabel;
    QComboBox* userComboBox;
    QTabWidget* cfTabWidget;
    QWidget* tab;
    QCheckBox* cfAlwaysCheckBox;
    QGroupBox* cfAlwaysGroupBox;
    QLineEdit* cfAlwaysDst1LineEdit;
    QLineEdit* cfAlwaysDst2LineEdit;
    QLabel* cfAlwaysDst3TextLabel;
    QLineEdit* cfAlwaysDst3LineEdit;
    QLabel* cfAlwaysDst2TextLabel;
    QLabel* cfAlwaysDst1TextLabel;
    QToolButton* addrAlways1ToolButton;
    QToolButton* addrAlways2ToolButton;
    QToolButton* addrAlways3ToolButton;
    QWidget* tab_2;
    QCheckBox* cfBusyCheckBox;
    QGroupBox* cfBusyGroupBox;
    QLineEdit* cfBusyDst2LineEdit;
    QLabel* cfBusyDst3TextLabel;
    QLineEdit* cfBusyDst3LineEdit;
    QLabel* cfBusyDst2TextLabel;
    QLabel* cfBusyDst1TextLabel;
    QLineEdit* cfBusyDst1LineEdit;
    QToolButton* addrBusy1ToolButton;
    QToolButton* addrBusy2ToolButton;
    QToolButton* addrBusy3ToolButton;
    QWidget* tab_3;
    QCheckBox* cfNoanswerCheckBox;
    QGroupBox* cfNoanswerGroupBox;
    QLineEdit* cfNoanswerDst2LineEdit;
    QLabel* cfNoanswerDst3TextLabel;
    QLabel* cfNoanswerDst2TextLabel;
    QLabel* cfNoanswerDst1TextLabel;
    QLineEdit* cfNoanswerDst1LineEdit;
    QLineEdit* cfNoanswerDst3LineEdit;
    QToolButton* addrNoanswer1ToolButton;
    QToolButton* addrNoanswer2ToolButton;
    QToolButton* addrNoanswer3ToolButton;
    QPushButton* okPushButton;
    QPushButton* cancelPushButton;

    virtual bool validateValues();
    virtual bool validate( bool cf_active, QLineEdit * dst1, QLineEdit * dst2, QLineEdit * dst3, list<t_display_url> & dest_list );

public slots:
    virtual void show();
    virtual void populate();
    virtual void validate();
    virtual void toggleAlways( bool on );
    virtual void toggleBusy( bool on );
    virtual void toggleNoanswer( bool on );
    virtual void changedUser( const QString & user_display_uri );
    virtual void showAddressBook();
    virtual void showAddressBook1();
    virtual void showAddressBook2();
    virtual void showAddressBook3();
    virtual void showAddressBook4();
    virtual void showAddressBook5();
    virtual void showAddressBook6();
    virtual void showAddressBook7();
    virtual void showAddressBook8();
    virtual void showAddressBook9();
    virtual void selectedAddress( const QString & address );

signals:
    void destinations(t_user *, const list<t_display_url> &always, const list<t_display_url> &busy, const list<t_display_url> &noanswer);

protected:
    QVBoxLayout* SrvRedirectFormLayout;
    QSpacerItem* spacer14;
    QHBoxLayout* layout114;
    QGridLayout* tabLayout;
    QGridLayout* cfAlwaysGroupBoxLayout;
    QGridLayout* tabLayout_2;
    QGridLayout* cfBusyGroupBoxLayout;
    QGridLayout* tabLayout_3;
    QGridLayout* cfNoanswerGroupBoxLayout;
    QHBoxLayout* layout23;
    QSpacerItem* spacer13;

protected slots:
    virtual void languageChange();

private:
    int nrAddressBook;
    GetAddressForm *getAddressForm;
    t_user *current_user;
    int current_user_idx;

    void init();
    void destroy();

};

#endif // SRVREDIRECTFORM_H
