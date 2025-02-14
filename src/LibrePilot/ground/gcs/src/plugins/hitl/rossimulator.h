/**
 ******************************************************************************
 *
 * @file       flightgearbridge.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup HITLPlugin HITL Plugin
 * @{
 * @brief The Hardware In The Loop plugin
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#ifndef ROSSIMULATOR_H
#define ROSSIMULATOR_H

#include <QObject>
#include "simulator.h"

class ROSSimulator : public Simulator {
    Q_OBJECT

public:
    ROSSimulator(const SimulatorSettings & params);
    ~ROSSimulator();

    bool setupProcess();
    void setupUdpPorts(const QString & host, int inPort, int outPort);

private slots:
    void transmitUpdate();
    void processReadyRead();

private:

    void processUpdate(const QByteArray & data);
};

class ROSSimulatorCreator : public SimulatorCreator {
public:
    ROSSimulatorCreator(const QString & classId, const QString & description)
        :  SimulatorCreator(classId, description)
    {}

    Simulator *createSimulator(const SimulatorSettings & params)
    {
        return new ROSSimulator(params);
    }
};
#endif // ROSSIMULATOR_H
