/****************************************************************************
** SelectProfileForm meta object code from reading C++ file 'selectprofileform.h'
**
** Created: Sun Oct 3 21:31:35 2010
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../.ui/selectprofileform.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *SelectProfileForm::className() const
{
    return "SelectProfileForm";
}

QMetaObject *SelectProfileForm::metaObj = 0;
static QMetaObjectCleanUp cleanUp_SelectProfileForm( "SelectProfileForm", &SelectProfileForm::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString SelectProfileForm::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SelectProfileForm", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString SelectProfileForm::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SelectProfileForm", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* SelectProfileForm::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "_mainWindow", &static_QUType_ptr, "QMainWindow", QUParameter::In }
    };
    static const QUMethod slot_0 = {"showForm", 1, param_slot_0 };
    static const QUMethod slot_1 = {"runProfile", 0, 0 };
    static const QUMethod slot_2 = {"editProfile", 0, 0 };
    static const QUMethod slot_3 = {"newProfile", 0, 0 };
    static const QUParameter param_slot_4[] = {
	{ "exec_mode", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"newProfile", 1, param_slot_4 };
    static const QUMethod slot_5 = {"newProfileCreated", 0, 0 };
    static const QUMethod slot_6 = {"deleteProfile", 0, 0 };
    static const QUMethod slot_7 = {"renameProfile", 0, 0 };
    static const QUMethod slot_8 = {"setAsDefault", 0, 0 };
    static const QUMethod slot_9 = {"wizardProfile", 0, 0 };
    static const QUParameter param_slot_10[] = {
	{ "exec_mode", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_10 = {"wizardProfile", 1, param_slot_10 };
    static const QUMethod slot_11 = {"diamondcardProfile", 0, 0 };
    static const QUParameter param_slot_12[] = {
	{ "exec_mode", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_12 = {"diamondcardProfile", 1, param_slot_12 };
    static const QUMethod slot_13 = {"sysSettings", 0, 0 };
    static const QUParameter param_slot_14[] = {
	{ "profiles", &static_QUType_varptr, "\x04", QUParameter::In }
    };
    static const QUMethod slot_14 = {"fillProfileListView", 1, param_slot_14 };
    static const QUParameter param_slot_15[] = {
	{ "item", &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_15 = {"toggleItem", 1, param_slot_15 };
    static const QUMethod slot_16 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "showForm(QMainWindow*)", &slot_0, QMetaData::Public },
	{ "runProfile()", &slot_1, QMetaData::Public },
	{ "editProfile()", &slot_2, QMetaData::Public },
	{ "newProfile()", &slot_3, QMetaData::Public },
	{ "newProfile(bool)", &slot_4, QMetaData::Public },
	{ "newProfileCreated()", &slot_5, QMetaData::Public },
	{ "deleteProfile()", &slot_6, QMetaData::Public },
	{ "renameProfile()", &slot_7, QMetaData::Public },
	{ "setAsDefault()", &slot_8, QMetaData::Public },
	{ "wizardProfile()", &slot_9, QMetaData::Public },
	{ "wizardProfile(bool)", &slot_10, QMetaData::Public },
	{ "diamondcardProfile()", &slot_11, QMetaData::Public },
	{ "diamondcardProfile(bool)", &slot_12, QMetaData::Public },
	{ "sysSettings()", &slot_13, QMetaData::Public },
	{ "fillProfileListView(const QStringList&)", &slot_14, QMetaData::Public },
	{ "toggleItem(QListViewItem*)", &slot_15, QMetaData::Public },
	{ "languageChange()", &slot_16, QMetaData::Protected }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_ptr, "list<string>", QUParameter::In }
    };
    static const QUMethod signal_0 = {"selection", 1, param_signal_0 };
    static const QUMethod signal_1 = {"profileRenamed", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "selection(const list<string>&)", &signal_0, QMetaData::Public },
	{ "profileRenamed()", &signal_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"SelectProfileForm", parentObject,
	slot_tbl, 17,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_SelectProfileForm.setMetaObject( metaObj );
    return metaObj;
}

void* SelectProfileForm::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "SelectProfileForm" ) )
	return this;
    return QDialog::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL selection
void SelectProfileForm::selection( const list<string>& t0 )
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

// SIGNAL profileRenamed
void SelectProfileForm::profileRenamed()
{
    activate_signal( staticMetaObject()->signalOffset() + 1 );
}

bool SelectProfileForm::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: showForm((QMainWindow*)static_QUType_ptr.get(_o+1)); break;
    case 1: runProfile(); break;
    case 2: editProfile(); break;
    case 3: newProfile(); break;
    case 4: newProfile((bool)static_QUType_bool.get(_o+1)); break;
    case 5: newProfileCreated(); break;
    case 6: deleteProfile(); break;
    case 7: renameProfile(); break;
    case 8: setAsDefault(); break;
    case 9: wizardProfile(); break;
    case 10: wizardProfile((bool)static_QUType_bool.get(_o+1)); break;
    case 11: diamondcardProfile(); break;
    case 12: diamondcardProfile((bool)static_QUType_bool.get(_o+1)); break;
    case 13: sysSettings(); break;
    case 14: fillProfileListView((const QStringList&)*((const QStringList*)static_QUType_ptr.get(_o+1))); break;
    case 15: toggleItem((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 16: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool SelectProfileForm::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: selection((const list<string>&)*((const list<string>*)static_QUType_ptr.get(_o+1))); break;
    case 1: profileRenamed(); break;
    default:
	return QDialog::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool SelectProfileForm::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool SelectProfileForm::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
