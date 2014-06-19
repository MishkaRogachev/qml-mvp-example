#include "qml_main_view.h"

QmlMainView::QmlMainView(QWindow* parent):
    QQuickView(parent),
    IMainView()
{
    this->setSource(QUrl("qrc:///qml/MainView.qml"));
}

void QmlMainView::show()
{
    QQuickView::show();
}

void QmlMainView::showFullscreen()
{
    QQuickView::showFullScreen();
}
