#include "qml_main_view.h"

#include <QQuickView>
#include <QQmlContext>
#include <QQmlEngine>

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
    d->window.setFlags(Qt::CustomizeWindowHint);
    d->window.setSource(::source);
    d->window.setResizeMode(QQuickView::SizeRootObjectToView);
    this->createVisualItem(nullptr);

    connect(d->window.rootContext(), &QQmlContext::destroyed,
            this, &IMainView::quit);
    connect(d->window.engine(), &QQmlEngine::quit,
            this, &IMainView::quit);
}

QmlMainView::~QmlMainView()
{
    delete d;
}

void QmlMainView::show()
{
    d->window.show();
}

void QmlMainView::createVisualItem(QQuickItem* parentItem)
{
    Q_UNUSED(parentItem)
    m_item = d->window.rootObject();
}
