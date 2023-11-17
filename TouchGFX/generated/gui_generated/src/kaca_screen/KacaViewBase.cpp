/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/kaca_screen/KacaViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>

KacaViewBase::KacaViewBase() :
    buttonCallback(this, &KacaViewBase::buttonCallbackHandler)
{
    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    box1.setPosition(0, 0, 480, 272);
    box1.setColor(touchgfx::Color::getColorFromRGB(80, 119, 140));
    add(box1);

    buttonWithIcon1.setXY(444, 0);
    buttonWithIcon1.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_FILL_NORMAL_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_FILL_NORMAL_ID), touchgfx::Bitmap(BITMAP_ICON_THEME_IMAGES_ACTION_HOME_FILLED_50_50_E8F6FB_SVG_ID), touchgfx::Bitmap(BITMAP_ICON_THEME_IMAGES_ACTION_DONE_50_50_E8F6FB_SVG_ID));
    buttonWithIcon1.setIconXY(-7, -7);
    buttonWithIcon1.setAction(buttonCallback);
    add(buttonWithIcon1);

    buttonU.setXY(408, 164);
    buttonU.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_FILL_DISABLED_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_FILL_DISABLED_ID), touchgfx::Bitmap(BITMAP_ICON_THEME_IMAGES_NAVIGATION_EXPAND_LESS_53_53_E8F6FB_SVG_ID), touchgfx::Bitmap(BITMAP_ICON_THEME_IMAGES_NAVIGATION_EXPAND_LESS_53_53_E8F6FB_SVG_ID));
    buttonU.setIconXY(-7, -7);
    buttonU.setAction(buttonCallback);
    add(buttonU);

    buttonR.setXY(444, 200);
    buttonR.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_FILL_DISABLED_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_FILL_DISABLED_ID), touchgfx::Bitmap(BITMAP_ICON_THEME_IMAGES_NAVIGATION_CHEVRON_RIGHT_53_53_E8F6FB_SVG_ID), touchgfx::Bitmap(BITMAP_ICON_THEME_IMAGES_NAVIGATION_CHEVRON_RIGHT_53_53_E8F6FB_SVG_ID));
    buttonR.setIconXY(-7, -7);
    buttonR.setAction(buttonCallback);
    add(buttonR);

    buttonD.setXY(408, 236);
    buttonD.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_FILL_DISABLED_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_FILL_DISABLED_ID), touchgfx::Bitmap(BITMAP_ICON_THEME_IMAGES_NAVIGATION_EXPAND_MORE_53_53_E8F6FB_SVG_ID), touchgfx::Bitmap(BITMAP_ICON_THEME_IMAGES_NAVIGATION_EXPAND_MORE_53_53_E8F6FB_SVG_ID));
    buttonD.setIconXY(-7, -7);
    buttonD.setAction(buttonCallback);
    add(buttonD);

    buttonL.setXY(372, 200);
    buttonL.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_FILL_DISABLED_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_FILL_DISABLED_ID), touchgfx::Bitmap(BITMAP_ICON_THEME_IMAGES_NAVIGATION_CHEVRON_LEFT_53_53_E8F6FB_SVG_ID), touchgfx::Bitmap(BITMAP_ICON_THEME_IMAGES_NAVIGATION_CHEVRON_LEFT_53_53_E8F6FB_SVG_ID));
    buttonL.setIconXY(-7, -7);
    buttonL.setAction(buttonCallback);
    add(buttonL);

    container1.setPosition(0, 0, 336, 264);
    b10_1.setPosition(0, 216, 24, 24);
    b10_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b10_1.setVisible(false);
    container1.add(b10_1);

    b11_1.setPosition(0, 240, 24, 24);
    b11_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b11_1.setVisible(false);
    container1.add(b11_1);

    b9_1.setPosition(0, 192, 24, 24);
    b9_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b9_1.setVisible(false);
    container1.add(b9_1);

    b8_1.setPosition(0, 168, 24, 24);
    b8_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b8_1.setVisible(false);
    container1.add(b8_1);

    b1_1.setPosition(0, 0, 24, 24);
    b1_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b1_1.setVisible(false);
    container1.add(b1_1);

    b2_1.setPosition(0, 24, 24, 24);
    b2_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b2_1.setVisible(false);
    container1.add(b2_1);

    b3_1.setPosition(0, 48, 24, 24);
    b3_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b3_1.setVisible(false);
    container1.add(b3_1);

    b6_1.setPosition(0, 120, 24, 24);
    b6_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b6_1.setVisible(false);
    container1.add(b6_1);

    b5_1.setPosition(0, 96, 24, 24);
    b5_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b5_1.setVisible(false);
    container1.add(b5_1);

    b4_1.setPosition(0, 72, 24, 24);
    b4_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b4_1.setVisible(false);
    container1.add(b4_1);

    b7_1.setPosition(0, 144, 24, 24);
    b7_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b7_1.setVisible(false);
    container1.add(b7_1);

    b7_2.setPosition(24, 144, 24, 24);
    b7_2.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b7_2.setVisible(false);
    container1.add(b7_2);

    b4_2.setPosition(24, 72, 24, 24);
    b4_2.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b4_2.setVisible(false);
    container1.add(b4_2);

    b5_2.setPosition(24, 96, 24, 24);
    b5_2.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b5_2.setVisible(false);
    container1.add(b5_2);

    b6_2.setPosition(24, 120, 24, 24);
    b6_2.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b6_2.setVisible(false);
    container1.add(b6_2);

    b3_2.setPosition(24, 48, 24, 24);
    b3_2.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b3_2.setVisible(false);
    container1.add(b3_2);

    b2_2.setPosition(24, 24, 24, 24);
    b2_2.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b2_2.setVisible(false);
    container1.add(b2_2);

    b1_2.setPosition(24, 0, 24, 24);
    b1_2.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b1_2.setVisible(false);
    container1.add(b1_2);

    b8_2.setPosition(24, 168, 24, 24);
    b8_2.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b8_2.setVisible(false);
    container1.add(b8_2);

    b9_2.setPosition(24, 192, 24, 24);
    b9_2.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b9_2.setVisible(false);
    container1.add(b9_2);

    b11_2.setPosition(24, 240, 24, 24);
    b11_2.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b11_2.setVisible(false);
    container1.add(b11_2);

    b10_2.setPosition(24, 216, 24, 24);
    b10_2.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b10_2.setVisible(false);
    container1.add(b10_2);

    b10_3.setPosition(48, 216, 24, 24);
    b10_3.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b10_3.setVisible(false);
    container1.add(b10_3);

    b11_3.setPosition(48, 240, 24, 24);
    b11_3.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b11_3.setVisible(false);
    container1.add(b11_3);

    b9_3.setPosition(48, 192, 24, 24);
    b9_3.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b9_3.setVisible(false);
    container1.add(b9_3);

    b8_3.setPosition(48, 168, 24, 24);
    b8_3.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b8_3.setVisible(false);
    container1.add(b8_3);

    b1_3.setPosition(48, 0, 24, 24);
    b1_3.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b1_3.setVisible(false);
    container1.add(b1_3);

    b2_3.setPosition(48, 24, 24, 24);
    b2_3.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b2_3.setVisible(false);
    container1.add(b2_3);

    b3_3.setPosition(48, 48, 24, 24);
    b3_3.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b3_3.setVisible(false);
    container1.add(b3_3);

    b6_3.setPosition(48, 120, 24, 24);
    b6_3.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b6_3.setVisible(false);
    container1.add(b6_3);

    b5_3.setPosition(48, 96, 24, 24);
    b5_3.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b5_3.setVisible(false);
    container1.add(b5_3);

    b4_3.setPosition(48, 72, 24, 24);
    b4_3.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b4_3.setVisible(false);
    container1.add(b4_3);

    b7_3.setPosition(48, 144, 24, 24);
    b7_3.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b7_3.setVisible(false);
    container1.add(b7_3);

    b7_4.setPosition(72, 144, 24, 24);
    b7_4.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b7_4.setVisible(false);
    container1.add(b7_4);

    b4_4.setPosition(72, 72, 24, 24);
    b4_4.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b4_4.setVisible(false);
    container1.add(b4_4);

    b5_4.setPosition(72, 96, 24, 24);
    b5_4.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b5_4.setVisible(false);
    container1.add(b5_4);

    b6_4.setPosition(72, 120, 24, 24);
    b6_4.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b6_4.setVisible(false);
    container1.add(b6_4);

    b3_4.setPosition(72, 48, 24, 24);
    b3_4.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b3_4.setVisible(false);
    container1.add(b3_4);

    b2_4.setPosition(72, 24, 24, 24);
    b2_4.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b2_4.setVisible(false);
    container1.add(b2_4);

    b1_4.setPosition(72, 0, 24, 24);
    b1_4.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b1_4.setVisible(false);
    container1.add(b1_4);

    b8_4.setPosition(72, 168, 24, 24);
    b8_4.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b8_4.setVisible(false);
    container1.add(b8_4);

    b9_4.setPosition(72, 192, 24, 24);
    b9_4.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b9_4.setVisible(false);
    container1.add(b9_4);

    b11_4.setPosition(72, 240, 24, 24);
    b11_4.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b11_4.setVisible(false);
    container1.add(b11_4);

    b10_4.setPosition(72, 216, 24, 24);
    b10_4.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b10_4.setVisible(false);
    container1.add(b10_4);

    b10_8.setPosition(168, 216, 24, 24);
    b10_8.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b10_8.setVisible(false);
    container1.add(b10_8);

    b11_8.setPosition(168, 240, 24, 24);
    b11_8.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b11_8.setVisible(false);
    container1.add(b11_8);

    b9_8.setPosition(168, 192, 24, 24);
    b9_8.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b9_8.setVisible(false);
    container1.add(b9_8);

    b8_8.setPosition(168, 168, 24, 24);
    b8_8.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b8_8.setVisible(false);
    container1.add(b8_8);

    b1_8.setPosition(168, 0, 24, 24);
    b1_8.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b1_8.setVisible(false);
    container1.add(b1_8);

    b2_8.setPosition(168, 24, 24, 24);
    b2_8.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b2_8.setVisible(false);
    container1.add(b2_8);

    b3_8.setPosition(168, 48, 24, 24);
    b3_8.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b3_8.setVisible(false);
    container1.add(b3_8);

    b6_8.setPosition(168, 120, 24, 24);
    b6_8.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b6_8.setVisible(false);
    container1.add(b6_8);

    b5_8.setPosition(168, 96, 24, 24);
    b5_8.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b5_8.setVisible(false);
    container1.add(b5_8);

    b4_8.setPosition(168, 72, 24, 24);
    b4_8.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b4_8.setVisible(false);
    container1.add(b4_8);

    b7_8.setPosition(168, 144, 24, 24);
    b7_8.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b7_8.setVisible(false);
    container1.add(b7_8);

    b7_7.setPosition(144, 144, 24, 24);
    b7_7.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b7_7.setVisible(false);
    container1.add(b7_7);

    b4_7.setPosition(144, 72, 24, 24);
    b4_7.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b4_7.setVisible(false);
    container1.add(b4_7);

    b5_7.setPosition(144, 96, 24, 24);
    b5_7.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b5_7.setVisible(false);
    container1.add(b5_7);

    b6_7.setPosition(144, 120, 24, 24);
    b6_7.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b6_7.setVisible(false);
    container1.add(b6_7);

    b3_7.setPosition(144, 48, 24, 24);
    b3_7.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b3_7.setVisible(false);
    container1.add(b3_7);

    b2_7.setPosition(144, 24, 24, 24);
    b2_7.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b2_7.setVisible(false);
    container1.add(b2_7);

    b1_7.setPosition(144, 0, 24, 24);
    b1_7.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b1_7.setVisible(false);
    container1.add(b1_7);

    b8_7.setPosition(144, 168, 24, 24);
    b8_7.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b8_7.setVisible(false);
    container1.add(b8_7);

    b9_7.setPosition(144, 192, 24, 24);
    b9_7.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b9_7.setVisible(false);
    container1.add(b9_7);

    b11_7.setPosition(144, 240, 24, 24);
    b11_7.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b11_7.setVisible(false);
    container1.add(b11_7);

    b10_7.setPosition(144, 216, 24, 24);
    b10_7.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b10_7.setVisible(false);
    container1.add(b10_7);

    b10_6.setPosition(120, 216, 24, 24);
    b10_6.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b10_6.setVisible(false);
    container1.add(b10_6);

    b11_6.setPosition(120, 240, 24, 24);
    b11_6.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b11_6.setVisible(false);
    container1.add(b11_6);

    b9_6.setPosition(120, 192, 24, 24);
    b9_6.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b9_6.setVisible(false);
    container1.add(b9_6);

    b8_6.setPosition(120, 168, 24, 24);
    b8_6.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b8_6.setVisible(false);
    container1.add(b8_6);

    b1_6.setPosition(120, 0, 24, 24);
    b1_6.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b1_6.setVisible(false);
    container1.add(b1_6);

    b2_6.setPosition(120, 24, 24, 24);
    b2_6.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b2_6.setVisible(false);
    container1.add(b2_6);

    b3_6.setPosition(120, 48, 24, 24);
    b3_6.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b3_6.setVisible(false);
    container1.add(b3_6);

    b6_6.setPosition(120, 120, 24, 24);
    b6_6.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b6_6.setVisible(false);
    container1.add(b6_6);

    b5_6.setPosition(120, 96, 24, 24);
    b5_6.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b5_6.setVisible(false);
    container1.add(b5_6);

    b4_6.setPosition(120, 72, 24, 24);
    b4_6.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b4_6.setVisible(false);
    container1.add(b4_6);

    b7_6.setPosition(120, 144, 24, 24);
    b7_6.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b7_6.setVisible(false);
    container1.add(b7_6);

    b7_5.setPosition(96, 144, 24, 24);
    b7_5.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b7_5.setVisible(false);
    container1.add(b7_5);

    b4_5.setPosition(96, 72, 24, 24);
    b4_5.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b4_5.setVisible(false);
    container1.add(b4_5);

    b5_5.setPosition(96, 96, 24, 24);
    b5_5.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b5_5.setVisible(false);
    container1.add(b5_5);

    b6_5.setPosition(96, 120, 24, 24);
    b6_5.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b6_5.setVisible(false);
    container1.add(b6_5);

    b3_5.setPosition(96, 48, 24, 24);
    b3_5.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b3_5.setVisible(false);
    container1.add(b3_5);

    b2_5.setPosition(96, 24, 24, 24);
    b2_5.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b2_5.setVisible(false);
    container1.add(b2_5);

    b1_5.setPosition(96, 0, 24, 24);
    b1_5.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b1_5.setVisible(false);
    container1.add(b1_5);

    b8_5.setPosition(96, 168, 24, 24);
    b8_5.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b8_5.setVisible(false);
    container1.add(b8_5);

    b9_5.setPosition(96, 192, 24, 24);
    b9_5.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b9_5.setVisible(false);
    container1.add(b9_5);

    b11_5.setPosition(96, 240, 24, 24);
    b11_5.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b11_5.setVisible(false);
    container1.add(b11_5);

    b10_5.setPosition(96, 216, 24, 24);
    b10_5.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b10_5.setVisible(false);
    container1.add(b10_5);

    b10_9.setPosition(192, 216, 24, 24);
    b10_9.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b10_9.setVisible(false);
    container1.add(b10_9);

    b11_9.setPosition(192, 240, 24, 24);
    b11_9.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b11_9.setVisible(false);
    container1.add(b11_9);

    b9_9.setPosition(192, 192, 24, 24);
    b9_9.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b9_9.setVisible(false);
    container1.add(b9_9);

    b8_9.setPosition(192, 168, 24, 24);
    b8_9.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b8_9.setVisible(false);
    container1.add(b8_9);

    b1_9.setPosition(192, 0, 24, 24);
    b1_9.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b1_9.setVisible(false);
    container1.add(b1_9);

    b2_9.setPosition(192, 24, 24, 24);
    b2_9.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b2_9.setVisible(false);
    container1.add(b2_9);

    b3_9.setPosition(192, 48, 24, 24);
    b3_9.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b3_9.setVisible(false);
    container1.add(b3_9);

    b6_9.setPosition(192, 120, 24, 24);
    b6_9.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b6_9.setVisible(false);
    container1.add(b6_9);

    b5_9.setPosition(192, 96, 24, 24);
    b5_9.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b5_9.setVisible(false);
    container1.add(b5_9);

    b4_9.setPosition(192, 72, 24, 24);
    b4_9.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b4_9.setVisible(false);
    container1.add(b4_9);

    b7_9.setPosition(192, 144, 24, 24);
    b7_9.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b7_9.setVisible(false);
    container1.add(b7_9);

    b7_10.setPosition(216, 144, 24, 24);
    b7_10.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b7_10.setVisible(false);
    container1.add(b7_10);

    b4_10.setPosition(216, 72, 24, 24);
    b4_10.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b4_10.setVisible(false);
    container1.add(b4_10);

    b5_10.setPosition(216, 96, 24, 24);
    b5_10.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b5_10.setVisible(false);
    container1.add(b5_10);

    b6_10.setPosition(216, 120, 24, 24);
    b6_10.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b6_10.setVisible(false);
    container1.add(b6_10);

    b3_10.setPosition(216, 48, 24, 24);
    b3_10.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b3_10.setVisible(false);
    container1.add(b3_10);

    b2_10.setPosition(216, 24, 24, 24);
    b2_10.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b2_10.setVisible(false);
    container1.add(b2_10);

    b1_10.setPosition(216, 0, 24, 24);
    b1_10.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b1_10.setVisible(false);
    container1.add(b1_10);

    b8_10.setPosition(216, 168, 24, 24);
    b8_10.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b8_10.setVisible(false);
    container1.add(b8_10);

    b9_10.setPosition(216, 192, 24, 24);
    b9_10.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b9_10.setVisible(false);
    container1.add(b9_10);

    b11_10.setPosition(216, 240, 24, 24);
    b11_10.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b11_10.setVisible(false);
    container1.add(b11_10);

    b10_10.setPosition(216, 216, 24, 24);
    b10_10.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b10_10.setVisible(false);
    container1.add(b10_10);

    b10_11.setPosition(240, 216, 24, 24);
    b10_11.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b10_11.setVisible(false);
    container1.add(b10_11);

    b11_11.setPosition(240, 240, 24, 24);
    b11_11.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b11_11.setVisible(false);
    container1.add(b11_11);

    b9_11.setPosition(240, 192, 24, 24);
    b9_11.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b9_11.setVisible(false);
    container1.add(b9_11);

    b8_11.setPosition(240, 168, 24, 24);
    b8_11.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b8_11.setVisible(false);
    container1.add(b8_11);

    b1_11.setPosition(240, 0, 24, 24);
    b1_11.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b1_11.setVisible(false);
    container1.add(b1_11);

    b2_11.setPosition(240, 24, 24, 24);
    b2_11.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b2_11.setVisible(false);
    container1.add(b2_11);

    b3_11.setPosition(240, 48, 24, 24);
    b3_11.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b3_11.setVisible(false);
    container1.add(b3_11);

    b6_11.setPosition(240, 120, 24, 24);
    b6_11.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b6_11.setVisible(false);
    container1.add(b6_11);

    b5_11.setPosition(240, 96, 24, 24);
    b5_11.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b5_11.setVisible(false);
    container1.add(b5_11);

    b4_11.setPosition(240, 72, 24, 24);
    b4_11.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b4_11.setVisible(false);
    container1.add(b4_11);

    b7_11.setPosition(240, 144, 24, 24);
    b7_11.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b7_11.setVisible(false);
    container1.add(b7_11);

    b7_12.setPosition(264, 144, 24, 24);
    b7_12.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b7_12.setVisible(false);
    container1.add(b7_12);

    b4_12.setPosition(264, 72, 24, 24);
    b4_12.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b4_12.setVisible(false);
    container1.add(b4_12);

    b5_12.setPosition(264, 96, 24, 24);
    b5_12.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b5_12.setVisible(false);
    container1.add(b5_12);

    b6_12.setPosition(264, 120, 24, 24);
    b6_12.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b6_12.setVisible(false);
    container1.add(b6_12);

    b3_12.setPosition(264, 48, 24, 24);
    b3_12.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b3_12.setVisible(false);
    container1.add(b3_12);

    b2_12.setPosition(264, 24, 24, 24);
    b2_12.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b2_12.setVisible(false);
    container1.add(b2_12);

    b1_12.setPosition(264, 0, 24, 24);
    b1_12.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b1_12.setVisible(false);
    container1.add(b1_12);

    b8_12.setPosition(264, 168, 24, 24);
    b8_12.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b8_12.setVisible(false);
    container1.add(b8_12);

    b9_12.setPosition(264, 192, 24, 24);
    b9_12.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b9_12.setVisible(false);
    container1.add(b9_12);

    b11_12.setPosition(264, 240, 24, 24);
    b11_12.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b11_12.setVisible(false);
    container1.add(b11_12);

    b10_12.setPosition(264, 216, 24, 24);
    b10_12.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b10_12.setVisible(false);
    container1.add(b10_12);

    b10_14.setPosition(312, 216, 24, 24);
    b10_14.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b10_14.setVisible(false);
    container1.add(b10_14);

    b11_14.setPosition(312, 240, 24, 24);
    b11_14.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b11_14.setVisible(false);
    container1.add(b11_14);

    b9_14.setPosition(312, 192, 24, 24);
    b9_14.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b9_14.setVisible(false);
    container1.add(b9_14);

    b8_14.setPosition(312, 168, 24, 24);
    b8_14.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b8_14.setVisible(false);
    container1.add(b8_14);

    b1_14.setPosition(312, 0, 24, 24);
    b1_14.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b1_14.setVisible(false);
    container1.add(b1_14);

    b2_14.setPosition(312, 24, 24, 24);
    b2_14.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b2_14.setVisible(false);
    container1.add(b2_14);

    b3_14.setPosition(312, 48, 24, 24);
    b3_14.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b3_14.setVisible(false);
    container1.add(b3_14);

    b6_14.setPosition(312, 120, 24, 24);
    b6_14.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b6_14.setVisible(false);
    container1.add(b6_14);

    b5_14.setPosition(312, 96, 24, 24);
    b5_14.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b5_14.setVisible(false);
    container1.add(b5_14);

    b4_14.setPosition(312, 72, 24, 24);
    b4_14.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b4_14.setVisible(false);
    container1.add(b4_14);

    b7_14.setPosition(312, 144, 24, 24);
    b7_14.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b7_14.setVisible(false);
    container1.add(b7_14);

    b7_13.setPosition(288, 144, 24, 24);
    b7_13.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b7_13.setVisible(false);
    container1.add(b7_13);

    b4_13.setPosition(288, 72, 24, 24);
    b4_13.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b4_13.setVisible(false);
    container1.add(b4_13);

    b5_13.setPosition(288, 96, 24, 24);
    b5_13.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b5_13.setVisible(false);
    container1.add(b5_13);

    b6_13.setPosition(288, 120, 24, 24);
    b6_13.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b6_13.setVisible(false);
    container1.add(b6_13);

    b3_13.setPosition(288, 48, 24, 24);
    b3_13.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b3_13.setVisible(false);
    container1.add(b3_13);

    b2_13.setPosition(288, 24, 24, 24);
    b2_13.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b2_13.setVisible(false);
    container1.add(b2_13);

    b1_13.setPosition(288, 0, 24, 24);
    b1_13.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b1_13.setVisible(false);
    container1.add(b1_13);

    b8_13.setPosition(288, 168, 24, 24);
    b8_13.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b8_13.setVisible(false);
    container1.add(b8_13);

    b9_13.setPosition(288, 192, 24, 24);
    b9_13.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b9_13.setVisible(false);
    container1.add(b9_13);

    b11_13.setPosition(288, 240, 24, 24);
    b11_13.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b11_13.setVisible(false);
    container1.add(b11_13);

    b10_13.setPosition(288, 216, 24, 24);
    b10_13.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    b10_13.setVisible(false);
    container1.add(b10_13);

    add(container1);

    start.setXY(396, 72);
    start.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUND_TINY_FILL_ACTION_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUND_TINY_FILL_ACTION_ID));
    start.setAction(buttonCallback);
    add(start);

    apple.setXY(48, 48);
    apple.setBitmap(touchgfx::Bitmap(BITMAP_APPLE_ID));
    apple.setVisible(false);
    add(apple);

    obj.setPosition(146, 122, 20, 20);
    obj.setColor(touchgfx::Color::getColorFromRGB(254, 189, 23));
    obj.setVisible(false);
    add(obj);

    rep10.setPosition(351, 39, 16, 16);
    rep10.setColor(touchgfx::Color::getColorFromRGB(158, 118, 25));
    rep10.setVisible(false);
    add(rep10);

    rep9.setPosition(335, 39, 16, 16);
    rep9.setColor(touchgfx::Color::getColorFromRGB(158, 118, 25));
    rep9.setVisible(false);
    add(rep9);

    rep8.setPosition(383, 23, 16, 16);
    rep8.setColor(touchgfx::Color::getColorFromRGB(158, 118, 25));
    rep8.setVisible(false);
    add(rep8);

    rep7.setPosition(367, 23, 16, 16);
    rep7.setColor(touchgfx::Color::getColorFromRGB(158, 118, 25));
    rep7.setVisible(false);
    add(rep7);

    rep6.setPosition(351, 23, 16, 16);
    rep6.setColor(touchgfx::Color::getColorFromRGB(158, 118, 25));
    rep6.setVisible(false);
    add(rep6);

    rep5.setPosition(335, 23, 16, 16);
    rep5.setColor(touchgfx::Color::getColorFromRGB(158, 118, 25));
    rep5.setVisible(false);
    add(rep5);

    rep4.setPosition(383, 7, 16, 16);
    rep4.setColor(touchgfx::Color::getColorFromRGB(158, 118, 25));
    rep4.setVisible(false);
    add(rep4);

    rep3.setPosition(367, 7, 16, 16);
    rep3.setColor(touchgfx::Color::getColorFromRGB(158, 118, 25));
    rep3.setVisible(false);
    add(rep3);

    rep2.setPosition(351, 7, 16, 16);
    rep2.setColor(touchgfx::Color::getColorFromRGB(158, 118, 25));
    rep2.setVisible(false);
    add(rep2);

    rep1.setPosition(335, 7, 16, 16);
    rep1.setColor(touchgfx::Color::getColorFromRGB(158, 118, 25));
    rep1.setVisible(false);
    add(rep1);
}

KacaViewBase::~KacaViewBase()
{

}

void KacaViewBase::setupScreen()
{

}

void KacaViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonWithIcon1)
    {
        //goHome
        //When buttonWithIcon1 clicked change screen to Kaca_naslovnica
        //Go to Kaca_naslovnica with block transition
        application().gotoKaca_naslovnicaScreenBlockTransition();
    }
    if (&src == &start)
    {
        //Interaction1
        //When start clicked call virtual function
        //Call drawMaze
        drawMaze();
    }
    if (&src == &buttonU)
    {
        //goU
        //When buttonU clicked call virtual function
        //Call goU
        goU();
    }
    if (&src == &buttonR)
    {
        //goR
        //When buttonR clicked call virtual function
        //Call goR
        goR();
    }
    if (&src == &buttonD)
    {
        //goD
        //When buttonD clicked call virtual function
        //Call goD
        goD();
    }
    if (&src == &buttonL)
    {
        //goL
        //When buttonL clicked call virtual function
        //Call goL
        goL();
    }
}
