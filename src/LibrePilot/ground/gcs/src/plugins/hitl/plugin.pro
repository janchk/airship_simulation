TEMPLATE = lib
TARGET = HITL

QT += widgets network

include(../../plugin.pri)
include(hitl_dependencies.pri)

HEADERS += \
    hitlplugin.h \
    hitlwidget.h \
    hitloptionspage.h \
    hitlfactory.h \
    hitlconfiguration.h \
    hitlgadget.h \
    hitlnoisegeneration.h \
    simulator.h \
    aerosimrcsimulator.h \
    fgsimulator.h \
    il2simulator.h \
    xplanesimulator9.h \
    xplanesimulator10.h \
    rossimulator.h

SOURCES += \
    hitlplugin.cpp \
    hitlwidget.cpp \
    hitloptionspage.cpp \
    hitlfactory.cpp \
    hitlconfiguration.cpp \
    hitlgadget.cpp \
    hitlnoisegeneration.cpp \
    simulator.cpp \
    aerosimrcsimulator.cpp \
    fgsimulator.cpp \
    il2simulator.cpp \
    xplanesimulator9.cpp \
    xplanesimulator10.cpp \
    rossimulator.cpp

OTHER_FILES += hitl.pluginspec

FORMS += \
    hitloptionspage.ui \
    hitlwidget.ui

RESOURCES += hitlresources.qrc


