#include "qml_menu_view.h"

#include <QDebug>

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

    connect(m_item, SIGNAL(clicked(QString)),
            this, SLOT(onMenuActived(QString)));
    m_item->setProperty("model", QStringList( { "File", "Edit", "View" } ));
}

void QmlMenuView::onMenuActived(QString value)
{
    qDebug() << value;
}

