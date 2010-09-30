/****************************************************************************
** Form interface generated from reading ui file 'historyform.ui'
**
** Created: Wed Sep 29 18:51:12 2010
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef HISTORYFORM_H
#define HISTORYFORM_H

#include <qvariant.h>
#include <qdialog.h>
#include "user.h"
#include "phone.h"
#include "qpopupmenu.h"

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QListView;
class QListViewItem;
class QGroupBox;
class QTextEdit;
class QCheckBox;
class QPushButton;
class QLabel;
extern t_phone *phone;

class HistoryForm : public QDialog
{
    Q_OBJECT

public:
    HistoryForm( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~HistoryForm();

    QListView* historyListView;
    QGroupBox* cdrGroupBox;
    QTextEdit* cdrTextEdit;
    QGroupBox* viewGroupBox;
    QCheckBox* inCheckBox;
    QCheckBox* outCheckBox;
    QCheckBox* successCheckBox;
    QCheckBox* missedCheckBox;
    QCheckBox* profileCheckBox;
    QPushButton* clearPushButton;
    QPushButton* closePushButton;
    QPushButton* callPushButton;
    QLabel* numberlCallsTtextLabel;
    QLabel* numberCallsValueTextLabel;
    QLabel* totalDurationTextLabel;
    QLabel* totalDurationValueTextLabel;

public slots:
    virtual void loadHistory();
    virtual void update();
    virtual void show();
    virtual void closeEvent( QCloseEvent * e );
    virtual void showCallDetails( QListViewItem * item );
    virtual void popupMenu( QListViewItem * item, const QPoint & pos );
    virtual void call( QListViewItem * item );
    virtual void call( void );
    virtual void deleteEntry( void );
    virtual void clearHistory();

signals:
    void call(t_user *, const QString &, const QString &, bool);

protected:
    QGridLayout* HistoryFormLayout;
    QHBoxLayout* layout37;
    QGridLayout* cdrGroupBoxLayout;
    QVBoxLayout* viewGroupBoxLayout;
    QHBoxLayout* layout39;
    QSpacerItem* spacer28;
    QHBoxLayout* layout6;
    QSpacerItem* spacer11;

protected slots:
    virtual void languageChange();

private:
    time_t timeLastViewed;
    QPopupMenu *histPopupMenu;
    int itemCall;

    void init();
    void destroy();

};

#endif // HISTORYFORM_H
