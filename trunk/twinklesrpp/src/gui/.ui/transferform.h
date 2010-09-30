/****************************************************************************
** Form interface generated from reading ui file 'transferform.ui'
**
** Created: Wed Sep 29 18:51:12 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef TRANSFERFORM_H
#define TRANSFERFORM_H

#include <qvariant.h>
#include <qdialog.h>
#include "qstring.h"
#include "sockets/url.h"
#include "getaddressform.h"
#include "user.h"
#include "protocol.h"
#include "phone.h"

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QGroupBox;
class QLabel;
class QLineEdit;
class QToolButton;
class QButtonGroup;
class QRadioButton;
class QPushButton;
extern t_phone *phone;

class TransferForm : public QDialog
{
    Q_OBJECT

public:
    TransferForm( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~TransferForm();

    QGroupBox* transferGroupBox;
    QLabel* toLabel;
    QLineEdit* toLineEdit;
    QToolButton* addressToolButton;
    QButtonGroup* typeButtonGroup2;
    QRadioButton* basicRadioButton;
    QRadioButton* consultRadioButton;
    QRadioButton* otherLineRadioButton;
    QPushButton* okPushButton;
    QPushButton* cancelPushButton;

public slots:
    virtual void initTransferOptions();
    virtual void show( t_user * user );
    virtual void show( t_user * user, const string & dest, t_transfer_type transfer_type );
    virtual void hide();
    virtual void reject();
    virtual void validate();
    virtual void closeEvent( QCloseEvent * );
    virtual void showAddressBook();
    virtual void selectedAddress( const QString & address );
    virtual void setOtherLineAddress( bool on );

signals:
    void destination(const t_display_url&, t_transfer_type);

protected:
    QVBoxLayout* TransferFormLayout;
    QSpacerItem* spacer24;
    QHBoxLayout* transferGroupBoxLayout;
    QVBoxLayout* typeButtonGroup2Layout;
    QHBoxLayout* layout28;
    QSpacerItem* spacer23;

protected slots:
    virtual void languageChange();

private:
    int consult_line;
    t_user *user_config;
    GetAddressForm *getAddressForm;
    QString previousAddress;

    void init();
    void destroy();

};

#endif // TRANSFERFORM_H
