/** \file Lab1.cpp
* \brief This file contains a small drawing program that is giving a choice of five and then executes a sub-program with number corresponding to the user's choice
* \author Alex
* \date 08/03/2024
* \copyright UNic
*/
#include <iostream>
#include <cassert>

using  namespace std;

// Prototypes
void DrawHorizontalLine(int, char);
void DrawVerticalLine(int, char);
void DrawSquare(int, char);
void DrawRectangle(int, int, char);


/**
* Shows the menu and does the selection
* <BR>
* @return Returns 0
*/
int main()
{
	int choice;
	int _length, _height, _size;
	char _ch;
	do
	{

		cout << "\n1) Draw a horizontal line";
		cout << "\n2) Draw a vertical line";
		cout << "\n3) Draw a square";
		cout << "\n4) Draw a rectangle";
		cout << "\n5) Quit";
		cout << "\nEnter choice: ";
		cin >> choice;
		assert(choice >= 1 && choice <= 5);

		switch (choice)
		{
		case 1:
			do
			{

				cout << "\n\nEnter length of the horizontal line : ";
				cin >> _length;
			} while (_length < 1);

			cout << "\nEnter a character of the horizontal line: ";
			cin >> _ch;
			DrawHorizontalLine(_length, _ch);
			break;
		case 2:

			do
			{
				cout << "\n\nEnter height of the vertical line: ";
				cin >> _height;
			} while (_height < 1);

			assert(_height > 1);
			cout << "\nEnter a character of the vertical line: ";
			cin >> _ch;
			DrawVerticalLine(_height, _ch);
			break;
		case 3:
			do
			{
				cout << "\nEnter a size for the square: ";
				cin >> _size;
			} while (_size < 1);
			cout << "\nEnter a character of the square: ";
			cin >> _ch;
			DrawSquare(_size, _ch);
			break;
		case 4:

			do
			{
				cout << "\n\nEnter length of the rectangle: ";
				cin >> _length;
			} while (_length < 1);

			assert(_length > 1);
			do
			{
				cout << "\n\nEnter height of the rectangle: ";
				cin >> _height;
			} while (_height < 2);
			assert(_height > 2);


			cout << "\nEnter a character of the Rectangle: ";
			cin >> _ch;
			DrawRectangle(_length, _height, _ch);
			break;
		default:
			break;
		}

	} while (choice != 5);


}

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

