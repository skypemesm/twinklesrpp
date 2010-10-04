/****************************************************************************
** WizardForm meta object code from reading C++ file 'wizardform.h'
**
** Created: Sun Oct 3 21:31:41 2010
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../.ui/wizardform.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *WizardForm::className() const
{
    return "WizardForm";
}

QMetaObject *WizardForm::metaObj = 0;
static QMetaObjectCleanUp cleanUp_WizardForm( "WizardForm", &WizardForm::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString WizardForm::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "WizardForm", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString WizardForm::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "WizardForm", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* WizardForm::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"initProviders", 0, 0 };
    static const QUParameter param_slot_1[] = {
	{ 0, &static_QUType_int, 0, QUParameter::Out },
	{ "user", &static_QUType_ptr, "t_user", QUParameter::In }
    };
    static const QUMethod slot_1 = {"exec", 2, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ "item", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"update", 1, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ "s", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"updateAuthName", 1, param_slot_3 };
    static const QUMethod slot_4 = {"disableSuggestAuthName", 0, 0 };
    static const QUMethod slot_5 = {"validate", 0, 0 };
    static const QUMethod slot_6 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "initProviders()", &slot_0, QMetaData::Public },
	{ "exec(t_user*)", &slot_1, QMetaData::Public },
	{ "update(const QString&)", &slot_2, QMetaData::Public },
	{ "updateAuthName(const QString&)", &slot_3, QMetaData::Public },
	{ "disableSuggestAuthName()", &slot_4, QMetaData::Public },
	{ "validate()", &slot_5, QMetaData::Public },
	{ "languageChange()", &slot_6, QMetaData::Protected }
    };
    static const QUMethod signal_0 = {"success", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "success()", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"WizardForm", parentObject,
	slot_tbl, 7,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_WizardForm.setMetaObject( metaObj );
    return metaObj;
}

void* WizardForm::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "WizardForm" ) )
	return this;
    return QDialog::qt_cast( clname );
}

// SIGNAL success
void WizardForm::success()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

bool WizardForm::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: initProviders(); break;
    case 1: static_QUType_int.set(_o,exec((t_user*)static_QUType_ptr.get(_o+1))); break;
    case 2: update((const QString&)static_QUType_QString.get(_o+1)); break;
    case 3: updateAuthName((const QString&)static_QUType_QString.get(_o+1)); break;
    case 4: disableSuggestAuthName(); break;
    case 5: validate(); break;
    case 6: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool WizardForm::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: success(); break;
    default:
	return QDialog::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool WizardForm::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool WizardForm::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
