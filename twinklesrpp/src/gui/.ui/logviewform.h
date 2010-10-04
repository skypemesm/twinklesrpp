/****************************************************************************
** Form interface generated from reading ui file 'logviewform.ui'
**
** Created: Sun Oct 3 21:28:47 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef LOGVIEWFORM_H
#define LOGVIEWFORM_H

#include <qvariant.h>
#include <qdialog.h>
#include "qfile.h"
#include "qtextstream.h"

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QTextEdit;
class QPushButton;

class LogViewForm : public QDialog
{
    Q_OBJECT

public:
    LogViewForm( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~LogViewForm();

    QTextEdit* logTextEdit;
    QPushButton* closePushButton;
    QPushButton* clearPushButton;

public slots:
    virtual void show();
    virtual void closeEvent( QCloseEvent * ev );
    virtual void update( bool log_zapped );
    virtual void clear();

protected:
    QGridLayout* LogViewFormLayout;
    QSpacerItem* spacer23;

protected slots:
    virtual void languageChange();

private:
    QFile *logfile;
    QTextStream *logstream;

};

#endif // LOGVIEWFORM_H
