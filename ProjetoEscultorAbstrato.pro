TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        cutbox.cpp \
        cutellipsoid.cpp \
        cutsphere.cpp \
        cutvoxel.cpp \
        escultor.cpp \
        figurageometrica.cpp \
        interpretador.cpp \
        main.cpp \
        putbox.cpp \
        putellipsoid.cpp \
        putsphere.cpp \
        putvoxel.cpp

HEADERS += \
    Voxel.hpp \
    cutbox.hpp \
    cutellipsoid.hpp \
    cutsphere.hpp \
    cutvoxel.hpp \
    escultor.hpp \
    figurageometrica.hpp \
    interpretador.hpp \
    putbox.hpp \
    putellipsoid.hpp \
    putsphere.hpp \
    putvoxel.hpp
