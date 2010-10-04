/****************************************************************************
** Form interface generated from reading ui file 'numberconversionform.ui'
**
** Created: Sun Oct 3 21:28:47 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef NUMBERCONVERSIONFORM_H
#define NUMBERCONVERSIONFORM_H

#include <qvariant.h>
#include <qdialog.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QLabel;
class QLineEdit;
class QPushButton;

class NumberConversionForm : public QDialog
{
    Q_OBJECT

public:
    NumberConversionForm( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~NumberConversionForm();

    QLabel* exprTextLabel;
    QLabel* replaceTextLabel;
    QLineEdit* replaceLineEdit;
    QLineEdit* exprLineEdit;
    QPushButton* okPushButton;
    QPushButton* cancelPushButton;

    virtual int exec( QString & expr, QString & replace );

public slots:
    virtual void validate();

protected:
    QVBoxLayout* NumberConversionFormLayout;
    QSpacerItem* spacer62;
    QGridLayout* layout43;
    QHBoxLayout* layout44;
    QSpacerItem* spacer61;

protected slots:
    virtual void languageChange();

private:
    void init();

};

#endif // NUMBERCONVERSIONFORM_H
