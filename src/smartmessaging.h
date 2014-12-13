/******************************************************************************
**
** This file is part of commhistory-daemon.
**
** Copyright (C) 2014 Jolla Ltd.
**
** This library is free software; you can redistribute it and/or modify it
** under the terms of the GNU Lesser General Public License version 2.1 as
** published by the Free Software Foundation.
**
** This library is distributed in the hope that it will be useful, but
** WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
** or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public
** License for more details.
**
** You should have received a copy of the GNU Lesser General Public License
** along with this library; if not, write to the Free Software Foundation, Inc.,
** 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
**
******************************************************************************/

#ifndef SMARTMESSAGING_H
#define SMARTMESSAGING_H

#include "messagehandlerbase.h"
#include "qofonosmartmessaging.h"

namespace CommHistory {
    class MessagePart;
}

class SmartMessaging: public MessageHandlerBase
{
    Q_OBJECT

public:
    SmartMessaging(QObject* parent);
    ~SmartMessaging();

private Q_SLOTS:
    void onModemAdded(QString path);
    void onModemRemoved(QString path);
    void onValidChanged(bool valid);

public: // for SmartMessagingAgentAdaptor
    void ReceiveAppointment(QByteArray appointment, QVariantHash info);
    void ReceiveBusinessCard(QByteArray card, QVariantHash info);
    void Release();

private:
    void addModem(QString path);

private:
    static bool save(int id, QByteArray vcard, CommHistory::MessagePart& part);

private:
    QHash<QString,QOfonoSmartMessaging*> interfaces;
};

#endif // SMARTMESSAGING_H
