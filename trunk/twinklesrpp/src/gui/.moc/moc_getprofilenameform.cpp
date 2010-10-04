/****************************************************************************
** GetProfileNameForm meta object code from reading C++ file 'getprofilenameform.h'
**
** Created: Sun Oct 3 21:31:37 2010
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../.ui/getprofilenameform.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *GetProfileNameForm::className() const
{
    return "GetProfileNameForm";
}

QMetaObject *GetProfileNameForm::metaObj = 0;
static QMetaObjectCleanUp cleanUp_GetProfileNameForm( "GetProfileNameForm", &GetProfileNameForm::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString GetProfileNameForm::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "GetProfileNameForm", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString GetProfileNameForm::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "GetProfileNameForm", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* GetProfileNameForm::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"validate", 0, 0 };
    static const QUMethod slot_1 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "validate()", &slot_0, QMetaData::Public },
	{ "languageChange()", &slot_1, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"GetProfileNameForm", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_GetProfileNameForm.setMetaObject( metaObj );
    return metaObj;
}

void* GetProfileNameForm::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "GetProfileNameForm" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool GetProfileNameForm::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: validate(); break;
    case 1: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool GetProfileNameForm::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool GetProfileNameForm::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool GetProfileNameForm::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
