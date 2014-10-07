#include "menu_presenter.h"

MenuPresenter::MenuPresenter(IViewPool* viewPool, QObject* parent):
    QObject(parent),
    m_view(viewPool->menuView(this))
{}

void MenuPresenter::exec(IMainView* parentView)
{
    m_view->show(parentView);
}
