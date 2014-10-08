#ifndef I_MENU_VIEW_H
#define I_MENU_VIEW_H

#include "../common/i_view.h"

class IMenuView: public IView
{
    Q_OBJECT

public:
    explicit IMenuView(QObject* parent): IView(parent) {}

    virtual void setMenuModel(const QStringList& model) = 0;

signals:
    void selected(QString value);
};

#endif // I_MENU_VIEW_H
