/****************************************************************************
** Form interface generated from reading ui file 'dtmfform.ui'
**
** Created: Sun Oct 3 21:28:46 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef DTMFFORM_H
#define DTMFFORM_H

#include <qvariant.h>
#include <qdialog.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QGroupBox;
class QPushButton;

class DtmfForm : public QDialog
{
    Q_OBJECT

public:
    DtmfForm( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~DtmfForm();

    QGroupBox* keypadGroupBox;
    QPushButton* twoPushButton;
    QPushButton* threePushButton;
    QPushButton* aPushButton;
    QPushButton* fourPushButton;
    QPushButton* fivePushButton;
    QPushButton* sixPushButton;
    QPushButton* bPushButton;
    QPushButton* sevenPushButton;
    QPushButton* eightPushButton;
    QPushButton* ninePushButton;
    QPushButton* cPushButton;
    QPushButton* starPushButton;
    QPushButton* zeroPushButton;
    QPushButton* poundPushButton;
    QPushButton* dPushButton;
    QPushButton* onePushButton;
    QPushButton* closePushButton;

public slots:
    virtual void dtmf1();
    virtual void dtmf2();
    virtual void dtmf3();
    virtual void dtmf4();
    virtual void dtmf5();
    virtual void dtmf6();
    virtual void dtmf7();
    virtual void dtmf8();
    virtual void dtmf9();
    virtual void dtmf0();
    virtual void dtmfStar();
    virtual void dtmfPound();
    virtual void dtmfA();
    virtual void dtmfB();
    virtual void dtmfC();
    virtual void dtmfD();
    virtual void keyPressEvent( QKeyEvent * e );

signals:
    void digits(const QString &);

protected:
    QVBoxLayout* DtmfFormLayout;
    QGridLayout* keypadGroupBoxLayout;
    QHBoxLayout* layout24;
    QSpacerItem* spacer20;

protected slots:
    virtual void languageChange();

};

#endif // DTMFFORM_H
