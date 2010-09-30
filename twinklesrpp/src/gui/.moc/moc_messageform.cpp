/****************************************************************************
** MessageForm meta object code from reading C++ file 'messageform.h'
**
** Created: Wed Sep 29 18:55:41 2010
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../.ui/messageform.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *MessageForm::className() const
{
    return "MessageForm";
}

QMetaObject *MessageForm::metaObj = 0;
static QMetaObjectCleanUp cleanUp_MessageForm( "MessageForm", &MessageForm::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString MessageForm::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MessageForm", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString MessageForm::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MessageForm", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* MessageForm::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QMainWindow::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "e", &static_QUType_ptr, "QCloseEvent", QUParameter::In }
    };
    static const QUMethod slot_0 = {"closeEvent", 1, param_slot_0 };
    static const QUMethod slot_1 = {"show", 0, 0 };
    static const QUParameter param_slot_2[] = {
	{ "user_config", &static_QUType_ptr, "t_user", QUParameter::In }
    };
    static const QUMethod slot_2 = {"selectUserConfig", 1, param_slot_2 };
    static const QUMethod slot_3 = {"showAddressBook", 0, 0 };
    static const QUParameter param_slot_4[] = {
	{ "address", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"selectedAddress", 1, param_slot_4 };
    static const QUMethod slot_5 = {"sendMessage", 0, 0 };
    static const QUParameter param_slot_6[] = {
	{ "filename", &static_QUType_QString, 0, QUParameter::In },
	{ "subject", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"sendFile", 2, param_slot_6 };
    static const QUParameter param_slot_7[] = {
	{ "msg", &static_QUType_ptr, "im::t_msg", QUParameter::In },
	{ "name", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_7 = {"addMessage", 2, param_slot_7 };
    static const QUParameter param_slot_8[] = {
	{ "errorMsg", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_8 = {"displayError", 1, param_slot_8 };
    static const QUParameter param_slot_9[] = {
	{ "notification", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_9 = {"displayDeliveryNotification", 1, param_slot_9 };
    static const QUMethod slot_10 = {"setRemotePartyCaption", 0, 0 };
    static const QUParameter param_slot_11[] = {
	{ "attachment", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_11 = {"showAttachmentPopupMenu", 1, param_slot_11 };
    static const QUParameter param_slot_12[] = {
	{ "id", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_12 = {"attachmentPopupActivated", 1, param_slot_12 };
    static const QUMethod slot_13 = {"saveAttachment", 0, 0 };
    static const QUMethod slot_14 = {"chooseFileToSend", 0, 0 };
    static const QUParameter param_slot_15[] = {
	{ "name", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_15 = {"setComposingIndication", 1, param_slot_15 };
    static const QUMethod slot_16 = {"clearComposingIndication", 0, 0 };
    static const QUMethod slot_17 = {"setLocalComposingIndicationActive", 0, 0 };
    static const QUParameter param_slot_18[] = {
	{ "e", &static_QUType_ptr, "QKeyEvent", QUParameter::In }
    };
    static const QUMethod slot_18 = {"keyPressEvent", 1, param_slot_18 };
    static const QUParameter param_slot_19[] = {
	{ "address", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_19 = {"toAddressChanged", 1, param_slot_19 };
    static const QUMethod slot_20 = {"showMessageSize", 0, 0 };
    static const QUMethod slot_21 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "closeEvent(QCloseEvent*)", &slot_0, QMetaData::Public },
	{ "show()", &slot_1, QMetaData::Public },
	{ "selectUserConfig(t_user*)", &slot_2, QMetaData::Public },
	{ "showAddressBook()", &slot_3, QMetaData::Public },
	{ "selectedAddress(const QString&)", &slot_4, QMetaData::Public },
	{ "sendMessage()", &slot_5, QMetaData::Public },
	{ "sendFile(const QString&,const QString&)", &slot_6, QMetaData::Public },
	{ "addMessage(const im::t_msg&,const QString&)", &slot_7, QMetaData::Public },
	{ "displayError(const QString&)", &slot_8, QMetaData::Public },
	{ "displayDeliveryNotification(const QString&)", &slot_9, QMetaData::Public },
	{ "setRemotePartyCaption()", &slot_10, QMetaData::Public },
	{ "showAttachmentPopupMenu(const QString&)", &slot_11, QMetaData::Public },
	{ "attachmentPopupActivated(int)", &slot_12, QMetaData::Public },
	{ "saveAttachment()", &slot_13, QMetaData::Public },
	{ "chooseFileToSend()", &slot_14, QMetaData::Public },
	{ "setComposingIndication(const QString&)", &slot_15, QMetaData::Public },
	{ "clearComposingIndication()", &slot_16, QMetaData::Public },
	{ "setLocalComposingIndicationActive()", &slot_17, QMetaData::Public },
	{ "keyPressEvent(QKeyEvent*)", &slot_18, QMetaData::Public },
	{ "toAddressChanged(const QString&)", &slot_19, QMetaData::Public },
	{ "showMessageSize()", &slot_20, QMetaData::Public },
	{ "languageChange()", &slot_21, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"MessageForm", parentObject,
	slot_tbl, 22,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_MessageForm.setMetaObject( metaObj );
    return metaObj;
}

void* MessageForm::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "MessageForm" ) )
	return this;
    return QMainWindow::qt_cast( clname );
}

bool MessageForm::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: closeEvent((QCloseEvent*)static_QUType_ptr.get(_o+1)); break;
    case 1: show(); break;
    case 2: selectUserConfig((t_user*)static_QUType_ptr.get(_o+1)); break;
    case 3: showAddressBook(); break;
    case 4: selectedAddress((const QString&)static_QUType_QString.get(_o+1)); break;
    case 5: sendMessage(); break;
    case 6: sendFile((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2)); break;
    case 7: addMessage((const im::t_msg&)*((const im::t_msg*)static_QUType_ptr.get(_o+1)),(const QString&)static_QUType_QString.get(_o+2)); break;
    case 8: displayError((const QString&)static_QUType_QString.get(_o+1)); break;
    case 9: displayDeliveryNotification((const QString&)static_QUType_QString.get(_o+1)); break;
    case 10: setRemotePartyCaption(); break;
    case 11: showAttachmentPopupMenu((const QString&)static_QUType_QString.get(_o+1)); break;
    case 12: attachmentPopupActivated((int)static_QUType_int.get(_o+1)); break;
    case 13: saveAttachment(); break;
    case 14: chooseFileToSend(); break;
    case 15: setComposingIndication((const QString&)static_QUType_QString.get(_o+1)); break;
    case 16: clearComposingIndication(); break;
    case 17: setLocalComposingIndicationActive(); break;
    case 18: keyPressEvent((QKeyEvent*)static_QUType_ptr.get(_o+1)); break;
    case 19: toAddressChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 20: showMessageSize(); break;
    case 21: languageChange(); break;
    default:
	return QMainWindow::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool MessageForm::qt_emit( int _id, QUObject* _o )
{
    return QMainWindow::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool MessageForm::qt_property( int id, int f, QVariant* v)
{
    return QMainWindow::qt_property( id, f, v);
}

bool MessageForm::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
