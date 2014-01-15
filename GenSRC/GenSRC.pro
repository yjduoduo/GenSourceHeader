#-------------------------------------------------
#
# Project created by QtCreator 2014-01-15T10:26:21
#
#-------------------------------------------------

QT       += core gui

TARGET = GenSRC
TEMPLATE = app


SOURCES += main.cpp\
        gensrcwnd.cpp

HEADERS  += gensrcwnd.h \
    IncludeAll.h \
    ConstDefine.h \
    commonInclude.h \
    macroGenSrcWnd.h

FORMS    += gensrcwnd.ui

RC_FILE = myapp.rc
