/****************************************************************************
** Form interface generated from reading ui file 'getaddressform.ui'
**
** Created: Sun Oct 3 21:28:46 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef GETADDRESSFORM_H
#define GETADDRESSFORM_H

#include <qvariant.h>
#include <qdialog.h>
#include "user.h"

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QTabWidget;
class QWidget;
class QListView;
class QListViewItem;
class QCheckBox;
class QPushButton;

class GetAddressForm : public QDialog
{
    Q_OBJECT

public:
    GetAddressForm( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~GetAddressForm();

    QTabWidget* addressTabWidget;
    QWidget* tabKABC;
    QListView* addressListView;
    QCheckBox* sipOnlyCheckBox;
    QPushButton* reloadPushButton;
    QWidget* tabLocal;
    QListView* localListView;
    QPushButton* addPushButton;
    QPushButton* deletePushButton;
    QPushButton* editPushButton;
    QPushButton* okPushButton;
    QPushButton* cancelPushButton;

public slots:
    virtual void reload();
    virtual void show();
    virtual void loadAddresses();
    virtual void loadLocalAddresses();
    virtual void selectAddress();
    virtual void selectKABCAddress();
    virtual void selectLocalAddress();
    virtual void toggleSipOnly( bool on );
    virtual void addLocalAddress();
    virtual void deleteLocalAddress();
    virtual void editLocalAddress();

signals:
    void address(const QString &, const QString &);
    void address(const QString &);

protected:
    QVBoxLayout* GetAddressFormLayout;
    QVBoxLayout* tabKABCLayout;
    QHBoxLayout* layout17;
    QSpacerItem* spacer16;
    QHBoxLayout* layout69;
    QSpacerItem* spacer59;
    QVBoxLayout* tabLocalLayout;
    QHBoxLayout* layout67;
    QSpacerItem* spacer97;
    QHBoxLayout* layout68;
    QSpacerItem* spacer5;

protected slots:
    virtual void languageChange();

private:
    void *addrBook;

    void init();

};

#endif // GETADDRESSFORM_H
