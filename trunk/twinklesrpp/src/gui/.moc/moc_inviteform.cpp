/****************************************************************************
** InviteForm meta object code from reading C++ file 'inviteform.h'
**
** Created: Sun Oct 3 21:31:22 2010
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../.ui/inviteform.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *InviteForm::className() const
{
    return "InviteForm";
}

QMetaObject *InviteForm::metaObj = 0;
static QMetaObjectCleanUp cleanUp_InviteForm( "InviteForm", &InviteForm::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString InviteForm::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "InviteForm", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString InviteForm::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "InviteForm", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* InviteForm::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"clear", 0, 0 };
    static const QUParameter param_slot_1[] = {
	{ "user_config", &static_QUType_ptr, "t_user", QUParameter::In },
	{ "dest", &static_QUType_QString, 0, QUParameter::In },
	{ "subject", &static_QUType_QString, 0, QUParameter::In },
	{ "anonymous", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"show", 4, param_slot_1 };
    static const QUMethod slot_2 = {"validate", 0, 0 };
    static const QUParameter param_slot_3[] = {
	{ "destination", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"addToInviteComboBox", 1, param_slot_3 };
    static const QUMethod slot_4 = {"reject", 0, 0 };
    static const QUParameter param_slot_5[] = {
	{ 0, &static_QUType_ptr, "QCloseEvent", QUParameter::In }
    };
    static const QUMethod slot_5 = {"closeEvent", 1, param_slot_5 };
    static const QUMethod slot_6 = {"showAddressBook", 0, 0 };
    static const QUParameter param_slot_7[] = {
	{ "address", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_7 = {"selectedAddress", 1, param_slot_7 };
    static const QUMethod slot_8 = {"warnHideUser", 0, 0 };
    static const QUMethod slot_9 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "clear()", &slot_0, QMetaData::Public },
	{ "show(t_user*,const QString&,const QString&,bool)", &slot_1, QMetaData::Public },
	{ "validate()", &slot_2, QMetaData::Public },
	{ "addToInviteComboBox(const QString&)", &slot_3, QMetaData::Public },
	{ "reject()", &slot_4, QMetaData::Public },
	{ "closeEvent(QCloseEvent*)", &slot_5, QMetaData::Public },
	{ "showAddressBook()", &slot_6, QMetaData::Public },
	{ "selectedAddress(const QString&)", &slot_7, QMetaData::Public },
	{ "warnHideUser()", &slot_8, QMetaData::Public },
	{ "languageChange()", &slot_9, QMetaData::Protected }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_ptr, "t_user", QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_ptr, "t_url", QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"destination", 5, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_1 = {"raw_destination", 1, param_signal_1 };
    static const QMetaData signal_tbl[] = {
	{ "destination(t_user*,const QString&,const t_url&,const QString&,bool)", &signal_0, QMetaData::Public },
	{ "raw_destination(const QString&)", &signal_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"InviteForm", parentObject,
	slot_tbl, 10,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_InviteForm.setMetaObject( metaObj );
    return metaObj;
}

void* InviteForm::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "InviteForm" ) )
	return this;
    return QDialog::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL destination
void InviteForm::destination( t_user* t0, const QString& t1, const t_url& t2, const QString& t3, bool t4 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[6];
    static_QUType_ptr.set(o+1,t0);
    static_QUType_QString.set(o+2,t1);
    static_QUType_ptr.set(o+3,&t2);
    static_QUType_QString.set(o+4,t3);
    static_QUType_bool.set(o+5,t4);
    activate_signal( clist, o );
}

// SIGNAL raw_destination
void InviteForm::raw_destination( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 1, t0 );
}

bool InviteForm::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: clear(); break;
    case 1: show((t_user*)static_QUType_ptr.get(_o+1),(const QString&)static_QUType_QString.get(_o+2),(const QString&)static_QUType_QString.get(_o+3),(bool)static_QUType_bool.get(_o+4)); break;
    case 2: validate(); break;
    case 3: addToInviteComboBox((const QString&)static_QUType_QString.get(_o+1)); break;
    case 4: reject(); break;
    case 5: closeEvent((QCloseEvent*)static_QUType_ptr.get(_o+1)); break;
    case 6: showAddressBook(); break;
    case 7: selectedAddress((const QString&)static_QUType_QString.get(_o+1)); break;
    case 8: warnHideUser(); break;
    case 9: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool InviteForm::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: destination((t_user*)static_QUType_ptr.get(_o+1),(const QString&)static_QUType_QString.get(_o+2),(const t_url&)*((const t_url*)static_QUType_ptr.get(_o+3)),(const QString&)static_QUType_QString.get(_o+4),(bool)static_QUType_bool.get(_o+5)); break;
    case 1: raw_destination((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return QDialog::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool InviteForm::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool InviteForm::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
