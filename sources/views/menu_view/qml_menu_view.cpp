#include "qml_menu_view.h"

#include "../main_view/qml_main_view.h"

namespace
{
    const QUrl source = QUrl("qrc:///qml/MenuView.qml");
    const QString placeholder = "menuPlaceholder";
}

QmlMenuView::QmlMenuView(QObject* parent):
    IMenuView(parent),
    QmlItemView()
{
    this->setSource(::source);
}

void QmlMenuView::show(IView* parentView)
{
    this->createVisualItem(qobject_cast<QmlMainView*>(
                               parentView)->visualItem(::placeholder));

    connect(m_item, SIGNAL(clicked(QString)),
            this, SIGNAL(selected(QString)));

}

void QmlMenuView::setMenuModel(const QStringList& model)
{
    m_item->setProperty("model", model);
}
