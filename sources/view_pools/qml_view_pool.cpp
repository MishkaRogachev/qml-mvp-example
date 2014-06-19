#include "qml_view_pool.h"

#include "../views/main_view/qml_main_view.h"

IMainView* QmlViewPool::mainView()
{
    return new QmlMainView(nullptr);
}
