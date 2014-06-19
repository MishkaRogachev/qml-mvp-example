#ifndef I_VIEW_POOL_H
#define I_VIEW_POOL_H

#include "../views/main_view/i_main_view.h"

class IViewPool
{
public:
    virtual IMainView* mainView() = 0;
};

#endif // I_VIEW_POOL_H
