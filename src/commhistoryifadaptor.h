/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -c CommHistoryIfAdaptor -a commhistoryifadaptor CommHistoryIf.xml
 *
 * qdbusxml2cpp is Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef COMMHISTORYIFADAPTOR_H_1374205692
#define COMMHISTORYIFADAPTOR_H_1374205692

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface org.nemomobile.CommHistoryIf
 */
class CommHistoryIfAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.nemomobile.CommHistoryIf")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.nemomobile.CommHistoryIf\">\n"
"    <method name=\"activateNotification\">\n"
"      <arg direction=\"in\" type=\"i\" name=\"groupId\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"remoteActionString\"/>\n"
"    </method>\n"
"    <method name=\"setInboxObserved\">\n"
"      <arg type=\"b\" name=\"observed\"/>\n"
"    </method>\n"
"    <method name=\"setInboxObserved\">\n"
"      <arg type=\"b\" name=\"observed\"/>\n"
"      <arg type=\"s\" name=\"filterAccount\"/>\n"
"    </method>\n"
"    <method name=\"setObservedConversations\">\n"
"      <arg type=\"av\" name=\"conversations\"/>\n"
"    </method>\n"
"    <method name=\"setCallHistoryObserved\">\n"
"      <arg type=\"b\" name=\"observed\"/>\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    CommHistoryIfAdaptor(QObject *parent);
    virtual ~CommHistoryIfAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void activateNotification(int groupId, const QString &remoteActionString);
    void setCallHistoryObserved(bool observed);
    void setInboxObserved(bool observed, const QString &filterAccount);
    void setInboxObserved(bool observed);
    void setObservedConversations(const QVariantList &conversations);
Q_SIGNALS: // SIGNALS
};

#endif
