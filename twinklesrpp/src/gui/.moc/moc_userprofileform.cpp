/****************************************************************************
** UserProfileForm meta object code from reading C++ file 'userprofileform.h'
**
** Created: Wed Sep 29 18:55:15 2010
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../.ui/userprofileform.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *UserProfileForm::className() const
{
    return "UserProfileForm";
}

QMetaObject *UserProfileForm::metaObj = 0;
static QMetaObjectCleanUp cleanUp_UserProfileForm( "UserProfileForm", &UserProfileForm::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString UserProfileForm::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "UserProfileForm", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString UserProfileForm::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "UserProfileForm", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* UserProfileForm::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "index", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"showCategory", 1, param_slot_0 };
    static const QUMethod slot_1 = {"populate", 0, 0 };
    static const QUParameter param_slot_2[] = {
	{ "profiles", &static_QUType_ptr, "list<t_user*>", QUParameter::In },
	{ "show_profile_name", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"initProfileList", 2, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ "profiles", &static_QUType_ptr, "list<t_user*>", QUParameter::In },
	{ "show_profile", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"show", 2, param_slot_3 };
    static const QUMethod slot_4 = {"validate", 0, 0 };
    static const QUParameter param_slot_5[] = {
	{ "profileName", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"changeProfile", 1, param_slot_5 };
    static const QUParameter param_slot_6[] = {
	{ "qle", &static_QUType_ptr, "QLineEdit", QUParameter::In },
	{ "filter", &static_QUType_QString, 0, QUParameter::In },
	{ "caption", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"chooseFile", 3, param_slot_6 };
    static const QUMethod slot_7 = {"chooseRingtone", 0, 0 };
    static const QUMethod slot_8 = {"chooseRingback", 0, 0 };
    static const QUMethod slot_9 = {"chooseIncomingCallScript", 0, 0 };
    static const QUMethod slot_10 = {"chooseInCallAnsweredScript", 0, 0 };
    static const QUMethod slot_11 = {"chooseInCallFailedScript", 0, 0 };
    static const QUMethod slot_12 = {"chooseOutgoingCallScript", 0, 0 };
    static const QUMethod slot_13 = {"chooseOutCallAnsweredScript", 0, 0 };
    static const QUMethod slot_14 = {"chooseOutCallFailedScript", 0, 0 };
    static const QUMethod slot_15 = {"chooseLocalReleaseScript", 0, 0 };
    static const QUMethod slot_16 = {"chooseRemoteReleaseScript", 0, 0 };
    static const QUMethod slot_17 = {"addCodec", 0, 0 };
    static const QUMethod slot_18 = {"removeCodec", 0, 0 };
    static const QUMethod slot_19 = {"upCodec", 0, 0 };
    static const QUMethod slot_20 = {"downCodec", 0, 0 };
    static const QUMethod slot_21 = {"upConversion", 0, 0 };
    static const QUMethod slot_22 = {"downConversion", 0, 0 };
    static const QUMethod slot_23 = {"addConversion", 0, 0 };
    static const QUMethod slot_24 = {"editConversion", 0, 0 };
    static const QUMethod slot_25 = {"removeConversion", 0, 0 };
    static const QUMethod slot_26 = {"testConversion", 0, 0 };
    static const QUParameter param_slot_27[] = {
	{ "idxMWIType", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_27 = {"changeMWIType", 1, param_slot_27 };
    static const QUParameter param_slot_28[] = {
	{ "idx", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_28 = {"changeSipTransportProtocol", 1, param_slot_28 };
    static const QUMethod slot_29 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "showCategory(int)", &slot_0, QMetaData::Public },
	{ "populate()", &slot_1, QMetaData::Public },
	{ "initProfileList(list<t_user*>,QString)", &slot_2, QMetaData::Public },
	{ "show(list<t_user*>,QString)", &slot_3, QMetaData::Public },
	{ "validate()", &slot_4, QMetaData::Public },
	{ "changeProfile(const QString&)", &slot_5, QMetaData::Public },
	{ "chooseFile(QLineEdit*,const QString&,const QString&)", &slot_6, QMetaData::Public },
	{ "chooseRingtone()", &slot_7, QMetaData::Public },
	{ "chooseRingback()", &slot_8, QMetaData::Public },
	{ "chooseIncomingCallScript()", &slot_9, QMetaData::Public },
	{ "chooseInCallAnsweredScript()", &slot_10, QMetaData::Public },
	{ "chooseInCallFailedScript()", &slot_11, QMetaData::Public },
	{ "chooseOutgoingCallScript()", &slot_12, QMetaData::Public },
	{ "chooseOutCallAnsweredScript()", &slot_13, QMetaData::Public },
	{ "chooseOutCallFailedScript()", &slot_14, QMetaData::Public },
	{ "chooseLocalReleaseScript()", &slot_15, QMetaData::Public },
	{ "chooseRemoteReleaseScript()", &slot_16, QMetaData::Public },
	{ "addCodec()", &slot_17, QMetaData::Public },
	{ "removeCodec()", &slot_18, QMetaData::Public },
	{ "upCodec()", &slot_19, QMetaData::Public },
	{ "downCodec()", &slot_20, QMetaData::Public },
	{ "upConversion()", &slot_21, QMetaData::Public },
	{ "downConversion()", &slot_22, QMetaData::Public },
	{ "addConversion()", &slot_23, QMetaData::Public },
	{ "editConversion()", &slot_24, QMetaData::Public },
	{ "removeConversion()", &slot_25, QMetaData::Public },
	{ "testConversion()", &slot_26, QMetaData::Public },
	{ "changeMWIType(int)", &slot_27, QMetaData::Public },
	{ "changeSipTransportProtocol(int)", &slot_28, QMetaData::Public },
	{ "languageChange()", &slot_29, QMetaData::Protected }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_ptr, "t_user", QUParameter::In }
    };
    static const QUMethod signal_0 = {"stunServerChanged", 1, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ 0, &static_QUType_ptr, "t_user", QUParameter::In },
	{ 0, &static_QUType_ptr, "string", QUParameter::In }
    };
    static const QUMethod signal_1 = {"authCredentialsChanged", 2, param_signal_1 };
    static const QUParameter param_signal_2[] = {
	{ 0, &static_QUType_ptr, "t_user", QUParameter::In }
    };
    static const QUMethod signal_2 = {"sipUserChanged", 1, param_signal_2 };
    static const QUMethod signal_3 = {"success", 0, 0 };
    static const QUParameter param_signal_4[] = {
	{ 0, &static_QUType_ptr, "t_user", QUParameter::In }
    };
    static const QUMethod signal_4 = {"mwiChangeUnsubscribe", 1, param_signal_4 };
    static const QUParameter param_signal_5[] = {
	{ 0, &static_QUType_ptr, "t_user", QUParameter::In }
    };
    static const QUMethod signal_5 = {"mwiChangeSubscribe", 1, param_signal_5 };
    static const QMetaData signal_tbl[] = {
	{ "stunServerChanged(t_user*)", &signal_0, QMetaData::Public },
	{ "authCredentialsChanged(t_user*,const string&)", &signal_1, QMetaData::Public },
	{ "sipUserChanged(t_user*)", &signal_2, QMetaData::Public },
	{ "success()", &signal_3, QMetaData::Public },
	{ "mwiChangeUnsubscribe(t_user*)", &signal_4, QMetaData::Public },
	{ "mwiChangeSubscribe(t_user*)", &signal_5, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"UserProfileForm", parentObject,
	slot_tbl, 30,
	signal_tbl, 6,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_UserProfileForm.setMetaObject( metaObj );
    return metaObj;
}

void* UserProfileForm::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "UserProfileForm" ) )
	return this;
    return QDialog::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL stunServerChanged
void UserProfileForm::stunServerChanged( t_user* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL authCredentialsChanged
void UserProfileForm::authCredentialsChanged( t_user* t0, const string& t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 1 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_ptr.set(o+1,t0);
    static_QUType_ptr.set(o+2,&t1);
    activate_signal( clist, o );
}

// SIGNAL sipUserChanged
void UserProfileForm::sipUserChanged( t_user* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 2 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL success
void UserProfileForm::success()
{
    activate_signal( staticMetaObject()->signalOffset() + 3 );
}

// SIGNAL mwiChangeUnsubscribe
void UserProfileForm::mwiChangeUnsubscribe( t_user* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 4 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL mwiChangeSubscribe
void UserProfileForm::mwiChangeSubscribe( t_user* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 5 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

bool UserProfileForm::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: showCategory((int)static_QUType_int.get(_o+1)); break;
    case 1: populate(); break;
    case 2: initProfileList((list<t_user*>)(*((list<t_user*>*)static_QUType_ptr.get(_o+1))),(QString)static_QUType_QString.get(_o+2)); break;
    case 3: show((list<t_user*>)(*((list<t_user*>*)static_QUType_ptr.get(_o+1))),(QString)static_QUType_QString.get(_o+2)); break;
    case 4: validate(); break;
    case 5: changeProfile((const QString&)static_QUType_QString.get(_o+1)); break;
    case 6: chooseFile((QLineEdit*)static_QUType_ptr.get(_o+1),(const QString&)static_QUType_QString.get(_o+2),(const QString&)static_QUType_QString.get(_o+3)); break;
    case 7: chooseRingtone(); break;
    case 8: chooseRingback(); break;
    case 9: chooseIncomingCallScript(); break;
    case 10: chooseInCallAnsweredScript(); break;
    case 11: chooseInCallFailedScript(); break;
    case 12: chooseOutgoingCallScript(); break;
    case 13: chooseOutCallAnsweredScript(); break;
    case 14: chooseOutCallFailedScript(); break;
    case 15: chooseLocalReleaseScript(); break;
    case 16: chooseRemoteReleaseScript(); break;
    case 17: addCodec(); break;
    case 18: removeCodec(); break;
    case 19: upCodec(); break;
    case 20: downCodec(); break;
    case 21: upConversion(); break;
    case 22: downConversion(); break;
    case 23: addConversion(); break;
    case 24: editConversion(); break;
    case 25: removeConversion(); break;
    case 26: testConversion(); break;
    case 27: changeMWIType((int)static_QUType_int.get(_o+1)); break;
    case 28: changeSipTransportProtocol((int)static_QUType_int.get(_o+1)); break;
    case 29: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool UserProfileForm::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: stunServerChanged((t_user*)static_QUType_ptr.get(_o+1)); break;
    case 1: authCredentialsChanged((t_user*)static_QUType_ptr.get(_o+1),(const string&)*((const string*)static_QUType_ptr.get(_o+2))); break;
    case 2: sipUserChanged((t_user*)static_QUType_ptr.get(_o+1)); break;
    case 3: success(); break;
    case 4: mwiChangeUnsubscribe((t_user*)static_QUType_ptr.get(_o+1)); break;
    case 5: mwiChangeSubscribe((t_user*)static_QUType_ptr.get(_o+1)); break;
    default:
	return QDialog::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool UserProfileForm::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool UserProfileForm::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
