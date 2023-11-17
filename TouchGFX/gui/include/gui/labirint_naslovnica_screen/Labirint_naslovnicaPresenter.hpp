#ifndef LABIRINT_NASLOVNICAPRESENTER_HPP
#define LABIRINT_NASLOVNICAPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Labirint_naslovnicaView;

class Labirint_naslovnicaPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    Labirint_naslovnicaPresenter(Labirint_naslovnicaView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~Labirint_naslovnicaPresenter() {}

private:
    Labirint_naslovnicaPresenter();

    Labirint_naslovnicaView& view;
};

#endif // LABIRINT_NASLOVNICAPRESENTER_HPP
