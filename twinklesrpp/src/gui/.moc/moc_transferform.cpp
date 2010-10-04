/****************************************************************************
** TransferForm meta object code from reading C++ file 'transferform.h'
**
** Created: Sun Oct 3 21:31:38 2010
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../.ui/transferform.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *TransferForm::className() const
{
    return "TransferForm";
}

QMetaObject *TransferForm::metaObj = 0;
static QMetaObjectCleanUp cleanUp_TransferForm( "TransferForm", &TransferForm::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString TransferForm::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "TransferForm", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString TransferForm::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "TransferForm", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* TransferForm::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"initTransferOptions", 0, 0 };
    static const QUParameter param_slot_1[] = {
	{ "user", &static_QUType_ptr, "t_user", QUParameter::In }
    };
    static const QUMethod slot_1 = {"show", 1, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ "user", &static_QUType_ptr, "t_user", QUParameter::In },
	{ "dest", &static_QUType_ptr, "string", QUParameter::In },
	{ "transfer_type", &static_QUType_ptr, "t_transfer_type", QUParameter::In }
    };
    static const QUMethod slot_2 = {"show", 3, param_slot_2 };
    static const QUMethod slot_3 = {"hide", 0, 0 };
    static const QUMethod slot_4 = {"reject", 0, 0 };
    static const QUMethod slot_5 = {"validate", 0, 0 };
    static const QUParameter param_slot_6[] = {
	{ 0, &static_QUType_ptr, "QCloseEvent", QUParameter::In }
    };
    static const QUMethod slot_6 = {"closeEvent", 1, param_slot_6 };
    static const QUMethod slot_7 = {"showAddressBook", 0, 0 };
    static const QUParameter param_slot_8[] = {
	{ "address", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_8 = {"selectedAddress", 1, param_slot_8 };
    static const QUParameter param_slot_9[] = {
	{ "on", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_9 = {"setOtherLineAddress", 1, param_slot_9 };
    static const QUMethod slot_10 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "initTransferOptions()", &slot_0, QMetaData::Public },
	{ "show(t_user*)", &slot_1, QMetaData::Public },
	{ "show(t_user*,const string&,t_transfer_type)", &slot_2, QMetaData::Public },
	{ "hide()", &slot_3, QMetaData::Public },
	{ "reject()", &slot_4, QMetaData::Public },
	{ "validate()", &slot_5, QMetaData::Public },
	{ "closeEvent(QCloseEvent*)", &slot_6, QMetaData::Public },
	{ "showAddressBook()", &slot_7, QMetaData::Public },
	{ "selectedAddress(const QString&)", &slot_8, QMetaData::Public },
	{ "setOtherLineAddress(bool)", &slot_9, QMetaData::Public },
	{ "languageChange()", &slot_10, QMetaData::Protected }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_ptr, "t_display_url", QUParameter::In },
	{ 0, &static_QUType_ptr, "t_transfer_type", QUParameter::In }
    };
    static const QUMethod signal_0 = {"destination", 2, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "destination(const t_display_url&,t_transfer_type)", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"TransferForm", parentObject,
	slot_tbl, 11,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_TransferForm.setMetaObject( metaObj );
    return metaObj;
}

void* TransferForm::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "TransferForm" ) )
	return this;
    return QDialog::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL destination
void TransferForm::destination( const t_display_url& t0, t_transfer_type t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_ptr.set(o+1,&t0);
    static_QUType_ptr.set(o+2,&t1);
    activate_signal( clist, o );
}

bool TransferForm::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: initTransferOptions(); break;
    case 1: show((t_user*)static_QUType_ptr.get(_o+1)); break;
    case 2: show((t_user*)static_QUType_ptr.get(_o+1),(const string&)*((const string*)static_QUType_ptr.get(_o+2)),(t_transfer_type)(*((t_transfer_type*)static_QUType_ptr.get(_o+3)))); break;
    case 3: hide(); break;
    case 4: reject(); break;
    case 5: validate(); break;
    case 6: closeEvent((QCloseEvent*)static_QUType_ptr.get(_o+1)); break;
    case 7: showAddressBook(); break;
    case 8: selectedAddress((const QString&)static_QUType_QString.get(_o+1)); break;
    case 9: setOtherLineAddress((bool)static_QUType_bool.get(_o+1)); break;
    case 10: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool TransferForm::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: destination((const t_display_url&)*((const t_display_url*)static_QUType_ptr.get(_o+1)),(t_transfer_type)(*((t_transfer_type*)static_QUType_ptr.get(_o+2)))); break;
    default:
	return QDialog::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool TransferForm::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool TransferForm::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
