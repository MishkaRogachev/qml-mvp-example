#include "qml_menu_view.h"

#include "../main_view/qml_main_view.h"

namespace
{
    const QUrl source = QUrl("qrc:///qml/MenuView.qml");
}

QmlMenuView::QmlMenuView(QObject* parent):
    IMenuView(parent),
    QmlItemView()
{
    this->setSource(::source);
}

void QmlMenuView::show(QObject* parentVisualItem)
{
    this->createVisualItem(qobject_cast<QQuickItem*>(parentVisualItem));

    connect(m_item, SIGNAL(clicked(QString)),
            this, SIGNAL(selected(QString)));
}

void QmlMenuView::setMenuModel(const QStringList& model)
{
    m_item->setProperty("model", model);
}
