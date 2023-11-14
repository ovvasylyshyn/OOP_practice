QT       += core gui sql
QT += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TARGET = DataBase
TEMPLATE = app

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Apartment.cpp \
    HotelRoom.cpp \
    House.cpp \
    createapartment.cpp \
    createhotelroom.cpp \
    main.cpp \
    mainwindow.cpp \
    outputapartment.cpp \
    outputhotelroom.cpp \
    sqlitedbmanager.cpp

HEADERS += \
    Apartment.h \
    HotelRoom.h \
    House.h \
    createapartment.h \
    createhotelroom.h \
    mainwindow.h \
    outputapartment.h \
    outputhotelroom.h \
    sqlitedbmanager.h

FORMS += \
    createapartment.ui \
    createhotelroom.ui \
    mainwindow.ui \
    outputapartment.ui \
    outputhotelroom.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
