/****************************************************************************
** SendFileForm meta object code from reading C++ file 'sendfileform.h'
**
** Created: Sun Oct 3 21:31:56 2010
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../.ui/sendfileform.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *SendFileForm::className() const
{
    return "SendFileForm";
}

QMetaObject *SendFileForm::metaObj = 0;
static QMetaObjectCleanUp cleanUp_SendFileForm( "SendFileForm", &SendFileForm::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString SendFileForm::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SendFileForm", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString SendFileForm::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SendFileForm", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* SendFileForm::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"signalSelectedInfo", 0, 0 };
    static const QUMethod slot_1 = {"chooseFile", 0, 0 };
    static const QUMethod slot_2 = {"setFilename", 0, 0 };
    static const QUMethod slot_3 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "signalSelectedInfo()", &slot_0, QMetaData::Public },
	{ "chooseFile()", &slot_1, QMetaData::Public },
	{ "setFilename()", &slot_2, QMetaData::Public },
	{ "languageChange()", &slot_3, QMetaData::Protected }
    };
    static const QUParameter param_signal_0[] = {
	{ "filename", &static_QUType_QString, 0, QUParameter::In },
	{ "subject", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"selected", 2, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "selected(const QString&,const QString&)", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"SendFileForm", parentObject,
	slot_tbl, 4,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_SendFileForm.setMetaObject( metaObj );
    return metaObj;
}

void* SendFileForm::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "SendFileForm" ) )
	return this;
    return QDialog::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL selected
void SendFileForm::selected( const QString& t0, const QString& t1 )
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

bool SendFileForm::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: signalSelectedInfo(); break;
    case 1: chooseFile(); break;
    case 2: setFilename(); break;
    case 3: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool SendFileForm::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: selected((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2)); break;
    default:
	return QDialog::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool SendFileForm::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool SendFileForm::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
