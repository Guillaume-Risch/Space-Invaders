TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Correc_prof/SpaceInvader_AC.cpp \
    Projet.cpp

QMAKE_MAC_SDK = macosx10.11

HEADERS += \
    Correc_prof/MyVar_AC.h \
    Correc_prof/SpaceInvader_AC.h \
    Correc_prof/MyConst_AC.h \
    Correc_prof/MyType_AC.h
