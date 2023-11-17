#ifndef KACAVIEW_HPP
#define KACAVIEW_HPP

#include <gui_generated/kaca_screen/KacaViewBase.hpp>
#include <gui/kaca_screen/KacaPresenter.hpp>

class KacaView : public KacaViewBase
{
public:
    KacaView();
    virtual ~KacaView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void drawMaze();
    virtual void goU();
    virtual void goR();
    virtual void goD();
    virtual void goL();
    virtual int getPose(int max);
    virtual bool checkApplePose(int newAx, int newAy);
    virtual void savePose(int newX, int newY);
    virtual void showFulSnake();
    virtual void moveFulSnake();
    virtual bool checkCrash(char dirC);
    virtual void deleteSnake();
protected:
    int maze[11][14] = {{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        				{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    					{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    					{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    					{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    					{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    					{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    					{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    					{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    					{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    					{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};
	int x;
	int y;
	char name[4] = {'b', 'x', '_', 'y'};
	char xC;
	char yC;
	int objX;
	int objY;
	int objXc;
	int objYc;
	int c;
	int aX;
	int aY;
	int pose;
	int w = 12;
	int h = 9;
	int length;
	int track[11][2] = {{0, 0},
						{0, 0},
						{0, 0},
						{0, 0},
						{0, 0},
						{0, 0},
						{0, 0},
						{0, 0},
						{0, 0},
						{0, 0},
						{0, 0}};
	int p;
	int cc;
};

#endif // KACAVIEW_HPP
