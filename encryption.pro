QT += core gui widgets
CONFIG += c++17


SOURCES += \
    Qt-AES\qaesencryption.cpp\
    aes256.cpp \
    blowfish.cpp \
    main.cpp \
    mainwindow.cpp \
    mycesarchipher.cpp

HEADERS += \
    Qt-AES\qaesencryption.h\
    aes256.h \
    blowfish.h \
    encryption_types.h \
    mainwindow.h \
    mycesarchipher.h

FORMS += \
    mainwindow.ui

win32:RC_FILE = icon.rc

target.path = $$PWD/bin
INSTALLS += target
