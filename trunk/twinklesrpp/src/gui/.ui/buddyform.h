/****************************************************************************
** Form interface generated from reading ui file 'buddyform.ui'
**
** Created: Sun Oct 3 21:28:47 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef BUDDYFORM_H
#define BUDDYFORM_H

#include <qvariant.h>
#include <qdialog.h>
#include "presence/buddy.h"
#include "user.h"
#include "qlistview.h"
#include "getaddressform.h"

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QToolButton;
class QLabel;
class QLineEdit;
class QCheckBox;
class QPushButton;

class BuddyForm : public QDialog
{
    Q_OBJECT

public:
    BuddyForm( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~BuddyForm();

    QToolButton* addressToolButton;
    QLabel* phoneTextLabel;
    QLineEdit* nameLineEdit;
    QCheckBox* subscribeCheckBox;
    QLabel* nameTextLabel;
    QLineEdit* phoneLineEdit;
    QPushButton* okPushButton;
    QPushButton* cancelPushButton;

public slots:
    virtual void showNew( t_buddy_list & _buddy_list, QListViewItem * _profileItem );
    virtual void showEdit( t_buddy & buddy );
    virtual void validate();
    virtual void showAddressBook();
    virtual void selectedAddress( const QString & name, const QString & phone );

protected:
    QVBoxLayout* BuddyFormLayout;
    QSpacerItem* spacer14;
    QGridLayout* layout12;
    QSpacerItem* spacer25;
    QHBoxLayout* layout54;
    QSpacerItem* spacer13;

protected slots:
    virtual void languageChange();

private:
    GetAddressForm *getAddressForm;
    t_user *user_config;
    bool edit_mode;
    t_buddy_list *buddy_list;
    t_buddy *edit_buddy;
    QListViewItem *profileItem;

    void init();
    void destroy();

};

#endif // BUDDYFORM_H
