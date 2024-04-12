/** \file Lab-4.cpp
* \brief This file contains a small drawing program that is giving a choice of five and then executes a sub-program with number corresponding to the user's choice
* \author Alex
* \date 08/03/2024
* \copyright UNic
*/
#include <iostream>
#include <cassert>
#include "Shapes.h"
using  namespace std;



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



