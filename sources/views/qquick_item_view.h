#ifndef QQUICK_ITEM_VIEW_H
#define QQUICK_ITEM_VIEW_H

#include <QQuickItem>

class QQuickItemView
{
public:
    QQuickItemView();
    virtual ~QQuickItemView();

    QQuickItem* visualItem(const QString& objectName = QString());
    virtual void createVisualItem(QQuickItem* parentItem) = 0;

protected:
    QQuickItem* m_item;
};

#endif // QQUICK_ITEM_VIEW_H
