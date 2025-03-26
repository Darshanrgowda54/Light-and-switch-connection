TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Light.cpp \
        Switch.cpp \
        Wire.cpp \
        main.cpp

HEADERS += \
    Light.h \
    Switch.h \
    Wire.h
