/****************************************************************************
** RedirectForm meta object code from reading C++ file 'redirectform.h'
**
** Created: Wed Sep 29 18:54:56 2010
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../.ui/redirectform.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *RedirectForm::className() const
{
    return "RedirectForm";
}

QMetaObject *RedirectForm::metaObj = 0;
static QMetaObjectCleanUp cleanUp_RedirectForm( "RedirectForm", &RedirectForm::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString RedirectForm::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "RedirectForm", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString RedirectForm::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "RedirectForm", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* RedirectForm::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "user", &static_QUType_ptr, "t_user", QUParameter::In },
	{ "contacts", &static_QUType_ptr, "list<string>", QUParameter::In }
    };
    static const QUMethod slot_0 = {"show", 2, param_slot_0 };
    static const QUMethod slot_1 = {"validate", 0, 0 };
    static const QUMethod slot_2 = {"showAddressBook", 0, 0 };
    static const QUMethod slot_3 = {"showAddressBook1", 0, 0 };
    static const QUMethod slot_4 = {"showAddressBook2", 0, 0 };
    static const QUMethod slot_5 = {"showAddressBook3", 0, 0 };
    static const QUParameter param_slot_6[] = {
	{ "address", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"selectedAddress", 1, param_slot_6 };
    static const QUMethod slot_7 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "show(t_user*,const list<string>&)", &slot_0, QMetaData::Public },
	{ "validate()", &slot_1, QMetaData::Public },
	{ "showAddressBook()", &slot_2, QMetaData::Public },
	{ "showAddressBook1()", &slot_3, QMetaData::Public },
	{ "showAddressBook2()", &slot_4, QMetaData::Public },
	{ "showAddressBook3()", &slot_5, QMetaData::Public },
	{ "selectedAddress(const QString&)", &slot_6, QMetaData::Public },
	{ "languageChange()", &slot_7, QMetaData::Protected }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_ptr, "list<t_display_url>", QUParameter::In }
    };
    static const QUMethod signal_0 = {"destinations", 1, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "destinations(const list<t_display_url>&)", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"RedirectForm", parentObject,
	slot_tbl, 8,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_RedirectForm.setMetaObject( metaObj );
    return metaObj;
}

void* RedirectForm::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "RedirectForm" ) )
	return this;
    return QDialog::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL destinations
void RedirectForm::destinations( const list<t_display_url>& t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,&t0);
    activate_signal( clist, o );
}

bool RedirectForm::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: show((t_user*)static_QUType_ptr.get(_o+1),(const list<string>&)*((const list<string>*)static_QUType_ptr.get(_o+2))); break;
    case 1: validate(); break;
    case 2: showAddressBook(); break;
    case 3: showAddressBook1(); break;
    case 4: showAddressBook2(); break;
    case 5: showAddressBook3(); break;
    case 6: selectedAddress((const QString&)static_QUType_QString.get(_o+1)); break;
    case 7: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool RedirectForm::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: destinations((const list<t_display_url>&)*((const list<t_display_url>*)static_QUType_ptr.get(_o+1))); break;
    default:
	return QDialog::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool RedirectForm::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool RedirectForm::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
