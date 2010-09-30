/****************************************************************************
** SysSettingsForm meta object code from reading C++ file 'syssettingsform.h'
**
** Created: Wed Sep 29 18:55:22 2010
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../.ui/syssettingsform.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *SysSettingsForm::className() const
{
    return "SysSettingsForm";
}

QMetaObject *SysSettingsForm::metaObj = 0;
static QMetaObjectCleanUp cleanUp_SysSettingsForm( "SysSettingsForm", &SysSettingsForm::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString SysSettingsForm::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SysSettingsForm", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString SysSettingsForm::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SysSettingsForm", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* SysSettingsForm::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "index", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"showCategory", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "cb", &static_QUType_ptr, "QComboBox", QUParameter::In },
	{ "s", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"populateComboBox", 2, param_slot_1 };
    static const QUMethod slot_2 = {"populate", 0, 0 };
    static const QUMethod slot_3 = {"validate", 0, 0 };
    static const QUMethod slot_4 = {"show", 0, 0 };
    static const QUParameter param_slot_5[] = {
	{ 0, &static_QUType_int, 0, QUParameter::Out }
    };
    static const QUMethod slot_5 = {"exec", 1, param_slot_5 };
    static const QUMethod slot_6 = {"chooseRingtone", 0, 0 };
    static const QUMethod slot_7 = {"chooseRingback", 0, 0 };
    static const QUParameter param_slot_8[] = {
	{ "idx", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_8 = {"devRingtoneSelected", 1, param_slot_8 };
    static const QUParameter param_slot_9[] = {
	{ "idx", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_9 = {"devSpeakerSelected", 1, param_slot_9 };
    static const QUParameter param_slot_10[] = {
	{ "idx", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_10 = {"devMicSelected", 1, param_slot_10 };
    static const QUParameter param_slot_11[] = {
	{ "on", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_11 = {"playRingToneCheckBoxToggles", 1, param_slot_11 };
    static const QUParameter param_slot_12[] = {
	{ "on", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_12 = {"playRingBackToneCheckBoxToggles", 1, param_slot_12 };
    static const QUMethod slot_13 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "showCategory(int)", &slot_0, QMetaData::Public },
	{ "populateComboBox(QComboBox*,const QString&)", &slot_1, QMetaData::Public },
	{ "populate()", &slot_2, QMetaData::Public },
	{ "validate()", &slot_3, QMetaData::Public },
	{ "show()", &slot_4, QMetaData::Public },
	{ "exec()", &slot_5, QMetaData::Public },
	{ "chooseRingtone()", &slot_6, QMetaData::Public },
	{ "chooseRingback()", &slot_7, QMetaData::Public },
	{ "devRingtoneSelected(int)", &slot_8, QMetaData::Public },
	{ "devSpeakerSelected(int)", &slot_9, QMetaData::Public },
	{ "devMicSelected(int)", &slot_10, QMetaData::Public },
	{ "playRingToneCheckBoxToggles(bool)", &slot_11, QMetaData::Public },
	{ "playRingBackToneCheckBoxToggles(bool)", &slot_12, QMetaData::Public },
	{ "languageChange()", &slot_13, QMetaData::Protected }
    };
    static const QUMethod signal_0 = {"sipUdpPortChanged", 0, 0 };
    static const QUMethod signal_1 = {"rtpPortChanged", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "sipUdpPortChanged()", &signal_0, QMetaData::Public },
	{ "rtpPortChanged()", &signal_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"SysSettingsForm", parentObject,
	slot_tbl, 14,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_SysSettingsForm.setMetaObject( metaObj );
    return metaObj;
}

void* SysSettingsForm::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "SysSettingsForm" ) )
	return this;
    return QDialog::qt_cast( clname );
}

// SIGNAL sipUdpPortChanged
void SysSettingsForm::sipUdpPortChanged()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

// SIGNAL rtpPortChanged
void SysSettingsForm::rtpPortChanged()
{
    activate_signal( staticMetaObject()->signalOffset() + 1 );
}

bool SysSettingsForm::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: showCategory((int)static_QUType_int.get(_o+1)); break;
    case 1: populateComboBox((QComboBox*)static_QUType_ptr.get(_o+1),(const QString&)static_QUType_QString.get(_o+2)); break;
    case 2: populate(); break;
    case 3: validate(); break;
    case 4: show(); break;
    case 5: static_QUType_int.set(_o,exec()); break;
    case 6: chooseRingtone(); break;
    case 7: chooseRingback(); break;
    case 8: devRingtoneSelected((int)static_QUType_int.get(_o+1)); break;
    case 9: devSpeakerSelected((int)static_QUType_int.get(_o+1)); break;
    case 10: devMicSelected((int)static_QUType_int.get(_o+1)); break;
    case 11: playRingToneCheckBoxToggles((bool)static_QUType_bool.get(_o+1)); break;
    case 12: playRingBackToneCheckBoxToggles((bool)static_QUType_bool.get(_o+1)); break;
    case 13: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool SysSettingsForm::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: sipUdpPortChanged(); break;
    case 1: rtpPortChanged(); break;
    default:
	return QDialog::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool SysSettingsForm::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool SysSettingsForm::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
