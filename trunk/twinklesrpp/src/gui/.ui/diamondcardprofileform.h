/****************************************************************************
** Form interface generated from reading ui file 'diamondcardprofileform.ui'
**
** Created: Wed Sep 29 18:51:12 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef DIAMONDCARDPROFILEFORM_H
#define DIAMONDCARDPROFILEFORM_H

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

class DiamondcardProfileForm : public QDialog
{
    Q_OBJECT

public:
    DiamondcardProfileForm( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~DiamondcardProfileForm();

    QLabel* explainTextLabel;
    QLineEdit* accountIdLineEdit;
    QLineEdit* nameLineEdit;
    QLabel* accountIdTextLabel;
    QLabel* pinCodeTextLabel;
    QLabel* nameTextLabel;
    QLineEdit* pinCodeLineEdit;
    QLabel* signUpTextLabel;
    QPushButton* okPushButton;
    QPushButton* cancelPushButton;

    virtual int exec( t_user * user );

public slots:
    virtual void destroyOldUserConfig();
    virtual void show( t_user * user );
    virtual void validate();
    virtual void mouseReleaseEvent( QMouseEvent * e );
    virtual void processLeftMouseButtonRelease( QMouseEvent * e );

signals:
    void success();
    void newDiamondcardProfile(const QString&);

protected:
    QVBoxLayout* DiamondcardProfileFormLayout;
    QSpacerItem* spacer35;
    QSpacerItem* spacer27;
    QSpacerItem* spacer28;
    QGridLayout* layout193;
    QHBoxLayout* layout63;
    QHBoxLayout* layout64;
    QSpacerItem* spacer21;

protected slots:
    virtual void languageChange();

private:
    t_user *user_config;
    bool destroy_user_config;

    void init();
    void destroy();

};

#endif // DIAMONDCARDPROFILEFORM_H
