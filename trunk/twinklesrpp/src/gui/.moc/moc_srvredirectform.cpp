/****************************************************************************
** SrvRedirectForm meta object code from reading C++ file 'srvredirectform.h'
**
** Created: Wed Sep 29 18:55:06 2010
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../.ui/srvredirectform.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *SrvRedirectForm::className() const
{
    return "SrvRedirectForm";
}

QMetaObject *SrvRedirectForm::metaObj = 0;
static QMetaObjectCleanUp cleanUp_SrvRedirectForm( "SrvRedirectForm", &SrvRedirectForm::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString SrvRedirectForm::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SrvRedirectForm", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString SrvRedirectForm::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SrvRedirectForm", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* SrvRedirectForm::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"show", 0, 0 };
    static const QUMethod slot_1 = {"populate", 0, 0 };
    static const QUMethod slot_2 = {"validate", 0, 0 };
    static const QUParameter param_slot_3[] = {
	{ "on", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"toggleAlways", 1, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ "on", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"toggleBusy", 1, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ "on", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"toggleNoanswer", 1, param_slot_5 };
    static const QUParameter param_slot_6[] = {
	{ "user_display_uri", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"changedUser", 1, param_slot_6 };
    static const QUMethod slot_7 = {"showAddressBook", 0, 0 };
    static const QUMethod slot_8 = {"showAddressBook1", 0, 0 };
    static const QUMethod slot_9 = {"showAddressBook2", 0, 0 };
    static const QUMethod slot_10 = {"showAddressBook3", 0, 0 };
    static const QUMethod slot_11 = {"showAddressBook4", 0, 0 };
    static const QUMethod slot_12 = {"showAddressBook5", 0, 0 };
    static const QUMethod slot_13 = {"showAddressBook6", 0, 0 };
    static const QUMethod slot_14 = {"showAddressBook7", 0, 0 };
    static const QUMethod slot_15 = {"showAddressBook8", 0, 0 };
    static const QUMethod slot_16 = {"showAddressBook9", 0, 0 };
    static const QUParameter param_slot_17[] = {
	{ "address", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_17 = {"selectedAddress", 1, param_slot_17 };
    static const QUMethod slot_18 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "show()", &slot_0, QMetaData::Public },
	{ "populate()", &slot_1, QMetaData::Public },
	{ "validate()", &slot_2, QMetaData::Public },
	{ "toggleAlways(bool)", &slot_3, QMetaData::Public },
	{ "toggleBusy(bool)", &slot_4, QMetaData::Public },
	{ "toggleNoanswer(bool)", &slot_5, QMetaData::Public },
	{ "changedUser(const QString&)", &slot_6, QMetaData::Public },
	{ "showAddressBook()", &slot_7, QMetaData::Public },
	{ "showAddressBook1()", &slot_8, QMetaData::Public },
	{ "showAddressBook2()", &slot_9, QMetaData::Public },
	{ "showAddressBook3()", &slot_10, QMetaData::Public },
	{ "showAddressBook4()", &slot_11, QMetaData::Public },
	{ "showAddressBook5()", &slot_12, QMetaData::Public },
	{ "showAddressBook6()", &slot_13, QMetaData::Public },
	{ "showAddressBook7()", &slot_14, QMetaData::Public },
	{ "showAddressBook8()", &slot_15, QMetaData::Public },
	{ "showAddressBook9()", &slot_16, QMetaData::Public },
	{ "selectedAddress(const QString&)", &slot_17, QMetaData::Public },
	{ "languageChange()", &slot_18, QMetaData::Protected }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_ptr, "t_user", QUParameter::In },
	{ "always", &static_QUType_ptr, "list<t_display_url>", QUParameter::In },
	{ "busy", &static_QUType_ptr, "list<t_display_url>", QUParameter::In },
	{ "noanswer", &static_QUType_ptr, "list<t_display_url>", QUParameter::In }
    };
    static const QUMethod signal_0 = {"destinations", 4, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "destinations(t_user*,const list<t_display_url>&,const list<t_display_url>&,const list<t_display_url>&)", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"SrvRedirectForm", parentObject,
	slot_tbl, 19,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_SrvRedirectForm.setMetaObject( metaObj );
    return metaObj;
}

void* SrvRedirectForm::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "SrvRedirectForm" ) )
	return this;
    return QDialog::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL destinations
void SrvRedirectForm::destinations( t_user* t0, const list<t_display_url>& t1, const list<t_display_url>& t2, const list<t_display_url>& t3 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[5];
    static_QUType_ptr.set(o+1,t0);
    static_QUType_ptr.set(o+2,&t1);
    static_QUType_ptr.set(o+3,&t2);
    static_QUType_ptr.set(o+4,&t3);
    activate_signal( clist, o );
}

bool SrvRedirectForm::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: show(); break;
    case 1: populate(); break;
    case 2: validate(); break;
    case 3: toggleAlways((bool)static_QUType_bool.get(_o+1)); break;
    case 4: toggleBusy((bool)static_QUType_bool.get(_o+1)); break;
    case 5: toggleNoanswer((bool)static_QUType_bool.get(_o+1)); break;
    case 6: changedUser((const QString&)static_QUType_QString.get(_o+1)); break;
    case 7: showAddressBook(); break;
    case 8: showAddressBook1(); break;
    case 9: showAddressBook2(); break;
    case 10: showAddressBook3(); break;
    case 11: showAddressBook4(); break;
    case 12: showAddressBook5(); break;
    case 13: showAddressBook6(); break;
    case 14: showAddressBook7(); break;
    case 15: showAddressBook8(); break;
    case 16: showAddressBook9(); break;
    case 17: selectedAddress((const QString&)static_QUType_QString.get(_o+1)); break;
    case 18: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool SrvRedirectForm::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: destinations((t_user*)static_QUType_ptr.get(_o+1),(const list<t_display_url>&)*((const list<t_display_url>*)static_QUType_ptr.get(_o+2)),(const list<t_display_url>&)*((const list<t_display_url>*)static_QUType_ptr.get(_o+3)),(const list<t_display_url>&)*((const list<t_display_url>*)static_QUType_ptr.get(_o+4))); break;
    default:
	return QDialog::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool SrvRedirectForm::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool SrvRedirectForm::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
