/****************************************************************************
** HistoryForm meta object code from reading C++ file 'historyform.h'
**
** Created: Sun Oct 3 21:31:45 2010
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../.ui/historyform.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *HistoryForm::className() const
{
    return "HistoryForm";
}

QMetaObject *HistoryForm::metaObj = 0;
static QMetaObjectCleanUp cleanUp_HistoryForm( "HistoryForm", &HistoryForm::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString HistoryForm::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "HistoryForm", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString HistoryForm::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "HistoryForm", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* HistoryForm::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"loadHistory", 0, 0 };
    static const QUMethod slot_1 = {"update", 0, 0 };
    static const QUMethod slot_2 = {"show", 0, 0 };
    static const QUParameter param_slot_3[] = {
	{ "e", &static_QUType_ptr, "QCloseEvent", QUParameter::In }
    };
    static const QUMethod slot_3 = {"closeEvent", 1, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ "item", &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_4 = {"showCallDetails", 1, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ "item", &static_QUType_ptr, "QListViewItem", QUParameter::In },
	{ "pos", &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod slot_5 = {"popupMenu", 2, param_slot_5 };
    static const QUParameter param_slot_6[] = {
	{ "item", &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_6 = {"call", 1, param_slot_6 };
    static const QUMethod slot_7 = {"call", 0, 0 };
    static const QUMethod slot_8 = {"deleteEntry", 0, 0 };
    static const QUMethod slot_9 = {"clearHistory", 0, 0 };
    static const QUMethod slot_10 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "loadHistory()", &slot_0, QMetaData::Public },
	{ "update()", &slot_1, QMetaData::Public },
	{ "show()", &slot_2, QMetaData::Public },
	{ "closeEvent(QCloseEvent*)", &slot_3, QMetaData::Public },
	{ "showCallDetails(QListViewItem*)", &slot_4, QMetaData::Public },
	{ "popupMenu(QListViewItem*,const QPoint&)", &slot_5, QMetaData::Public },
	{ "call(QListViewItem*)", &slot_6, QMetaData::Public },
	{ "call()", &slot_7, QMetaData::Public },
	{ "deleteEntry()", &slot_8, QMetaData::Public },
	{ "clearHistory()", &slot_9, QMetaData::Public },
	{ "languageChange()", &slot_10, QMetaData::Protected }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_ptr, "t_user", QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"call", 4, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "call(t_user*,const QString&,const QString&,bool)", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"HistoryForm", parentObject,
	slot_tbl, 11,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_HistoryForm.setMetaObject( metaObj );
    return metaObj;
}

void* HistoryForm::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "HistoryForm" ) )
	return this;
    return QDialog::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL call
void HistoryForm::call( t_user* t0, const QString& t1, const QString& t2, bool t3 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[5];
    static_QUType_ptr.set(o+1,t0);
    static_QUType_QString.set(o+2,t1);
    static_QUType_QString.set(o+3,t2);
    static_QUType_bool.set(o+4,t3);
    activate_signal( clist, o );
}

bool HistoryForm::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: loadHistory(); break;
    case 1: update(); break;
    case 2: show(); break;
    case 3: closeEvent((QCloseEvent*)static_QUType_ptr.get(_o+1)); break;
    case 4: showCallDetails((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 5: popupMenu((QListViewItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2))); break;
    case 6: call((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 7: call(); break;
    case 8: deleteEntry(); break;
    case 9: clearHistory(); break;
    case 10: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool HistoryForm::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: call((t_user*)static_QUType_ptr.get(_o+1),(const QString&)static_QUType_QString.get(_o+2),(const QString&)static_QUType_QString.get(_o+3),(bool)static_QUType_bool.get(_o+4)); break;
    default:
	return QDialog::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool HistoryForm::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool HistoryForm::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES