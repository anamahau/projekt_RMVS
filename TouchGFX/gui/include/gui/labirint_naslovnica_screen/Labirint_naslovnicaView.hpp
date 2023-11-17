#ifndef LABIRINT_NASLOVNICAVIEW_HPP
#define LABIRINT_NASLOVNICAVIEW_HPP

#include <gui_generated/labirint_naslovnica_screen/Labirint_naslovnicaViewBase.hpp>
#include <gui/labirint_naslovnica_screen/Labirint_naslovnicaPresenter.hpp>

class Labirint_naslovnicaView : public Labirint_naslovnicaViewBase
{
public:
    Labirint_naslovnicaView();
    virtual ~Labirint_naslovnicaView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // LABIRINT_NASLOVNICAVIEW_HPP
