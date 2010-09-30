/****************************************************************************
** SelectUserForm meta object code from reading C++ file 'selectuserform.h'
**
** Created: Wed Sep 29 18:55:36 2010
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../.ui/selectuserform.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *SelectUserForm::className() const
{
    return "SelectUserForm";
}

QMetaObject *SelectUserForm::metaObj = 0;
static QMetaObjectCleanUp cleanUp_SelectUserForm( "SelectUserForm", &SelectUserForm::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString SelectUserForm::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SelectUserForm", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString SelectUserForm::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SelectUserForm", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* SelectUserForm::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "purpose", &static_QUType_ptr, "t_select_purpose", QUParameter::In }
    };
    static const QUMethod slot_0 = {"show", 1, param_slot_0 };
    static const QUMethod slot_1 = {"validate", 0, 0 };
    static const QUMethod slot_2 = {"selectAll", 0, 0 };
    static const QUMethod slot_3 = {"clearAll", 0, 0 };
    static const QUParameter param_slot_4[] = {
	{ "item", &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_4 = {"toggle", 1, param_slot_4 };
    static const QUMethod slot_5 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "show(t_select_purpose)", &slot_0, QMetaData::Public },
	{ "validate()", &slot_1, QMetaData::Public },
	{ "selectAll()", &slot_2, QMetaData::Public },
	{ "clearAll()", &slot_3, QMetaData::Public },
	{ "toggle(QListViewItem*)", &slot_4, QMetaData::Public },
	{ "languageChange()", &slot_5, QMetaData::Protected }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_ptr, "list<t_user*>", QUParameter::In }
    };
    static const QUMethod signal_0 = {"selection", 1, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ 0, &static_QUType_ptr, "list<t_user*>", QUParameter::In }
    };
    static const QUMethod signal_1 = {"not_selected", 1, param_signal_1 };
    static const QMetaData signal_tbl[] = {
	{ "selection(list<t_user*>)", &signal_0, QMetaData::Public },
	{ "not_selected(list<t_user*>)", &signal_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"SelectUserForm", parentObject,
	slot_tbl, 6,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_SelectUserForm.setMetaObject( metaObj );
    return metaObj;
}

void* SelectUserForm::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "SelectUserForm" ) )
	return this;
    return QDialog::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL selection
void SelectUserForm::selection( list<t_user*> t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,&t0);
    activate_signal( clist, o );
}

// SIGNAL not_selected
void SelectUserForm::not_selected( list<t_user*> t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 1 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,&t0);
    activate_signal( clist, o );
}

bool SelectUserForm::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: show((t_select_purpose)(*((t_select_purpose*)static_QUType_ptr.get(_o+1)))); break;
    case 1: validate(); break;
    case 2: selectAll(); break;
    case 3: clearAll(); break;
    case 4: toggle((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 5: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool SelectUserForm::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: selection((list<t_user*>)(*((list<t_user*>*)static_QUType_ptr.get(_o+1)))); break;
    case 1: not_selected((list<t_user*>)(*((list<t_user*>*)static_QUType_ptr.get(_o+1)))); break;
    default:
	return QDialog::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool SelectUserForm::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool SelectUserForm::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
