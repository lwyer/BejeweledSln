QT       += core gui
QT       += multimedia
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    CBejeweledApp.cpp \
    CConfig.cpp \
    CConfigDao.cpp \
    CConfigLogic.cpp \
    CGameLogic.cpp \
    CMusicPlayer.cpp \
    CPathTool.cpp \
    CRankDao.cpp \
    CRankLogic.cpp \
    main.cpp \
    CBejeweledDlg.cpp \
    CHelpDlg.cpp \
    CRankDlg.cpp \
    CSetDlg.cpp \
    CGameDlg.cpp \
    CMenuDlg.cpp \
    mylabel.cpp \
    CGameMode.cpp \
    CGameClassic.cpp

HEADERS += \
    CBejeweledApp.h \
    CConfig.h \
    CConfigDao.h \
    CConfigLogic.h \
    CGameLogic.h \
    CMusicPlayer.h \
    CPathTool.h \
    CRankDao.h \
    CRankLogic.h \
    CBejeweledDlg.h \
    CHelpDlg.h \
    CRankDlg.h \
    CSetDlg.h \
    CGameDlg.h \
    CMenuDlg.h \
    mylabel.h \
    CGameMode.h \
    CGameClassic.h

FORMS += \
    CBejeweledDlg.ui \
    CHelpDlg.ui \
    CRankDlg.ui \
    CSetDlg.ui \
    CGameDlg.ui \
    CMenuDlg.ui \
    CGameMode.ui \
    CGameClassic.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    image.qrc
