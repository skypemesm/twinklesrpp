/****************************************************************************
** Form interface generated from reading ui file 'addresscardform.ui'
**
** Created: Sun Oct 3 21:28:47 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef ADDRESSCARDFORM_H
#define ADDRESSCARDFORM_H

#include <qvariant.h>
#include <qdialog.h>
#include "address_book.h"

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QLabel;
class QLineEdit;
class QPushButton;

class AddressCardForm : public QDialog
{
    Q_OBJECT

public:
    AddressCardForm( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~AddressCardForm();

    QLabel* remarkTextLabel;
    QLineEdit* infixNameLineEdit;
    QLineEdit* firstNameLineEdit;
    QLabel* firstNameTextLabel;
    QLineEdit* remarkLineEdit;
    QLabel* phoneTextLabel;
    QLabel* infixNameTextLabel;
    QLineEdit* phoneLineEdit;
    QLineEdit* lastNameLineEdit;
    QLabel* lastNameTextLabel;
    QPushButton* okPushButton;
    QPushButton* cancelPushButton;

    virtual int exec( t_address_card & card );

public slots:
    virtual void validate();

protected:
    QVBoxLayout* AddressCardFormLayout;
    QSpacerItem* spacer100;
    QGridLayout* layout73;
    QHBoxLayout* layout72;
    QSpacerItem* spacer99;

protected slots:
    virtual void languageChange();

};

#endif // ADDRESSCARDFORM_H
