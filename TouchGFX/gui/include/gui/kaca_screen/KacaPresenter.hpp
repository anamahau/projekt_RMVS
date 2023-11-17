#ifndef KACAPRESENTER_HPP
#define KACAPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class KacaView;

class KacaPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    KacaPresenter(KacaView& v);

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

    virtual ~KacaPresenter() {}

private:
    KacaPresenter();

    KacaView& view;
};

#endif // KACAPRESENTER_HPP
