#include "qml_menu_view.h"

#include <QQmlComponent>
#include <QQuickItem>
#include <QQmlEngine>

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

void QmlMenuView::show(IMainView* parentView)
{
    this->createVisualItem(qobject_cast<QmlMainView*>(
                               parentView)->visualItem(::placeholder));
}

