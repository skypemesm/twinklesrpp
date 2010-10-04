/****************************************************************************
** Form interface generated from reading ui file 'termcapform.ui'
**
** Created: Sun Oct 3 21:28:46 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef TERMCAPFORM_H
#define TERMCAPFORM_H

#include <qvariant.h>
#include <qdialog.h>
#include "sockets/url.h"
#include "getaddressform.h"
#include "user.h"
#include "phone.h"

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QLabel;
class QComboBox;
class QGroupBox;
class QLineEdit;
class QToolButton;
class QPushButton;
extern t_phone *phone;

class TermCapForm : public QDialog
{
    Q_OBJECT

public:
    TermCapForm( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~TermCapForm();

    QLabel* fromTextLabel;
    QComboBox* fromComboBox;
    QGroupBox* termCapGroupBox;
    QLabel* partyTextLabel;
    QLineEdit* partyLineEdit;
    QToolButton* addressToolButton;
    QPushButton* okPushButton;
    QPushButton* cancelPushButton;

public slots:
    virtual void show( t_user * user_config, const QString & dest );
    virtual void validate();
    virtual void showAddressBook();
    virtual void selectedAddress( const QString & address );

signals:
    void destination(t_user *, const t_url &);

protected:
    QVBoxLayout* TermCapFormLayout;
    QSpacerItem* spacer13;
    QHBoxLayout* layout53;
    QHBoxLayout* termCapGroupBoxLayout;
    QHBoxLayout* layout15;
    QSpacerItem* spacer12;

protected slots:
    virtual void languageChange();

private:
    GetAddressForm *getAddressForm;

    void init();
    void destroy();

};

#endif // TERMCAPFORM_H
