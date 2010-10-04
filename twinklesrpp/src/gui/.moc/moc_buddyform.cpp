/****************************************************************************
** BuddyForm meta object code from reading C++ file 'buddyform.h'
**
** Created: Sun Oct 3 21:31:54 2010
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../.ui/buddyform.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *BuddyForm::className() const
{
    return "BuddyForm";
}

QMetaObject *BuddyForm::metaObj = 0;
static QMetaObjectCleanUp cleanUp_BuddyForm( "BuddyForm", &BuddyForm::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString BuddyForm::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "BuddyForm", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString BuddyForm::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "BuddyForm", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* BuddyForm::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "_buddy_list", &static_QUType_ptr, "t_buddy_list", QUParameter::InOut },
	{ "_profileItem", &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_0 = {"showNew", 2, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "buddy", &static_QUType_ptr, "t_buddy", QUParameter::InOut }
    };
    static const QUMethod slot_1 = {"showEdit", 1, param_slot_1 };
    static const QUMethod slot_2 = {"validate", 0, 0 };
    static const QUMethod slot_3 = {"showAddressBook", 0, 0 };
    static const QUParameter param_slot_4[] = {
	{ "name", &static_QUType_QString, 0, QUParameter::In },
	{ "phone", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"selectedAddress", 2, param_slot_4 };
    static const QUMethod slot_5 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "showNew(t_buddy_list&,QListViewItem*)", &slot_0, QMetaData::Public },
	{ "showEdit(t_buddy&)", &slot_1, QMetaData::Public },
	{ "validate()", &slot_2, QMetaData::Public },
	{ "showAddressBook()", &slot_3, QMetaData::Public },
	{ "selectedAddress(const QString&,const QString&)", &slot_4, QMetaData::Public },
	{ "languageChange()", &slot_5, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"BuddyForm", parentObject,
	slot_tbl, 6,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_BuddyForm.setMetaObject( metaObj );
    return metaObj;
}

void* BuddyForm::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "BuddyForm" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool BuddyForm::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: showNew((t_buddy_list&)*((t_buddy_list*)static_QUType_ptr.get(_o+1)),(QListViewItem*)static_QUType_ptr.get(_o+2)); break;
    case 1: showEdit((t_buddy&)*((t_buddy*)static_QUType_ptr.get(_o+1))); break;
    case 2: validate(); break;
    case 3: showAddressBook(); break;
    case 4: selectedAddress((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2)); break;
    case 5: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool BuddyForm::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool BuddyForm::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool BuddyForm::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
