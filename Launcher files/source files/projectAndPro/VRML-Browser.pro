#-------------------------------------------------
#
# Project created by QtCreator 2015-04-03T01:08:10
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = VRML-Browser
TEMPLATE = app


SOURCES += main.cpp\
        startlauncherwindow.cpp \
    fileselectwindow.cpp

HEADERS  += startlauncherwindow.h \
    fileselectwindow.h

FORMS    += startlauncherwindow.ui \
    fileselectwindow.ui

RESOURCES +=
RC_FILE = Icon1.rc
