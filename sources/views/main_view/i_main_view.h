#ifndef I_VIEW_H
#define I_VIEW_H

class IMainView
{
public:
    virtual void show() = 0;
    virtual void showFullscreen() = 0;
};

#endif // I_VIEW_H
