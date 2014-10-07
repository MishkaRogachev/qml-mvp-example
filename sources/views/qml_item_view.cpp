#include "qml_item_view.h"

#include <QtQuick>

QmlItemView::QmlItemView():
    QQuickItemView()
{}

void QmlItemView::createVisualItem(QQuickItem* parentItem)
{
    if (m_item) m_item->deleteLater();

    QQmlComponent component(qmlEngine(parentItem), this->source());
    m_item = qobject_cast<QQuickItem*>(component.create());
    m_item->setParentItem(parentItem);
}

QUrl QmlItemView::source() const
{
    return m_source;
}

void QmlItemView::setSource(const QUrl& source)
{
    m_source = source;

    if (m_item)
    {
        this->createVisualItem(qobject_cast<QQuickItem*>(m_item->parent()));
    }
}

