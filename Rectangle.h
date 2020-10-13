/*
*   Project: COMP2006 - Lab 4
*   Name:    Wyatt Kirscner
*   Date:    October 13th
*   Notes:   Wasn't able to have the program line up the right side of the rectangle. Created my own methods as required.
*
*/

#pragma once
#include <iostream>
using namespace std;


class Rectangle {
	
private:
	int height;
	int width;
	
public:
	
	Rectangle(int, int); // Constructor 
	void set_height(int); // Setter
	int get_height() const; // Getter
	void set_width(int);	// Setter
	int get_width() const;	// Getter
	int get_perimeter() const; // Getter
	int get_area() const;	// Getter
	~Rectangle();		// Deconstructor
	std::string to_str() const;
};


