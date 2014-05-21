#-------------------------------------------------
#
# Project created by QtCreator 2014-05-10T11:42:52
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = interface
TEMPLATE = app

CONFIG += embed_manifest_exe

LIBS += -static -L"$$_PRO_FILE_PWD_/libs/" -llua5.1


SOURCES += main.cpp\
        interface.cpp \
    interfaceTabela.cpp \
    edo.c

HEADERS  += interface.h \
    interfaceTabela.h \
    edo.h \
    lauxlib.h \
    lua.h \
    lua.hpp \
    luaconf.h \
    lualib.h

FORMS    += interface.ui \
    interfaceTabela.ui
