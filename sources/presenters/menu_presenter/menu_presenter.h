#ifndef MENU_PRESENTER_H
#define MENU_PRESENTER_H

#include <QObject>
#include "../../view_pools/i_view_pool.h"

class MenuPresenter: public QObject
{
    Q_OBJECT

public:
    explicit MenuPresenter(IViewPool* viewPool, QObject* parent = nullptr);

private:

};

#endif // MENU_PRESENTER_H
