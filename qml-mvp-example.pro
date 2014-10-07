CONFIG += qt
QT += qml quick widgets
TEMPLATE = app
TARGET = qml-mvp-example

QMAKE_CXXFLAGS += -std=c++0x

SOURCES += \
    sources/main.cpp \
    sources/presenters/main_presenter/main_presenter.cpp \
    sources/presenters/menu_presenter/menu_presenter.cpp \
    sources/view_pools/qml_view_pool.cpp \
    sources/views/main_view/qml_main_view.cpp \
    sources/views/menu_view/qml_menu_view.cpp \
    sources/views/qquick_item_view.cpp \
    sources/views/qml_item_view.cpp


HEADERS += \
    sources/presenters/main_presenter/main_presenter.h \
sources/presenters/menu_presenter/menu_presenter.h \
    sources/views/main_view/i_main_view.h \
    sources/view_pools/i_view_pool.h \
    sources/view_pools/qml_view_pool.h \
    sources/views/main_view/qml_main_view.h \
    sources/views/menu_view/i_menu_view.h \
    sources/views/menu_view/qml_menu_view.h \
    sources/views/qquick_item_view.h \
    sources/views/qml_item_view.h


RESOURCES += \
    resources.qrc
