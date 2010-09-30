/****************************************************************************
** Form interface generated from reading ui file 'selectuserform.ui'
**
** Created: Wed Sep 29 18:51:12 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef SELECTUSERFORM_H
#define SELECTUSERFORM_H

#include <qvariant.h>
#include <qdialog.h>
#include "user.h"
#include "phone.h"
#include "gui.h"

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QPushButton;
class QLabel;
class QListView;
class QListViewItem;
extern t_phone *phone;

class SelectUserForm : public QDialog
{
    Q_OBJECT

public:
    SelectUserForm( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~SelectUserForm();

    QPushButton* cancelPushButton;
    QPushButton* selectPushButton;
    QPushButton* okPushButton;
    QPushButton* clearPushButton;
    QLabel* purposeTextLabel;
    QListView* userListView;

public slots:
    virtual void show( t_select_purpose purpose );
    virtual void validate();
    virtual void selectAll();
    virtual void clearAll();
    virtual void toggle( QListViewItem * item );

signals:
    void selection(list<t_user *>);
    void not_selected(list<t_user*>);

protected:
    QGridLayout* SelectUserFormLayout;
    QSpacerItem* spacer47;
    QVBoxLayout* layout100;

protected slots:
    virtual void languageChange();

private:
    void init();

};

#endif // SELECTUSERFORM_H
