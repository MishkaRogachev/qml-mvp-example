#ifndef I_VIEW_H
#define I_VIEW_H

#include <QObject>

class IMainView: public QObject
{
    Q_OBJECT

public:
    explicit IMainView(QObject* parent): QObject(parent) {}

    virtual void show() = 0;

signals:
     void quit();
};

#endif // I_VIEW_H
