#ifndef SEZNAMPRESENTER_HPP
#define SEZNAMPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class SeznamView;

class SeznamPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    SeznamPresenter(SeznamView& v);

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

    virtual ~SeznamPresenter() {}

private:
    SeznamPresenter();

    SeznamView& view;
};

#endif // SEZNAMPRESENTER_HPP
