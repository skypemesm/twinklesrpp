/****************************************************************************
** Form interface generated from reading ui file 'wizardform.ui'
**
** Created: Wed Sep 29 18:51:12 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef WIZARDFORM_H
#define WIZARDFORM_H

#include <qvariant.h>
#include <qdialog.h>
#include <map>
#include "user.h"

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QLineEdit;
class QLabel;
class QComboBox;
class QPushButton;
struct t_provider;

class WizardForm : public QDialog
{
    Q_OBJECT

public:
    WizardForm( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~WizardForm();

    QLineEdit* stunServerLineEdit;
    QLabel* stunServerTextLabel;
    QLineEdit* usernameLineEdit;
    QLabel* domainTextLabel;
    QComboBox* serviceProviderComboBox;
    QLabel* authNameTextLabel;
    QLabel* dislpayTextLabel;
    QLineEdit* authNameLineEdit;
    QLineEdit* domainLineEdit;
    QLineEdit* displayLineEdit;
    QLabel* proxyTextLabel;
    QLineEdit* proxyLineEdit;
    QLabel* serviceProviderTextLabel;
    QLabel* authPasswordTextLabel;
    QLabel* usernameTextLabel;
    QLineEdit* authPasswordLineEdit;
    QPushButton* okPushButton;
    QPushButton* cancelPushButton;

    virtual void show( t_user * user );

public slots:
    virtual void initProviders();
    virtual int exec( t_user * user );
    virtual void update( const QString & item );
    virtual void updateAuthName( const QString & s );
    virtual void disableSuggestAuthName();
    virtual void validate();

signals:
    void success();

protected:
    QVBoxLayout* WizardFormLayout;
    QSpacerItem* spacer23;
    QGridLayout* layout15;
    QSpacerItem* spacer22;
    QHBoxLayout* layout14;
    QSpacerItem* spacer20;

protected slots:
    virtual void languageChange();

private:
    bool suggestAuthName;
    std::map<QString, t_provider> mapProviders;
    t_user *user_config;

    void init();

};

#endif // WIZARDFORM_H
