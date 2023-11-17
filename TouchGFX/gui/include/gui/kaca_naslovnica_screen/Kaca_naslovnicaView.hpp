#ifndef KACA_NASLOVNICAVIEW_HPP
#define KACA_NASLOVNICAVIEW_HPP

#include <gui_generated/kaca_naslovnica_screen/Kaca_naslovnicaViewBase.hpp>
#include <gui/kaca_naslovnica_screen/Kaca_naslovnicaPresenter.hpp>

class Kaca_naslovnicaView : public Kaca_naslovnicaViewBase
{
public:
    Kaca_naslovnicaView();
    virtual ~Kaca_naslovnicaView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // KACA_NASLOVNICAVIEW_HPP
