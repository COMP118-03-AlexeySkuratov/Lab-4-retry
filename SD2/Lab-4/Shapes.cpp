/** \file Lab1.cpp
* \brief This file contains a small drawing program that is giving a choice of five and then executes a sub-program with number corresponding to the user's choice
* \author Alex
* \date 08/03/2024
* \copyright UNic
*/

#include <iostream>
#include <cassert>

using  namespace std;
/**
* Draws a horizontal line with a certain length and character
* <BR>
* @param length The length of the line to be drawn
* @param ch The symbol to be used to draw the line
*/
void DrawHorizontalLine(const int length, const char ch)
{
	assert(length > 0);
	assert(ch >= '!' && ch <= '~');

	int i;
	for (i = 0; i < length; ++i)
	{
		cout << ch;
	}

	assert(i == length);
	cout << endl;
}

/**
* Draws a vertical line with a certain height and character
* <BR>
* @param height The height of the line to be drawn
* @param ch The symbol to be used to draw the line
*/
void DrawVerticalLine(int height, char ch)
{

	assert(ch >= '!' && ch <= '~');
	int i;
	for (i = 0; i < height; ++i)
	{
		cout << ch << endl;
	}

	assert(i == height);
	cout << endl << endl;
}

/**
* Draws a rectangle with a certain length, height and character
* <BR>
* @param length The length of the rectangle to be drawn
* @param height The height of the rectangle to be drawn
* @param ch The symbol to be used to draw the rectangle
*/
void DrawRectangle(int length, int height, char ch)
{
	//Top Line
	DrawHorizontalLine(length, ch);


	int i;
	for (i = 0; i < height - 2; ++i)
	{
		cout << ch;

		int j;
		for (j = 0; j < length - 2; ++j)
		{
			cout << ' ';
		}
		assert(j == height);

		cout << ch << endl;
	}

	assert(i == height);
	DrawHorizontalLine(length, ch);
}

/**
* Draws a square with a certain size and character
* <BR>
* @param size The size of the square to be drawn
* @param ch The symbol to be used to draw the square
*/
void DrawSquare(int size, char ch)
{

	int i;
	for (i = 0; i < size; ++i)
	{
		int j;
		for (j = 0; j < size; ++j)
		{
			cout << ch << ' ';
		}
		assert(j == size);
		cout << endl;
	}
	assert(i == size);
}