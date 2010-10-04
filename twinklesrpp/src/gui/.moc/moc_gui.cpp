/****************************************************************************
** t_gui meta object code from reading C++ file 'gui.h'
**
** Created: Sun Oct 3 21:31:13 2010
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../gui.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *t_gui::className() const
{
    return "t_gui";
}

QMetaObject *t_gui::metaObj = 0;
static QMetaObjectCleanUp cleanUp_t_gui( "t_gui", &t_gui::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString t_gui::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "t_gui", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString t_gui::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "t_gui", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* t_gui::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"updateTimersMessageSessions", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "updateTimersMessageSessions()", &slot_0, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"t_gui", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_t_gui.setMetaObject( metaObj );
    return metaObj;
}

void* t_gui::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "t_gui" ) )
	return this;
    if ( !qstrcmp( clname, "t_userintf" ) )
	return (t_userintf*)this;
    return QObject::qt_cast( clname );
}

bool t_gui::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: updateTimersMessageSessions(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool t_gui::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool t_gui::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool t_gui::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
