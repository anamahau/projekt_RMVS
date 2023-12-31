/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef FRONTENDAPPLICATIONBASE_HPP
#define FRONTENDAPPLICATIONBASE_HPP

#include <mvp/MVPApplication.hpp>
#include <gui/model/Model.hpp>

class FrontendHeap;

class FrontendApplicationBase : public touchgfx::MVPApplication
{
public:
    FrontendApplicationBase(Model& m, FrontendHeap& heap);
    virtual ~FrontendApplicationBase() { }

    virtual void changeToStartScreen()
    {
        gotoSeznamScreenNoTransition();
    }

    // Seznam
    void gotoSeznamScreenNoTransition();

    void gotoSeznamScreenCoverTransitionWest();

    // Labirint_naslovnica
    void gotoLabirint_naslovnicaScreenCoverTransitionEast();

    void gotoLabirint_naslovnicaScreenBlockTransition();

    // Kaca_naslovnica
    void gotoKaca_naslovnicaScreenCoverTransitionEast();

    void gotoKaca_naslovnicaScreenBlockTransition();

    // Labirint
    void gotoLabirintScreenBlockTransition();

    // Kaca
    void gotoKacaScreenBlockTransition();

protected:
    touchgfx::Callback<FrontendApplicationBase> transitionCallback;
    FrontendHeap& frontendHeap;
    Model& model;

    // Seznam
    void gotoSeznamScreenNoTransitionImpl();

    void gotoSeznamScreenCoverTransitionWestImpl();

    // Labirint_naslovnica
    void gotoLabirint_naslovnicaScreenCoverTransitionEastImpl();

    void gotoLabirint_naslovnicaScreenBlockTransitionImpl();

    // Kaca_naslovnica
    void gotoKaca_naslovnicaScreenCoverTransitionEastImpl();

    void gotoKaca_naslovnicaScreenBlockTransitionImpl();

    // Labirint
    void gotoLabirintScreenBlockTransitionImpl();

    // Kaca
    void gotoKacaScreenBlockTransitionImpl();
};

#endif // FRONTENDAPPLICATIONBASE_HPP
