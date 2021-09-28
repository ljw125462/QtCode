#-------------------------------------------------
#
# Project created by QtCreator 2021-09-28T16:04:47
#
#-------------------------------------------------

QT       += core gui
QT += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 011_TCP
TEMPLATE = app


SOURCES += main.cpp\
        serverwidget.cpp

HEADERS  += serverwidget.h

FORMS    += serverwidget.ui

CONFIG += C++11
