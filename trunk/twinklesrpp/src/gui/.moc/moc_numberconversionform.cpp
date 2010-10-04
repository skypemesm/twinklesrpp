/****************************************************************************
** NumberConversionForm meta object code from reading C++ file 'numberconversionform.h'
**
** Created: Sun Oct 3 21:31:49 2010
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../.ui/numberconversionform.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *NumberConversionForm::className() const
{
    return "NumberConversionForm";
}

QMetaObject *NumberConversionForm::metaObj = 0;
static QMetaObjectCleanUp cleanUp_NumberConversionForm( "NumberConversionForm", &NumberConversionForm::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString NumberConversionForm::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "NumberConversionForm", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString NumberConversionForm::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "NumberConversionForm", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* NumberConversionForm::staticMetaObject()
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
	"NumberConversionForm", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_NumberConversionForm.setMetaObject( metaObj );
    return metaObj;
}

void* NumberConversionForm::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "NumberConversionForm" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool NumberConversionForm::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: validate(); break;
    case 1: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool NumberConversionForm::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool NumberConversionForm::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool NumberConversionForm::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
