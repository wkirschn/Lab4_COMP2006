/*
*   Project: COMP2006 - Lab 4
*   Name:    Wyatt Kirscner
*   Date:    October 13th
*   Notes:   Wasn't able to have the program line up the right side of the rectangle. Created my own methods as required.
*
*/

#include <iostream>
#include <iomanip>
#include <string>
#include "Rectangle.h"

using namespace std;

int main() {

	cout << "Rectangle Calculator\n\n";
	char another = 'y';
	while (tolower(another) == 'y') {
		int height;
		cout << "Height: ";
		cin >> height;

		int width;
		cout << "Width: ";
		cin >> width;

		Rectangle rectangle(height, width);
		cout << "Perimeter: " << rectangle.get_perimeter() << endl;
		cout << "Area: " << rectangle.get_area() << endl;
		cout << rectangle.to_str();

		cout << "\nContinue? (y/n): ";
		cin >> another;
		cin.ignore();
		cout << endl;

	}
	cout << "Bye!\n\n";
	

}