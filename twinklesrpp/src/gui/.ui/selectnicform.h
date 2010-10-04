/****************************************************************************
** Form interface generated from reading ui file 'selectnicform.ui'
**
** Created: Sun Oct 3 21:28:47 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef SELECTNICFORM_H
#define SELECTNICFORM_H

#include <qvariant.h>
#include <qdialog.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QLabel;
class QListBox;
class QListBoxItem;
class QPushButton;

class SelectNicForm : public QDialog
{
    Q_OBJECT

public:
    SelectNicForm( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~SelectNicForm();

    QLabel* nicIconTextLabel;
    QLabel* selectTextLabel;
    QListBox* nicListBox;
    QPushButton* defaultIpPushButton;
    QPushButton* defaultNicPushButton;
    QPushButton* okPushButton;

public slots:
    virtual void setAsDefault( bool setIp );
    virtual void setAsDefaultIp();
    virtual void setAsDefaultNic();

protected:
    QGridLayout* SelectNicFormLayout;
    QSpacerItem* spacer53;
    QSpacerItem* spacer9;
    QHBoxLayout* layout42;
    QHBoxLayout* layout11;
    QSpacerItem* spacer7;

protected slots:
    virtual void languageChange();

private:
    int idxDefault;

    void init();

};

#endif // SELECTNICFORM_H
