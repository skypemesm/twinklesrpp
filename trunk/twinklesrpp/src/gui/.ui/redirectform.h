/****************************************************************************
** Form interface generated from reading ui file 'redirectform.ui'
**
** Created: Wed Sep 29 18:51:12 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef REDIRECTFORM_H
#define REDIRECTFORM_H

#include <qvariant.h>
#include <qdialog.h>
#include <list>
#include "sockets/url.h"
#include "getaddressform.h"
#include "user.h"

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QGroupBox;
class QLineEdit;
class QLabel;
class QToolButton;
class QPushButton;

class RedirectForm : public QDialog
{
    Q_OBJECT

public:
    RedirectForm( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~RedirectForm();

    QGroupBox* redirectGroupBox;
    QLineEdit* contact3LineEdit;
    QLabel* contact3TextLabel;
    QLabel* contact2TextLabel;
    QLineEdit* contact2LineEdit;
    QLineEdit* contact1LineEdit;
    QLabel* contact1TextLabel;
    QToolButton* address1ToolButton;
    QToolButton* address3ToolButton;
    QToolButton* address2ToolButton;
    QPushButton* okPushButton;
    QPushButton* cancelPushButton;

public slots:
    virtual void show( t_user * user, const list<string> & contacts );
    virtual void validate();
    virtual void showAddressBook();
    virtual void showAddressBook1();
    virtual void showAddressBook2();
    virtual void showAddressBook3();
    virtual void selectedAddress( const QString & address );

signals:
    void destinations(const list<t_display_url> &);

protected:
    QVBoxLayout* RedirectFormLayout;
    QSpacerItem* spacer14;
    QGridLayout* redirectGroupBoxLayout;
    QHBoxLayout* layout15;
    QSpacerItem* spacer11;

protected slots:
    virtual void languageChange();

private:
    GetAddressForm *getAddressForm;
    int nrAddressBook;
    t_user *user_config;

    void init();
    void destroy();

};

#endif // REDIRECTFORM_H
