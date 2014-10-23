#include "main_presenter.h"

#include "../menu_presenter/menu_presenter.h"

class MainPresenter::MainPresenterImpl
{
public:
    IMainView* view = nullptr;
    MenuPresenter* menuPresenter = nullptr;
};


MainPresenter::MainPresenter(IViewPool* viewPool, QObject* parent):
    QObject(parent),
    d(new MainPresenterImpl())
{
    d->view = viewPool->mainView(this);
    d->menuPresenter = new MenuPresenter(viewPool, this);

    connect(d->view, &IMainView::quit, this, &MainPresenter::quit);
}

MainPresenter::~MainPresenter()
{
    delete d;
}

void MainPresenter::exec()
{
    d->view->show();
    d->menuPresenter->exec(d->view->menuVisualItem());
}
