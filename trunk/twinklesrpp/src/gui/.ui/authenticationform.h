/****************************************************************************
** Form interface generated from reading ui file 'authenticationform.ui'
**
** Created: Wed Sep 29 18:51:12 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef AUTHENTICATIONFORM_H
#define AUTHENTICATIONFORM_H

#include <qvariant.h>
#include <qdialog.h>
#include "user.h"

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QLabel;
class QLineEdit;
class QPushButton;

class AuthenticationForm : public QDialog
{
    Q_OBJECT

public:
    AuthenticationForm( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~AuthenticationForm();

    QLabel* authIconTextLabel;
    QLabel* userValueTextLabel;
    QLabel* profileValueTextLabel;
    QLabel* profileTextLabel;
    QLabel* userTextLabel;
    QLabel* passwordTextLabel;
    QLineEdit* passwordLineEdit;
    QLineEdit* usernameLineEdit;
    QLabel* usernameTextLabel;
    QPushButton* okPushButton;
    QPushButton* cancelPushButton;
    QLabel* authTextLabel;
    QLabel* realmTextLabel;

    virtual int exec( t_user * user_config, const QString & realm, QString & username, QString & password );

protected:
    QGridLayout* AuthenticationFormLayout;
    QSpacerItem* spacer13;
    QVBoxLayout* layout33;
    QSpacerItem* spacer46;
    QGridLayout* layout9;
    QGridLayout* layout10;
    QHBoxLayout* layout22;
    QSpacerItem* spacer12;
    QHBoxLayout* layout13;

protected slots:
    virtual void languageChange();

};

#endif // AUTHENTICATIONFORM_H
