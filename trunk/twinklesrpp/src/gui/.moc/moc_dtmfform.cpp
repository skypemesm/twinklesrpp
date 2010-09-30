/****************************************************************************
** DtmfForm meta object code from reading C++ file 'dtmfform.h'
**
** Created: Wed Sep 29 18:55:03 2010
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../.ui/dtmfform.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *DtmfForm::className() const
{
    return "DtmfForm";
}

QMetaObject *DtmfForm::metaObj = 0;
static QMetaObjectCleanUp cleanUp_DtmfForm( "DtmfForm", &DtmfForm::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString DtmfForm::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "DtmfForm", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString DtmfForm::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "DtmfForm", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* DtmfForm::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"dtmf1", 0, 0 };
    static const QUMethod slot_1 = {"dtmf2", 0, 0 };
    static const QUMethod slot_2 = {"dtmf3", 0, 0 };
    static const QUMethod slot_3 = {"dtmf4", 0, 0 };
    static const QUMethod slot_4 = {"dtmf5", 0, 0 };
    static const QUMethod slot_5 = {"dtmf6", 0, 0 };
    static const QUMethod slot_6 = {"dtmf7", 0, 0 };
    static const QUMethod slot_7 = {"dtmf8", 0, 0 };
    static const QUMethod slot_8 = {"dtmf9", 0, 0 };
    static const QUMethod slot_9 = {"dtmf0", 0, 0 };
    static const QUMethod slot_10 = {"dtmfStar", 0, 0 };
    static const QUMethod slot_11 = {"dtmfPound", 0, 0 };
    static const QUMethod slot_12 = {"dtmfA", 0, 0 };
    static const QUMethod slot_13 = {"dtmfB", 0, 0 };
    static const QUMethod slot_14 = {"dtmfC", 0, 0 };
    static const QUMethod slot_15 = {"dtmfD", 0, 0 };
    static const QUParameter param_slot_16[] = {
	{ "e", &static_QUType_ptr, "QKeyEvent", QUParameter::In }
    };
    static const QUMethod slot_16 = {"keyPressEvent", 1, param_slot_16 };
    static const QUMethod slot_17 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "dtmf1()", &slot_0, QMetaData::Public },
	{ "dtmf2()", &slot_1, QMetaData::Public },
	{ "dtmf3()", &slot_2, QMetaData::Public },
	{ "dtmf4()", &slot_3, QMetaData::Public },
	{ "dtmf5()", &slot_4, QMetaData::Public },
	{ "dtmf6()", &slot_5, QMetaData::Public },
	{ "dtmf7()", &slot_6, QMetaData::Public },
	{ "dtmf8()", &slot_7, QMetaData::Public },
	{ "dtmf9()", &slot_8, QMetaData::Public },
	{ "dtmf0()", &slot_9, QMetaData::Public },
	{ "dtmfStar()", &slot_10, QMetaData::Public },
	{ "dtmfPound()", &slot_11, QMetaData::Public },
	{ "dtmfA()", &slot_12, QMetaData::Public },
	{ "dtmfB()", &slot_13, QMetaData::Public },
	{ "dtmfC()", &slot_14, QMetaData::Public },
	{ "dtmfD()", &slot_15, QMetaData::Public },
	{ "keyPressEvent(QKeyEvent*)", &slot_16, QMetaData::Public },
	{ "languageChange()", &slot_17, QMetaData::Protected }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"digits", 1, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "digits(const QString&)", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"DtmfForm", parentObject,
	slot_tbl, 18,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_DtmfForm.setMetaObject( metaObj );
    return metaObj;
}

void* DtmfForm::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "DtmfForm" ) )
	return this;
    return QDialog::qt_cast( clname );
}

// SIGNAL digits
void DtmfForm::digits( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

bool DtmfForm::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: dtmf1(); break;
    case 1: dtmf2(); break;
    case 2: dtmf3(); break;
    case 3: dtmf4(); break;
    case 4: dtmf5(); break;
    case 5: dtmf6(); break;
    case 6: dtmf7(); break;
    case 7: dtmf8(); break;
    case 8: dtmf9(); break;
    case 9: dtmf0(); break;
    case 10: dtmfStar(); break;
    case 11: dtmfPound(); break;
    case 12: dtmfA(); break;
    case 13: dtmfB(); break;
    case 14: dtmfC(); break;
    case 15: dtmfD(); break;
    case 16: keyPressEvent((QKeyEvent*)static_QUType_ptr.get(_o+1)); break;
    case 17: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool DtmfForm::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: digits((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return QDialog::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool DtmfForm::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool DtmfForm::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
