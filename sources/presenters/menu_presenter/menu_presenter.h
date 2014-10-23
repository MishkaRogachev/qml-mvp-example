#ifndef MENU_PRESENTER_H
#define MENU_PRESENTER_H

#include "../../view_pools/i_view_pool.h"

class MenuPresenter: public QObject
{
    Q_OBJECT

public:
    MenuPresenter(IViewPool* viewPool, QObject* parent = nullptr);
    ~MenuPresenter();

    void exec(QObject* parentVisualItem);

private slots:
    void updateView();
    void onSelected(const QString& value);

private:
    class MenuPresenterImpl;
    MenuPresenterImpl* d;
};

#endif // MENU_PRESENTER_H
