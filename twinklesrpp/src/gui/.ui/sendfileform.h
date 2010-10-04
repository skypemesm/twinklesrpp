/****************************************************************************
** Form interface generated from reading ui file 'sendfileform.ui'
**
** Created: Sun Oct 3 21:28:47 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef SENDFILEFORM_H
#define SENDFILEFORM_H

#include <qvariant.h>
#include <qdialog.h>
#include "qstring.h"

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QToolButton;
class QLabel;
class QLineEdit;
class QPushButton;

class SendFileForm : public QDialog
{
    Q_OBJECT

public:
    SendFileForm( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~SendFileForm();

    QToolButton* fileToolButton;
    QLabel* fileTextLabel;
    QLabel* subjectTextLabel;
    QLineEdit* fileLineEdit;
    QLineEdit* subjectLineEdit;
    QPushButton* okPushButton;
    QPushButton* cancelPushButton;

public slots:
    virtual void signalSelectedInfo();
    virtual void chooseFile();
    virtual void setFilename();

signals:
    void selected(const QString &filename, const QString &subject);

protected:
    QVBoxLayout* SendFileFormLayout;
    QSpacerItem* spacer66;
    QGridLayout* layout166;
    QSpacerItem* spacer62;
    QHBoxLayout* layout59;
    QSpacerItem* spacer65;

protected slots:
    virtual void languageChange();

private:
    QDialog *_chooseFileDialog;

    void init();
    void destroy();

};

#endif // SENDFILEFORM_H
