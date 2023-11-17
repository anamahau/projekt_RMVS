#include <gui/kaca_screen/KacaView.hpp>
#include <touchgfx/Color.hpp>
#include <stdio.h>
#include <stdlib.h>

KacaView::KacaView()
{

}

void KacaView::setupScreen()
{
    KacaViewBase::setupScreen();
}

void KacaView::tearDownScreen()
{
    KacaViewBase::tearDownScreen();
}

void KacaView::drawMaze()
{
	obj.setVisible(true);
	obj.invalidate();
	for (x = 0; x < 11; x++)
	{
		for (y = 0; y < 14; y++)
		{
			if (maze[x][y] == 1)
			{
//				xC = x;
//				yC = y;
//				name[1] = xC;
//				name[3] = yC;

				if(x == 0 and y == 0){b1_1.setVisible(true);b1_1.invalidate();}
				else if(x == 0 and y == 1){b1_2.setVisible(true);b1_2.invalidate();}
				else if(x == 0 and y == 2){b1_3.setVisible(true);b1_3.invalidate();}
				else if(x == 0 and y == 3){b1_4.setVisible(true);b1_4.invalidate();}
				else if(x == 0 and y == 4){b1_5.setVisible(true);b1_5.invalidate();}
				else if(x == 0 and y == 5){b1_6.setVisible(true);b1_6.invalidate();}
				else if(x == 0 and y == 6){b1_7.setVisible(true);b1_7.invalidate();}
				else if(x == 0 and y == 7){b1_8.setVisible(true);b1_8.invalidate();}
				else if(x == 0 and y == 8){b1_9.setVisible(true);b1_9.invalidate();}
				else if(x == 0 and y == 9){b1_10.setVisible(true);b1_10.invalidate();}
				else if(x == 0 and y == 10){b1_11.setVisible(true);b1_11.invalidate();}
				else if(x == 0 and y == 11){b1_12.setVisible(true);b1_12.invalidate();}
				else if(x == 0 and y == 12){b1_13.setVisible(true);b1_13.invalidate();}
				else if(x == 0 and y == 13){b1_14.setVisible(true);b1_14.invalidate();}

				else if(x == 1 and y == 0){b2_1.setVisible(true);b2_1.invalidate();}
				else if(x == 1 and y == 1){b2_2.setVisible(true);b2_2.invalidate();}
				else if(x == 1 and y == 2){b2_3.setVisible(true);b2_3.invalidate();}
				else if(x == 1 and y == 3){b2_4.setVisible(true);b2_4.invalidate();}
				else if(x == 1 and y == 4){b2_5.setVisible(true);b2_5.invalidate();}
				else if(x == 1 and y == 5){b2_6.setVisible(true);b2_6.invalidate();}
				else if(x == 1 and y == 6){b2_7.setVisible(true);b2_7.invalidate();}
				else if(x == 1 and y == 7){b2_8.setVisible(true);b2_8.invalidate();}
				else if(x == 1 and y == 8){b2_9.setVisible(true);b2_9.invalidate();}
				else if(x == 1 and y == 9){b2_10.setVisible(true);b2_10.invalidate();}
				else if(x == 1 and y == 10){b2_11.setVisible(true);b2_11.invalidate();}
				else if(x == 1 and y == 11){b2_12.setVisible(true);b2_12.invalidate();}
				else if(x == 1 and y == 12){b2_13.setVisible(true);b2_13.invalidate();}
				else if(x == 1 and y == 13){b2_14.setVisible(true);b2_14.invalidate();}

				else if(x == 2 and y == 0){b3_1.setVisible(true);b3_1.invalidate();}
				else if(x == 2 and y == 1){b3_2.setVisible(true);b3_2.invalidate();}
				else if(x == 2 and y == 2){b3_3.setVisible(true);b3_3.invalidate();}
				else if(x == 2 and y == 3){b3_4.setVisible(true);b3_4.invalidate();}
				else if(x == 2 and y == 4){b3_5.setVisible(true);b3_5.invalidate();}
				else if(x == 2 and y == 5){b3_6.setVisible(true);b3_6.invalidate();}
				else if(x == 2 and y == 6){b3_7.setVisible(true);b3_7.invalidate();}
				else if(x == 2 and y == 7){b3_8.setVisible(true);b3_8.invalidate();}
				else if(x == 2 and y == 8){b3_9.setVisible(true);b3_9.invalidate();}
				else if(x == 2 and y == 9){b3_10.setVisible(true);b3_10.invalidate();}
				else if(x == 2 and y == 10){b3_11.setVisible(true);b3_11.invalidate();}
				else if(x == 2 and y == 11){b3_12.setVisible(true);b3_12.invalidate();}
				else if(x == 2 and y == 12){b3_13.setVisible(true);b3_13.invalidate();}
				else if(x == 2 and y == 13){b3_14.setVisible(true);b3_14.invalidate();}

				else if(x == 3 and y == 0){b4_1.setVisible(true);b4_1.invalidate();}
				else if(x == 3 and y == 1){b4_2.setVisible(true);b4_2.invalidate();}
				else if(x == 3 and y == 2){b4_3.setVisible(true);b4_3.invalidate();}
				else if(x == 3 and y == 3){b4_4.setVisible(true);b4_4.invalidate();}
				else if(x == 3 and y == 4){b4_5.setVisible(true);b4_5.invalidate();}
				else if(x == 3 and y == 5){b4_6.setVisible(true);b4_6.invalidate();}
				else if(x == 3 and y == 6){b4_7.setVisible(true);b4_7.invalidate();}
				else if(x == 3 and y == 7){b4_8.setVisible(true);b4_8.invalidate();}
				else if(x == 3 and y == 8){b4_9.setVisible(true);b4_9.invalidate();}
				else if(x == 3 and y == 9){b4_10.setVisible(true);b4_10.invalidate();}
				else if(x == 3 and y == 10){b4_11.setVisible(true);b4_11.invalidate();}
				else if(x == 3 and y == 11){b4_12.setVisible(true);b4_12.invalidate();}
				else if(x == 3 and y == 12){b4_13.setVisible(true);b4_13.invalidate();}
				else if(x == 3 and y == 13){b4_14.setVisible(true);b4_14.invalidate();}

				else if(x == 4 and y == 0){b5_1.setVisible(true);b5_1.invalidate();}
				else if(x == 4 and y == 1){b5_2.setVisible(true);b5_2.invalidate();}
				else if(x == 4 and y == 2){b5_3.setVisible(true);b5_3.invalidate();}
				else if(x == 4 and y == 3){b5_4.setVisible(true);b5_4.invalidate();}
				else if(x == 4 and y == 4){b5_5.setVisible(true);b5_5.invalidate();}
				else if(x == 4 and y == 5){b5_6.setVisible(true);b5_6.invalidate();}
				else if(x == 4 and y == 6){b5_7.setVisible(true);b5_7.invalidate();}
				else if(x == 4 and y == 7){b5_8.setVisible(true);b5_8.invalidate();}
				else if(x == 4 and y == 8){b5_9.setVisible(true);b5_9.invalidate();}
				else if(x == 4 and y == 9){b5_10.setVisible(true);b5_10.invalidate();}
				else if(x == 4 and y == 10){b5_11.setVisible(true);b5_11.invalidate();}
				else if(x == 4 and y == 11){b5_12.setVisible(true);b5_12.invalidate();}
				else if(x == 4 and y == 12){b5_13.setVisible(true);b5_13.invalidate();}
				else if(x == 4 and y == 13){b5_14.setVisible(true);b5_14.invalidate();}

				else if(x == 5 and y == 0){b6_1.setVisible(true);b6_1.invalidate();}
				else if(x == 5 and y == 1){b6_2.setVisible(true);b6_2.invalidate();}
				else if(x == 5 and y == 2){b6_3.setVisible(true);b6_3.invalidate();}
				else if(x == 5 and y == 3){b6_4.setVisible(true);b6_4.invalidate();}
				else if(x == 5 and y == 4){b6_5.setVisible(true);b6_5.invalidate();}
				else if(x == 5 and y == 5){b6_6.setVisible(true);b6_6.invalidate();}
				else if(x == 5 and y == 6){b6_7.setVisible(true);b6_7.invalidate();}
				else if(x == 5 and y == 7){b6_8.setVisible(true);b6_8.invalidate();}
				else if(x == 5 and y == 8){b6_9.setVisible(true);b6_9.invalidate();}
				else if(x == 5 and y == 9){b6_10.setVisible(true);b6_10.invalidate();}
				else if(x == 5 and y == 10){b6_11.setVisible(true);b6_11.invalidate();}
				else if(x == 5 and y == 11){b6_12.setVisible(true);b6_12.invalidate();}
				else if(x == 5 and y == 12){b6_13.setVisible(true);b6_13.invalidate();}
				else if(x == 5 and y == 13){b6_14.setVisible(true);b6_14.invalidate();}

				else if(x == 6 and y == 0){b7_1.setVisible(true);b7_1.invalidate();}
				else if(x == 6 and y == 1){b7_2.setVisible(true);b7_2.invalidate();}
				else if(x == 6 and y == 2){b7_3.setVisible(true);b7_3.invalidate();}
				else if(x == 6 and y == 3){b7_4.setVisible(true);b7_4.invalidate();}
				else if(x == 6 and y == 4){b7_5.setVisible(true);b7_5.invalidate();}
				else if(x == 6 and y == 5){b7_6.setVisible(true);b7_6.invalidate();}
				else if(x == 6 and y == 6){b7_7.setVisible(true);b7_7.invalidate();}
				else if(x == 6 and y == 7){b7_8.setVisible(true);b7_8.invalidate();}
				else if(x == 6 and y == 8){b7_9.setVisible(true);b7_9.invalidate();}
				else if(x == 6 and y == 9){b7_10.setVisible(true);b7_10.invalidate();}
				else if(x == 6 and y == 10){b7_11.setVisible(true);b7_11.invalidate();}
				else if(x == 6 and y == 11){b7_12.setVisible(true);b7_12.invalidate();}
				else if(x == 6 and y == 12){b7_13.setVisible(true);b7_13.invalidate();}
				else if(x == 6 and y == 13){b7_14.setVisible(true);b7_14.invalidate();}

				else if(x == 7 and y == 0){b8_1.setVisible(true);b8_1.invalidate();}
				else if(x == 7 and y == 1){b8_2.setVisible(true);b8_2.invalidate();}
				else if(x == 7 and y == 2){b8_3.setVisible(true);b8_3.invalidate();}
				else if(x == 7 and y == 3){b8_4.setVisible(true);b8_4.invalidate();}
				else if(x == 7 and y == 4){b8_5.setVisible(true);b8_5.invalidate();}
				else if(x == 7 and y == 5){b8_6.setVisible(true);b8_6.invalidate();}
				else if(x == 7 and y == 6){b8_7.setVisible(true);b8_7.invalidate();}
				else if(x == 7 and y == 7){b8_8.setVisible(true);b8_8.invalidate();}
				else if(x == 7 and y == 8){b8_9.setVisible(true);b8_9.invalidate();}
				else if(x == 7 and y == 9){b8_10.setVisible(true);b8_10.invalidate();}
				else if(x == 7 and y == 10){b8_11.setVisible(true);b8_11.invalidate();}
				else if(x == 7 and y == 11){b8_12.setVisible(true);b8_12.invalidate();}
				else if(x == 7 and y == 12){b8_13.setVisible(true);b8_13.invalidate();}
				else if(x == 7 and y == 13){b8_14.setVisible(true);b8_14.invalidate();}

				else if(x == 8 and y == 0){b9_1.setVisible(true);b9_1.invalidate();}
				else if(x == 8 and y == 1){b9_2.setVisible(true);b9_2.invalidate();}
				else if(x == 8 and y == 2){b9_3.setVisible(true);b9_3.invalidate();}
				else if(x == 8 and y == 3){b9_4.setVisible(true);b9_4.invalidate();}
				else if(x == 8 and y == 4){b9_5.setVisible(true);b9_5.invalidate();}
				else if(x == 8 and y == 5){b9_6.setVisible(true);b9_6.invalidate();}
				else if(x == 8 and y == 6){b9_7.setVisible(true);b9_7.invalidate();}
				else if(x == 8 and y == 7){b9_8.setVisible(true);b9_8.invalidate();}
				else if(x == 8 and y == 8){b9_9.setVisible(true);b9_9.invalidate();}
				else if(x == 8 and y == 9){b9_10.setVisible(true);b9_10.invalidate();}
				else if(x == 8 and y == 10){b9_11.setVisible(true);b9_11.invalidate();}
				else if(x == 8 and y == 11){b9_12.setVisible(true);b9_12.invalidate();}
				else if(x == 8 and y == 12){b9_13.setVisible(true);b9_13.invalidate();}
				else if(x == 8 and y == 13){b9_14.setVisible(true);b9_14.invalidate();}

				else if(x == 9 and y == 0){b10_1.setVisible(true);b10_1.invalidate();}
				else if(x == 9 and y == 1){b10_2.setVisible(true);b10_2.invalidate();}
				else if(x == 9 and y == 2){b10_3.setVisible(true);b10_3.invalidate();}
				else if(x == 9 and y == 3){b10_4.setVisible(true);b10_4.invalidate();}
				else if(x == 9 and y == 4){b10_5.setVisible(true);b10_5.invalidate();}
				else if(x == 9 and y == 5){b10_6.setVisible(true);b10_6.invalidate();}
				else if(x == 9 and y == 6){b10_7.setVisible(true);b10_7.invalidate();}
				else if(x == 9 and y == 7){b10_8.setVisible(true);b10_8.invalidate();}
				else if(x == 9 and y == 8){b10_9.setVisible(true);b10_9.invalidate();}
				else if(x == 9 and y == 9){b10_10.setVisible(true);b10_10.invalidate();}
				else if(x == 9 and y == 10){b10_11.setVisible(true);b10_11.invalidate();}
				else if(x == 9 and y == 11){b10_12.setVisible(true);b10_12.invalidate();}
				else if(x == 9 and y == 12){b10_13.setVisible(true);b10_13.invalidate();}
				else if(x == 9 and y == 13){b10_14.setVisible(true);b10_14.invalidate();}

				else if(x == 10 and y == 0){b11_1.setVisible(true);b11_1.invalidate();}
				else if(x == 10 and y == 1){b11_2.setVisible(true);b11_2.invalidate();}
				else if(x == 10 and y == 2){b11_3.setVisible(true);b11_3.invalidate();}
				else if(x == 10 and y == 3){b11_4.setVisible(true);b11_4.invalidate();}
				else if(x == 10 and y == 4){b11_5.setVisible(true);b11_5.invalidate();}
				else if(x == 10 and y == 5){b11_6.setVisible(true);b11_6.invalidate();}
				else if(x == 10 and y == 6){b11_7.setVisible(true);b11_7.invalidate();}
				else if(x == 10 and y == 7){b11_8.setVisible(true);b11_8.invalidate();}
				else if(x == 10 and y == 8){b11_9.setVisible(true);b11_9.invalidate();}
				else if(x == 10 and y == 9){b11_10.setVisible(true);b11_10.invalidate();}
				else if(x == 10 and y == 10){b11_11.setVisible(true);b11_11.invalidate();}
				else if(x == 10 and y == 11){b11_12.setVisible(true);b11_12.invalidate();}
				else if(x == 10 and y == 12){b11_13.setVisible(true);b11_13.invalidate();}
				else if(x == 10 and y == 13){b11_14.setVisible(true);b11_14.invalidate();}
			}
		}
	}
	apple.moveTo(48, 48);
	apple.setVisible(true);
	apple.invalidate();
	aX = 2;
	aY = 2;
	length = 0;
}

void KacaView::goU()
{
	objX = obj.getX();
	objXc = (objX-2) / 24;
	objY = obj.getY();
	objYc = (objY-2) / 24;
	if(objXc == aX and objYc-1 == aY)
	{
		aX = getPose(w);
		aY = getPose(h);
		while(checkApplePose(aX, aY))
		{
			aX = getPose(w);
			aY = getPose(h);
		}
		apple.moveTo(aX*24, aY*24);
		length++;
		showFulSnake();
	}
	if(checkCrash('u'))
	{
		deleteSnake();
	}
	if(objYc > 0)
	{
		if(maze[objYc-1][objXc] == 0)
		{
			obj.moveRelative(0, -24);
		}
	}
	savePose(objXc, objYc-1);
	moveFulSnake();
}

void KacaView::goR()
{
	objX = obj.getX();
	objXc = (objX-2) / 24;
	objY = obj.getY();
	objYc = (objY-2) / 24;
	if(objXc+1 == aX and objYc == aY)
	{
		aX = getPose(w);
		aY = getPose(h);
		while(checkApplePose(aX, aY))
		{
			aX = getPose(w);
			aY = getPose(h);
		}
		apple.moveTo(aX*24, aY*24);
		length++;
		showFulSnake();
	}
	if(checkCrash('r'))
	{
		deleteSnake();
	}
	if(objXc < 14)
	{
		if(maze[objYc][objXc+1] == 0)
		{
			obj.moveRelative(24, 0);
		}
	}
	savePose(objXc+1, objYc);
	moveFulSnake();
}

void KacaView::goD()
{
	objX = obj.getX();
	objXc = (objX-2) / 24;
	objY = obj.getY();
	objYc = (objY-2) / 24;
	if(objXc == aX and objYc+1 == aY)
	{
		aX = getPose(w);
		aY = getPose(h);
		while(checkApplePose(aX, aY))
		{
			aX = getPose(w);
			aY = getPose(h);
		}
		apple.moveTo(aX*24, aY*24);
		length++;
		showFulSnake();
	}
	if(checkCrash('d'))
	{
		deleteSnake();
	}
	if(objYc < 11)
	{
		if(maze[objYc+1][objXc] == 0)
		{
			obj.moveRelative(0, 24);
		}
	}
	savePose(objXc, objYc+1);
	moveFulSnake();
}

void KacaView::goL()
{
	objX = obj.getX();
	objXc = (objX-2) / 24;
	objY = obj.getY();
	objYc = (objY-2) / 24;
	if(objXc-1 == aX and objYc == aY)
	{
		aX = getPose(w);
		aY = getPose(h);
		while(checkApplePose(aX, aY))
		{
			aX = getPose(w);
			aY = getPose(h);
		}
		apple.moveTo(aX*24, aY*24);
		length++;
		showFulSnake();
	}
	if(checkCrash('l'))
	{
		deleteSnake();
	}
	if(objXc > 0)
	{
		if(maze[objYc][objXc-1] == 0)
		{
			obj.moveRelative(-24, 0);
		}
	}
	savePose(objXc-1, objYc);
	moveFulSnake();
}

int KacaView::getPose(int max)
{
	return rand() % (max - 1 + 1) + 1;
}

bool KacaView::checkApplePose(int newAx, int newAy)
{
	for(cc = 1; cc < 12; cc++)
	{
		if(track[cc][1] == newAx or track[cc][0] == newAy)
		{
			return 1;
		}
	}
	return 0;
}

void KacaView::savePose(int newX, int newY)
{
	for(p = 10; p > 0; p--)
	{
		track[p][0] = track[p-1][0];
		track[p][1] = track[p-1][1];
	}
	track[0][0] = newY;
	track[0][1] = newX;
}

void KacaView::showFulSnake()
{
	switch(length)
	{
		case 1:
			rep1.setVisible(true);
			rep1.invalidate();
			break;
		case 2:
			rep2.setVisible(true);
			rep2.invalidate();
			break;
		case 3:
			rep3.setVisible(true);
			rep3.invalidate();
			break;
		case 4:
			rep4.setVisible(true);
			rep4.invalidate();
			break;
		case 5:
			rep5.setVisible(true);
			rep5.invalidate();
			break;
		case 6:
			rep6.setVisible(true);
			rep6.invalidate();
			break;
		case 7:
			rep7.setVisible(true);
			rep7.invalidate();
			break;
		case 8:
			rep8.setVisible(true);
			rep8.invalidate();
			break;
		case 9:
			rep9.setVisible(true);
			rep9.invalidate();
			break;
		case 10:
			rep10.setVisible(true);
			rep10.invalidate();
			break;
	}
}

void KacaView::moveFulSnake()
{
	if(length == 1)
	{
		rep1.moveTo(track[1][1]*24+4, track[1][0]*24+4);
	}
	else if(length == 2)
	{
		rep1.moveTo(track[1][1]*24+4, track[1][0]*24+4);
		rep2.moveTo(track[2][1]*24+4, track[2][0]*24+4);
	}
	else if(length == 3)
	{
		rep1.moveTo(track[1][1]*24+4, track[1][0]*24+4);
		rep2.moveTo(track[2][1]*24+4, track[2][0]*24+4);
		rep3.moveTo(track[3][1]*24+4, track[3][0]*24+4);
	}
	else if(length == 4)
	{
		rep1.moveTo(track[1][1]*24+4, track[1][0]*24+4);
		rep2.moveTo(track[2][1]*24+4, track[2][0]*24+4);
		rep3.moveTo(track[3][1]*24+4, track[3][0]*24+4);
		rep4.moveTo(track[4][1]*24+4, track[4][0]*24+4);
	}
	else if(length == 5)
	{
		rep1.moveTo(track[1][1]*24+4, track[1][0]*24+4);
		rep2.moveTo(track[2][1]*24+4, track[2][0]*24+4);
		rep3.moveTo(track[3][1]*24+4, track[3][0]*24+4);
		rep4.moveTo(track[4][1]*24+4, track[4][0]*24+4);
		rep5.moveTo(track[5][1]*24+4, track[5][0]*24+4);
	}
	else if(length == 6)
	{
		rep1.moveTo(track[1][1]*24+4, track[1][0]*24+4);
		rep2.moveTo(track[2][1]*24+4, track[2][0]*24+4);
		rep3.moveTo(track[3][1]*24+4, track[3][0]*24+4);
		rep4.moveTo(track[4][1]*24+4, track[4][0]*24+4);
		rep5.moveTo(track[5][1]*24+4, track[5][0]*24+4);
		rep6.moveTo(track[6][1]*24+4, track[6][0]*24+4);
	}
	else if(length == 7)
	{
		rep1.moveTo(track[1][1]*24+4, track[1][0]*24+4);
		rep2.moveTo(track[2][1]*24+4, track[2][0]*24+4);
		rep3.moveTo(track[3][1]*24+4, track[3][0]*24+4);
		rep4.moveTo(track[4][1]*24+4, track[4][0]*24+4);
		rep5.moveTo(track[5][1]*24+4, track[5][0]*24+4);
		rep6.moveTo(track[6][1]*24+4, track[6][0]*24+4);
		rep7.moveTo(track[7][1]*24+4, track[7][0]*24+4);
	}
	else if(length == 8)
	{
		rep1.moveTo(track[1][1]*24+4, track[1][0]*24+4);
		rep2.moveTo(track[2][1]*24+4, track[2][0]*24+4);
		rep3.moveTo(track[3][1]*24+4, track[3][0]*24+4);
		rep4.moveTo(track[4][1]*24+4, track[4][0]*24+4);
		rep5.moveTo(track[5][1]*24+4, track[5][0]*24+4);
		rep6.moveTo(track[6][1]*24+4, track[6][0]*24+4);
		rep7.moveTo(track[7][1]*24+4, track[7][0]*24+4);
		rep8.moveTo(track[8][1]*24+4, track[8][0]*24+4);
	}
	else if(length == 9)
	{
		rep1.moveTo(track[1][1]*24+4, track[1][0]*24+4);
		rep2.moveTo(track[2][1]*24+4, track[2][0]*24+4);
		rep3.moveTo(track[3][1]*24+4, track[3][0]*24+4);
		rep4.moveTo(track[4][1]*24+4, track[4][0]*24+4);
		rep5.moveTo(track[5][1]*24+4, track[5][0]*24+4);
		rep6.moveTo(track[6][1]*24+4, track[6][0]*24+4);
		rep7.moveTo(track[7][1]*24+4, track[7][0]*24+4);
		rep8.moveTo(track[8][1]*24+4, track[8][0]*24+4);
		rep9.moveTo(track[9][1]*24+4, track[9][0]*24+4);
	}
	else if(length >= 10)
	{
		rep1.moveTo(track[1][1]*24+4, track[1][0]*24+4);
		rep2.moveTo(track[2][1]*24+4, track[2][0]*24+4);
		rep3.moveTo(track[3][1]*24+4, track[3][0]*24+4);
		rep4.moveTo(track[4][1]*24+4, track[4][0]*24+4);
		rep5.moveTo(track[5][1]*24+4, track[5][0]*24+4);
		rep6.moveTo(track[6][1]*24+4, track[6][0]*24+4);
		rep7.moveTo(track[7][1]*24+4, track[7][0]*24+4);
		rep8.moveTo(track[8][1]*24+4, track[8][0]*24+4);
		rep9.moveTo(track[9][1]*24+4, track[9][0]*24+4);
		rep10.moveTo(track[10][1]*24+4, track[10][0]*24+4);
	}
}

bool KacaView::checkCrash(char dirC)
{
	if(dirC == 'u')
	{
		for(cc = 1; cc < 12; cc++)
		{
			if(track[cc][1] == objXc and track[cc][0] == objYc-1)
			{
				return 1;
			}
		}
		if(objYc == 1)
		{
			return 1;
		}
	}
	else if(dirC == 'r')
	{
		for(cc = 1; cc < 12; cc++)
		{
			if(track[cc][1] == objXc+1 and track[cc][0] == objYc)
			{
				return 1;
			}
		}
		if(objXc == 12)
		{
			return 1;
		}
	}
	else if(dirC == 'd')
	{
		for(cc = 1; cc < 12; cc++)
		{
			if(track[cc][1] == objXc and track[cc][0] == objYc+1)
			{
				return 1;
			}
		}
		if(objYc == 9)
		{
			return 1;
		}
	}
	else if(dirC == 'l')
	{
		for(cc = 1; cc < 12; cc++)
		{
			if(track[cc][1] == objXc-1 and track[cc][0] == objYc)
			{
				return 1;
			}
		}
		if(objXc == 1)
		{
			return 1;
		}
	}
	return 0;
}

void KacaView::deleteSnake()
{
	rep1.setVisible(false); rep1.invalidate();
	rep2.setVisible(false); rep2.invalidate();
	rep3.setVisible(false); rep3.invalidate();
	rep4.setVisible(false); rep4.invalidate();
	rep5.setVisible(false); rep5.invalidate();
	rep6.setVisible(false); rep6.invalidate();
	rep7.setVisible(false); rep7.invalidate();
	rep8.setVisible(false); rep8.invalidate();
	rep9.setVisible(false); rep9.invalidate();
	rep10.setVisible(false); rep10.invalidate();
	length = 0;
}
