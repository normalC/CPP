TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt core gui

SOURCES += main.cpp \
    square.cpp
CONFIG += staticlib

HEADERS += \
    squre.h
