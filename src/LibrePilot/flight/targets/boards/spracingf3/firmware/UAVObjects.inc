#
# Copyright (C) 2016, The LibrePilot Project, http://www.librepilot.org
# Copyright (C) 2009-2013, The OpenPilot Team, http://www.openpilot.org
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
# or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
# for more details.
#
# You should have received a copy of the GNU General Public License along
# with this program; if not, write to the Free Software Foundation, Inc.,
# 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
#

# These are the UAVObjects supposed to be build as part of the OpenPilot target
# (all architectures)
UAVOBJSRCFILENAMES =
UAVOBJSRCFILENAMES += statusgrounddrive
UAVOBJSRCFILENAMES += pidstatus
UAVOBJSRCFILENAMES += statusvtolland
UAVOBJSRCFILENAMES += statusvtolautotakeoff
UAVOBJSRCFILENAMES += vtolselftuningstats
UAVOBJSRCFILENAMES += accelgyrosettings
UAVOBJSRCFILENAMES += accessorydesired
UAVOBJSRCFILENAMES += actuatoroverride
UAVOBJSRCFILENAMES += actuatorcommand
UAVOBJSRCFILENAMES += actuatordesired
UAVOBJSRCFILENAMES += actuatorsettings
UAVOBJSRCFILENAMES += attitudesettings
UAVOBJSRCFILENAMES += attitudestate
UAVOBJSRCFILENAMES += gyrostate
UAVOBJSRCFILENAMES += gyrosensor
UAVOBJSRCFILENAMES += accelstate
UAVOBJSRCFILENAMES += accelsensor
UAVOBJSRCFILENAMES += magsensor
UAVOBJSRCFILENAMES += auxmagsensor
UAVOBJSRCFILENAMES += auxmagsettings
UAVOBJSRCFILENAMES += magstate
UAVOBJSRCFILENAMES += barosensor
UAVOBJSRCFILENAMES += airspeedsensor
UAVOBJSRCFILENAMES += airspeedsettings
UAVOBJSRCFILENAMES += airspeedstate
UAVOBJSRCFILENAMES += debuglogsettings
UAVOBJSRCFILENAMES += debuglogcontrol
UAVOBJSRCFILENAMES += debuglogstatus
UAVOBJSRCFILENAMES += debuglogentry
UAVOBJSRCFILENAMES += flightbatterysettings
UAVOBJSRCFILENAMES += firmwareiapobj
UAVOBJSRCFILENAMES += flightbatterystate
UAVOBJSRCFILENAMES += flightplancontrol
UAVOBJSRCFILENAMES += flightplansettings
UAVOBJSRCFILENAMES += flightplanstatus
UAVOBJSRCFILENAMES += flighttelemetrystats
UAVOBJSRCFILENAMES += gcstelemetrystats
UAVOBJSRCFILENAMES += gcsreceiver
UAVOBJSRCFILENAMES += auxpositionsensor
UAVOBJSRCFILENAMES += auxvelocitysensor
UAVOBJSRCFILENAMES += gpspositionsensor
UAVOBJSRCFILENAMES += gpssatellites
UAVOBJSRCFILENAMES += gpstime
UAVOBJSRCFILENAMES += gpsvelocitysensor
UAVOBJSRCFILENAMES += gpssettings
UAVOBJSRCFILENAMES += gpsextendedstatus
UAVOBJSRCFILENAMES += fixedwingpathfollowersettings
UAVOBJSRCFILENAMES += fixedwingpathfollowerstatus
UAVOBJSRCFILENAMES += vtolpathfollowersettings
UAVOBJSRCFILENAMES += groundpathfollowersettings
UAVOBJSRCFILENAMES += airshippathfollowersettings
UAVOBJSRCFILENAMES += homelocation
UAVOBJSRCFILENAMES += i2cstats
UAVOBJSRCFILENAMES += manualcontrolcommand
UAVOBJSRCFILENAMES += manualcontrolsettings
UAVOBJSRCFILENAMES += flightmodesettings
UAVOBJSRCFILENAMES += mixersettings
UAVOBJSRCFILENAMES += mixerstatus
UAVOBJSRCFILENAMES += nedaccel
UAVOBJSRCFILENAMES += objectpersistence
UAVOBJSRCFILENAMES += oplinkreceiver
UAVOBJSRCFILENAMES += pathaction
UAVOBJSRCFILENAMES += pathdesired
UAVOBJSRCFILENAMES += pathplan
UAVOBJSRCFILENAMES += pathstatus
UAVOBJSRCFILENAMES += pathsummary
UAVOBJSRCFILENAMES += positionstate
UAVOBJSRCFILENAMES += ratedesired
UAVOBJSRCFILENAMES += ekfconfiguration
UAVOBJSRCFILENAMES += ekfstatevariance
UAVOBJSRCFILENAMES += revocalibration
UAVOBJSRCFILENAMES += revosettings
UAVOBJSRCFILENAMES += sonaraltitude
UAVOBJSRCFILENAMES += stabilizationdesired
UAVOBJSRCFILENAMES += stabilizationsettings
UAVOBJSRCFILENAMES += stabilizationsettingsbank1
UAVOBJSRCFILENAMES += stabilizationsettingsbank2
UAVOBJSRCFILENAMES += stabilizationsettingsbank3
UAVOBJSRCFILENAMES += stabilizationstatus
UAVOBJSRCFILENAMES += stabilizationbank
UAVOBJSRCFILENAMES += systemalarms
UAVOBJSRCFILENAMES += systemsettings
UAVOBJSRCFILENAMES += systemstats
UAVOBJSRCFILENAMES += taskinfo
UAVOBJSRCFILENAMES += callbackinfo
UAVOBJSRCFILENAMES += velocitystate
UAVOBJSRCFILENAMES += velocitydesired
UAVOBJSRCFILENAMES += watchdogstatus
UAVOBJSRCFILENAMES += flightstatus
UAVOBJSRCFILENAMES += hwsettings
UAVOBJSRCFILENAMES += hwspracingf3settings
UAVOBJSRCFILENAMES += receiveractivity
UAVOBJSRCFILENAMES += receiverstatus
UAVOBJSRCFILENAMES += cameradesired
UAVOBJSRCFILENAMES += camerastabsettings
UAVOBJSRCFILENAMES += altitudeholdsettings
UAVOBJSRCFILENAMES += oplinksettings
UAVOBJSRCFILENAMES += oplinkstatus
UAVOBJSRCFILENAMES += altitudefiltersettings
UAVOBJSRCFILENAMES += altitudeholdstatus
UAVOBJSRCFILENAMES += waypoint
UAVOBJSRCFILENAMES += waypointactive
UAVOBJSRCFILENAMES += poilocation
UAVOBJSRCFILENAMES += poilearnsettings
UAVOBJSRCFILENAMES += mpugyroaccelsettings
UAVOBJSRCFILENAMES += txpidsettings
UAVOBJSRCFILENAMES += txpidstatus
UAVOBJSRCFILENAMES += takeofflocation
UAVOBJSRCFILENAMES += perfcounter
UAVOBJSRCFILENAMES += systemidentsettings
UAVOBJSRCFILENAMES += systemidentstate
UAVOBJSRCFILENAMES += cameracontrolsettings
UAVOBJSRCFILENAMES += cameracontrolactivity

UAVOBJSRC = $(foreach UAVOBJSRCFILE,$(UAVOBJSRCFILENAMES),$(FLIGHT_UAVOBJ_DIR)/$(UAVOBJSRCFILE).c )
UAVOBJDEFINE = $(foreach UAVOBJSRCFILE,$(UAVOBJSRCFILENAMES),-DUAVOBJ_INIT_$(UAVOBJSRCFILE) )
