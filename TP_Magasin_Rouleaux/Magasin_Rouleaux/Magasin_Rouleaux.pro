TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        alveoleslibres.cpp \
        charriot.cpp \
        magasin.cpp \
        main.cpp \
        menu.cpp \
        rouleau.cpp \
        stock.cpp \
        testAlveoles.cpp \
        testRouleau.cpp \
        testStock.cpp

HEADERS += \
    alveoleslibres.h \
    charriot.h \
    magasin.h \
    menu.h \
    rouleau.h \
    stock.h

DISTFILES += \
    alveoles.txt \
    magasin \
    stock.txt
