#ifndef QML_MAIN_VIEW_H
#define QML_MAIN_VIEW_H

#include "i_main_view.h"
#include "../common/qquick_item_view.h"

class QmlMainView : public IMainView, public QQuickItemView
{
    Q_OBJECT

public:
    explicit QmlMainView(QObject* parent);
    ~QmlMainView() override;

    virtual void show(QObject* parentVisualItem) override;
    virtual void createVisualItem(QQuickItem* parentItem) override;

    virtual QQuickItem* menuVisualItem() override;

private:
    class QmlMainViewImpl;
    QmlMainViewImpl* const d;
};

#endif // QML_MAIN_VIEW_H
