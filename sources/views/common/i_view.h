#ifndef I_VIEW_H
#define I_VIEW_H

#include <QObject>

class IView : public QObject
{
    Q_OBJECT

public:
    explicit IView(QObject* parent = nullptr): QObject(parent) {}

    virtual void show(QObject* parentVisualItem = nullptr) = 0;
};

#endif // I_VIEW_H
