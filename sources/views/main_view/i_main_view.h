#ifndef I_MAIN_VIEW_H
#define I_MAIN_VIEW_H

#include "../common/i_view.h"

class IMainView : public IView
{
    Q_OBJECT

public:
    explicit IMainView(QObject* parent): IView(parent) {}

signals:
     void quit();
};

#endif // I_MAIN_VIEW_H
