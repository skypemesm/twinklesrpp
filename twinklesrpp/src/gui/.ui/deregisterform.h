/****************************************************************************
** Form interface generated from reading ui file 'deregisterform.ui'
**
** Created: Sun Oct 3 21:28:47 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef DEREGISTERFORM_H
#define DEREGISTERFORM_H

#include <qvariant.h>
#include <qdialog.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QCheckBox;
class QPushButton;

class DeregisterForm : public QDialog
{
    Q_OBJECT

public:
    DeregisterForm( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~DeregisterForm();

    QCheckBox* deregAllCheckBox;
    QPushButton* okPushButton;
    QPushButton* cancelPushButton;

protected:
    QVBoxLayout* DeregisterFormLayout;
    QHBoxLayout* layout21;
    QSpacerItem* spacer13;

protected slots:
    virtual void languageChange();

};

#endif // DEREGISTERFORM_H
