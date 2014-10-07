#include <QtGui/QGuiApplication>

#include "view_pools/qml_view_pool.h"
#include "presenters/main_presenter/main_presenter.h"

#include <QDebug>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QmlViewPool viewPool;

    MainPresenter mainPresenter(&viewPool);
    QObject::connect(&mainPresenter, &MainPresenter::quit,
                     &app, &QGuiApplication::quit);

    mainPresenter.exec();

    return app.exec();
}

