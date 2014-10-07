#ifndef I_MENU_VIEW_H
#define I_MENU_VIEW_H

#include "../main_view/i_main_view.h"

class IMenuView: public QObject
{
    Q_OBJECT

public:
    explicit IMenuView(QObject* parent): QObject(parent) {}

    virtual void show(IMainView* parentView) = 0;
    virtual void setMenuModel(const QStringList& model) = 0;

signals:
    void selected(QString value);
};

#endif // I_MENU_VIEW_H
