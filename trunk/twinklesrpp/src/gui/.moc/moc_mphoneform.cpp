/****************************************************************************
** MphoneForm meta object code from reading C++ file 'mphoneform.h'
**
** Created: Sun Oct 3 21:31:19 2010
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../.ui/mphoneform.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *MphoneForm::className() const
{
    return "MphoneForm";
}

QMetaObject *MphoneForm::metaObj = 0;
static QMetaObjectCleanUp cleanUp_MphoneForm( "MphoneForm", &MphoneForm::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString MphoneForm::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MphoneForm", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString MphoneForm::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MphoneForm", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* MphoneForm::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QMainWindow::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "e", &static_QUType_ptr, "QCloseEvent", QUParameter::In }
    };
    static const QUMethod slot_0 = {"closeEvent", 1, param_slot_0 };
    static const QUMethod slot_1 = {"fileExit", 0, 0 };
    static const QUParameter param_slot_2[] = {
	{ "s", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"display", 1, param_slot_2 };
    static const QUMethod slot_3 = {"displayHeader", 0, 0 };
    static const QUParameter param_slot_4[] = {
	{ "line", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"showLineTimer", 1, param_slot_4 };
    static const QUMethod slot_5 = {"showLineTimer1", 0, 0 };
    static const QUMethod slot_6 = {"showLineTimer2", 0, 0 };
    static const QUParameter param_slot_7[] = {
	{ "line", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_7 = {"updateLineTimer", 1, param_slot_7 };
    static const QUParameter param_slot_8[] = {
	{ "line", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_8 = {"updateLineEncryptionState", 1, param_slot_8 };
    static const QUParameter param_slot_9[] = {
	{ "line", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_9 = {"updateLineStatus", 1, param_slot_9 };
    static const QUMethod slot_10 = {"updateState", 0, 0 };
    static const QUMethod slot_11 = {"updateRegStatus", 0, 0 };
    static const QUMethod slot_12 = {"flashMWI", 0, 0 };
    static const QUMethod slot_13 = {"updateMwi", 0, 0 };
    static const QUMethod slot_14 = {"updateServicesStatus", 0, 0 };
    static const QUParameter param_slot_15[] = {
	{ "num_missed_calls", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_15 = {"updateMissedCallStatus", 1, param_slot_15 };
    static const QUMethod slot_16 = {"updateSysTrayStatus", 0, 0 };
    static const QUMethod slot_17 = {"updateMenuStatus", 0, 0 };
    static const QUMethod slot_18 = {"updateDiamondcardMenu", 0, 0 };
    static const QUParameter param_slot_19[] = {
	{ "id", &static_QUType_int, 0, QUParameter::InOut }
    };
    static const QUMethod slot_19 = {"removeDiamondcardAction", 1, param_slot_19 };
    static const QUParameter param_slot_20[] = {
	{ "menu", &static_QUType_ptr, "QPopupMenu*", QUParameter::InOut }
    };
    static const QUMethod slot_20 = {"removeDiamondcardMenu", 1, param_slot_20 };
    static const QUMethod slot_21 = {"phoneRegister", 0, 0 };
    static const QUParameter param_slot_22[] = {
	{ "user_list", &static_QUType_ptr, "list<t_user*>", QUParameter::In }
    };
    static const QUMethod slot_22 = {"do_phoneRegister", 1, param_slot_22 };
    static const QUMethod slot_23 = {"phoneDeregister", 0, 0 };
    static const QUParameter param_slot_24[] = {
	{ "user_list", &static_QUType_ptr, "list<t_user*>", QUParameter::In }
    };
    static const QUMethod slot_24 = {"do_phoneDeregister", 1, param_slot_24 };
    static const QUMethod slot_25 = {"phoneDeregisterAll", 0, 0 };
    static const QUParameter param_slot_26[] = {
	{ "user_list", &static_QUType_ptr, "list<t_user*>", QUParameter::In }
    };
    static const QUMethod slot_26 = {"do_phoneDeregisterAll", 1, param_slot_26 };
    static const QUMethod slot_27 = {"phoneShowRegistrations", 0, 0 };
    static const QUParameter param_slot_28[] = {
	{ "user_config", &static_QUType_ptr, "t_user", QUParameter::In },
	{ "dest", &static_QUType_QString, 0, QUParameter::In },
	{ "subject", &static_QUType_QString, 0, QUParameter::In },
	{ "anonymous", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_28 = {"phoneInvite", 4, param_slot_28 };
    static const QUParameter param_slot_29[] = {
	{ "dest", &static_QUType_QString, 0, QUParameter::In },
	{ "subject", &static_QUType_QString, 0, QUParameter::In },
	{ "anonymous", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_29 = {"phoneInvite", 3, param_slot_29 };
    static const QUMethod slot_30 = {"phoneInvite", 0, 0 };
    static const QUParameter param_slot_31[] = {
	{ "user_config", &static_QUType_ptr, "t_user", QUParameter::In },
	{ "display", &static_QUType_QString, 0, QUParameter::In },
	{ "destination", &static_QUType_ptr, "t_url", QUParameter::In },
	{ "subject", &static_QUType_QString, 0, QUParameter::In },
	{ "anonymous", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_31 = {"do_phoneInvite", 5, param_slot_31 };
    static const QUMethod slot_32 = {"phoneRedial", 0, 0 };
    static const QUMethod slot_33 = {"phoneAnswer", 0, 0 };
    static const QUMethod slot_34 = {"phoneAnswerFromSystrayPopup", 0, 0 };
    static const QUMethod slot_35 = {"phoneBye", 0, 0 };
    static const QUMethod slot_36 = {"phoneReject", 0, 0 };
    static const QUMethod slot_37 = {"phoneRejectFromSystrayPopup", 0, 0 };
    static const QUParameter param_slot_38[] = {
	{ "contacts", &static_QUType_ptr, "list<string>", QUParameter::In }
    };
    static const QUMethod slot_38 = {"phoneRedirect", 1, param_slot_38 };
    static const QUMethod slot_39 = {"phoneRedirect", 0, 0 };
    static const QUParameter param_slot_40[] = {
	{ "destinations", &static_QUType_ptr, "list<t_display_url>", QUParameter::In }
    };
    static const QUMethod slot_40 = {"do_phoneRedirect", 1, param_slot_40 };
    static const QUParameter param_slot_41[] = {
	{ "dest", &static_QUType_ptr, "string", QUParameter::In },
	{ "transfer_type", &static_QUType_ptr, "t_transfer_type", QUParameter::In }
    };
    static const QUMethod slot_41 = {"phoneTransfer", 2, param_slot_41 };
    static const QUMethod slot_42 = {"phoneTransfer", 0, 0 };
    static const QUParameter param_slot_43[] = {
	{ "destination", &static_QUType_ptr, "t_display_url", QUParameter::In },
	{ "transfer_type", &static_QUType_ptr, "t_transfer_type", QUParameter::In }
    };
    static const QUMethod slot_43 = {"do_phoneTransfer", 2, param_slot_43 };
    static const QUMethod slot_44 = {"do_phoneTransferLine", 0, 0 };
    static const QUParameter param_slot_45[] = {
	{ "on", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_45 = {"phoneHold", 1, param_slot_45 };
    static const QUMethod slot_46 = {"phoneConference", 0, 0 };
    static const QUParameter param_slot_47[] = {
	{ "on", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_47 = {"phoneMute", 1, param_slot_47 };
    static const QUParameter param_slot_48[] = {
	{ "dest", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_48 = {"phoneTermCap", 1, param_slot_48 };
    static const QUMethod slot_49 = {"phoneTermCap", 0, 0 };
    static const QUParameter param_slot_50[] = {
	{ "user_config", &static_QUType_ptr, "t_user", QUParameter::In },
	{ "destination", &static_QUType_ptr, "t_url", QUParameter::In }
    };
    static const QUMethod slot_50 = {"do_phoneTermCap", 2, param_slot_50 };
    static const QUMethod slot_51 = {"phoneDTMF", 0, 0 };
    static const QUParameter param_slot_52[] = {
	{ "digits", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_52 = {"sendDTMF", 1, param_slot_52 };
    static const QUMethod slot_53 = {"startMessageSession", 0, 0 };
    static const QUParameter param_slot_54[] = {
	{ "buddy", &static_QUType_ptr, "t_buddy", QUParameter::In }
    };
    static const QUMethod slot_54 = {"startMessageSession", 1, param_slot_54 };
    static const QUParameter param_slot_55[] = {
	{ "line", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_55 = {"phoneConfirmZrtpSas", 1, param_slot_55 };
    static const QUMethod slot_56 = {"phoneConfirmZrtpSas", 0, 0 };
    static const QUParameter param_slot_57[] = {
	{ "line", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_57 = {"phoneResetZrtpSasConfirmation", 1, param_slot_57 };
    static const QUMethod slot_58 = {"phoneResetZrtpSasConfirmation", 0, 0 };
    static const QUParameter param_slot_59[] = {
	{ "on", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_59 = {"phoneEnableZrtp", 1, param_slot_59 };
    static const QUParameter param_slot_60[] = {
	{ "line", &static_QUType_ptr, "unsigned short", QUParameter::In }
    };
    static const QUMethod slot_60 = {"phoneZrtpGoClearOk", 1, param_slot_60 };
    static const QUParameter param_slot_61[] = {
	{ "on", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_61 = {"line1rbChangedState", 1, param_slot_61 };
    static const QUParameter param_slot_62[] = {
	{ "on", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_62 = {"line2rbChangedState", 1, param_slot_62 };
    static const QUParameter param_slot_63[] = {
	{ "on", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_63 = {"actionLine1Toggled", 1, param_slot_63 };
    static const QUParameter param_slot_64[] = {
	{ "on", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_64 = {"actionLine2Toggled", 1, param_slot_64 };
    static const QUParameter param_slot_65[] = {
	{ "on", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_65 = {"srvDnd", 1, param_slot_65 };
    static const QUMethod slot_66 = {"srvDnd", 0, 0 };
    static const QUParameter param_slot_67[] = {
	{ "user_list", &static_QUType_ptr, "list<t_user*>", QUParameter::In }
    };
    static const QUMethod slot_67 = {"do_srvDnd_enable", 1, param_slot_67 };
    static const QUParameter param_slot_68[] = {
	{ "user_list", &static_QUType_ptr, "list<t_user*>", QUParameter::In }
    };
    static const QUMethod slot_68 = {"do_srvDnd_disable", 1, param_slot_68 };
    static const QUParameter param_slot_69[] = {
	{ "on", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_69 = {"srvAutoAnswer", 1, param_slot_69 };
    static const QUMethod slot_70 = {"srvAutoAnswer", 0, 0 };
    static const QUParameter param_slot_71[] = {
	{ "user_list", &static_QUType_ptr, "list<t_user*>", QUParameter::In }
    };
    static const QUMethod slot_71 = {"do_srvAutoAnswer_enable", 1, param_slot_71 };
    static const QUParameter param_slot_72[] = {
	{ "user_list", &static_QUType_ptr, "list<t_user*>", QUParameter::In }
    };
    static const QUMethod slot_72 = {"do_srvAutoAnswer_disable", 1, param_slot_72 };
    static const QUMethod slot_73 = {"srvRedirect", 0, 0 };
    static const QUParameter param_slot_74[] = {
	{ "user_config", &static_QUType_ptr, "t_user", QUParameter::In },
	{ "always", &static_QUType_ptr, "list<t_display_url>", QUParameter::In },
	{ "busy", &static_QUType_ptr, "list<t_display_url>", QUParameter::In },
	{ "noanswer", &static_QUType_ptr, "list<t_display_url>", QUParameter::In }
    };
    static const QUMethod slot_74 = {"do_srvRedirect", 4, param_slot_74 };
    static const QUMethod slot_75 = {"about", 0, 0 };
    static const QUMethod slot_76 = {"aboutQt", 0, 0 };
    static const QUMethod slot_77 = {"manual", 0, 0 };
    static const QUMethod slot_78 = {"editUserProfile", 0, 0 };
    static const QUMethod slot_79 = {"editSysSettings", 0, 0 };
    static const QUMethod slot_80 = {"selectProfile", 0, 0 };
    static const QUParameter param_slot_81[] = {
	{ "profiles", &static_QUType_ptr, "list<string>", QUParameter::In }
    };
    static const QUMethod slot_81 = {"newUsers", 1, param_slot_81 };
    static const QUMethod slot_82 = {"updateUserComboBox", 0, 0 };
    static const QUMethod slot_83 = {"updateSipUdpPort", 0, 0 };
    static const QUMethod slot_84 = {"updateRtpPorts", 0, 0 };
    static const QUParameter param_slot_85[] = {
	{ "user_config", &static_QUType_ptr, "t_user", QUParameter::In }
    };
    static const QUMethod slot_85 = {"updateStunSettings", 1, param_slot_85 };
    static const QUParameter param_slot_86[] = {
	{ "user_config", &static_QUType_ptr, "t_user", QUParameter::In },
	{ "realm", &static_QUType_ptr, "string", QUParameter::In }
    };
    static const QUMethod slot_86 = {"updateAuthCache", 2, param_slot_86 };
    static const QUParameter param_slot_87[] = {
	{ "user_config", &static_QUType_ptr, "t_user", QUParameter::In }
    };
    static const QUMethod slot_87 = {"unsubscribeMWI", 1, param_slot_87 };
    static const QUParameter param_slot_88[] = {
	{ "user_config", &static_QUType_ptr, "t_user", QUParameter::In }
    };
    static const QUMethod slot_88 = {"subscribeMWI", 1, param_slot_88 };
    static const QUMethod slot_89 = {"viewLog", 0, 0 };
    static const QUParameter param_slot_90[] = {
	{ "log_zapped", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_90 = {"updateLog", 1, param_slot_90 };
    static const QUMethod slot_91 = {"viewHistory", 0, 0 };
    static const QUMethod slot_92 = {"updateCallHistory", 0, 0 };
    static const QUMethod slot_93 = {"quickCall", 0, 0 };
    static const QUParameter param_slot_94[] = {
	{ "destination", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_94 = {"addToCallComboBox", 1, param_slot_94 };
    static const QUMethod slot_95 = {"showAddressBook", 0, 0 };
    static const QUParameter param_slot_96[] = {
	{ "address", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_96 = {"selectedAddress", 1, param_slot_96 };
    static const QUParameter param_slot_97[] = {
	{ "enable", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_97 = {"enableCallOptions", 1, param_slot_97 };
    static const QUParameter param_slot_98[] = {
	{ "e", &static_QUType_ptr, "QKeyEvent", QUParameter::In }
    };
    static const QUMethod slot_98 = {"keyPressEvent", 1, param_slot_98 };
    static const QUParameter param_slot_99[] = {
	{ "e", &static_QUType_ptr, "QMouseEvent", QUParameter::In }
    };
    static const QUMethod slot_99 = {"mouseReleaseEvent", 1, param_slot_99 };
    static const QUParameter param_slot_100[] = {
	{ "e", &static_QUType_ptr, "QMouseEvent", QUParameter::In }
    };
    static const QUMethod slot_100 = {"processLeftMouseButtonRelease", 1, param_slot_100 };
    static const QUParameter param_slot_101[] = {
	{ "e", &static_QUType_ptr, "QMouseEvent", QUParameter::In }
    };
    static const QUMethod slot_101 = {"processRightMouseButtonRelease", 1, param_slot_101 };
    static const QUParameter param_slot_102[] = {
	{ "line", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_102 = {"processCryptLabelClick", 1, param_slot_102 };
    static const QUParameter param_slot_103[] = {
	{ "pos", &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod slot_103 = {"popupMenuVoiceMail", 1, param_slot_103 };
    static const QUMethod slot_104 = {"popupMenuVoiceMail", 0, 0 };
    static const QUParameter param_slot_105[] = {
	{ "on", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_105 = {"showDisplay", 1, param_slot_105 };
    static const QUParameter param_slot_106[] = {
	{ "on", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_106 = {"showBuddyList", 1, param_slot_106 };
    static const QUParameter param_slot_107[] = {
	{ "on", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_107 = {"showCompactLineStatus", 1, param_slot_107 };
    static const QUMethod slot_108 = {"populateBuddyList", 0, 0 };
    static const QUParameter param_slot_109[] = {
	{ "item", &static_QUType_ptr, "QListViewItem", QUParameter::In },
	{ "pos", &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod slot_109 = {"showBuddyListPopupMenu", 2, param_slot_109 };
    static const QUMethod slot_110 = {"doCallBuddy", 0, 0 };
    static const QUParameter param_slot_111[] = {
	{ "qitem", &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_111 = {"doMessageBuddy", 1, param_slot_111 };
    static const QUMethod slot_112 = {"doMessageBuddy", 0, 0 };
    static const QUMethod slot_113 = {"doEditBuddy", 0, 0 };
    static const QUMethod slot_114 = {"doDeleteBuddy", 0, 0 };
    static const QUMethod slot_115 = {"doAddBuddy", 0, 0 };
    static const QUMethod slot_116 = {"doAvailabilityOffline", 0, 0 };
    static const QUMethod slot_117 = {"doAvailabilityOnline", 0, 0 };
    static const QUMethod slot_118 = {"DiamondcardSignUp", 0, 0 };
    static const QUParameter param_slot_119[] = {
	{ "filename", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_119 = {"newDiamondcardUser", 1, param_slot_119 };
    static const QUParameter param_slot_120[] = {
	{ "action", &static_QUType_ptr, "t_dc_action", QUParameter::In },
	{ "userIdx", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_120 = {"DiamondcardAction", 2, param_slot_120 };
    static const QUParameter param_slot_121[] = {
	{ "userIdx", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_121 = {"DiamondcardRecharge", 1, param_slot_121 };
    static const QUParameter param_slot_122[] = {
	{ "userIdx", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_122 = {"DiamondcardBalanceHistory", 1, param_slot_122 };
    static const QUParameter param_slot_123[] = {
	{ "userIdx", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_123 = {"DiamondcardCallHistory", 1, param_slot_123 };
    static const QUParameter param_slot_124[] = {
	{ "userIdx", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_124 = {"DiamondcardAdminCenter", 1, param_slot_124 };
    static const QUMethod slot_125 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "closeEvent(QCloseEvent*)", &slot_0, QMetaData::Public },
	{ "fileExit()", &slot_1, QMetaData::Public },
	{ "display(const QString&)", &slot_2, QMetaData::Public },
	{ "displayHeader()", &slot_3, QMetaData::Public },
	{ "showLineTimer(int)", &slot_4, QMetaData::Public },
	{ "showLineTimer1()", &slot_5, QMetaData::Public },
	{ "showLineTimer2()", &slot_6, QMetaData::Public },
	{ "updateLineTimer(int)", &slot_7, QMetaData::Public },
	{ "updateLineEncryptionState(int)", &slot_8, QMetaData::Public },
	{ "updateLineStatus(int)", &slot_9, QMetaData::Public },
	{ "updateState()", &slot_10, QMetaData::Public },
	{ "updateRegStatus()", &slot_11, QMetaData::Public },
	{ "flashMWI()", &slot_12, QMetaData::Public },
	{ "updateMwi()", &slot_13, QMetaData::Public },
	{ "updateServicesStatus()", &slot_14, QMetaData::Public },
	{ "updateMissedCallStatus(int)", &slot_15, QMetaData::Public },
	{ "updateSysTrayStatus()", &slot_16, QMetaData::Public },
	{ "updateMenuStatus()", &slot_17, QMetaData::Public },
	{ "updateDiamondcardMenu()", &slot_18, QMetaData::Public },
	{ "removeDiamondcardAction(int&)", &slot_19, QMetaData::Public },
	{ "removeDiamondcardMenu(QPopupMenu*&)", &slot_20, QMetaData::Public },
	{ "phoneRegister()", &slot_21, QMetaData::Public },
	{ "do_phoneRegister(list<t_user*>)", &slot_22, QMetaData::Public },
	{ "phoneDeregister()", &slot_23, QMetaData::Public },
	{ "do_phoneDeregister(list<t_user*>)", &slot_24, QMetaData::Public },
	{ "phoneDeregisterAll()", &slot_25, QMetaData::Public },
	{ "do_phoneDeregisterAll(list<t_user*>)", &slot_26, QMetaData::Public },
	{ "phoneShowRegistrations()", &slot_27, QMetaData::Public },
	{ "phoneInvite(t_user*,const QString&,const QString&,bool)", &slot_28, QMetaData::Public },
	{ "phoneInvite(const QString&,const QString&,bool)", &slot_29, QMetaData::Public },
	{ "phoneInvite()", &slot_30, QMetaData::Public },
	{ "do_phoneInvite(t_user*,const QString&,const t_url&,const QString&,bool)", &slot_31, QMetaData::Public },
	{ "phoneRedial()", &slot_32, QMetaData::Public },
	{ "phoneAnswer()", &slot_33, QMetaData::Public },
	{ "phoneAnswerFromSystrayPopup()", &slot_34, QMetaData::Public },
	{ "phoneBye()", &slot_35, QMetaData::Public },
	{ "phoneReject()", &slot_36, QMetaData::Public },
	{ "phoneRejectFromSystrayPopup()", &slot_37, QMetaData::Public },
	{ "phoneRedirect(const list<string>&)", &slot_38, QMetaData::Public },
	{ "phoneRedirect()", &slot_39, QMetaData::Public },
	{ "do_phoneRedirect(const list<t_display_url>&)", &slot_40, QMetaData::Public },
	{ "phoneTransfer(const string&,t_transfer_type)", &slot_41, QMetaData::Public },
	{ "phoneTransfer()", &slot_42, QMetaData::Public },
	{ "do_phoneTransfer(const t_display_url&,t_transfer_type)", &slot_43, QMetaData::Public },
	{ "do_phoneTransferLine()", &slot_44, QMetaData::Public },
	{ "phoneHold(bool)", &slot_45, QMetaData::Public },
	{ "phoneConference()", &slot_46, QMetaData::Public },
	{ "phoneMute(bool)", &slot_47, QMetaData::Public },
	{ "phoneTermCap(const QString&)", &slot_48, QMetaData::Public },
	{ "phoneTermCap()", &slot_49, QMetaData::Public },
	{ "do_phoneTermCap(t_user*,const t_url&)", &slot_50, QMetaData::Public },
	{ "phoneDTMF()", &slot_51, QMetaData::Public },
	{ "sendDTMF(const QString&)", &slot_52, QMetaData::Public },
	{ "startMessageSession()", &slot_53, QMetaData::Public },
	{ "startMessageSession(t_buddy*)", &slot_54, QMetaData::Public },
	{ "phoneConfirmZrtpSas(int)", &slot_55, QMetaData::Public },
	{ "phoneConfirmZrtpSas()", &slot_56, QMetaData::Public },
	{ "phoneResetZrtpSasConfirmation(int)", &slot_57, QMetaData::Public },
	{ "phoneResetZrtpSasConfirmation()", &slot_58, QMetaData::Public },
	{ "phoneEnableZrtp(bool)", &slot_59, QMetaData::Public },
	{ "phoneZrtpGoClearOk(unsigned short)", &slot_60, QMetaData::Public },
	{ "line1rbChangedState(bool)", &slot_61, QMetaData::Public },
	{ "line2rbChangedState(bool)", &slot_62, QMetaData::Public },
	{ "actionLine1Toggled(bool)", &slot_63, QMetaData::Public },
	{ "actionLine2Toggled(bool)", &slot_64, QMetaData::Public },
	{ "srvDnd(bool)", &slot_65, QMetaData::Public },
	{ "srvDnd()", &slot_66, QMetaData::Public },
	{ "do_srvDnd_enable(list<t_user*>)", &slot_67, QMetaData::Public },
	{ "do_srvDnd_disable(list<t_user*>)", &slot_68, QMetaData::Public },
	{ "srvAutoAnswer(bool)", &slot_69, QMetaData::Public },
	{ "srvAutoAnswer()", &slot_70, QMetaData::Public },
	{ "do_srvAutoAnswer_enable(list<t_user*>)", &slot_71, QMetaData::Public },
	{ "do_srvAutoAnswer_disable(list<t_user*>)", &slot_72, QMetaData::Public },
	{ "srvRedirect()", &slot_73, QMetaData::Public },
	{ "do_srvRedirect(t_user*,const list<t_display_url>&,const list<t_display_url>&,const list<t_display_url>&)", &slot_74, QMetaData::Public },
	{ "about()", &slot_75, QMetaData::Public },
	{ "aboutQt()", &slot_76, QMetaData::Public },
	{ "manual()", &slot_77, QMetaData::Public },
	{ "editUserProfile()", &slot_78, QMetaData::Public },
	{ "editSysSettings()", &slot_79, QMetaData::Public },
	{ "selectProfile()", &slot_80, QMetaData::Public },
	{ "newUsers(const list<string>&)", &slot_81, QMetaData::Public },
	{ "updateUserComboBox()", &slot_82, QMetaData::Public },
	{ "updateSipUdpPort()", &slot_83, QMetaData::Public },
	{ "updateRtpPorts()", &slot_84, QMetaData::Public },
	{ "updateStunSettings(t_user*)", &slot_85, QMetaData::Public },
	{ "updateAuthCache(t_user*,const string&)", &slot_86, QMetaData::Public },
	{ "unsubscribeMWI(t_user*)", &slot_87, QMetaData::Public },
	{ "subscribeMWI(t_user*)", &slot_88, QMetaData::Public },
	{ "viewLog()", &slot_89, QMetaData::Public },
	{ "updateLog(bool)", &slot_90, QMetaData::Public },
	{ "viewHistory()", &slot_91, QMetaData::Public },
	{ "updateCallHistory()", &slot_92, QMetaData::Public },
	{ "quickCall()", &slot_93, QMetaData::Public },
	{ "addToCallComboBox(const QString&)", &slot_94, QMetaData::Public },
	{ "showAddressBook()", &slot_95, QMetaData::Public },
	{ "selectedAddress(const QString&)", &slot_96, QMetaData::Public },
	{ "enableCallOptions(bool)", &slot_97, QMetaData::Public },
	{ "keyPressEvent(QKeyEvent*)", &slot_98, QMetaData::Public },
	{ "mouseReleaseEvent(QMouseEvent*)", &slot_99, QMetaData::Public },
	{ "processLeftMouseButtonRelease(QMouseEvent*)", &slot_100, QMetaData::Public },
	{ "processRightMouseButtonRelease(QMouseEvent*)", &slot_101, QMetaData::Public },
	{ "processCryptLabelClick(int)", &slot_102, QMetaData::Public },
	{ "popupMenuVoiceMail(const QPoint&)", &slot_103, QMetaData::Public },
	{ "popupMenuVoiceMail()", &slot_104, QMetaData::Public },
	{ "showDisplay(bool)", &slot_105, QMetaData::Public },
	{ "showBuddyList(bool)", &slot_106, QMetaData::Public },
	{ "showCompactLineStatus(bool)", &slot_107, QMetaData::Public },
	{ "populateBuddyList()", &slot_108, QMetaData::Public },
	{ "showBuddyListPopupMenu(QListViewItem*,const QPoint&)", &slot_109, QMetaData::Public },
	{ "doCallBuddy()", &slot_110, QMetaData::Public },
	{ "doMessageBuddy(QListViewItem*)", &slot_111, QMetaData::Public },
	{ "doMessageBuddy()", &slot_112, QMetaData::Public },
	{ "doEditBuddy()", &slot_113, QMetaData::Public },
	{ "doDeleteBuddy()", &slot_114, QMetaData::Public },
	{ "doAddBuddy()", &slot_115, QMetaData::Public },
	{ "doAvailabilityOffline()", &slot_116, QMetaData::Public },
	{ "doAvailabilityOnline()", &slot_117, QMetaData::Public },
	{ "DiamondcardSignUp()", &slot_118, QMetaData::Public },
	{ "newDiamondcardUser(const QString&)", &slot_119, QMetaData::Public },
	{ "DiamondcardAction(t_dc_action,int)", &slot_120, QMetaData::Public },
	{ "DiamondcardRecharge(int)", &slot_121, QMetaData::Public },
	{ "DiamondcardBalanceHistory(int)", &slot_122, QMetaData::Public },
	{ "DiamondcardCallHistory(int)", &slot_123, QMetaData::Public },
	{ "DiamondcardAdminCenter(int)", &slot_124, QMetaData::Public },
	{ "languageChange()", &slot_125, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"MphoneForm", parentObject,
	slot_tbl, 126,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_MphoneForm.setMetaObject( metaObj );
    return metaObj;
}

void* MphoneForm::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "MphoneForm" ) )
	return this;
    return QMainWindow::qt_cast( clname );
}

bool MphoneForm::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: closeEvent((QCloseEvent*)static_QUType_ptr.get(_o+1)); break;
    case 1: fileExit(); break;
    case 2: display((const QString&)static_QUType_QString.get(_o+1)); break;
    case 3: displayHeader(); break;
    case 4: showLineTimer((int)static_QUType_int.get(_o+1)); break;
    case 5: showLineTimer1(); break;
    case 6: showLineTimer2(); break;
    case 7: updateLineTimer((int)static_QUType_int.get(_o+1)); break;
    case 8: updateLineEncryptionState((int)static_QUType_int.get(_o+1)); break;
    case 9: updateLineStatus((int)static_QUType_int.get(_o+1)); break;
    case 10: updateState(); break;
    case 11: updateRegStatus(); break;
    case 12: flashMWI(); break;
    case 13: updateMwi(); break;
    case 14: updateServicesStatus(); break;
    case 15: updateMissedCallStatus((int)static_QUType_int.get(_o+1)); break;
    case 16: updateSysTrayStatus(); break;
    case 17: updateMenuStatus(); break;
    case 18: updateDiamondcardMenu(); break;
    case 19: removeDiamondcardAction((int&)static_QUType_int.get(_o+1)); break;
    case 20: removeDiamondcardMenu((QPopupMenu*&)*((QPopupMenu**)static_QUType_ptr.get(_o+1))); break;
    case 21: phoneRegister(); break;
    case 22: do_phoneRegister((list<t_user*>)(*((list<t_user*>*)static_QUType_ptr.get(_o+1)))); break;
    case 23: phoneDeregister(); break;
    case 24: do_phoneDeregister((list<t_user*>)(*((list<t_user*>*)static_QUType_ptr.get(_o+1)))); break;
    case 25: phoneDeregisterAll(); break;
    case 26: do_phoneDeregisterAll((list<t_user*>)(*((list<t_user*>*)static_QUType_ptr.get(_o+1)))); break;
    case 27: phoneShowRegistrations(); break;
    case 28: phoneInvite((t_user*)static_QUType_ptr.get(_o+1),(const QString&)static_QUType_QString.get(_o+2),(const QString&)static_QUType_QString.get(_o+3),(bool)static_QUType_bool.get(_o+4)); break;
    case 29: phoneInvite((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2),(bool)static_QUType_bool.get(_o+3)); break;
    case 30: phoneInvite(); break;
    case 31: do_phoneInvite((t_user*)static_QUType_ptr.get(_o+1),(const QString&)static_QUType_QString.get(_o+2),(const t_url&)*((const t_url*)static_QUType_ptr.get(_o+3)),(const QString&)static_QUType_QString.get(_o+4),(bool)static_QUType_bool.get(_o+5)); break;
    case 32: phoneRedial(); break;
    case 33: phoneAnswer(); break;
    case 34: phoneAnswerFromSystrayPopup(); break;
    case 35: phoneBye(); break;
    case 36: phoneReject(); break;
    case 37: phoneRejectFromSystrayPopup(); break;
    case 38: phoneRedirect((const list<string>&)*((const list<string>*)static_QUType_ptr.get(_o+1))); break;
    case 39: phoneRedirect(); break;
    case 40: do_phoneRedirect((const list<t_display_url>&)*((const list<t_display_url>*)static_QUType_ptr.get(_o+1))); break;
    case 41: phoneTransfer((const string&)*((const string*)static_QUType_ptr.get(_o+1)),(t_transfer_type)(*((t_transfer_type*)static_QUType_ptr.get(_o+2)))); break;
    case 42: phoneTransfer(); break;
    case 43: do_phoneTransfer((const t_display_url&)*((const t_display_url*)static_QUType_ptr.get(_o+1)),(t_transfer_type)(*((t_transfer_type*)static_QUType_ptr.get(_o+2)))); break;
    case 44: do_phoneTransferLine(); break;
    case 45: phoneHold((bool)static_QUType_bool.get(_o+1)); break;
    case 46: phoneConference(); break;
    case 47: phoneMute((bool)static_QUType_bool.get(_o+1)); break;
    case 48: phoneTermCap((const QString&)static_QUType_QString.get(_o+1)); break;
    case 49: phoneTermCap(); break;
    case 50: do_phoneTermCap((t_user*)static_QUType_ptr.get(_o+1),(const t_url&)*((const t_url*)static_QUType_ptr.get(_o+2))); break;
    case 51: phoneDTMF(); break;
    case 52: sendDTMF((const QString&)static_QUType_QString.get(_o+1)); break;
    case 53: startMessageSession(); break;
    case 54: startMessageSession((t_buddy*)static_QUType_ptr.get(_o+1)); break;
    case 55: phoneConfirmZrtpSas((int)static_QUType_int.get(_o+1)); break;
    case 56: phoneConfirmZrtpSas(); break;
    case 57: phoneResetZrtpSasConfirmation((int)static_QUType_int.get(_o+1)); break;
    case 58: phoneResetZrtpSasConfirmation(); break;
    case 59: phoneEnableZrtp((bool)static_QUType_bool.get(_o+1)); break;
    case 60: phoneZrtpGoClearOk((unsigned short)(*((unsigned short*)static_QUType_ptr.get(_o+1)))); break;
    case 61: line1rbChangedState((bool)static_QUType_bool.get(_o+1)); break;
    case 62: line2rbChangedState((bool)static_QUType_bool.get(_o+1)); break;
    case 63: actionLine1Toggled((bool)static_QUType_bool.get(_o+1)); break;
    case 64: actionLine2Toggled((bool)static_QUType_bool.get(_o+1)); break;
    case 65: srvDnd((bool)static_QUType_bool.get(_o+1)); break;
    case 66: srvDnd(); break;
    case 67: do_srvDnd_enable((list<t_user*>)(*((list<t_user*>*)static_QUType_ptr.get(_o+1)))); break;
    case 68: do_srvDnd_disable((list<t_user*>)(*((list<t_user*>*)static_QUType_ptr.get(_o+1)))); break;
    case 69: srvAutoAnswer((bool)static_QUType_bool.get(_o+1)); break;
    case 70: srvAutoAnswer(); break;
    case 71: do_srvAutoAnswer_enable((list<t_user*>)(*((list<t_user*>*)static_QUType_ptr.get(_o+1)))); break;
    case 72: do_srvAutoAnswer_disable((list<t_user*>)(*((list<t_user*>*)static_QUType_ptr.get(_o+1)))); break;
    case 73: srvRedirect(); break;
    case 74: do_srvRedirect((t_user*)static_QUType_ptr.get(_o+1),(const list<t_display_url>&)*((const list<t_display_url>*)static_QUType_ptr.get(_o+2)),(const list<t_display_url>&)*((const list<t_display_url>*)static_QUType_ptr.get(_o+3)),(const list<t_display_url>&)*((const list<t_display_url>*)static_QUType_ptr.get(_o+4))); break;
    case 75: about(); break;
    case 76: aboutQt(); break;
    case 77: manual(); break;
    case 78: editUserProfile(); break;
    case 79: editSysSettings(); break;
    case 80: selectProfile(); break;
    case 81: newUsers((const list<string>&)*((const list<string>*)static_QUType_ptr.get(_o+1))); break;
    case 82: updateUserComboBox(); break;
    case 83: updateSipUdpPort(); break;
    case 84: updateRtpPorts(); break;
    case 85: updateStunSettings((t_user*)static_QUType_ptr.get(_o+1)); break;
    case 86: updateAuthCache((t_user*)static_QUType_ptr.get(_o+1),(const string&)*((const string*)static_QUType_ptr.get(_o+2))); break;
    case 87: unsubscribeMWI((t_user*)static_QUType_ptr.get(_o+1)); break;
    case 88: subscribeMWI((t_user*)static_QUType_ptr.get(_o+1)); break;
    case 89: viewLog(); break;
    case 90: updateLog((bool)static_QUType_bool.get(_o+1)); break;
    case 91: viewHistory(); break;
    case 92: updateCallHistory(); break;
    case 93: quickCall(); break;
    case 94: addToCallComboBox((const QString&)static_QUType_QString.get(_o+1)); break;
    case 95: showAddressBook(); break;
    case 96: selectedAddress((const QString&)static_QUType_QString.get(_o+1)); break;
    case 97: enableCallOptions((bool)static_QUType_bool.get(_o+1)); break;
    case 98: keyPressEvent((QKeyEvent*)static_QUType_ptr.get(_o+1)); break;
    case 99: mouseReleaseEvent((QMouseEvent*)static_QUType_ptr.get(_o+1)); break;
    case 100: processLeftMouseButtonRelease((QMouseEvent*)static_QUType_ptr.get(_o+1)); break;
    case 101: processRightMouseButtonRelease((QMouseEvent*)static_QUType_ptr.get(_o+1)); break;
    case 102: processCryptLabelClick((int)static_QUType_int.get(_o+1)); break;
    case 103: popupMenuVoiceMail((const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+1))); break;
    case 104: popupMenuVoiceMail(); break;
    case 105: showDisplay((bool)static_QUType_bool.get(_o+1)); break;
    case 106: showBuddyList((bool)static_QUType_bool.get(_o+1)); break;
    case 107: showCompactLineStatus((bool)static_QUType_bool.get(_o+1)); break;
    case 108: populateBuddyList(); break;
    case 109: showBuddyListPopupMenu((QListViewItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2))); break;
    case 110: doCallBuddy(); break;
    case 111: doMessageBuddy((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 112: doMessageBuddy(); break;
    case 113: doEditBuddy(); break;
    case 114: doDeleteBuddy(); break;
    case 115: doAddBuddy(); break;
    case 116: doAvailabilityOffline(); break;
    case 117: doAvailabilityOnline(); break;
    case 118: DiamondcardSignUp(); break;
    case 119: newDiamondcardUser((const QString&)static_QUType_QString.get(_o+1)); break;
    case 120: DiamondcardAction((t_dc_action)(*((t_dc_action*)static_QUType_ptr.get(_o+1))),(int)static_QUType_int.get(_o+2)); break;
    case 121: DiamondcardRecharge((int)static_QUType_int.get(_o+1)); break;
    case 122: DiamondcardBalanceHistory((int)static_QUType_int.get(_o+1)); break;
    case 123: DiamondcardCallHistory((int)static_QUType_int.get(_o+1)); break;
    case 124: DiamondcardAdminCenter((int)static_QUType_int.get(_o+1)); break;
    case 125: languageChange(); break;
    default:
	return QMainWindow::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool MphoneForm::qt_emit( int _id, QUObject* _o )
{
    return QMainWindow::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool MphoneForm::qt_property( int id, int f, QVariant* v)
{
    return QMainWindow::qt_property( id, f, v);
}

bool MphoneForm::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
