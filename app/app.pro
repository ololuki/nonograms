#-------------------------------------------------
# App:	    nonograms - application for creating and solving nonograms
# Author:   ololuki
# Site:	    ololuki.pl
# Created:  2017-03-28 12:05:23
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = nongrams
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS #emit warning if any deprecated feature is used

SOURCES += main.cpp\
        mainwindow.cpp \
    widgets/DrawingAreaView.cpp \
    widgets/ColumnsDescriptionView.cpp \
    widgets/RowsDescriptionView.cpp

HEADERS  += mainwindow.h \
    widgets/DrawingAreaView.h \
    widgets/ColumnsDescriptionView.h \
    widgets/RowsDescriptionView.h

FORMS    += mainwindow.ui
