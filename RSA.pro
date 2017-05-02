#-------------------------------------------------
#
# Project created by QtCreator 2015-06-21T23:10:01
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RSA
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialog.cpp \
    dialog2.cpp

HEADERS  += mainwindow.h \
    dialog.h \
    dialog2.h

FORMS    += mainwindow.ui \
    dialog.ui \
    dialog2.ui

RESOURCES += \
    images.qrc
RC_FILE = myapp.rc
