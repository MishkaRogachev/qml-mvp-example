#include "menu_model.h"

#include <QHash>

class MenuModel::MenuModelImpl
{
public:
    QHash <QString, QStringList> menuHash;
    QString current;

    void init()
    {
        current = "Back";
        menuHash.insert("Back", { "File", "Edit", "View", "Help" });
        menuHash.insert("File", { "Back", "New", "Open", "Save", "Close" });
        menuHash.insert("Edit", { "Back", "Cut", "Copy", "Paste", "Delete" });
        menuHash.insert("View", { "Back", "Rows", "Columns", "Grid" });
        menuHash.insert("Help", { "Back", "About" });
    }
};

MenuModel::MenuModel():
    d(new MenuModelImpl())
{
    d->init();
}

MenuModel::~MenuModel()
{
    delete d;
}

QStringList MenuModel::currentActions() const
{
    return d->menuHash[d->current];
}

void MenuModel::triggerAction(const QString& action)
{
    if (d->menuHash.contains(action))
    {
        d->current = action;
    }
}
