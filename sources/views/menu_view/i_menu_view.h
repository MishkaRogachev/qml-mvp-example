#ifndef I_MENU_VIEW_H
#define I_MENU_VIEW_H

#include "../main_view/i_main_view.h"

class IMenuView: public QObject
{
    Q_OBJECT

public:
    explicit IMenuView(QObject* parent): QObject(parent) {}

    virtual void show(IMainView* parentView) = 0;
};

#endif // I_MENU_VIEW_H
