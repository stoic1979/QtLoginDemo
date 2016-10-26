QT += core
QT -= gui

CONFIG += c++11

TARGET = QtLoginDemo
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    utils.cpp \
    parser.cpp

HEADERS += \
    utils.h \
    parser.h
