#include <QtGui/QGuiApplication>

#include "view_pools/qml_view_pool.h"
#include "presenters/main_presenter/main_presenter.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QmlViewPool viewPool;

    MainPresenter mainPresenter(&viewPool);
    mainPresenter.exec();

    return app.exec();
}

