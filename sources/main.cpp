#include <QtGui/QGuiApplication>

#include "view_pools/qml_view_pool.h"
#include "presenters/main_presenter/main_presenter.h"

//#include <QQuickView>
//#include <QQmlEngine>
//#include <QQmlComponent>
//#include <QQuickItem>
//#include <QDebug>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QmlViewPool viewPool;

    MainPresenter mainPresenter(&viewPool);
    mainPresenter.exec();

//    QQuickView view;
//    view.setSource(QUrl("qrc:///qml/MainView.qml"));
//    view.setResizeMode(QQuickView::SizeRootObjectToView);
//    view.showMaximized();

//    QQmlComponent component(view.engine(), QUrl("qrc:///qml/MenuView.qml"));
//    QQuickItem* item = qobject_cast<QQuickItem*>(component.create());
//    item->setParentItem(view.rootObject()->findChild<QQuickItem*>("menuPlaceholder"));

    return app.exec();
}

