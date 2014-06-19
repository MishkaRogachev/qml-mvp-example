#ifndef QML_MAIN_VIEW_H
#define QML_MAIN_VIEW_H

#include <QQuickView>
#include "i_main_view.h"

class QmlMainView : public QQuickView, public IMainView
{
    Q_OBJECT

public:
    explicit QmlMainView(QWindow* parent = nullptr);

    virtual void show() override;
    virtual void showFullscreen() override;
};

#endif // QML_MAIN_VIEW_H
