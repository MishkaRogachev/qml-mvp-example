#ifndef QML_ITEM_VIEW_H
#define QML_ITEM_VIEW_H

#include "qquick_item_view.h"

class QmlItemView : public QQuickItemView
{
public:
    QmlItemView();

    virtual void createVisualItem(QQuickItem* parentItem) override;

    QUrl source() const;
    void setSource(const QUrl& source);

private:
    QUrl m_source;
};

#endif // QML_ITEM_VIEW_H
