/****************************************************************************
** DiamondcardProfileForm meta object code from reading C++ file 'diamondcardprofileform.h'
**
** Created: Sun Oct 3 21:31:56 2010
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../.ui/diamondcardprofileform.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *DiamondcardProfileForm::className() const
{
    return "DiamondcardProfileForm";
}

QMetaObject *DiamondcardProfileForm::metaObj = 0;
static QMetaObjectCleanUp cleanUp_DiamondcardProfileForm( "DiamondcardProfileForm", &DiamondcardProfileForm::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString DiamondcardProfileForm::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "DiamondcardProfileForm", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString DiamondcardProfileForm::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "DiamondcardProfileForm", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* DiamondcardProfileForm::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"destroyOldUserConfig", 0, 0 };
    static const QUParameter param_slot_1[] = {
	{ "user", &static_QUType_ptr, "t_user", QUParameter::In }
    };
    static const QUMethod slot_1 = {"show", 1, param_slot_1 };
    static const QUMethod slot_2 = {"validate", 0, 0 };
    static const QUParameter param_slot_3[] = {
	{ "e", &static_QUType_ptr, "QMouseEvent", QUParameter::In }
    };
    static const QUMethod slot_3 = {"mouseReleaseEvent", 1, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ "e", &static_QUType_ptr, "QMouseEvent", QUParameter::In }
    };
    static const QUMethod slot_4 = {"processLeftMouseButtonRelease", 1, param_slot_4 };
    static const QUMethod slot_5 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "destroyOldUserConfig()", &slot_0, QMetaData::Public },
	{ "show(t_user*)", &slot_1, QMetaData::Public },
	{ "validate()", &slot_2, QMetaData::Public },
	{ "mouseReleaseEvent(QMouseEvent*)", &slot_3, QMetaData::Public },
	{ "processLeftMouseButtonRelease(QMouseEvent*)", &slot_4, QMetaData::Public },
	{ "languageChange()", &slot_5, QMetaData::Protected }
    };
    static const QUMethod signal_0 = {"success", 0, 0 };
    static const QUParameter param_signal_1[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_1 = {"newDiamondcardProfile", 1, param_signal_1 };
    static const QMetaData signal_tbl[] = {
	{ "success()", &signal_0, QMetaData::Public },
	{ "newDiamondcardProfile(const QString&)", &signal_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"DiamondcardProfileForm", parentObject,
	slot_tbl, 6,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_DiamondcardProfileForm.setMetaObject( metaObj );
    return metaObj;
}

void* DiamondcardProfileForm::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "DiamondcardProfileForm" ) )
	return this;
    return QDialog::qt_cast( clname );
}

// SIGNAL success
void DiamondcardProfileForm::success()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

// SIGNAL newDiamondcardProfile
void DiamondcardProfileForm::newDiamondcardProfile( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 1, t0 );
}

bool DiamondcardProfileForm::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: destroyOldUserConfig(); break;
    case 1: show((t_user*)static_QUType_ptr.get(_o+1)); break;
    case 2: validate(); break;
    case 3: mouseReleaseEvent((QMouseEvent*)static_QUType_ptr.get(_o+1)); break;
    case 4: processLeftMouseButtonRelease((QMouseEvent*)static_QUType_ptr.get(_o+1)); break;
    case 5: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool DiamondcardProfileForm::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: success(); break;
    case 1: newDiamondcardProfile((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return QDialog::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool DiamondcardProfileForm::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool DiamondcardProfileForm::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
