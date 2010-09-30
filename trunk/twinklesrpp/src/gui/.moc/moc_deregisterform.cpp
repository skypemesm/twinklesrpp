/****************************************************************************
** DeregisterForm meta object code from reading C++ file 'deregisterform.h'
**
** Created: Wed Sep 29 18:54:56 2010
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../.ui/deregisterform.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *DeregisterForm::className() const
{
    return "DeregisterForm";
}

QMetaObject *DeregisterForm::metaObj = 0;
static QMetaObjectCleanUp cleanUp_DeregisterForm( "DeregisterForm", &DeregisterForm::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString DeregisterForm::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "DeregisterForm", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString DeregisterForm::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "DeregisterForm", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* DeregisterForm::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "languageChange()", &slot_0, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"DeregisterForm", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_DeregisterForm.setMetaObject( metaObj );
    return metaObj;
}

void* DeregisterForm::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "DeregisterForm" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool DeregisterForm::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool DeregisterForm::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool DeregisterForm::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool DeregisterForm::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
