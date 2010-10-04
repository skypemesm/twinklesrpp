/****************************************************************************
** TermCapForm meta object code from reading C++ file 'termcapform.h'
**
** Created: Sun Oct 3 21:31:26 2010
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../.ui/termcapform.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *TermCapForm::className() const
{
    return "TermCapForm";
}

QMetaObject *TermCapForm::metaObj = 0;
static QMetaObjectCleanUp cleanUp_TermCapForm( "TermCapForm", &TermCapForm::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString TermCapForm::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "TermCapForm", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString TermCapForm::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "TermCapForm", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* TermCapForm::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "user_config", &static_QUType_ptr, "t_user", QUParameter::In },
	{ "dest", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"show", 2, param_slot_0 };
    static const QUMethod slot_1 = {"validate", 0, 0 };
    static const QUMethod slot_2 = {"showAddressBook", 0, 0 };
    static const QUParameter param_slot_3[] = {
	{ "address", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"selectedAddress", 1, param_slot_3 };
    static const QUMethod slot_4 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "show(t_user*,const QString&)", &slot_0, QMetaData::Public },
	{ "validate()", &slot_1, QMetaData::Public },
	{ "showAddressBook()", &slot_2, QMetaData::Public },
	{ "selectedAddress(const QString&)", &slot_3, QMetaData::Public },
	{ "languageChange()", &slot_4, QMetaData::Protected }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_ptr, "t_user", QUParameter::In },
	{ 0, &static_QUType_ptr, "t_url", QUParameter::In }
    };
    static const QUMethod signal_0 = {"destination", 2, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "destination(t_user*,const t_url&)", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"TermCapForm", parentObject,
	slot_tbl, 5,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_TermCapForm.setMetaObject( metaObj );
    return metaObj;
}

void* TermCapForm::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "TermCapForm" ) )
	return this;
    return QDialog::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL destination
void TermCapForm::destination( t_user* t0, const t_url& t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_ptr.set(o+1,t0);
    static_QUType_ptr.set(o+2,&t1);
    activate_signal( clist, o );
}

bool TermCapForm::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: show((t_user*)static_QUType_ptr.get(_o+1),(const QString&)static_QUType_QString.get(_o+2)); break;
    case 1: validate(); break;
    case 2: showAddressBook(); break;
    case 3: selectedAddress((const QString&)static_QUType_QString.get(_o+1)); break;
    case 4: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool TermCapForm::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: destination((t_user*)static_QUType_ptr.get(_o+1),(const t_url&)*((const t_url*)static_QUType_ptr.get(_o+2))); break;
    default:
	return QDialog::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool TermCapForm::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool TermCapForm::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
