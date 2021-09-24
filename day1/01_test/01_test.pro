#-------------------------------------------------
#
# Project created by QtCreator 2021-09-24T14:09:26
#
#-------------------------------------------------

#模块
QT       += core gui

#为了兼容Qt4
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

#应用程序的名字
TARGET = 01_test

#指定makefile的类型，app
TEMPLATE = app

#源文件
SOURCES += main.cpp\
        mywidget.cpp

#头文件
HEADERS  += mywidget.h
