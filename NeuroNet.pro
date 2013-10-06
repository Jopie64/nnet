#-------------------------------------------------
#
# Project created by QtCreator 2013-10-06T18:13:53
#
#-------------------------------------------------

QT             += core gui
QMAKE_CXXFLAGS += -std=c++0x

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = NeuroNet
TEMPLATE = app


SOURCES += main.cpp\
        nnmain.cpp \
    nnet.cpp

HEADERS  += nnmain.h \
    nnet.h

FORMS    += nnmain.ui
