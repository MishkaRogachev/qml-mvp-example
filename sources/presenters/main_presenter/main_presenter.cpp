#include "main_presenter.h"

#include <QDebug>

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

    connect(d->view, &IMainView::showed, this, &MainPresenter::onShowed);
}

MainPresenter::~MainPresenter()
{
    delete d;
}

void MainPresenter::exec()
{
    d->view->show();
    d->menuPresenter->exec(d->view);
}

void MainPresenter::onShowed()
{
    qDebug() << "Main presenter showed";
}
