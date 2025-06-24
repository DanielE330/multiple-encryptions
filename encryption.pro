QT += core gui widgets
CONFIG += c++17


SOURCES += \
    Qt-AES\qaesencryption.cpp\
    aes256.cpp \
    main.cpp \
    mainwindow.cpp \
    mycesarchipher.cpp

HEADERS += \
    Qt-AES\qaesencryption.h\
    aes256.h \
    encryption_types.h \
    mainwindow.h \
    mycesarchipher.h

FORMS += \
    mainwindow.ui

target.path = $$PWD/bin
INSTALLS += target
