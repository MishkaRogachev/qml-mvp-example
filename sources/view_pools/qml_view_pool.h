#ifndef QML_VIEW_POOL_H
#define QML_VIEW_POOL_H

#include "i_view_pool.h"

class QmlViewPool: public IViewPool
{
public:
    virtual IMainView* mainView(QObject* parent) override;
    virtual IMenuView* menuView(QObject* parent) override;
};

#endif // QML_VIEW_POOL_H
