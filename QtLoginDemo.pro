#-------------------------------------------------
#
# Project created by QtCreator 2016-10-26T19:43:25
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtLoginDemo
TEMPLATE = app


SOURCES += main.cpp \
        mainwindow.cpp \
        utils.cpp \
        parser.cpp \
    httpclient.cpp

HEADERS += \
    utils.h \
    parser.h \
    httpclient.h


HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
