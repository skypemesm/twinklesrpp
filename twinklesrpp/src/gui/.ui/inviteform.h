/****************************************************************************
** Form interface generated from reading ui file 'inviteform.ui'
**
** Created: Sun Oct 3 21:28:46 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef INVITEFORM_H
#define INVITEFORM_H

#include <qvariant.h>
#include <qdialog.h>
#include "qstring.h"
#include "sockets/url.h"
#include "getaddressform.h"
#include "user.h"
#include "phone.h"

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QLabel;
class QLineEdit;
class QToolButton;
class QComboBox;
class QCheckBox;
class QPushButton;
extern t_phone *phone;

class InviteForm : public QDialog
{
    Q_OBJECT

public:
    InviteForm( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~InviteForm();

    QLabel* inviteTextLabel;
    QLineEdit* subjectLineEdit;
    QToolButton* addressToolButton;
    QComboBox* inviteComboBox;
    QComboBox* fromComboBox;
    QLabel* subjectTextLabel;
    QLabel* fromTextLabel;
    QCheckBox* hideUserCheckBox;
    QPushButton* okPushButton;
    QPushButton* cancelPushButton;

public slots:
    virtual void clear();
    virtual void show( t_user * user_config, const QString & dest, const QString & subject, bool anonymous );
    virtual void validate();
    virtual void addToInviteComboBox( const QString & destination );
    virtual void reject();
    virtual void closeEvent( QCloseEvent * );
    virtual void showAddressBook();
    virtual void selectedAddress( const QString & address );
    virtual void warnHideUser( void );

signals:
    void destination(t_user *, const QString &, const t_url &, const QString &, bool);
    void raw_destination(const QString &);

protected:
    QVBoxLayout* InviteFormLayout;
    QSpacerItem* spacer12;
    QGridLayout* layout40;
    QSpacerItem* spacer3;
    QSpacerItem* spacer24;
    QHBoxLayout* layout13;
    QSpacerItem* spacer5;
    QHBoxLayout* layout20;
    QSpacerItem* spacer11;

protected slots:
    virtual void languageChange();

private:
    GetAddressForm *getAddressForm;

    void init();
    void destroy();

};

#endif // INVITEFORM_H
