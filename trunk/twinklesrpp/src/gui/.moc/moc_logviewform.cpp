/****************************************************************************
** LogViewForm meta object code from reading C++ file 'logviewform.h'
**
** Created: Sun Oct 3 21:31:41 2010
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../.ui/logviewform.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *LogViewForm::className() const
{
    return "LogViewForm";
}

QMetaObject *LogViewForm::metaObj = 0;
static QMetaObjectCleanUp cleanUp_LogViewForm( "LogViewForm", &LogViewForm::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString LogViewForm::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "LogViewForm", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString LogViewForm::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "LogViewForm", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* LogViewForm::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"show", 0, 0 };
    static const QUParameter param_slot_1[] = {
	{ "ev", &static_QUType_ptr, "QCloseEvent", QUParameter::In }
    };
    static const QUMethod slot_1 = {"closeEvent", 1, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ "log_zapped", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"update", 1, param_slot_2 };
    static const QUMethod slot_3 = {"clear", 0, 0 };
    static const QUMethod slot_4 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "show()", &slot_0, QMetaData::Public },
	{ "closeEvent(QCloseEvent*)", &slot_1, QMetaData::Public },
	{ "update(bool)", &slot_2, QMetaData::Public },
	{ "clear()", &slot_3, QMetaData::Public },
	{ "languageChange()", &slot_4, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"LogViewForm", parentObject,
	slot_tbl, 5,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_LogViewForm.setMetaObject( metaObj );
    return metaObj;
}

void* LogViewForm::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "LogViewForm" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool LogViewForm::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: show(); break;
    case 1: closeEvent((QCloseEvent*)static_QUType_ptr.get(_o+1)); break;
    case 2: update((bool)static_QUType_bool.get(_o+1)); break;
    case 3: clear(); break;
    case 4: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool LogViewForm::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool LogViewForm::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool LogViewForm::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
