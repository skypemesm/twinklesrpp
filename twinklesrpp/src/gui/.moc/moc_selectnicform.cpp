/****************************************************************************
** SelectNicForm meta object code from reading C++ file 'selectnicform.h'
**
** Created: Sun Oct 3 21:31:29 2010
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../.ui/selectnicform.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *SelectNicForm::className() const
{
    return "SelectNicForm";
}

QMetaObject *SelectNicForm::metaObj = 0;
static QMetaObjectCleanUp cleanUp_SelectNicForm( "SelectNicForm", &SelectNicForm::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString SelectNicForm::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SelectNicForm", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString SelectNicForm::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SelectNicForm", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* SelectNicForm::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "setIp", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"setAsDefault", 1, param_slot_0 };
    static const QUMethod slot_1 = {"setAsDefaultIp", 0, 0 };
    static const QUMethod slot_2 = {"setAsDefaultNic", 0, 0 };
    static const QUMethod slot_3 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "setAsDefault(bool)", &slot_0, QMetaData::Public },
	{ "setAsDefaultIp()", &slot_1, QMetaData::Public },
	{ "setAsDefaultNic()", &slot_2, QMetaData::Public },
	{ "languageChange()", &slot_3, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"SelectNicForm", parentObject,
	slot_tbl, 4,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_SelectNicForm.setMetaObject( metaObj );
    return metaObj;
}

void* SelectNicForm::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "SelectNicForm" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool SelectNicForm::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setAsDefault((bool)static_QUType_bool.get(_o+1)); break;
    case 1: setAsDefaultIp(); break;
    case 2: setAsDefaultNic(); break;
    case 3: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool SelectNicForm::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool SelectNicForm::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool SelectNicForm::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
