#ifndef MENU_MODEL_H
#define MENU_MODEL_H

#include <QStringList>

class MenuModel
{
public:
    MenuModel();
    ~MenuModel();

    QStringList currentActions() const;
    void triggerAction(const QString& action);

    class MenuModelImpl;
    MenuModelImpl* d;
};

#endif // MENU_MODEL_H
