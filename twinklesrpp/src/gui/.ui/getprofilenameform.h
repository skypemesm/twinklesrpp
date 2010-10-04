/****************************************************************************
** Form interface generated from reading ui file 'getprofilenameform.ui'
**
** Created: Sun Oct 3 21:28:47 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef GETPROFILENAMEFORM_H
#define GETPROFILENAMEFORM_H

#include <qvariant.h>
#include <qdialog.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QLabel;
class QPushButton;
class QLineEdit;

class GetProfileNameForm : public QDialog
{
    Q_OBJECT

public:
    GetProfileNameForm( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~GetProfileNameForm();

    QLabel* userIconTextLabel;
    QPushButton* okPushButton;
    QPushButton* cancelPushButton;
    QLabel* profileTextLabel;
    QLineEdit* profileLineEdit;

    virtual QString getProfileName();
    virtual int execNewName();
    virtual int execRename( const QString & oldName );

public slots:
    virtual void validate();

protected:
    QGridLayout* GetProfileNameFormLayout;
    QHBoxLayout* layout24;
    QSpacerItem* spacer41;
    QVBoxLayout* layout26;

protected slots:
    virtual void languageChange();

private:
    void init();

};

#endif // GETPROFILENAMEFORM_H
