#include "qml_view_pool.h"

#include "../views/main_view/qml_main_view.h"
#include "../views/menu_view/qml_menu_view.h"

IMainView* QmlViewPool::mainView(QObject* parent)
{
    return new QmlMainView(parent);
}

IMenuView* QmlViewPool::menuView(QObject* parent)
{
    return new QmlMenuView(parent);
}
