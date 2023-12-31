/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef KACAVIEWBASE_HPP
#define KACAVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/kaca_screen/KacaPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/ButtonWithIcon.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/widgets/Image.hpp>

class KacaViewBase : public touchgfx::View<KacaPresenter>
{
public:
    KacaViewBase();
    virtual ~KacaViewBase();
    virtual void setupScreen();

    /*
     * Virtual Action Handlers
     */
    virtual void drawMaze()
    {
        // Override and implement this function in Kaca
    }
    virtual void goU()
    {
        // Override and implement this function in Kaca
    }
    virtual void goR()
    {
        // Override and implement this function in Kaca
    }
    virtual void goD()
    {
        // Override and implement this function in Kaca
    }
    virtual void goL()
    {
        // Override and implement this function in Kaca
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box box1;
    touchgfx::ButtonWithIcon buttonWithIcon1;
    touchgfx::ButtonWithIcon buttonU;
    touchgfx::ButtonWithIcon buttonR;
    touchgfx::ButtonWithIcon buttonD;
    touchgfx::ButtonWithIcon buttonL;
    touchgfx::Container container1;
    touchgfx::Box b10_1;
    touchgfx::Box b11_1;
    touchgfx::Box b9_1;
    touchgfx::Box b8_1;
    touchgfx::Box b1_1;
    touchgfx::Box b2_1;
    touchgfx::Box b3_1;
    touchgfx::Box b6_1;
    touchgfx::Box b5_1;
    touchgfx::Box b4_1;
    touchgfx::Box b7_1;
    touchgfx::Box b7_2;
    touchgfx::Box b4_2;
    touchgfx::Box b5_2;
    touchgfx::Box b6_2;
    touchgfx::Box b3_2;
    touchgfx::Box b2_2;
    touchgfx::Box b1_2;
    touchgfx::Box b8_2;
    touchgfx::Box b9_2;
    touchgfx::Box b11_2;
    touchgfx::Box b10_2;
    touchgfx::Box b10_3;
    touchgfx::Box b11_3;
    touchgfx::Box b9_3;
    touchgfx::Box b8_3;
    touchgfx::Box b1_3;
    touchgfx::Box b2_3;
    touchgfx::Box b3_3;
    touchgfx::Box b6_3;
    touchgfx::Box b5_3;
    touchgfx::Box b4_3;
    touchgfx::Box b7_3;
    touchgfx::Box b7_4;
    touchgfx::Box b4_4;
    touchgfx::Box b5_4;
    touchgfx::Box b6_4;
    touchgfx::Box b3_4;
    touchgfx::Box b2_4;
    touchgfx::Box b1_4;
    touchgfx::Box b8_4;
    touchgfx::Box b9_4;
    touchgfx::Box b11_4;
    touchgfx::Box b10_4;
    touchgfx::Box b10_8;
    touchgfx::Box b11_8;
    touchgfx::Box b9_8;
    touchgfx::Box b8_8;
    touchgfx::Box b1_8;
    touchgfx::Box b2_8;
    touchgfx::Box b3_8;
    touchgfx::Box b6_8;
    touchgfx::Box b5_8;
    touchgfx::Box b4_8;
    touchgfx::Box b7_8;
    touchgfx::Box b7_7;
    touchgfx::Box b4_7;
    touchgfx::Box b5_7;
    touchgfx::Box b6_7;
    touchgfx::Box b3_7;
    touchgfx::Box b2_7;
    touchgfx::Box b1_7;
    touchgfx::Box b8_7;
    touchgfx::Box b9_7;
    touchgfx::Box b11_7;
    touchgfx::Box b10_7;
    touchgfx::Box b10_6;
    touchgfx::Box b11_6;
    touchgfx::Box b9_6;
    touchgfx::Box b8_6;
    touchgfx::Box b1_6;
    touchgfx::Box b2_6;
    touchgfx::Box b3_6;
    touchgfx::Box b6_6;
    touchgfx::Box b5_6;
    touchgfx::Box b4_6;
    touchgfx::Box b7_6;
    touchgfx::Box b7_5;
    touchgfx::Box b4_5;
    touchgfx::Box b5_5;
    touchgfx::Box b6_5;
    touchgfx::Box b3_5;
    touchgfx::Box b2_5;
    touchgfx::Box b1_5;
    touchgfx::Box b8_5;
    touchgfx::Box b9_5;
    touchgfx::Box b11_5;
    touchgfx::Box b10_5;
    touchgfx::Box b10_9;
    touchgfx::Box b11_9;
    touchgfx::Box b9_9;
    touchgfx::Box b8_9;
    touchgfx::Box b1_9;
    touchgfx::Box b2_9;
    touchgfx::Box b3_9;
    touchgfx::Box b6_9;
    touchgfx::Box b5_9;
    touchgfx::Box b4_9;
    touchgfx::Box b7_9;
    touchgfx::Box b7_10;
    touchgfx::Box b4_10;
    touchgfx::Box b5_10;
    touchgfx::Box b6_10;
    touchgfx::Box b3_10;
    touchgfx::Box b2_10;
    touchgfx::Box b1_10;
    touchgfx::Box b8_10;
    touchgfx::Box b9_10;
    touchgfx::Box b11_10;
    touchgfx::Box b10_10;
    touchgfx::Box b10_11;
    touchgfx::Box b11_11;
    touchgfx::Box b9_11;
    touchgfx::Box b8_11;
    touchgfx::Box b1_11;
    touchgfx::Box b2_11;
    touchgfx::Box b3_11;
    touchgfx::Box b6_11;
    touchgfx::Box b5_11;
    touchgfx::Box b4_11;
    touchgfx::Box b7_11;
    touchgfx::Box b7_12;
    touchgfx::Box b4_12;
    touchgfx::Box b5_12;
    touchgfx::Box b6_12;
    touchgfx::Box b3_12;
    touchgfx::Box b2_12;
    touchgfx::Box b1_12;
    touchgfx::Box b8_12;
    touchgfx::Box b9_12;
    touchgfx::Box b11_12;
    touchgfx::Box b10_12;
    touchgfx::Box b10_14;
    touchgfx::Box b11_14;
    touchgfx::Box b9_14;
    touchgfx::Box b8_14;
    touchgfx::Box b1_14;
    touchgfx::Box b2_14;
    touchgfx::Box b3_14;
    touchgfx::Box b6_14;
    touchgfx::Box b5_14;
    touchgfx::Box b4_14;
    touchgfx::Box b7_14;
    touchgfx::Box b7_13;
    touchgfx::Box b4_13;
    touchgfx::Box b5_13;
    touchgfx::Box b6_13;
    touchgfx::Box b3_13;
    touchgfx::Box b2_13;
    touchgfx::Box b1_13;
    touchgfx::Box b8_13;
    touchgfx::Box b9_13;
    touchgfx::Box b11_13;
    touchgfx::Box b10_13;
    touchgfx::Button start;
    touchgfx::Image apple;
    touchgfx::Box obj;
    touchgfx::Box rep10;
    touchgfx::Box rep9;
    touchgfx::Box rep8;
    touchgfx::Box rep7;
    touchgfx::Box rep6;
    touchgfx::Box rep5;
    touchgfx::Box rep4;
    touchgfx::Box rep3;
    touchgfx::Box rep2;
    touchgfx::Box rep1;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<KacaViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // KACAVIEWBASE_HPP
