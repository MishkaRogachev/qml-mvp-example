#include "main_presenter.h"

MainPresenter::MainPresenter(IViewPool* viewPool, QObject* parent):
    QObject(parent),
    m_view(viewPool->mainView())
{}

MainPresenter::~MainPresenter()
{
    delete m_view;
}

void MainPresenter::exec()
{
    m_view->show();
}
