#ifndef I_VIEW_POOL_H
#define I_VIEW_POOL_H

#include "../views/main_view/i_main_view.h"
#include "../views/menu_view/i_menu_view.h"

class IViewPool
{
public:
    virtual IMainView* mainView(QObject* parent) = 0;
    virtual IMenuView* menuView(QObject* parent) = 0;
};

#endif // I_VIEW_POOL_H
