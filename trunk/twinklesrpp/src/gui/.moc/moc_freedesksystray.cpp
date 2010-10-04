/****************************************************************************
** FreeDeskSysTray meta object code from reading C++ file 'freedesksystray.h'
**
** Created: Sun Oct 3 21:31:16 2010
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../freedesksystray.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *FreeDeskSysTray::className() const
{
    return "FreeDeskSysTray";
}

QMetaObject *FreeDeskSysTray::metaObj = 0;
static QMetaObjectCleanUp cleanUp_FreeDeskSysTray( "FreeDeskSysTray", &FreeDeskSysTray::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString FreeDeskSysTray::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "FreeDeskSysTray", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString FreeDeskSysTray::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "FreeDeskSysTray", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* FreeDeskSysTray::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QLabel::staticMetaObject();
    static const QUMethod slot_0 = {"slotMenuItemShow", 0, 0 };
    static const QUMethod slot_1 = {"slotMenuItemQuit", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "slotMenuItemShow()", &slot_0, QMetaData::Public },
	{ "slotMenuItemQuit()", &slot_1, QMetaData::Public }
    };
    static const QUMethod signal_0 = {"quitSelected", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "quitSelected()", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"FreeDeskSysTray", parentObject,
	slot_tbl, 2,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_FreeDeskSysTray.setMetaObject( metaObj );
    return metaObj;
}

void* FreeDeskSysTray::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "FreeDeskSysTray" ) )
	return this;
    return QLabel::qt_cast( clname );
}

// SIGNAL quitSelected
void FreeDeskSysTray::quitSelected()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

bool FreeDeskSysTray::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: slotMenuItemShow(); break;
    case 1: slotMenuItemQuit(); break;
    default:
	return QLabel::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool FreeDeskSysTray::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: quitSelected(); break;
    default:
	return QLabel::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool FreeDeskSysTray::qt_property( int id, int f, QVariant* v)
{
    return QLabel::qt_property( id, f, v);
}

bool FreeDeskSysTray::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
