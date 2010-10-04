/****************************************************************************
** YesNoDialog meta object code from reading C++ file 'yesnodialog.h'
**
** Created: Sun Oct 3 21:31:18 2010
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../yesnodialog.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *YesNoDialog::className() const
{
    return "YesNoDialog";
}

QMetaObject *YesNoDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_YesNoDialog( "YesNoDialog", &YesNoDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString YesNoDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "YesNoDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString YesNoDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "YesNoDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* YesNoDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"actionYes", 0, 0 };
    static const QUMethod slot_1 = {"actionNo", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "actionYes()", &slot_0, QMetaData::Protected },
	{ "actionNo()", &slot_1, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"YesNoDialog", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_YesNoDialog.setMetaObject( metaObj );
    return metaObj;
}

void* YesNoDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "YesNoDialog" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool YesNoDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: actionYes(); break;
    case 1: actionNo(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool YesNoDialog::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool YesNoDialog::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool YesNoDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *ReferPermissionDialog::className() const
{
    return "ReferPermissionDialog";
}

QMetaObject *ReferPermissionDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ReferPermissionDialog( "ReferPermissionDialog", &ReferPermissionDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ReferPermissionDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ReferPermissionDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ReferPermissionDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ReferPermissionDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ReferPermissionDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = YesNoDialog::staticMetaObject();
    static const QUMethod slot_0 = {"actionYes", 0, 0 };
    static const QUMethod slot_1 = {"actionNo", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "actionYes()", &slot_0, QMetaData::Protected },
	{ "actionNo()", &slot_1, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"ReferPermissionDialog", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ReferPermissionDialog.setMetaObject( metaObj );
    return metaObj;
}

void* ReferPermissionDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ReferPermissionDialog" ) )
	return this;
    return YesNoDialog::qt_cast( clname );
}

bool ReferPermissionDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: actionYes(); break;
    case 1: actionNo(); break;
    default:
	return YesNoDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ReferPermissionDialog::qt_emit( int _id, QUObject* _o )
{
    return YesNoDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ReferPermissionDialog::qt_property( int id, int f, QVariant* v)
{
    return YesNoDialog::qt_property( id, f, v);
}

bool ReferPermissionDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
