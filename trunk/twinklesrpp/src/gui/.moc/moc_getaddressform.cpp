/****************************************************************************
** GetAddressForm meta object code from reading C++ file 'getaddressform.h'
**
** Created: Wed Sep 29 18:55:29 2010
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../.ui/getaddressform.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *GetAddressForm::className() const
{
    return "GetAddressForm";
}

QMetaObject *GetAddressForm::metaObj = 0;
static QMetaObjectCleanUp cleanUp_GetAddressForm( "GetAddressForm", &GetAddressForm::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString GetAddressForm::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "GetAddressForm", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString GetAddressForm::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "GetAddressForm", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* GetAddressForm::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"reload", 0, 0 };
    static const QUMethod slot_1 = {"show", 0, 0 };
    static const QUMethod slot_2 = {"loadAddresses", 0, 0 };
    static const QUMethod slot_3 = {"loadLocalAddresses", 0, 0 };
    static const QUMethod slot_4 = {"selectAddress", 0, 0 };
    static const QUMethod slot_5 = {"selectKABCAddress", 0, 0 };
    static const QUMethod slot_6 = {"selectLocalAddress", 0, 0 };
    static const QUParameter param_slot_7[] = {
	{ "on", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_7 = {"toggleSipOnly", 1, param_slot_7 };
    static const QUMethod slot_8 = {"addLocalAddress", 0, 0 };
    static const QUMethod slot_9 = {"deleteLocalAddress", 0, 0 };
    static const QUMethod slot_10 = {"editLocalAddress", 0, 0 };
    static const QUMethod slot_11 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "reload()", &slot_0, QMetaData::Public },
	{ "show()", &slot_1, QMetaData::Public },
	{ "loadAddresses()", &slot_2, QMetaData::Public },
	{ "loadLocalAddresses()", &slot_3, QMetaData::Public },
	{ "selectAddress()", &slot_4, QMetaData::Public },
	{ "selectKABCAddress()", &slot_5, QMetaData::Public },
	{ "selectLocalAddress()", &slot_6, QMetaData::Public },
	{ "toggleSipOnly(bool)", &slot_7, QMetaData::Public },
	{ "addLocalAddress()", &slot_8, QMetaData::Public },
	{ "deleteLocalAddress()", &slot_9, QMetaData::Public },
	{ "editLocalAddress()", &slot_10, QMetaData::Public },
	{ "languageChange()", &slot_11, QMetaData::Protected }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"address", 2, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_1 = {"address", 1, param_signal_1 };
    static const QMetaData signal_tbl[] = {
	{ "address(const QString&,const QString&)", &signal_0, QMetaData::Public },
	{ "address(const QString&)", &signal_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"GetAddressForm", parentObject,
	slot_tbl, 12,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_GetAddressForm.setMetaObject( metaObj );
    return metaObj;
}

void* GetAddressForm::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "GetAddressForm" ) )
	return this;
    return QDialog::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL address
void GetAddressForm::address( const QString& t0, const QString& t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_QString.set(o+1,t0);
    static_QUType_QString.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL address
void GetAddressForm::address( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 1, t0 );
}

bool GetAddressForm::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: reload(); break;
    case 1: show(); break;
    case 2: loadAddresses(); break;
    case 3: loadLocalAddresses(); break;
    case 4: selectAddress(); break;
    case 5: selectKABCAddress(); break;
    case 6: selectLocalAddress(); break;
    case 7: toggleSipOnly((bool)static_QUType_bool.get(_o+1)); break;
    case 8: addLocalAddress(); break;
    case 9: deleteLocalAddress(); break;
    case 10: editLocalAddress(); break;
    case 11: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool GetAddressForm::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: address((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2)); break;
    case 1: address((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return QDialog::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool GetAddressForm::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool GetAddressForm::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
