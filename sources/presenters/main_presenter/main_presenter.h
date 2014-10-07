#ifndef MAIN_PRESENTER_H
#define MAIN_PRESENTER_H

#include "../../view_pools/i_view_pool.h"

class MainPresenter: public QObject
{
    Q_OBJECT

public:
    MainPresenter(IViewPool* viewPool, QObject* parent = nullptr);
    ~MainPresenter();

    void exec();

signals:
     void quit();

private:
    class MainPresenterImpl;
    MainPresenterImpl* d;
};

#endif // MAIN_PRESENTER_H
