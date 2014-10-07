#include "qquick_item_view.h"

QQuickItemView::QQuickItemView():
    m_item(nullptr)
{}

QQuickItem* QQuickItemView::visualItem(const QString& objectName)
{
    if (objectName.isNull())
    {
        return m_item;
    }

    if (m_item)
    {
        return m_item->findChild<QQuickItem*>(objectName);
    }

    return nullptr;
}
