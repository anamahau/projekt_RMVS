#ifndef SEZNAMVIEW_HPP
#define SEZNAMVIEW_HPP

#include <gui_generated/seznam_screen/SeznamViewBase.hpp>
#include <gui/seznam_screen/SeznamPresenter.hpp>

class SeznamView : public SeznamViewBase
{
public:
    SeznamView();
    virtual ~SeznamView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SEZNAMVIEW_HPP
