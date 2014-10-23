#include "menu_presenter.h"

#include "../../domain/menu_model.h"

class MenuPresenter::MenuPresenterImpl
{
public:
    IMenuView* view = nullptr;
    MenuModel model;
};

MenuPresenter::MenuPresenter(IViewPool* viewPool, QObject* parent):
    QObject(parent),
    d(new MenuPresenterImpl())
{
    d->view = viewPool->menuView(this);

    connect(d->view, SIGNAL(selected(QString)), this, SLOT(onSelected(QString)));
}

MenuPresenter::~MenuPresenter()
{
    delete d;
}

void MenuPresenter::exec(QObject* parentVisualItem)
{
    d->view->show(parentVisualItem);
    this->updateView();
}

void MenuPresenter::updateView()
{
    d->view->setMenuModel(d->model.currentActions());
}

void MenuPresenter::onSelected(const QString& value)
{
    d->model.triggerAction(value);
     this->updateView();
}
