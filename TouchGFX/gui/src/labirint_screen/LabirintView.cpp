#include <gui/labirint_screen/LabirintView.hpp>
#include <touchgfx/Color.hpp>
#include <stdio.h>
#include <stdlib.h>

LabirintView::LabirintView()
{

}

void LabirintView::setupScreen()
{
    LabirintViewBase::setupScreen();
}

void LabirintView::tearDownScreen()
{
    LabirintViewBase::tearDownScreen();
}

void LabirintView::drawMaze()
{
	mazeC = (mazeC+1) % 3;

	b1_1.setVisible(false);b1_1.invalidate();
	b1_2.setVisible(false);b1_2.invalidate();
	b1_3.setVisible(false);b1_3.invalidate();
	b1_4.setVisible(false);b1_4.invalidate();
	b1_5.setVisible(false);b1_5.invalidate();
	b1_6.setVisible(false);b1_6.invalidate();
	b1_7.setVisible(false);b1_7.invalidate();
	b1_8.setVisible(false);b1_8.invalidate();
	b1_9.setVisible(false);b1_9.invalidate();
	b1_10.setVisible(false);b1_10.invalidate();
	b1_11.setVisible(false);b1_11.invalidate();
	b1_12.setVisible(false);b1_12.invalidate();
	b1_13.setVisible(false);b1_13.invalidate();
	b1_14.setVisible(false);b1_14.invalidate();

	b2_1.setVisible(false);b2_1.invalidate();
	b2_2.setVisible(false);b2_2.invalidate();
	b2_3.setVisible(false);b2_3.invalidate();
	b2_4.setVisible(false);b2_4.invalidate();
	b2_5.setVisible(false);b2_5.invalidate();
	b2_6.setVisible(false);b2_6.invalidate();
	b2_7.setVisible(false);b2_7.invalidate();
	b2_8.setVisible(false);b2_8.invalidate();
	b2_9.setVisible(false);b2_9.invalidate();
	b2_10.setVisible(false);b2_10.invalidate();
	b2_11.setVisible(false);b2_11.invalidate();
	b2_12.setVisible(false);b2_12.invalidate();
	b2_13.setVisible(false);b2_13.invalidate();
	b2_14.setVisible(false);b2_14.invalidate();

	b3_1.setVisible(false);b3_1.invalidate();
	b3_2.setVisible(false);b3_2.invalidate();
	b3_3.setVisible(false);b3_3.invalidate();
	b3_4.setVisible(false);b3_4.invalidate();
	b3_5.setVisible(false);b3_5.invalidate();
	b3_6.setVisible(false);b3_6.invalidate();
	b3_7.setVisible(false);b3_7.invalidate();
	b3_8.setVisible(false);b3_8.invalidate();
	b3_9.setVisible(false);b3_9.invalidate();
	b3_10.setVisible(false);b3_10.invalidate();
	b3_11.setVisible(false);b3_11.invalidate();
	b3_12.setVisible(false);b3_12.invalidate();
	b3_13.setVisible(false);b3_13.invalidate();
	b3_14.setVisible(false);b3_14.invalidate();

	b4_1.setVisible(false);b4_1.invalidate();
	b4_2.setVisible(false);b4_2.invalidate();
	b4_3.setVisible(false);b4_3.invalidate();
	b4_4.setVisible(false);b4_4.invalidate();
	b4_5.setVisible(false);b4_5.invalidate();
	b4_6.setVisible(false);b4_6.invalidate();
	b4_7.setVisible(false);b4_7.invalidate();
	b4_8.setVisible(false);b4_8.invalidate();
	b4_9.setVisible(false);b4_9.invalidate();
	b4_10.setVisible(false);b4_10.invalidate();
	b4_11.setVisible(false);b4_11.invalidate();
	b4_12.setVisible(false);b4_12.invalidate();
	b4_13.setVisible(false);b4_13.invalidate();
	b4_14.setVisible(false);b4_14.invalidate();

	b5_1.setVisible(false);b5_1.invalidate();
	b5_2.setVisible(false);b5_2.invalidate();
	b5_3.setVisible(false);b5_3.invalidate();
	b5_4.setVisible(false);b5_4.invalidate();
	b5_5.setVisible(false);b5_5.invalidate();
	b5_6.setVisible(false);b5_6.invalidate();
	b5_7.setVisible(false);b5_7.invalidate();
	b5_8.setVisible(false);b5_8.invalidate();
	b5_9.setVisible(false);b5_9.invalidate();
	b5_10.setVisible(false);b5_10.invalidate();
	b5_11.setVisible(false);b5_11.invalidate();
	b5_12.setVisible(false);b5_12.invalidate();
	b5_13.setVisible(false);b5_13.invalidate();
	b5_14.setVisible(false);b5_14.invalidate();

	b6_1.setVisible(false);b6_1.invalidate();
	b6_2.setVisible(false);b6_2.invalidate();
	b6_3.setVisible(false);b6_3.invalidate();
	b6_4.setVisible(false);b6_4.invalidate();
	b6_5.setVisible(false);b6_5.invalidate();
	b6_6.setVisible(false);b6_6.invalidate();
	b6_7.setVisible(false);b6_7.invalidate();
	b6_8.setVisible(false);b6_8.invalidate();
	b6_9.setVisible(false);b6_9.invalidate();
	b6_10.setVisible(false);b6_10.invalidate();
	b6_11.setVisible(false);b6_11.invalidate();
	b6_12.setVisible(false);b6_12.invalidate();
	b6_13.setVisible(false);b6_13.invalidate();
	b6_14.setVisible(false);b6_14.invalidate();

	b7_1.setVisible(false);b7_1.invalidate();
	b7_2.setVisible(false);b7_2.invalidate();
	b7_3.setVisible(false);b7_3.invalidate();
	b7_4.setVisible(false);b7_4.invalidate();
	b7_5.setVisible(false);b7_5.invalidate();
	b7_6.setVisible(false);b7_6.invalidate();
	b7_7.setVisible(false);b7_7.invalidate();
	b7_8.setVisible(false);b7_8.invalidate();
	b7_9.setVisible(false);b7_9.invalidate();
	b7_10.setVisible(false);b7_10.invalidate();
	b7_11.setVisible(false);b7_11.invalidate();
	b7_12.setVisible(false);b7_12.invalidate();
	b7_13.setVisible(false);b7_13.invalidate();
	b7_14.setVisible(false);b7_14.invalidate();

	b8_1.setVisible(false);b8_1.invalidate();
	b8_2.setVisible(false);b8_2.invalidate();
	b8_3.setVisible(false);b8_3.invalidate();
	b8_4.setVisible(false);b8_4.invalidate();
	b8_5.setVisible(false);b8_5.invalidate();
	b8_6.setVisible(false);b8_6.invalidate();
	b8_7.setVisible(false);b8_7.invalidate();
	b8_8.setVisible(false);b8_8.invalidate();
	b8_9.setVisible(false);b8_9.invalidate();
	b8_10.setVisible(false);b8_10.invalidate();
	b8_11.setVisible(false);b8_11.invalidate();
	b8_12.setVisible(false);b8_12.invalidate();
	b8_13.setVisible(false);b8_13.invalidate();
	b8_14.setVisible(false);b8_14.invalidate();

	b9_1.setVisible(false);b9_1.invalidate();
	b9_2.setVisible(false);b9_2.invalidate();
	b9_3.setVisible(false);b9_3.invalidate();
	b9_4.setVisible(false);b9_4.invalidate();
	b9_5.setVisible(false);b9_5.invalidate();
	b9_6.setVisible(false);b9_6.invalidate();
	b9_7.setVisible(false);b9_7.invalidate();
	b9_8.setVisible(false);b9_8.invalidate();
	b9_9.setVisible(false);b9_9.invalidate();
	b9_10.setVisible(false);b9_10.invalidate();
	b9_11.setVisible(false);b9_11.invalidate();
	b9_12.setVisible(false);b9_12.invalidate();
	b9_13.setVisible(false);b9_13.invalidate();
	b9_14.setVisible(false);b9_14.invalidate();

	b10_1.setVisible(false);b10_1.invalidate();
	b10_2.setVisible(false);b10_2.invalidate();
	b10_3.setVisible(false);b10_3.invalidate();
	b10_4.setVisible(false);b10_4.invalidate();
	b10_5.setVisible(false);b10_5.invalidate();
	b10_6.setVisible(false);b10_6.invalidate();
	b10_7.setVisible(false);b10_7.invalidate();
	b10_8.setVisible(false);b10_8.invalidate();
	b10_9.setVisible(false);b10_9.invalidate();
	b10_10.setVisible(false);b10_10.invalidate();
	b10_11.setVisible(false);b10_11.invalidate();
	b10_12.setVisible(false);b10_12.invalidate();
	b10_13.setVisible(false);b10_13.invalidate();
	b10_14.setVisible(false);b10_14.invalidate();

	b11_1.setVisible(false);b11_1.invalidate();
	b11_2.setVisible(false);b11_2.invalidate();
	b11_3.setVisible(false);b11_3.invalidate();
	b11_4.setVisible(false);b11_4.invalidate();
	b11_5.setVisible(false);b11_5.invalidate();
	b11_6.setVisible(false);b11_6.invalidate();
	b11_7.setVisible(false);b11_7.invalidate();
	b11_8.setVisible(false);b11_8.invalidate();
	b11_9.setVisible(false);b11_9.invalidate();
	b11_10.setVisible(false);b11_10.invalidate();
	b11_11.setVisible(false);b11_11.invalidate();
	b11_12.setVisible(false);b11_12.invalidate();
	b11_13.setVisible(false);b11_13.invalidate();
	b11_14.setVisible(false);b11_14.invalidate();

	for (x = 0; x < 11; x++)
	{
		for (y = 0; y < 14; y++)
		{
			if (mazes[mazeC][x][y] == 1)
			{
//				maze[x][y] = mazes[mazeC][x][y];
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
	for (i = 0; i < 11; i++)
	{
		if (mazes[mazeC][i][13] == 0)
		{
			vhod = i;
		}
	}
	obj.moveTo(338, (vhod * 24) + 2);
	//obj.setVisible(true);
	obj.setColor(touchgfx::Color::getColorFromRGB(254, 189, 23));
	//obj.invalidate();
}

void LabirintView::goU()
{
	objX = obj.getX();
	objXc = (objX-2) / 24;
	objY = obj.getY();
	objYc = (objY-2) / 24;
	if(objYc > 0)
	{
		if(mazes[mazeC][objYc-1][objXc] == 0)
		{
			obj.moveRelative(0, -24);
		}
	}
}

void LabirintView::goR()
{
	objX = obj.getX();
	objXc = (objX-2) / 24;
	objY = obj.getY();
	objYc = (objY-2) / 24;
	if(objXc < 14)
	{
		if(mazes[mazeC][objYc][objXc+1] == 0)
		{
			obj.moveRelative(24, 0);
		}
		if(objXc == 13 and objYc != vhod)
		{
			obj.moveRelative(24, 0);
			obj.setColor(touchgfx::Color::getColorFromRGB(42, 176, 35));
			obj.invalidate();
		}
	}

}

void LabirintView::goD()
{
	objX = obj.getX();
	objXc = (objX-2) / 24;
	objY = obj.getY();
	objYc = (objY-2) / 24;
	if(objYc < 11)
	{
		if(mazes[mazeC][objYc+1][objXc] == 0)
		{
			obj.moveRelative(0, 24);
		}
	}
}

void LabirintView::goL()
{
	objX = obj.getX();
	objXc = (objX-2) / 24;
	objY = obj.getY();
	objYc = (objY-2) / 24;
	if(objXc > 0)
	{
		if(mazes[mazeC][objYc][objXc-1] == 0)
		{
			if(objXc == 14)
			{
				obj.setColor(touchgfx::Color::getColorFromRGB(254, 189, 23));
				obj.invalidate();
			}
			obj.moveRelative(-24, 0);
		}
	}
}
