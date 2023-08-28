QT += testlib
QT -= gui


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

QMAKE_CXXFLAGS_RELEASE_WITH_DEBUGINFO -= -O0
QMAKE_CXXFLAGS += --coverage
QMAKE_LFLAGS += --coverage

TEMPLATE = app
SOURCES +=  tst_test.cpp
SOURCES += \
    ../05-tudu/tudu/src/main.cpp \
   ../05-tudu/tudu/src/mainwindow.cpp \
    ../05-tudu/tudu/src/tudulist.cpp \
    ../05-tudu/tudu/src/task.cpp \
    ../05-tudu/tudu/src/addtaskformweekly.cpp \
    ../05-tudu/tudu/src/addtaskformtudu.cpp \
    ../05-tudu/tudu/src/weeklyview.cpp

HEADERS += \
    ../05-tudu/tudu/headers/mainwindow.h \
    ../05-tudu/tudu/headers/tudulist.h \
    ../05-tudu/tudu/headers/task.h \
    ../05-tudu/tudu/headers/addtaskformweekly.h \
    ../05-tudu/tudu/headers/addtaskformtudu.h \
    ../05-tudu/tudu/headers/weeklyview.h

