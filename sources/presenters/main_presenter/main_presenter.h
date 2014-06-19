#ifndef MAIN_PRESENTER_H
#define MAIN_PRESENTER_H

#include <QObject>

#include "../../view_pools/i_view_pool.h"

class MainPresenter : public QObject
{
    Q_OBJECT

public:
    MainPresenter(IViewPool* viewPool, QObject* parent = nullptr);
    virtual ~MainPresenter() override;

    void exec();

private:
    IMainView* m_view;
};

#endif // MAIN_PRESENTER_H
