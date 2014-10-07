#include "qml_main_view.h"

#include <QtQuick>

namespace
{
    const QUrl source = QUrl("qrc:///qml/MainView.qml");
}

class QmlMainView::QmlMainViewImpl
{
public:
    QQuickView window;
};

QmlMainView::QmlMainView(QObject* parent):
    IMainView(parent),
    QQuickItemView(),
    d(new QmlMainViewImpl())
{
    d->window.setSource(::source);
    d->window.setResizeMode(QQuickView::SizeRootObjectToView);
    this->createVisualItem(nullptr);
}

QmlMainView::~QmlMainView()
{
    delete d;
}

void QmlMainView::show()
{
    d->window.showMaximized();
    emit this->showed();
}

void QmlMainView::createVisualItem(QQuickItem* parentItem)
{
    Q_UNUSED(parentItem)
    m_item = d->window.rootObject();
}
